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

// Function: sub_00348E68
// Address: 0x348e68 - 0x348f18
void sub_00348E68_0x348e68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00348E68_0x348e68");
#endif

    ctx->pc = 0x348e68u;

    // 0x348e68: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x348e68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x348e6c: 0x8c43c360  lw          $v1, -0x3CA0($v0)
    ctx->pc = 0x348e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61C360u));
    // 0x348e70: 0xa33021  addu        $a2, $a1, $v1
    ctx->pc = 0x348e70u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x348e74: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x348e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x348e78: 0xc4c00040  lwc1        $f0, 0x40($a2)
    ctx->pc = 0x348e78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x348e7c: 0x46010036  c.le.s      $f0, $f1
    ctx->pc = 0x348e7cu;
    ctx->fcr31 = (FPU_C_OLE_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x348e80: 0x0  nop
    ctx->pc = 0x348e80u;
    // NOP
    // 0x348e84: 0x45000022  bc1f        . + 4 + (0x22 << 2)
    ctx->pc = 0x348E84u;
    {
        const bool branch_taken_0x348e84 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x348E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348E84u;
        // 0x348e88: 0x3c020bb3  lui         $v0, 0xBB3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)2995 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x348e84) {
            ctx->pc = 0x348F10u;
            goto label_348f10;
        }
    }
    ctx->pc = 0x348E8Cu;
    // 0x348e8c: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x348e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x348e90: 0x34428435  ori         $v0, $v0, 0x8435
    ctx->pc = 0x348e90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)33845);
    // 0x348e94: 0x3c033619  lui         $v1, 0x3619
    ctx->pc = 0x348e94u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)13849 << 16));
    // 0x348e98: 0x821018  mult        $v0, $a0, $v0
    ctx->pc = 0x348e98u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x348e9c: 0x3463636b  ori         $v1, $v1, 0x636B
    ctx->pc = 0x348e9cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)25451);
    // 0x348ea0: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x348ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x348ea4: 0x4800005  bltz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x348EA4u;
    {
        const bool branch_taken_0x348ea4 = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x348EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348EA4u;
        // 0x348ea8: 0xe4c1003c  swc1        $f1, 0x3C($a2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 60), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x348ea4) {
            ctx->pc = 0x348EBCu;
            goto label_348ebc;
        }
    }
    ctx->pc = 0x348EACu;
    // 0x348eac: 0x44840800  mtc1        $a0, $f1
    ctx->pc = 0x348eacu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x348eb0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x348eb0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x348eb4: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x348EB4u;
    {
        const bool branch_taken_0x348eb4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x348eb4) {
            ctx->pc = 0x348ED4u;
            goto label_348ed4;
        }
    }
    ctx->pc = 0x348EBCu;
label_348ebc:
    // 0x348ebc: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x348ebcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x348ec0: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x348ec0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x348ec4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x348ec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x348ec8: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x348ec8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x348ecc: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x348eccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x348ed0: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x348ed0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_348ed4:
    // 0x348ed4: 0x3c012f80  lui         $at, 0x2F80
    ctx->pc = 0x348ed4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)12160 << 16));
    // 0x348ed8: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x348ed8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x348edc: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x348edcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x348ee0: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x348ee0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x348ee4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x348ee4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x348ee8: 0xc4c20034  lwc1        $f2, 0x34($a2)
    ctx->pc = 0x348ee8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x348eec: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x348eecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x348ef0: 0xc4c30038  lwc1        $f3, 0x38($a2)
    ctx->pc = 0x348ef0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x348ef4: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x348ef4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
    // 0x348ef8: 0xacc40000  sw          $a0, 0x0($a2)
    ctx->pc = 0x348ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 4));
    // 0x348efc: 0x46020840  add.s       $f1, $f1, $f2
    ctx->pc = 0x348efcu;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[2]);
    // 0x348f00: 0x46040001  sub.s       $f0, $f0, $f4
    ctx->pc = 0x348f00u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[4]);
    // 0x348f04: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x348f04u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x348f08: 0x46000840  add.s       $f1, $f1, $f0
    ctx->pc = 0x348f08u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[0]);
    // 0x348f0c: 0xe4c10040  swc1        $f1, 0x40($a2)
    ctx->pc = 0x348f0cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 64), bits); }
label_348f10:
    // 0x348f10: 0x3e00008  jr          $ra
    ctx->pc = 0x348F10u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x348F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x348F10u;
        // 0x348f14: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x348F10u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x348F18u;
}
