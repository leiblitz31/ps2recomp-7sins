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

// Function: sub_003ADD08
// Address: 0x3add08 - 0x3adde8
void sub_003ADD08_0x3add08(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003ADD08_0x3add08");
#endif

    ctx->pc = 0x3add08u;

    // 0x3add08: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x3add08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3add0c: 0x10a00032  beqz        $a1, . + 4 + (0x32 << 2)
    ctx->pc = 0x3ADD0Cu;
    {
        const bool branch_taken_0x3add0c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ADD10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADD0Cu;
        // 0x3add10: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3add0c) {
            ctx->pc = 0x3ADDD8u;
            goto label_3addd8;
        }
    }
    ctx->pc = 0x3ADD14u;
    // 0x3add14: 0x8ca20060  lw          $v0, 0x60($a1)
    ctx->pc = 0x3add14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 96)));
    // 0x3add18: 0x10400030  beqz        $v0, . + 4 + (0x30 << 2)
    ctx->pc = 0x3ADD18u;
    {
        const bool branch_taken_0x3add18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ADD1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADD18u;
        // 0x3add1c: 0x3c04003b  lui         $a0, 0x3B (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)59 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3add18) {
            ctx->pc = 0x3ADDDCu;
            goto label_3adddc;
        }
    }
    ctx->pc = 0x3ADD20u;
    // 0x3add20: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x3add20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x3add24: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x3add24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3add28: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3add28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3add2c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3add2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x3add30: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x3add30u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3add34: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3add34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3add38: 0x8ca6001c  lw          $a2, 0x1C($a1)
    ctx->pc = 0x3add38u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
    // 0x3add3c: 0x2443ce80  addiu       $v1, $v0, -0x3180
    ctx->pc = 0x3add3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954624));
    // 0x3add40: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x3add40u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3add44: 0xe461061c  swc1        $f1, 0x61C($v1)
    ctx->pc = 0x3add44u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x61D49Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61D49Cu, _value); } while (0); }
    // 0x3add48: 0x2484ea90  addiu       $a0, $a0, -0x1570
    ctx->pc = 0x3add48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961808));
    // 0x3add4c: 0xe4600620  swc1        $f0, 0x620($v1)
    ctx->pc = 0x3add4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x61D4A0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61D4A0u, _value); } while (0); }
    // 0x3add50: 0xc4a00068  lwc1        $f0, 0x68($a1)
    ctx->pc = 0x3add50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3add54: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x3add54u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x3add58: 0xe4600614  swc1        $f0, 0x614($v1)
    ctx->pc = 0x3add58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x61D494u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61D494u, _value); } while (0); }
    // 0x3add5c: 0xc4a1006c  lwc1        $f1, 0x6C($a1)
    ctx->pc = 0x3add5cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 108)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3add60: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x3add60u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
    // 0x3add64: 0x10c40006  beq         $a2, $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3ADD64u;
    {
        const bool branch_taken_0x3add64 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        ctx->pc = 0x3ADD68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADD64u;
        // 0x3add68: 0xe4610618  swc1        $f1, 0x618($v1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 1560), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3add64) {
            ctx->pc = 0x3ADD80u;
            goto label_3add80;
        }
    }
    ctx->pc = 0x3ADD6Cu;
    // 0x3add6c: 0x8c620724  lw          $v0, 0x724($v1)
    ctx->pc = 0x3add6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 1828)));
    // 0x3add70: 0x10450004  beq         $v0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3ADD70u;
    {
        const bool branch_taken_0x3add70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x3ADD74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADD70u;
        // 0x3add74: 0x24e2ce80  addiu       $v0, $a3, -0x3180 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954624));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3add70) {
            ctx->pc = 0x3ADD84u;
            goto label_3add84;
        }
    }
    ctx->pc = 0x3ADD78u;
    // 0x3add78: 0xac660770  sw          $a2, 0x770($v1)
    ctx->pc = 0x3add78u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 1904), GPR_U32(ctx, 6));
    // 0x3add7c: 0xaca4001c  sw          $a0, 0x1C($a1)
    ctx->pc = 0x3add7cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 28), GPR_U32(ctx, 4));
label_3add80:
    // 0x3add80: 0x24e2ce80  addiu       $v0, $a3, -0x3180
    ctx->pc = 0x3add80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 4294954624));
label_3add84:
    // 0x3add84: 0xc4400614  lwc1        $f0, 0x614($v0)
    ctx->pc = 0x3add84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1556)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3add88: 0xc4410618  lwc1        $f1, 0x618($v0)
    ctx->pc = 0x3add88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 1560)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3add8c: 0xac450724  sw          $a1, 0x724($v0)
    ctx->pc = 0x3add8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1828), GPR_U32(ctx, 5));
    // 0x3add90: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3add90u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3add94: 0xac4006f0  sw          $zero, 0x6F0($v0)
    ctx->pc = 0x3add94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1776), GPR_U32(ctx, 0));
    // 0x3add98: 0xac400710  sw          $zero, 0x710($v0)
    ctx->pc = 0x3add98u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 1808), GPR_U32(ctx, 0));
    // 0x3add9c: 0x45000007  bc1f        . + 4 + (0x7 << 2)
    ctx->pc = 0x3ADD9Cu;
    {
        const bool branch_taken_0x3add9c = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3ADDA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADD9Cu;
        // 0x3adda0: 0xac400714  sw          $zero, 0x714($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 1812), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3add9c) {
            ctx->pc = 0x3ADDBCu;
            goto label_3addbc;
        }
    }
    ctx->pc = 0x3ADDA4u;
    // 0x3adda4: 0x46010043  div.s       $f1, $f0, $f1
    ctx->pc = 0x3adda4u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[0], ctx->f[1]); }
    // 0x3adda8: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3adda8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3addac: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3addacu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3addb0: 0xe440071c  swc1        $f0, 0x71C($v0)
    ctx->pc = 0x3addb0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 1820), bits); }
    // 0x3addb4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3ADDB4u;
    {
        const bool branch_taken_0x3addb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3ADDB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADDB4u;
        // 0x3addb8: 0xe4410718  swc1        $f1, 0x718($v0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 1816), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3addb4) {
            ctx->pc = 0x3ADDD0u;
            goto label_3addd0;
        }
    }
    ctx->pc = 0x3ADDBCu;
label_3addbc:
    // 0x3addbc: 0x46000843  div.s       $f1, $f1, $f0
    ctx->pc = 0x3addbcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x3addc0: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3addc0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3addc4: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x3addc4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3addc8: 0xe4400718  swc1        $f0, 0x718($v0)
    ctx->pc = 0x3addc8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 1816), bits); }
    // 0x3addcc: 0xe441071c  swc1        $f1, 0x71C($v0)
    ctx->pc = 0x3addccu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 1820), bits); }
label_3addd0:
    // 0x3addd0: 0x3e00008  jr          $ra
    ctx->pc = 0x3ADDD0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3ADDD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADDD0u;
        // 0x3addd4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ADDD0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3ADDD8u;
label_3addd8:
    // 0x3addd8: 0xac40d5a4  sw          $zero, -0x2A5C($v0)
    ctx->pc = 0x3addd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956452), GPR_U32(ctx, 0));
label_3adddc:
    // 0x3adddc: 0x3e00008  jr          $ra
    ctx->pc = 0x3ADDDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3ADDE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3ADDDCu;
        // 0x3adde0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3ADDDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3ADDE4u;
    // 0x3adde4: 0x0  nop
    ctx->pc = 0x3adde4u;
    // NOP
    ctx->pc = 0x3adde8u;
}
