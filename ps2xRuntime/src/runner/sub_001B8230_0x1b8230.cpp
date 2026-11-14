#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001B8230
// Address: 0x1b8230 - 0x1b82b0
void sub_001B8230_0x1b8230(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001B8230_0x1b8230");
#endif

    switch (ctx->pc) {
        case 0x1b8254u: goto label_1b8254;
        case 0x1b8298u: goto label_1b8298;
        default: break;
    }

    ctx->pc = 0x1b8230u;

    // 0x1b8230: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1b8230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1b8234: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1b8234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1b8238: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1b8238u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1b823c: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x1b823cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b8240: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1b8240u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b8244: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x1b8244u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x1b8248: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x1b8248u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1b824c: 0xc06bc58  jal         func_1AF160
    ctx->pc = 0x1B824Cu;
    SET_GPR_U32(ctx, 31, 0x1B8254u);
    ctx->pc = 0x1AF160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1AF160u, 0x1B824Cu, 0x1B8254u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8254u;
label_1b8254:
    // 0x1b8254: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1b8254u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b8258: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x1b8258u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b825c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1b825cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b8260: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1b8260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1b8264: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1b8264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1b8268: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1b8268u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1b826c: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1b826cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1b8270: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1b8270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1b8274: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x1b8274u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x1b8278: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1B8278u;
    {
        const bool branch_taken_0x1b8278 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1b8278) {
            ctx->pc = 0x1B8288u;
            goto label_1b8288;
        }
    }
    ctx->pc = 0x1B8280u;
    // 0x1b8280: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x1b8280u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x1b8284: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x1b8284u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_1b8288:
    // 0x1b8288: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1b8288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1b828c: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1b828cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1b8290: 0xc06deac  jal         func_1B7AB0
    ctx->pc = 0x1B8290u;
    SET_GPR_U32(ctx, 31, 0x1B8298u);
    ctx->pc = 0x1B7AB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1B7AB0u, 0x1B8290u, 0x1B8298u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1B8298u;
label_1b8298:
    // 0x1b8298: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1b8298u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1b829c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x1b829cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x1b82a0: 0x3e00008  jr          $ra
    ctx->pc = 0x1B82A0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1B82A0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1B82A8u;
    // 0x1b82a8: 0x0  nop
    ctx->pc = 0x1b82a8u;
    // NOP
    // 0x1b82ac: 0x0  nop
    ctx->pc = 0x1b82acu;
    // NOP
    ctx->pc = 0x1b82b0u;
}
