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

// Function: sub_00207BE0
// Address: 0x207be0 - 0x207c90
void sub_00207BE0_0x207be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00207BE0_0x207be0");
#endif

    switch (ctx->pc) {
        case 0x207c50u: goto label_207c50;
        case 0x207c70u: goto label_207c70;
        default: break;
    }

    ctx->pc = 0x207be0u;

    // 0x207be0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x207be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x207be4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x207be4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x207be8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x207be8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x207bec: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x207becu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x207bf0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x207bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x207bf4: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x207BF4u;
    {
        const bool branch_taken_0x207bf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x207bf4) {
            ctx->pc = 0x207C70u;
            goto label_207c70;
        }
    }
    ctx->pc = 0x207BFCu;
    // 0x207bfc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x207bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x207c00: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x207c00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x207c04: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x207C04u;
    {
        const bool branch_taken_0x207c04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x207c04) {
            ctx->pc = 0x207C50u;
            goto label_207c50;
        }
    }
    ctx->pc = 0x207C0Cu;
    // 0x207c0c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x207c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x207c10: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x207c10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x207c14: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x207c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x207c18: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x207c18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x207c1c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x207c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x207c20: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x207c20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x207c24: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x207c24u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x207c28: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x207c28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x207c2c: 0x33083  sra         $a2, $v1, 2
    ctx->pc = 0x207c2cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 3), 2));
    // 0x207c30: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x207C30u;
    {
        const bool branch_taken_0x207c30 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x207c30) {
            ctx->pc = 0x207C40u;
            goto label_207c40;
        }
    }
    ctx->pc = 0x207C38u;
    // 0x207c38: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x207c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x207c3c: 0x23083  sra         $a2, $v0, 2
    ctx->pc = 0x207c3cu;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 2), 2));
label_207c40:
    // 0x207c40: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x207c40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x207c44: 0x8ca50000  lw          $a1, 0x0($a1)
    ctx->pc = 0x207c44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x207c48: 0xc083ff0  jal         func_20FFC0
    ctx->pc = 0x207C48u;
    SET_GPR_U32(ctx, 31, 0x207C50u);
    ctx->pc = 0x20FFC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20FFC0u, 0x207C48u, 0x207C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207C50u;
label_207c50:
    // 0x207c50: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x207c50u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x207c54: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x207c54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x207c58: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x207c58u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x207c5c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x207C5Cu;
    {
        const bool branch_taken_0x207c5c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x207c5c) {
            ctx->pc = 0x207C70u;
            goto label_207c70;
        }
    }
    ctx->pc = 0x207C64u;
    // 0x207c64: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x207c64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x207c68: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x207C68u;
    SET_GPR_U32(ctx, 31, 0x207C70u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x207C68u, 0x207C70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x207C70u;
label_207c70:
    // 0x207c70: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x207c70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x207c74: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x207c74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x207c78: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x207c78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x207c7c: 0x3e00008  jr          $ra
    ctx->pc = 0x207C7Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x207C7Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x207C84u;
    // 0x207c84: 0x0  nop
    ctx->pc = 0x207c84u;
    // NOP
    // 0x207c88: 0x0  nop
    ctx->pc = 0x207c88u;
    // NOP
    // 0x207c8c: 0x0  nop
    ctx->pc = 0x207c8cu;
    // NOP
    ctx->pc = 0x207c90u;
}
