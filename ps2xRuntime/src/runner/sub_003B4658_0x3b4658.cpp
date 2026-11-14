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

// Function: sub_003B4658
// Address: 0x3b4658 - 0x3b4828
void sub_003B4658_0x3b4658(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B4658_0x3b4658");
#endif

    switch (ctx->pc) {
        case 0x3b46a4u: goto label_3b46a4;
        case 0x3b46b0u: goto label_3b46b0;
        case 0x3b475cu: goto label_3b475c;
        case 0x3b47acu: goto label_3b47ac;
        case 0x3b4804u: goto label_3b4804;
        default: break;
    }

    ctx->pc = 0x3b4658u;

label_3b4658:
    // 0x3b4658: 0x78a30000  lq          $v1, 0x0($a1)
    ctx->pc = 0x3b4658u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x3b465c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3b465cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b4660: 0x8c870008  lw          $a3, 0x8($a0)
    ctx->pc = 0x3b4660u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3b4664: 0x7c830010  sq          $v1, 0x10($a0)
    ctx->pc = 0x3b4664u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 3));
    // 0x3b4668: 0x34e70002  ori         $a3, $a3, 0x2
    ctx->pc = 0x3b4668u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)2);
    // 0x3b466c: 0x78a30010  lq          $v1, 0x10($a1)
    ctx->pc = 0x3b466cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x3b4670: 0x7c830020  sq          $v1, 0x20($a0)
    ctx->pc = 0x3b4670u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 32), GPR_VEC(ctx, 3));
    // 0x3b4674: 0x78a60020  lq          $a2, 0x20($a1)
    ctx->pc = 0x3b4674u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 5), 32)));
    // 0x3b4678: 0x7c860030  sq          $a2, 0x30($a0)
    ctx->pc = 0x3b4678u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 48), GPR_VEC(ctx, 6));
    // 0x3b467c: 0x78a30030  lq          $v1, 0x30($a1)
    ctx->pc = 0x3b467cu;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 5), 48)));
    // 0x3b4680: 0xac870008  sw          $a3, 0x8($a0)
    ctx->pc = 0x3b4680u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 7));
    // 0x3b4684: 0x3e00008  jr          $ra
    ctx->pc = 0x3B4684u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B4688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4684u;
        // 0x3b4688: 0x7c830040  sq          $v1, 0x40($a0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 4), 64), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B4684u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B468Cu;
    // 0x3b468c: 0x0  nop
    ctx->pc = 0x3b468cu;
    // NOP
    // 0x3b4690: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3b4690u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x3b4694: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3b4694u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x3b4698: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3b4698u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x3b469c: 0xc0eb9f8  jal         func_3AE7E0
    ctx->pc = 0x3B469Cu;
    SET_GPR_U32(ctx, 31, 0x3B46A4u);
    ctx->pc = 0x3B46A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B469Cu;
    // 0x3b46a0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AE7E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AE7E0u, 0x3B469Cu, 0x3B46A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B46A4u;
label_3b46a4:
    // 0x3b46a4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b46a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b46a8: 0xc0ed196  jal         func_3B4658
    ctx->pc = 0x3B46A8u;
    SET_GPR_U32(ctx, 31, 0x3B46B0u);
    ctx->pc = 0x3B46ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B46A8u;
    // 0x3b46ac: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B4658u;
    goto label_3b4658;
    ctx->pc = 0x3B46B0u;
label_3b46b0:
    // 0x3b46b0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x3b46b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b46b4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b46b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b46b8: 0x3e00008  jr          $ra
    ctx->pc = 0x3B46B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B46BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B46B8u;
        // 0x3b46bc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B46B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B46C0u;
    // 0x3b46c0: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x3b46c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x3b46c4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3b46c4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3b46c8: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x3b46c8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3b46cc: 0x3c050002  lui         $a1, 0x2
    ctx->pc = 0x3b46ccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)2 << 16));
    // 0x3b46d0: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x3b46d0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b46d4: 0x34a50003  ori         $a1, $a1, 0x3
    ctx->pc = 0x3b46d4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3);
    // 0x3b46d8: 0xe4410028  swc1        $f1, 0x28($v0)
    ctx->pc = 0x3b46d8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x3b46dc: 0xe4410014  swc1        $f1, 0x14($v0)
    ctx->pc = 0x3b46dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 20), bits); }
    // 0x3b46e0: 0xe4810010  swc1        $f1, 0x10($a0)
    ctx->pc = 0x3b46e0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x3b46e4: 0xe4400010  swc1        $f0, 0x10($v0)
    ctx->pc = 0x3b46e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 16), bits); }
    // 0x3b46e8: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x3b46e8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 8), bits); }
    // 0x3b46ec: 0xe4800014  swc1        $f0, 0x14($a0)
    ctx->pc = 0x3b46ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 20), bits); }
    // 0x3b46f0: 0xe4400024  swc1        $f0, 0x24($v0)
    ctx->pc = 0x3b46f0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x3b46f4: 0xe4400020  swc1        $f0, 0x20($v0)
    ctx->pc = 0x3b46f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 32), bits); }
    // 0x3b46f8: 0x8c83001c  lw          $v1, 0x1C($a0)
    ctx->pc = 0x3b46f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 28)));
    // 0x3b46fc: 0xe4800028  swc1        $f0, 0x28($a0)
    ctx->pc = 0x3b46fcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 40), bits); }
    // 0x3b4700: 0x651825  or          $v1, $v1, $a1
    ctx->pc = 0x3b4700u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 5));
    // 0x3b4704: 0xe4400034  swc1        $f0, 0x34($v0)
    ctx->pc = 0x3b4704u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 52), bits); }
    // 0x3b4708: 0xe4400038  swc1        $f0, 0x38($v0)
    ctx->pc = 0x3b4708u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 56), bits); }
    // 0x3b470c: 0xe4800040  swc1        $f0, 0x40($a0)
    ctx->pc = 0x3b470cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 64), bits); }
    // 0x3b4710: 0xac83001c  sw          $v1, 0x1C($a0)
    ctx->pc = 0x3b4710u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 3));
    // 0x3b4714: 0x8c850008  lw          $a1, 0x8($a0)
    ctx->pc = 0x3b4714u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x3b4718: 0x34a50002  ori         $a1, $a1, 0x2
    ctx->pc = 0x3b4718u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)2);
    // 0x3b471c: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3b471cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b4720: 0x3e00008  jr          $ra
    ctx->pc = 0x3B4720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B4724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4720u;
        // 0x3b4724: 0xac850008  sw          $a1, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B4720u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B4728u;
    // 0x3b4728: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3b4728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3b472c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3b472cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3b4730: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3b4730u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b4734: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3b4734u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3b4738: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3b4738u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b473c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b473cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b4740: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3b4740u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3b4744: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x3b4744u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x3b4748: 0xe7ac0000  swc1        $f12, 0x0($sp)
    ctx->pc = 0x3b4748u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3b474c: 0xe7ad0004  swc1        $f13, 0x4($sp)
    ctx->pc = 0x3b474cu;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3b4750: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3b4750u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b4754: 0xc103c86  jal         func_40F218
    ctx->pc = 0x3B4754u;
    SET_GPR_U32(ctx, 31, 0x3B475Cu);
    ctx->pc = 0x3B4758u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B4754u;
    // 0x3b4758: 0xe7a00008  swc1        $f0, 0x8($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x40F218u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F218u, 0x3B4754u, 0x3B475Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B475Cu;
label_3b475c:
    // 0x3b475c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x3b475cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3b4760: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3b4760u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b4764: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3b4764u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b4768: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x3b4768u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x3b476c: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x3b476cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x3b4770: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3b4770u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b4774: 0x3e00008  jr          $ra
    ctx->pc = 0x3B4774u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B4778u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B4774u;
        // 0x3b4778: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B4774u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B477Cu;
    // 0x3b477c: 0x0  nop
    ctx->pc = 0x3b477cu;
    // NOP
    // 0x3b4780: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3b4780u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3b4784: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3b4784u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b4788: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3b4788u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3b478c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3b478cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b4790: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b4790u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b4794: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3b4794u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3b4798: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x3b4798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x3b479c: 0xe7ac0000  swc1        $f12, 0x0($sp)
    ctx->pc = 0x3b479cu;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3b47a0: 0xe7ad0004  swc1        $f13, 0x4($sp)
    ctx->pc = 0x3b47a0u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3b47a4: 0xc103d16  jal         func_40F458
    ctx->pc = 0x3B47A4u;
    SET_GPR_U32(ctx, 31, 0x3B47ACu);
    ctx->pc = 0x3B47A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B47A4u;
    // 0x3b47a8: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40F458u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F458u, 0x3B47A4u, 0x3B47ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B47ACu;
label_3b47ac:
    // 0x3b47ac: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x3b47acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3b47b0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3b47b0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b47b4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3b47b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b47b8: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x3b47b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x3b47bc: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x3b47bcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x3b47c0: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3b47c0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b47c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3B47C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B47C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B47C4u;
        // 0x3b47c8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B47C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B47CCu;
    // 0x3b47cc: 0x0  nop
    ctx->pc = 0x3b47ccu;
    // NOP
    // 0x3b47d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x3b47d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x3b47d4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3b47d4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3b47d8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3b47d8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3b47dc: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x3b47dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x3b47e0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3b47e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b47e4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3b47e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b47e8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3b47e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3b47ec: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x3b47ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x3b47f0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3b47f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x3b47f4: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x3b47f4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x3b47f8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3b47f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b47fc: 0xc103e6c  jal         func_40F9B0
    ctx->pc = 0x3B47FCu;
    SET_GPR_U32(ctx, 31, 0x3B4804u);
    ctx->pc = 0x3B4800u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B47FCu;
    // 0x3b4800: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40F9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F9B0u, 0x3B47FCu, 0x3B4804u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B4804u;
label_3b4804:
    // 0x3b4804: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x3b4804u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3b4808: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x3b4808u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b480c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3b480cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b4810: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x3b4810u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x3b4814: 0xae030008  sw          $v1, 0x8($s0)
    ctx->pc = 0x3b4814u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
    // 0x3b4818: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x3b4818u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b481c: 0x3e00008  jr          $ra
    ctx->pc = 0x3B481Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B4820u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B481Cu;
        // 0x3b4820: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B481Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B4824u;
    // 0x3b4824: 0x0  nop
    ctx->pc = 0x3b4824u;
    // NOP
    ctx->pc = 0x3b4828u;
}
