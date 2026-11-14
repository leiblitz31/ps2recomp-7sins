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

// Function: sub_0047CAD0
// Address: 0x47cad0 - 0x47cc00
void sub_0047CAD0_0x47cad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0047CAD0_0x47cad0");
#endif

    switch (ctx->pc) {
        case 0x47cb14u: goto label_47cb14;
        case 0x47cb4cu: goto label_47cb4c;
        case 0x47cb5cu: goto label_47cb5c;
        case 0x47cb98u: goto label_47cb98;
        case 0x47cbb4u: goto label_47cbb4;
        default: break;
    }

    ctx->pc = 0x47cad0u;

    // 0x47cad0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x47cad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x47cad4: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x47cad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x47cad8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x47cad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x47cadc: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x47cadcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x47cae0: 0xe7ac0030  swc1        $f12, 0x30($sp)
    ctx->pc = 0x47cae0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x47cae4: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x47cae4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
    // 0x47cae8: 0xafa50050  sw          $a1, 0x50($sp)
    ctx->pc = 0x47cae8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 5));
    // 0x47caec: 0xafa60060  sw          $a2, 0x60($sp)
    ctx->pc = 0x47caecu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 6));
    // 0x47caf0: 0x8f83c0a0  lw          $v1, -0x3F60($gp)
    ctx->pc = 0x47caf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951072)));
    // 0x47caf4: 0x31040  sll         $v0, $v1, 1
    ctx->pc = 0x47caf4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x47caf8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x47caf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x47cafc: 0x21940  sll         $v1, $v0, 5
    ctx->pc = 0x47cafcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x47cb00: 0x8f82c0a4  lw          $v0, -0x3F5C($gp)
    ctx->pc = 0x47cb00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951076)));
    // 0x47cb04: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x47cb04u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x47cb08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x47cb08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47cb0c: 0xc11f9cc  jal         func_47E730
    ctx->pc = 0x47CB0Cu;
    SET_GPR_U32(ctx, 31, 0x47CB14u);
    ctx->pc = 0x47E730u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47E730u, 0x47CB0Cu, 0x47CB14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47CB14u;
label_47cb14:
    // 0x47cb14: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x47cb14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x47cb18: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x47CB18u;
    {
        const bool branch_taken_0x47cb18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47cb18) {
            ctx->pc = 0x47CB28u;
            goto label_47cb28;
        }
    }
    ctx->pc = 0x47CB20u;
    // 0x47cb20: 0x2782c080  addiu       $v0, $gp, -0x3F80
    ctx->pc = 0x47cb20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 28), 4294951040));
    // 0x47cb24: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x47cb24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
label_47cb28:
    // 0x47cb28: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x47cb28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x47cb2c: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x47CB2Cu;
    {
        const bool branch_taken_0x47cb2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x47cb2c) {
            ctx->pc = 0x47CB4Cu;
            goto label_47cb4c;
        }
    }
    ctx->pc = 0x47CB34u;
    // 0x47cb34: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x47cb34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x47cb38: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x47cb38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x47cb3c: 0x26040010  addiu       $a0, $s0, 0x10
    ctx->pc = 0x47cb3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x47cb40: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x47cb40u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x47cb44: 0xc063f94  jal         func_18FE50
    ctx->pc = 0x47CB44u;
    SET_GPR_U32(ctx, 31, 0x47CB4Cu);
    ctx->pc = 0x18FE50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18FE50u, 0x47CB44u, 0x47CB4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47CB4Cu;
label_47cb4c:
    // 0x47cb4c: 0x26040058  addiu       $a0, $s0, 0x58
    ctx->pc = 0x47cb4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 88));
    // 0x47cb50: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x47cb50u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x47cb54: 0xc052608  jal         func_149820
    ctx->pc = 0x47CB54u;
    SET_GPR_U32(ctx, 31, 0x47CB5Cu);
    ctx->pc = 0x149820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x149820u, 0x47CB54u, 0x47CB5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47CB5Cu;
label_47cb5c:
    // 0x47cb5c: 0x8f83c0a8  lw          $v1, -0x3F58($gp)
    ctx->pc = 0x47cb5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951080)));
    // 0x47cb60: 0x310c0  sll         $v0, $v1, 3
    ctx->pc = 0x47cb60u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x47cb64: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x47cb64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x47cb68: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x47cb68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x47cb6c: 0x8f82c0ac  lw          $v0, -0x3F54($gp)
    ctx->pc = 0x47cb6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951084)));
    // 0x47cb70: 0x433021  addu        $a2, $v0, $v1
    ctx->pc = 0x47cb70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x47cb74: 0x44806800  mtc1        $zero, $f13
    ctx->pc = 0x47cb74u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[13], &bits, sizeof(bits)); }
    // 0x47cb78: 0x8f83c09c  lw          $v1, -0x3F64($gp)
    ctx->pc = 0x47cb78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951068)));
    // 0x47cb7c: 0x8f82c0a8  lw          $v0, -0x3F58($gp)
    ctx->pc = 0x47cb7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951080)));
    // 0x47cb80: 0x623823  subu        $a3, $v1, $v0
    ctx->pc = 0x47cb80u;
    SET_GPR_S32(ctx, 7, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x47cb84: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x47cb84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x47cb88: 0xc7ac0030  lwc1        $f12, 0x30($sp)
    ctx->pc = 0x47cb88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x47cb8c: 0x8fa50040  lw          $a1, 0x40($sp)
    ctx->pc = 0x47cb8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x47cb90: 0xc11f534  jal         func_47D4D0
    ctx->pc = 0x47CB90u;
    SET_GPR_U32(ctx, 31, 0x47CB98u);
    ctx->pc = 0x47D4D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47D4D0u, 0x47CB90u, 0x47CB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47CB98u;
label_47cb98:
    // 0x47cb98: 0xae020050  sw          $v0, 0x50($s0)
    ctx->pc = 0x47cb98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 2));
    // 0x47cb9c: 0x8e110050  lw          $s1, 0x50($s0)
    ctx->pc = 0x47cb9cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x47cba0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x47cba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x47cba4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x47cba4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47cba8: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x47cba8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x47cbac: 0xc11fa10  jal         func_47E840
    ctx->pc = 0x47CBACu;
    SET_GPR_U32(ctx, 31, 0x47CBB4u);
    ctx->pc = 0x47E840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47E840u, 0x47CBACu, 0x47CBB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x47CBB4u;
label_47cbb4:
    // 0x47cbb4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x47CBB4u;
    {
        const bool branch_taken_0x47cbb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x47cbb4) {
            ctx->pc = 0x47CBC8u;
            goto label_47cbc8;
        }
    }
    ctx->pc = 0x47CBBCu;
    // 0x47cbbc: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x47cbbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x47cbc0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x47CBC0u;
    {
        const bool branch_taken_0x47cbc0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x47cbc0) {
            ctx->pc = 0x47CBE8u;
            goto label_47cbe8;
        }
    }
    ctx->pc = 0x47CBC8u;
label_47cbc8:
    // 0x47cbc8: 0x8f83c0a8  lw          $v1, -0x3F58($gp)
    ctx->pc = 0x47cbc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951080)));
    // 0x47cbcc: 0x8e020050  lw          $v0, 0x50($s0)
    ctx->pc = 0x47cbccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x47cbd0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x47cbd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x47cbd4: 0xaf82c0a8  sw          $v0, -0x3F58($gp)
    ctx->pc = 0x47cbd4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951080), GPR_U32(ctx, 2));
    // 0x47cbd8: 0x8f82c0a0  lw          $v0, -0x3F60($gp)
    ctx->pc = 0x47cbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951072)));
    // 0x47cbdc: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x47cbdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x47cbe0: 0xaf82c0a0  sw          $v0, -0x3F60($gp)
    ctx->pc = 0x47cbe0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951072), GPR_U32(ctx, 2));
    // 0x47cbe4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x47cbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_47cbe8:
    // 0x47cbe8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x47cbe8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x47cbec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x47cbecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x47cbf0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x47cbf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x47cbf4: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x47cbf4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x47cbf8: 0x3e00008  jr          $ra
    ctx->pc = 0x47CBF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x47CBF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x47CC00u;
}
