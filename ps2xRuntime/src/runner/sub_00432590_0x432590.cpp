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

// Function: sub_00432590
// Address: 0x432590 - 0x432680
void sub_00432590_0x432590(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00432590_0x432590");
#endif

    switch (ctx->pc) {
        case 0x4325a4u: goto label_4325a4;
        case 0x4325acu: goto label_4325ac;
        case 0x4325bcu: goto label_4325bc;
        case 0x4325d0u: goto label_4325d0;
        case 0x4325e0u: goto label_4325e0;
        case 0x432604u: goto label_432604;
        default: break;
    }

    ctx->pc = 0x432590u;

    // 0x432590: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x432590u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x432594: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x432594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x432598: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x432598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x43259c: 0xc11037e  jal         func_440DF8
    ctx->pc = 0x43259Cu;
    SET_GPR_U32(ctx, 31, 0x4325A4u);
    ctx->pc = 0x4325A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x43259Cu;
    // 0x4325a0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x440DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x440DF8u, 0x43259Cu, 0x4325A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4325A4u;
label_4325a4:
    // 0x4325a4: 0xc10ee4c  jal         func_43B930
    ctx->pc = 0x4325A4u;
    SET_GPR_U32(ctx, 31, 0x4325ACu);
    ctx->pc = 0x43B930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x43B930u, 0x4325A4u, 0x4325ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4325ACu;
label_4325ac:
    // 0x4325ac: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4325ACu;
    {
        const bool branch_taken_0x4325ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4325ac) {
            ctx->pc = 0x4325C0u;
            goto label_4325c0;
        }
    }
    ctx->pc = 0x4325B4u;
    // 0x4325b4: 0xc10d1dc  jal         func_434770
    ctx->pc = 0x4325B4u;
    SET_GPR_U32(ctx, 31, 0x4325BCu);
    ctx->pc = 0x434770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x434770u, 0x4325B4u, 0x4325BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4325BCu;
label_4325bc:
    // 0x4325bc: 0x2802b  sltu        $s0, $zero, $v0
    ctx->pc = 0x4325bcu;
    SET_GPR_U64(ctx, 16, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_4325c0:
    // 0x4325c0: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4325C0u;
    {
        const bool branch_taken_0x4325c0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x4325C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4325C0u;
        // 0x4325c4: 0x3c040043  lui         $a0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)67 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4325c0) {
            ctx->pc = 0x4325D8u;
            goto label_4325d8;
        }
    }
    ctx->pc = 0x4325C8u;
    // 0x4325c8: 0xc110392  jal         func_440E48
    ctx->pc = 0x4325C8u;
    SET_GPR_U32(ctx, 31, 0x4325D0u);
    ctx->pc = 0x440E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x440E48u, 0x4325C8u, 0x4325D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4325D0u;
label_4325d0:
    // 0x4325d0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x4325D0u;
    {
        const bool branch_taken_0x4325d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4325D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4325D0u;
        // 0x4325d4: 0x3c050062  lui         $a1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4325d0) {
            ctx->pc = 0x432608u;
            goto label_432608;
        }
    }
    ctx->pc = 0x4325D8u;
label_4325d8:
    // 0x4325d8: 0xc103f5e  jal         func_40FD78
    ctx->pc = 0x4325D8u;
    SET_GPR_U32(ctx, 31, 0x4325E0u);
    ctx->pc = 0x4325DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4325D8u;
    // 0x4325dc: 0x24845a10  addiu       $a0, $a0, 0x5A10 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40FD78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40FD78u, 0x4325D8u, 0x4325E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4325E0u;
label_4325e0:
    // 0x4325e0: 0x3c040043  lui         $a0, 0x43
    ctx->pc = 0x4325e0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)67 << 16));
    // 0x4325e4: 0x3c050043  lui         $a1, 0x43
    ctx->pc = 0x4325e4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)67 << 16));
    // 0x4325e8: 0x3c060043  lui         $a2, 0x43
    ctx->pc = 0x4325e8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)67 << 16));
    // 0x4325ec: 0x3c070043  lui         $a3, 0x43
    ctx->pc = 0x4325ecu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)67 << 16));
    // 0x4325f0: 0x24845a88  addiu       $a0, $a0, 0x5A88
    ctx->pc = 0x4325f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 23176));
    // 0x4325f4: 0x24a55ae8  addiu       $a1, $a1, 0x5AE8
    ctx->pc = 0x4325f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 23272));
    // 0x4325f8: 0x24c65b78  addiu       $a2, $a2, 0x5B78
    ctx->pc = 0x4325f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 23416));
    // 0x4325fc: 0xc104de0  jal         func_413780
    ctx->pc = 0x4325FCu;
    SET_GPR_U32(ctx, 31, 0x432604u);
    ctx->pc = 0x432600u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4325FCu;
    // 0x432600: 0x24e75bd0  addiu       $a3, $a3, 0x5BD0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 23504));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413780u, 0x4325FCu, 0x432604u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x432604u;
label_432604:
    // 0x432604: 0x3c050062  lui         $a1, 0x62
    ctx->pc = 0x432604u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
label_432608:
    // 0x432608: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x432608u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x43260c: 0x24a23a80  addiu       $v0, $a1, 0x3A80
    ctx->pc = 0x43260cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 14976));
    // 0x432610: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x432610u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x432614: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x432614u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x432618: 0x8c44000c  lw          $a0, 0xC($v0)
    ctx->pc = 0x432618u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x43261c: 0x3c030002  lui         $v1, 0x2
    ctx->pc = 0x43261cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)2 << 16));
    // 0x432620: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x432620u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x432624: 0xe4400030  swc1        $f0, 0x30($v0)
    ctx->pc = 0x432624u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 48), bits); }
    // 0x432628: 0xe4a13a80  swc1        $f1, 0x3A80($a1)
    ctx->pc = 0x432628u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 14976), bits); }
    // 0x43262c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x43262cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x432630: 0xac44000c  sw          $a0, 0xC($v0)
    ctx->pc = 0x432630u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 4));
    // 0x432634: 0xe4410028  swc1        $f1, 0x28($v0)
    ctx->pc = 0x432634u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x432638: 0xe4410014  swc1        $f1, 0x14($v0)
    ctx->pc = 0x432638u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x43263c: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x43263cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x432640: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x432640u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x432644: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x432644u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x432648: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x432648u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x43264c: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x43264cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x432650: 0xe4400018  swc1        $f0, 0x18($v0)
    ctx->pc = 0x432650u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 24), bits); }
    // 0x432654: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x432654u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x432658: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x432658u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x43265c: 0x3c03dead  lui         $v1, 0xDEAD
    ctx->pc = 0x43265cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)57005 << 16));
    // 0x432660: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x432660u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x432664: 0x3463dead  ori         $v1, $v1, 0xDEAD
    ctx->pc = 0x432664u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)57005);
    // 0x432668: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x432668u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x43266c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x43266cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x432670: 0xaf83bed0  sw          $v1, -0x4130($gp)
    ctx->pc = 0x432670u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950608), GPR_U32(ctx, 3));
    // 0x432674: 0x3e00008  jr          $ra
    ctx->pc = 0x432674u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x432678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x432674u;
        // 0x432678: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x432674u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x43267Cu;
    // 0x43267c: 0x0  nop
    ctx->pc = 0x43267cu;
    // NOP
    ctx->pc = 0x432680u;
}
