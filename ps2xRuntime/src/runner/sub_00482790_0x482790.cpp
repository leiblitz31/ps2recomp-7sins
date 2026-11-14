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

// Function: sub_00482790
// Address: 0x482790 - 0x482840
void sub_00482790_0x482790(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00482790_0x482790");
#endif

    switch (ctx->pc) {
        case 0x482800u: goto label_482800;
        case 0x482820u: goto label_482820;
        default: break;
    }

    ctx->pc = 0x482790u;

    // 0x482790: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x482790u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x482794: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x482794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x482798: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x482798u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x48279c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x48279cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x4827a0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4827a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4827a4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x4827A4u;
    {
        const bool branch_taken_0x4827a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4827a4) {
            ctx->pc = 0x482820u;
            goto label_482820;
        }
    }
    ctx->pc = 0x4827ACu;
    // 0x4827ac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4827acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4827b0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4827b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4827b4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x4827B4u;
    {
        const bool branch_taken_0x4827b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4827b4) {
            ctx->pc = 0x482800u;
            goto label_482800;
        }
    }
    ctx->pc = 0x4827BCu;
    // 0x4827bc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x4827bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4827c0: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x4827c0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4827c4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4827c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4827c8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x4827c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x4827cc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4827ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4827d0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x4827d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4827d4: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x4827d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4827d8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x4827d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x4827dc: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x4827dcu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x4827e0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x4827E0u;
    {
        const bool branch_taken_0x4827e0 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x4827e0) {
            ctx->pc = 0x4827F0u;
            goto label_4827f0;
        }
    }
    ctx->pc = 0x4827E8u;
    // 0x4827e8: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x4827e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x4827ec: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x4827ecu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_4827f0:
    // 0x4827f0: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x4827f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x4827f4: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x4827f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4827f8: 0xc121478  jal         func_4851E0
    ctx->pc = 0x4827F8u;
    SET_GPR_U32(ctx, 31, 0x482800u);
    ctx->pc = 0x4851E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4851E0u, 0x4827F8u, 0x482800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x482800u;
label_482800:
    // 0x482800: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x482800u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x482804: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x482804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x482808: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x482808u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x48280c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x48280Cu;
    {
        const bool branch_taken_0x48280c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x48280c) {
            ctx->pc = 0x482820u;
            goto label_482820;
        }
    }
    ctx->pc = 0x482814u;
    // 0x482814: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x482814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x482818: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x482818u;
    SET_GPR_U32(ctx, 31, 0x482820u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x482818u, 0x482820u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x482820u;
label_482820:
    // 0x482820: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x482820u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x482824: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x482824u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x482828: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x482828u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x48282c: 0x3e00008  jr          $ra
    ctx->pc = 0x48282Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x48282Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x482834u;
    // 0x482834: 0x0  nop
    ctx->pc = 0x482834u;
    // NOP
    // 0x482838: 0x0  nop
    ctx->pc = 0x482838u;
    // NOP
    // 0x48283c: 0x0  nop
    ctx->pc = 0x48283cu;
    // NOP
    ctx->pc = 0x482840u;
}
