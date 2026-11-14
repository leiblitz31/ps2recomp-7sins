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

// Function: sub_0039BC78
// Address: 0x39bc78 - 0x39bd18
void sub_0039BC78_0x39bc78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0039BC78_0x39bc78");
#endif

    switch (ctx->pc) {
        case 0x39bcdcu: goto label_39bcdc;
        default: break;
    }

    ctx->pc = 0x39bc78u;

    // 0x39bc78: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x39bc78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x39bc7c: 0x8f82a9ec  lw          $v0, -0x5614($gp)
    ctx->pc = 0x39bc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945260)));
    // 0x39bc80: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x39bc80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x39bc84: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x39bc84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x39bc88: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x39bc88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39bc8c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x39bc8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x39bc90: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x39bc90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39bc94: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x39bc94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x39bc98: 0xac510000  sw          $s1, 0x0($v0)
    ctx->pc = 0x39bc98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
    // 0x39bc9c: 0x82030001  lb          $v1, 0x1($s0)
    ctx->pc = 0x39bc9cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x39bca0: 0x4600009  bltz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x39BCA0u;
    {
        const bool branch_taken_0x39bca0 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x39BCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BCA0u;
        // 0x39bca4: 0x2622003c  addiu       $v0, $s1, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39bca0) {
            ctx->pc = 0x39BCC8u;
            goto label_39bcc8;
        }
    }
    ctx->pc = 0x39BCA8u;
    // 0x39bca8: 0x8e24003c  lw          $a0, 0x3C($s1)
    ctx->pc = 0x39bca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x39bcac: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x39bcacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x39bcb0: 0x26030034  addiu       $v1, $s0, 0x34
    ctx->pc = 0x39bcb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
    // 0x39bcb4: 0xae040034  sw          $a0, 0x34($s0)
    ctx->pc = 0x39bcb4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 4));
    // 0x39bcb8: 0x8e22003c  lw          $v0, 0x3C($s1)
    ctx->pc = 0x39bcb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 60)));
    // 0x39bcbc: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x39bcbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x39bcc0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x39BCC0u;
    {
        const bool branch_taken_0x39bcc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x39BCC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BCC0u;
        // 0x39bcc4: 0xae23003c  sw          $v1, 0x3C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x39bcc0) {
            ctx->pc = 0x39BCFCu;
            goto label_39bcfc;
        }
    }
    ctx->pc = 0x39BCC8u;
label_39bcc8:
    // 0x39bcc8: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x39bcc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x39bccc: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x39BCCCu;
    {
        const bool branch_taken_0x39bccc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x39bccc) {
            ctx->pc = 0x39BCD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x39BCCCu;
            // 0x39bcd0: 0x8e240034  lw          $a0, 0x34($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x39BCE0u;
            goto label_39bce0;
        }
    }
    ctx->pc = 0x39BCD4u;
    // 0x39bcd4: 0xc106794  jal         func_419E50
    ctx->pc = 0x39BCD4u;
    SET_GPR_U32(ctx, 31, 0x39BCDCu);
    ctx->pc = 0x419E50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E50u, 0x39BCD4u, 0x39BCDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x39BCDCu;
label_39bcdc:
    // 0x39bcdc: 0x8e240034  lw          $a0, 0x34($s1)
    ctx->pc = 0x39bcdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_39bce0:
    // 0x39bce0: 0x26220034  addiu       $v0, $s1, 0x34
    ctx->pc = 0x39bce0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 52));
    // 0x39bce4: 0xae020038  sw          $v0, 0x38($s0)
    ctx->pc = 0x39bce4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 56), GPR_U32(ctx, 2));
    // 0x39bce8: 0x26030034  addiu       $v1, $s0, 0x34
    ctx->pc = 0x39bce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 52));
    // 0x39bcec: 0xae040034  sw          $a0, 0x34($s0)
    ctx->pc = 0x39bcecu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 4));
    // 0x39bcf0: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x39bcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x39bcf4: 0xac430004  sw          $v1, 0x4($v0)
    ctx->pc = 0x39bcf4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 3));
    // 0x39bcf8: 0xae230034  sw          $v1, 0x34($s1)
    ctx->pc = 0x39bcf8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
label_39bcfc:
    // 0x39bcfc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x39bcfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x39bd00: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x39bd00u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x39bd04: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x39bd04u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x39bd08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x39bd08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x39bd0c: 0x3e00008  jr          $ra
    ctx->pc = 0x39BD0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x39BD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x39BD0Cu;
        // 0x39bd10: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x39BD0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x39BD14u;
    // 0x39bd14: 0x0  nop
    ctx->pc = 0x39bd14u;
    // NOP
    ctx->pc = 0x39bd18u;
}
