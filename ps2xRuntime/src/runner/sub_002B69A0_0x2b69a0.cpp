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

// Function: sub_002B69A0
// Address: 0x2b69a0 - 0x2b6a50
void sub_002B69A0_0x2b69a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002B69A0_0x2b69a0");
#endif

    switch (ctx->pc) {
        case 0x2b6a10u: goto label_2b6a10;
        case 0x2b6a30u: goto label_2b6a30;
        default: break;
    }

    ctx->pc = 0x2b69a0u;

    // 0x2b69a0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2b69a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2b69a4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2b69a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2b69a8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x2b69a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x2b69ac: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x2b69acu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x2b69b0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b69b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b69b4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x2B69B4u;
    {
        const bool branch_taken_0x2b69b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b69b4) {
            ctx->pc = 0x2B6A30u;
            goto label_2b6a30;
        }
    }
    ctx->pc = 0x2B69BCu;
    // 0x2b69bc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b69bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b69c0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2b69c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b69c4: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2B69C4u;
    {
        const bool branch_taken_0x2b69c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2b69c4) {
            ctx->pc = 0x2B6A10u;
            goto label_2b6a10;
        }
    }
    ctx->pc = 0x2B69CCu;
    // 0x2b69cc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2b69ccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b69d0: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x2b69d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b69d4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b69d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b69d8: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2b69d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2b69dc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b69dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b69e0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2b69e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2b69e4: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x2b69e4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2b69e8: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x2b69e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2b69ec: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x2b69ecu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x2b69f0: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2B69F0u;
    {
        const bool branch_taken_0x2b69f0 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x2b69f0) {
            ctx->pc = 0x2B6A00u;
            goto label_2b6a00;
        }
    }
    ctx->pc = 0x2B69F8u;
    // 0x2b69f8: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x2b69f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x2b69fc: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x2b69fcu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_2b6a00:
    // 0x2b6a00: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x2b6a00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x2b6a04: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x2b6a04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2b6a08: 0xc0ae1d4  jal         func_2B8750
    ctx->pc = 0x2B6A08u;
    SET_GPR_U32(ctx, 31, 0x2B6A10u);
    ctx->pc = 0x2B8750u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2B8750u, 0x2B6A08u, 0x2B6A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6A10u;
label_2b6a10:
    // 0x2b6a10: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x2b6a10u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2b6a14: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x2b6a14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x2b6a18: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x2b6a18u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x2b6a1c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2B6A1Cu;
    {
        const bool branch_taken_0x2b6a1c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x2b6a1c) {
            ctx->pc = 0x2B6A30u;
            goto label_2b6a30;
        }
    }
    ctx->pc = 0x2B6A24u;
    // 0x2b6a24: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x2b6a24u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b6a28: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x2B6A28u;
    SET_GPR_U32(ctx, 31, 0x2B6A30u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x2B6A28u, 0x2B6A30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2B6A30u;
label_2b6a30:
    // 0x2b6a30: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x2b6a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2b6a34: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2b6a34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2b6a38: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x2b6a38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x2b6a3c: 0x3e00008  jr          $ra
    ctx->pc = 0x2B6A3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2B6A3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2B6A44u;
    // 0x2b6a44: 0x0  nop
    ctx->pc = 0x2b6a44u;
    // NOP
    // 0x2b6a48: 0x0  nop
    ctx->pc = 0x2b6a48u;
    // NOP
    // 0x2b6a4c: 0x0  nop
    ctx->pc = 0x2b6a4cu;
    // NOP
    ctx->pc = 0x2b6a50u;
}
