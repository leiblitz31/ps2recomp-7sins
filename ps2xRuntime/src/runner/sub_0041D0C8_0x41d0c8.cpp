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

// Function: sub_0041D0C8
// Address: 0x41d0c8 - 0x41d1b0
void sub_0041D0C8_0x41d0c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0041D0C8_0x41d0c8");
#endif

    switch (ctx->pc) {
        case 0x41d104u: goto label_41d104;
        case 0x41d160u: goto label_41d160;
        default: break;
    }

    ctx->pc = 0x41d0c8u;

    // 0x41d0c8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x41d0c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x41d0cc: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x41d0ccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41d0d0: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x41d0d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x41d0d4: 0x24060034  addiu       $a2, $zero, 0x34
    ctx->pc = 0x41d0d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 52));
    // 0x41d0d8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x41d0d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x41d0dc: 0x3c100062  lui         $s0, 0x62
    ctx->pc = 0x41d0dcu;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)98 << 16));
    // 0x41d0e0: 0x2610e8ac  addiu       $s0, $s0, -0x1754
    ctx->pc = 0x41d0e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294961324));
    // 0x41d0e4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x41d0e4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41d0e8: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x41d0e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x41d0ec: 0x502021  addu        $a0, $v0, $s0
    ctx->pc = 0x41d0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x41d0f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x41d0f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x41d0f4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x41d0f4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x41d0f8: 0xaf82be10  sw          $v0, -0x41F0($gp)
    ctx->pc = 0x41d0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950416), GPR_U32(ctx, 2));
    // 0x41d0fc: 0xc0bb7e6  jal         func_2EDF98
    ctx->pc = 0x41D0FCu;
    SET_GPR_U32(ctx, 31, 0x41D104u);
    ctx->pc = 0x41D100u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41D0FCu;
    // 0x41d100: 0x2611ffd4  addiu       $s1, $s0, -0x2C (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967252));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x41D0FCu, 0x41D104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41D104u;
label_41d104:
    // 0x41d104: 0x8f83be10  lw          $v1, -0x41F0($gp)
    ctx->pc = 0x41d104u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950416)));
    // 0x41d108: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x41d108u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x41d10c: 0x8c44c9f8  lw          $a0, -0x3608($v0)
    ctx->pc = 0x41d10cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x5DC9F8u));
    // 0x41d110: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x41d110u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x41d114: 0x708021  addu        $s0, $v1, $s0
    ctx->pc = 0x41d114u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x41d118: 0x8f85ad9c  lw          $a1, -0x5264($gp)
    ctx->pc = 0x41d118u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946204)));
    // 0x41d11c: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x41d11cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x41d120: 0x8f87ada0  lw          $a3, -0x5260($gp)
    ctx->pc = 0x41d120u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946208)));
    // 0x41d124: 0xa066004d  sb          $a2, 0x4D($v1)
    ctx->pc = 0x41d124u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 77), (uint8_t)GPR_U32(ctx, 6));
    // 0x41d128: 0x3c080062  lui         $t0, 0x62
    ctx->pc = 0x41d128u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)98 << 16));
    // 0x41d12c: 0x3c090004  lui         $t1, 0x4
    ctx->pc = 0x41d12cu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4 << 16));
    // 0x41d130: 0xac700000  sw          $s0, 0x0($v1)
    ctx->pc = 0x41d130u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 16));
    // 0x41d134: 0xac600038  sw          $zero, 0x38($v1)
    ctx->pc = 0x41d134u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 0));
    // 0x41d138: 0x250828f8  addiu       $t0, $t0, 0x28F8
    ctx->pc = 0x41d138u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 10488));
    // 0x41d13c: 0xac60003c  sw          $zero, 0x3C($v1)
    ctx->pc = 0x41d13cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 60), GPR_U32(ctx, 0));
    // 0x41d140: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x41d140u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x41d144: 0xac600040  sw          $zero, 0x40($v1)
    ctx->pc = 0x41d144u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 0));
    // 0x41d148: 0x35290407  ori         $t1, $t1, 0x407
    ctx->pc = 0x41d148u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)1031);
    // 0x41d14c: 0xac600030  sw          $zero, 0x30($v1)
    ctx->pc = 0x41d14cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 0));
    // 0x41d150: 0xac600034  sw          $zero, 0x34($v1)
    ctx->pc = 0x41d150u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 0));
    // 0x41d154: 0xa060004c  sb          $zero, 0x4C($v1)
    ctx->pc = 0x41d154u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 76), (uint8_t)GPR_U32(ctx, 0));
    // 0x41d158: 0xc10408c  jal         func_410230
    ctx->pc = 0x41D158u;
    SET_GPR_U32(ctx, 31, 0x41D160u);
    ctx->pc = 0x41D15Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x41D158u;
    // 0x41d15c: 0xac600028  sw          $zero, 0x28($v1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x410230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x410230u, 0x41D158u, 0x41D160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x41D160u;
label_41d160:
    // 0x41d160: 0x8f83be10  lw          $v1, -0x41F0($gp)
    ctx->pc = 0x41d160u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950416)));
    // 0x41d164: 0x711821  addu        $v1, $v1, $s1
    ctx->pc = 0x41d164u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x41d168: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x41D168u;
    {
        const bool branch_taken_0x41d168 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x41D16Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D168u;
        // 0x41d16c: 0xac620060  sw          $v0, 0x60($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 96), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41d168) {
            ctx->pc = 0x41D184u;
            goto label_41d184;
        }
    }
    ctx->pc = 0x41D170u;
    // 0x41d170: 0x8f83be14  lw          $v1, -0x41EC($gp)
    ctx->pc = 0x41d170u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950420)));
    // 0x41d174: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x41d174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x41d178: 0xaf83be14  sw          $v1, -0x41EC($gp)
    ctx->pc = 0x41d178u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950420), GPR_U32(ctx, 3));
    // 0x41d17c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x41D17Cu;
    {
        const bool branch_taken_0x41d17c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x41D180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D17Cu;
        // 0x41d180: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x41d17c) {
            ctx->pc = 0x41D188u;
            goto label_41d188;
        }
    }
    ctx->pc = 0x41D184u;
label_41d184:
    // 0x41d184: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x41d184u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_41d188:
    // 0x41d188: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x41d188u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x41d18c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x41d18cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x41d190: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x41d190u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x41d194: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x41d194u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x41d198: 0x3e00008  jr          $ra
    ctx->pc = 0x41D198u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41D19Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D198u;
        // 0x41d19c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41D198u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41D1A0u;
    // 0x41d1a0: 0xaf84ad9c  sw          $a0, -0x5264($gp)
    ctx->pc = 0x41d1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946204), GPR_U32(ctx, 4));
    // 0x41d1a4: 0x3e00008  jr          $ra
    ctx->pc = 0x41D1A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x41D1A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x41D1A4u;
        // 0x41d1a8: 0xaf85ada0  sw          $a1, -0x5260($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294946208), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x41D1A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x41D1ACu;
    // 0x41d1ac: 0x0  nop
    ctx->pc = 0x41d1acu;
    // NOP
    ctx->pc = 0x41d1b0u;
}
