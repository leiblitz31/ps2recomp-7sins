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

// Function: sub_001C2050
// Address: 0x1c2050 - 0x1c2100
void sub_001C2050_0x1c2050(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001C2050_0x1c2050");
#endif

    switch (ctx->pc) {
        case 0x1c20c0u: goto label_1c20c0;
        case 0x1c20e0u: goto label_1c20e0;
        default: break;
    }

    ctx->pc = 0x1c2050u;

    // 0x1c2050: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1c2050u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1c2054: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1c2054u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1c2058: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x1c2058u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x1c205c: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x1c205cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x1c2060: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c2060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c2064: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x1C2064u;
    {
        const bool branch_taken_0x1c2064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2064) {
            ctx->pc = 0x1C20E0u;
            goto label_1c20e0;
        }
    }
    ctx->pc = 0x1C206Cu;
    // 0x1c206c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c206cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c2070: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1c2070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c2074: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1C2074u;
    {
        const bool branch_taken_0x1c2074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1c2074) {
            ctx->pc = 0x1C20C0u;
            goto label_1c20c0;
        }
    }
    ctx->pc = 0x1C207Cu;
    // 0x1c207c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1c207cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c2080: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x1c2080u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c2084: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c2084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c2088: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x1c2088u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x1c208c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c208cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c2090: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x1c2090u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1c2094: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x1c2094u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1c2098: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x1c2098u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1c209c: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x1c209cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x1c20a0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1C20A0u;
    {
        const bool branch_taken_0x1c20a0 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1c20a0) {
            ctx->pc = 0x1C20B0u;
            goto label_1c20b0;
        }
    }
    ctx->pc = 0x1C20A8u;
    // 0x1c20a8: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x1c20a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x1c20ac: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x1c20acu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_1c20b0:
    // 0x1c20b0: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x1c20b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x1c20b4: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x1c20b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1c20b8: 0xc070da0  jal         func_1C3680
    ctx->pc = 0x1C20B8u;
    SET_GPR_U32(ctx, 31, 0x1C20C0u);
    ctx->pc = 0x1C3680u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C3680u, 0x1C20B8u, 0x1C20C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C20C0u;
label_1c20c0:
    // 0x1c20c0: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x1c20c0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1c20c4: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x1c20c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x1c20c8: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x1c20c8u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x1c20cc: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1C20CCu;
    {
        const bool branch_taken_0x1c20cc = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x1c20cc) {
            ctx->pc = 0x1C20E0u;
            goto label_1c20e0;
        }
    }
    ctx->pc = 0x1C20D4u;
    // 0x1c20d4: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x1c20d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c20d8: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x1C20D8u;
    SET_GPR_U32(ctx, 31, 0x1C20E0u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x1C20D8u, 0x1C20E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1C20E0u;
label_1c20e0:
    // 0x1c20e0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x1c20e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1c20e4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1c20e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1c20e8: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x1c20e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x1c20ec: 0x3e00008  jr          $ra
    ctx->pc = 0x1C20ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1C20ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1C20F4u;
    // 0x1c20f4: 0x0  nop
    ctx->pc = 0x1c20f4u;
    // NOP
    // 0x1c20f8: 0x0  nop
    ctx->pc = 0x1c20f8u;
    // NOP
    // 0x1c20fc: 0x0  nop
    ctx->pc = 0x1c20fcu;
    // NOP
    ctx->pc = 0x1c2100u;
}
