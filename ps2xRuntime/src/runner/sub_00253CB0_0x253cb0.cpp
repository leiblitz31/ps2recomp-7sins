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

// Function: sub_00253CB0
// Address: 0x253cb0 - 0x253d70
void sub_00253CB0_0x253cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00253CB0_0x253cb0");
#endif

    ctx->pc = 0x253cb0u;

    // 0x253cb0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x253cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x253cb4: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x253cb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x253cb8: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x253cb8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
    // 0x253cbc: 0xafa60030  sw          $a2, 0x30($sp)
    ctx->pc = 0x253cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 6));
    // 0x253cc0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x253cc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x253cc4: 0x24640004  addiu       $a0, $v1, 0x4
    ctx->pc = 0x253cc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x253cc8: 0x27a30008  addiu       $v1, $sp, 0x8
    ctx->pc = 0x253cc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x253ccc: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x253cccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x253cd0: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x253cd0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x253cd4: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x253cd4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x253cd8: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x253cd8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x253cdc: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x253cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x253ce0: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x253ce0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x253ce4: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x253ce4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x253ce8: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x253ce8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x253cec: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x253cecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x253cf0: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x253cf0u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x253cf4: 0x1812  mflo        $v1
    ctx->pc = 0x253cf4u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x253cf8: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x253cf8u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253cfc: 0x0  nop
    ctx->pc = 0x253cfcu;
    // NOP
    // 0x253d00: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x253d00u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x253d04: 0xc7a00008  lwc1        $f0, 0x8($sp)
    ctx->pc = 0x253d04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x253d08: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x253d08u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x253d0c: 0xe7a00008  swc1        $f0, 0x8($sp)
    ctx->pc = 0x253d0cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x253d10: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x253d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x253d14: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x253d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x253d18: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x253d18u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x253d1c: 0x44040000  mfc1        $a0, $f0
    ctx->pc = 0x253d1cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x253d20: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x253d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x253d24: 0x83001a  div         $zero, $a0, $v1
    ctx->pc = 0x253d24u;
    { int32_t divisor = GPR_S32(ctx, 3);    int32_t dividend = GPR_S32(ctx, 4);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x253d28: 0x1812  mflo        $v1
    ctx->pc = 0x253d28u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x253d2c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x253d2cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x253d30: 0x0  nop
    ctx->pc = 0x253d30u;
    // NOP
    // 0x253d34: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x253d34u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x253d38: 0xc7a0000c  lwc1        $f0, 0xC($sp)
    ctx->pc = 0x253d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x253d3c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x253d3cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x253d40: 0xe7a0000c  swc1        $f0, 0xC($sp)
    ctx->pc = 0x253d40u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 12), bits); }
    // 0x253d44: 0x27a40008  addiu       $a0, $sp, 0x8
    ctx->pc = 0x253d44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 8));
    // 0x253d48: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x253d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x253d4c: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x253d4cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x253d50: 0xc4800004  lwc1        $f0, 0x4($a0)
    ctx->pc = 0x253d50u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x253d54: 0xe4610000  swc1        $f1, 0x0($v1)
    ctx->pc = 0x253d54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x253d58: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x253d58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x253d5c: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x253d5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x253d60: 0x3e00008  jr          $ra
    ctx->pc = 0x253D60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x253D60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x253D68u;
    // 0x253d68: 0x0  nop
    ctx->pc = 0x253d68u;
    // NOP
    // 0x253d6c: 0x0  nop
    ctx->pc = 0x253d6cu;
    // NOP
    ctx->pc = 0x253d70u;
}
