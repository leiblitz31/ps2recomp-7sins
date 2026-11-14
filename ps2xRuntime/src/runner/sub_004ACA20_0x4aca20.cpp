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

// Function: sub_004ACA20
// Address: 0x4aca20 - 0x4acad8
void sub_004ACA20_0x4aca20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004ACA20_0x4aca20");
#endif

    switch (ctx->pc) {
        case 0x4aca50u: goto label_4aca50;
        case 0x4aca60u: goto label_4aca60;
        default: break;
    }

    ctx->pc = 0x4aca20u;

    // 0x4aca20: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x4aca20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x4aca24: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4aca24u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aca28: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x4aca28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x4aca2c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4aca2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aca30: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x4aca30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x4aca34: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x4aca34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x4aca38: 0x26300040  addiu       $s0, $s1, 0x40
    ctx->pc = 0x4aca38u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
    // 0x4aca3c: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x4aca3cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aca40: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4aca40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x4aca44: 0x24060080  addiu       $a2, $zero, 0x80
    ctx->pc = 0x4aca44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x4aca48: 0xc0bb7e6  jal         func_2EDF98
    ctx->pc = 0x4ACA48u;
    SET_GPR_U32(ctx, 31, 0x4ACA50u);
    ctx->pc = 0x4ACA4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ACA48u;
    // 0x4aca4c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x4ACA48u, 0x4ACA50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ACA50u;
label_4aca50:
    // 0x4aca50: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x4aca50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x4aca54: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x4aca54u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aca58: 0xc12a7de  jal         func_4A9F78
    ctx->pc = 0x4ACA58u;
    SET_GPR_U32(ctx, 31, 0x4ACA60u);
    ctx->pc = 0x4ACA5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4ACA58u;
    // 0x4aca5c: 0xae200040  sw          $zero, 0x40($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 64), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A9F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A9F78u, 0x4ACA58u, 0x4ACA60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4ACA60u;
label_4aca60:
    // 0x4aca60: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x4aca60u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x4aca64: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4aca64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4aca68: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x4aca68u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x4aca6c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x4aca6cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x4aca70: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x4aca70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x4aca74: 0x44811800  mtc1        $at, $f3
    ctx->pc = 0x4aca74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x4aca78: 0x30630018  andi        $v1, $v1, 0x18
    ctx->pc = 0x4aca78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)24);
    // 0x4aca7c: 0xc78081a8  lwc1        $f0, -0x7E58($gp)
    ctx->pc = 0x4aca7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934952)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x4aca80: 0xc78181ac  lwc1        $f1, -0x7E54($gp)
    ctx->pc = 0x4aca80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934956)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4aca84: 0xae03000c  sw          $v1, 0xC($s0)
    ctx->pc = 0x4aca84u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 3));
    // 0x4aca88: 0xe6000014  swc1        $f0, 0x14($s0)
    ctx->pc = 0x4aca88u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 20), bits); }
    // 0x4aca8c: 0xe6020048  swc1        $f2, 0x48($s0)
    ctx->pc = 0x4aca8cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 72), bits); }
    // 0x4aca90: 0xe601004c  swc1        $f1, 0x4C($s0)
    ctx->pc = 0x4aca90u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 76), bits); }
    // 0x4aca94: 0xe6030054  swc1        $f3, 0x54($s0)
    ctx->pc = 0x4aca94u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x4aca98: 0xae00005c  sw          $zero, 0x5C($s0)
    ctx->pc = 0x4aca98u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 92), GPR_U32(ctx, 0));
    // 0x4aca9c: 0xe6020018  swc1        $f2, 0x18($s0)
    ctx->pc = 0x4aca9cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 24), bits); }
    // 0x4acaa0: 0xae00001c  sw          $zero, 0x1C($s0)
    ctx->pc = 0x4acaa0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 0));
    // 0x4acaa4: 0xae00002c  sw          $zero, 0x2C($s0)
    ctx->pc = 0x4acaa4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 44), GPR_U32(ctx, 0));
    // 0x4acaa8: 0xae000020  sw          $zero, 0x20($s0)
    ctx->pc = 0x4acaa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 0));
    // 0x4acaac: 0xae000024  sw          $zero, 0x24($s0)
    ctx->pc = 0x4acaacu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 36), GPR_U32(ctx, 0));
    // 0x4acab0: 0xe6030050  swc1        $f3, 0x50($s0)
    ctx->pc = 0x4acab0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x4acab4: 0xae000058  sw          $zero, 0x58($s0)
    ctx->pc = 0x4acab4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 88), GPR_U32(ctx, 0));
    // 0x4acab8: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x4acab8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x4acabc: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x4acabcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4acac0: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x4acac0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4acac4: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x4acac4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4acac8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4acac8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4acacc: 0x3e00008  jr          $ra
    ctx->pc = 0x4ACACCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4ACAD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4ACACCu;
        // 0x4acad0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4ACACCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4ACAD4u;
    // 0x4acad4: 0x0  nop
    ctx->pc = 0x4acad4u;
    // NOP
    ctx->pc = 0x4acad8u;
}
