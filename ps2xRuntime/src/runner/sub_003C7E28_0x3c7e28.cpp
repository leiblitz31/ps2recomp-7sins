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

// Function: sub_003C7E28
// Address: 0x3c7e28 - 0x3c8320
void sub_003C7E28_0x3c7e28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003C7E28_0x3c7e28");
#endif

    switch (ctx->pc) {
        case 0x3c81e8u: goto label_3c81e8;
        case 0x3c82f8u: goto label_3c82f8;
        default: break;
    }

    ctx->pc = 0x3c7e28u;

    // 0x3c7e28: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3c7e28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3c7e2c: 0x3c080062  lui         $t0, 0x62
    ctx->pc = 0x3c7e2cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)98 << 16));
    // 0x3c7e30: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x3c7e30u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x3c7e34: 0x2507e268  addiu       $a3, $t0, -0x1D98
    ctx->pc = 0x3c7e34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 4294959720));
    // 0x3c7e38: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3c7e38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x3c7e3c: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3c7e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x3c7e40: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3c7e40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x3c7e44: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3c7e44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3c7e48: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x3c7e48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
    // 0x3c7e4c: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x3c7e4cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x3c7e50: 0xaf84bda8  sw          $a0, -0x4258($gp)
    ctx->pc = 0x3c7e50u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950312), GPR_U32(ctx, 4));
    // 0x3c7e54: 0xc4a90000  lwc1        $f9, 0x0($a1)
    ctx->pc = 0x3c7e54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[9] = f; }
    // 0x3c7e58: 0x3c014780  lui         $at, 0x4780
    ctx->pc = 0x3c7e58u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18304 << 16));
    // 0x3c7e5c: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x3c7e5cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x3c7e60: 0xe509e268  swc1        $f9, -0x1D98($t0)
    ctx->pc = 0x3c7e60u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x61E268u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61E268u, _value); } while (0); }
    // 0x3c7e64: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x3c7e64u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x3c7e68: 0x44815000  mtc1        $at, $f10
    ctx->pc = 0x3c7e68u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[10], &bits, sizeof(bits)); }
    // 0x3c7e6c: 0xc4ad0004  lwc1        $f13, 0x4($a1)
    ctx->pc = 0x3c7e6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x3c7e70: 0xe4ed0008  swc1        $f13, 0x8($a3)
    ctx->pc = 0x3c7e70u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x61E270u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61E270u, _value); } while (0); }
    // 0x3c7e74: 0xc4cc0000  lwc1        $f12, 0x0($a2)
    ctx->pc = 0x3c7e74u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3c7e78: 0xe4ec0014  swc1        $f12, 0x14($a3)
    ctx->pc = 0x3c7e78u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x61E27Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61E27Cu, _value); } while (0); }
    // 0x3c7e7c: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x3c7e7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c7e80: 0xe4e00018  swc1        $f0, 0x18($a3)
    ctx->pc = 0x3c7e80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x61E280u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61E280u, _value); } while (0); }
    // 0x3c7e84: 0xc4c10008  lwc1        $f1, 0x8($a2)
    ctx->pc = 0x3c7e84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c7e88: 0xe4e1001c  swc1        $f1, 0x1C($a3)
    ctx->pc = 0x3c7e88u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x61E284u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61E284u, _value); } while (0); }
    // 0x3c7e8c: 0xc4ab0008  lwc1        $f11, 0x8($a1)
    ctx->pc = 0x3c7e8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[11] = f; }
    // 0x3c7e90: 0xe4eb003c  swc1        $f11, 0x3C($a3)
    ctx->pc = 0x3c7e90u;
    { float f = ctx->f[11]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x61E2A4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61E2A4u, _value); } while (0); }
    // 0x3c7e94: 0xc4a3000c  lwc1        $f3, 0xC($a1)
    ctx->pc = 0x3c7e94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3c7e98: 0xe4e30044  swc1        $f3, 0x44($a3)
    ctx->pc = 0x3c7e98u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x61E2ACu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61E2ACu, _value); } while (0); }
    // 0x3c7e9c: 0x460d1981  sub.s       $f6, $f3, $f13
    ctx->pc = 0x3c7e9cu;
    ctx->f[6] = FPU_SUB_S(ctx->f[3], ctx->f[13]);
    // 0x3c7ea0: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x3c7ea0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c7ea4: 0x46143042  mul.s       $f1, $f6, $f20
    ctx->pc = 0x3c7ea4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[6], ctx->f[20]);
    // 0x3c7ea8: 0xe4e00050  swc1        $f0, 0x50($a3)
    ctx->pc = 0x3c7ea8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x61E2B8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61E2B8u, _value); } while (0); }
    // 0x3c7eac: 0xc4c20010  lwc1        $f2, 0x10($a2)
    ctx->pc = 0x3c7eacu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3c7eb0: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c7eb0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3c7eb4: 0xe4e00010  swc1        $f0, 0x10($a3)
    ctx->pc = 0x3c7eb4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x61E278u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61E278u, _value); } while (0); }
    // 0x3c7eb8: 0xe4e20054  swc1        $f2, 0x54($a3)
    ctx->pc = 0x3c7eb8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x61E2BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61E2BCu, _value); } while (0); }
    // 0x3c7ebc: 0xc4c10014  lwc1        $f1, 0x14($a2)
    ctx->pc = 0x3c7ebcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c7ec0: 0xe4e10058  swc1        $f1, 0x58($a3)
    ctx->pc = 0x3c7ec0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x61E2C0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61E2C0u, _value); } while (0); }
    // 0x3c7ec4: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x3c7ec4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c7ec8: 0xe4e00078  swc1        $f0, 0x78($a3)
    ctx->pc = 0x3c7ec8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x61E2E0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61E2E0u, _value); } while (0); }
    // 0x3c7ecc: 0x46004a41  sub.s       $f9, $f9, $f0
    ctx->pc = 0x3c7eccu;
    ctx->f[9] = FPU_SUB_S(ctx->f[9], ctx->f[0]);
    // 0x3c7ed0: 0x46005ac1  sub.s       $f11, $f11, $f0
    ctx->pc = 0x3c7ed0u;
    ctx->f[11] = FPU_SUB_S(ctx->f[11], ctx->f[0]);
    // 0x3c7ed4: 0xc4a10014  lwc1        $f1, 0x14($a1)
    ctx->pc = 0x3c7ed4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c7ed8: 0x460308c1  sub.s       $f3, $f1, $f3
    ctx->pc = 0x3c7ed8u;
    ctx->f[3] = FPU_SUB_S(ctx->f[1], ctx->f[3]);
    // 0x3c7edc: 0xe4e10080  swc1        $f1, 0x80($a3)
    ctx->pc = 0x3c7edcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x61E2E8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61E2E8u, _value); } while (0); }
    // 0x3c7ee0: 0x46016b41  sub.s       $f13, $f13, $f1
    ctx->pc = 0x3c7ee0u;
    ctx->f[13] = FPU_SUB_S(ctx->f[13], ctx->f[1]);
    // 0x3c7ee4: 0xc4c00018  lwc1        $f0, 0x18($a2)
    ctx->pc = 0x3c7ee4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c7ee8: 0x46001b87  neg.s       $f14, $f3
    ctx->pc = 0x3c7ee8u;
    ctx->f[14] = FPU_NEG_S(ctx->f[3]);
    // 0x3c7eec: 0xe4e0008c  swc1        $f0, 0x8C($a3)
    ctx->pc = 0x3c7eecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x61E2F4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61E2F4u, _value); } while (0); }
    // 0x3c7ef0: 0x460d5842  mul.s       $f1, $f11, $f13
    ctx->pc = 0x3c7ef0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[11], ctx->f[13]);
    // 0x3c7ef4: 0x46141942  mul.s       $f5, $f3, $f20
    ctx->pc = 0x3c7ef4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[3], ctx->f[20]);
    // 0x3c7ef8: 0x460e4882  mul.s       $f2, $f9, $f14
    ctx->pc = 0x3c7ef8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[9], ctx->f[14]);
    // 0x3c7efc: 0xc4c0001c  lwc1        $f0, 0x1C($a2)
    ctx->pc = 0x3c7efcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c7f00: 0x46146902  mul.s       $f4, $f13, $f20
    ctx->pc = 0x3c7f00u;
    ctx->f[4] = FPU_MUL_S(ctx->f[13], ctx->f[20]);
    // 0x3c7f04: 0xe4e00090  swc1        $f0, 0x90($a3)
    ctx->pc = 0x3c7f04u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x61E2F8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61E2F8u, _value); } while (0); }
    // 0x3c7f08: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x3c7f08u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x3c7f0c: 0xc4c00020  lwc1        $f0, 0x20($a2)
    ctx->pc = 0x3c7f0cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c7f10: 0xe4e6000c  swc1        $f6, 0xC($a3)
    ctx->pc = 0x3c7f10u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x61E274u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61E274u, _value); } while (0); }
    // 0x3c7f14: 0x46015283  div.s       $f10, $f10, $f1
    ctx->pc = 0x3c7f14u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[10] = FPU_DIV_S(ctx->f[10], ctx->f[1]); }
    // 0x3c7f18: 0xe4e00094  swc1        $f0, 0x94($a3)
    ctx->pc = 0x3c7f18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x61E2FCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61E2FCu, _value); } while (0); }
    // 0x3c7f1c: 0xe4e30048  swc1        $f3, 0x48($a3)
    ctx->pc = 0x3c7f1cu;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x61E2B0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61E2B0u, _value); } while (0); }
    // 0x3c7f20: 0x46002824  .word       0x46002824                   # cvt.w.s     $f0, $f5 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c7f20u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[5]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3c7f24: 0xe4e0004c  swc1        $f0, 0x4C($a3)
    ctx->pc = 0x3c7f24u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x61E2B4u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61E2B4u, _value); } while (0); }
    // 0x3c7f28: 0xe4ed0084  swc1        $f13, 0x84($a3)
    ctx->pc = 0x3c7f28u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x61E2ECu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61E2ECu, _value); } while (0); }
    // 0x3c7f2c: 0x46002024  .word       0x46002024                   # cvt.w.s     $f0, $f4 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c7f2cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[4]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3c7f30: 0xe4e00088  swc1        $f0, 0x88($a3)
    ctx->pc = 0x3c7f30u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x61E2F0u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61E2F0u, _value); } while (0); }
    // 0x3c7f34: 0x3c140062  lui         $s4, 0x62
    ctx->pc = 0x3c7f34u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)98 << 16));
    // 0x3c7f38: 0x2692e320  addiu       $s2, $s4, -0x1CE0
    ctx->pc = 0x3c7f38u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 20), 4294959904));
    // 0x3c7f3c: 0x24e30014  addiu       $v1, $a3, 0x14
    ctx->pc = 0x3c7f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 20));
    // 0x3c7f40: 0x26450030  addiu       $a1, $s2, 0x30
    ctx->pc = 0x3c7f40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 18), 48));
    // 0x3c7f44: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x3c7f44u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c7f48: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x3c7f48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c7f4c: 0xc464003c  lwc1        $f4, 0x3C($v1)
    ctx->pc = 0x3c7f4cu;
    { uint32_t bits = FAST_READ32(0x61E2B8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3c7f50: 0xc4600078  lwc1        $f0, 0x78($v1)
    ctx->pc = 0x3c7f50u;
    { uint32_t bits = FAST_READ32(0x61E2F4u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c7f54: 0xc4410080  lwc1        $f1, 0x80($v0)
    ctx->pc = 0x3c7f54u;
    { uint32_t bits = FAST_READ32(0x61E2FCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c7f58: 0xc4470008  lwc1        $f7, 0x8($v0)
    ctx->pc = 0x3c7f58u;
    { uint32_t bits = FAST_READ32(0x61E284u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x3c7f5c: 0x46002101  sub.s       $f4, $f4, $f0
    ctx->pc = 0x3c7f5cu;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[0]);
    // 0x3c7f60: 0xc4430044  lwc1        $f3, 0x44($v0)
    ctx->pc = 0x3c7f60u;
    { uint32_t bits = FAST_READ32(0x61E2C0u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3c7f64: 0x46006301  sub.s       $f12, $f12, $f0
    ctx->pc = 0x3c7f64u;
    ctx->f[12] = FPU_SUB_S(ctx->f[12], ctx->f[0]);
    // 0x3c7f68: 0xc445007c  lwc1        $f5, 0x7C($v0)
    ctx->pc = 0x3c7f68u;
    { uint32_t bits = FAST_READ32(0x61E2F8u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x3c7f6c: 0x460139c1  sub.s       $f7, $f7, $f1
    ctx->pc = 0x3c7f6cu;
    ctx->f[7] = FPU_SUB_S(ctx->f[7], ctx->f[1]);
    // 0x3c7f70: 0xc4420040  lwc1        $f2, 0x40($v0)
    ctx->pc = 0x3c7f70u;
    { uint32_t bits = FAST_READ32(0x61E2BCu); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3c7f74: 0x460118c1  sub.s       $f3, $f3, $f1
    ctx->pc = 0x3c7f74u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[1]);
    // 0x3c7f78: 0xc4460004  lwc1        $f6, 0x4($v0)
    ctx->pc = 0x3c7f78u;
    { uint32_t bits = FAST_READ32(0x61E280u); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[6] = f; }
    // 0x3c7f7c: 0x46092042  mul.s       $f1, $f4, $f9
    ctx->pc = 0x3c7f7cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[4], ctx->f[9]);
    // 0x3c7f80: 0x46051081  sub.s       $f2, $f2, $f5
    ctx->pc = 0x3c7f80u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[5]);
    // 0x3c7f84: 0x46053181  sub.s       $f6, $f6, $f5
    ctx->pc = 0x3c7f84u;
    ctx->f[6] = FPU_SUB_S(ctx->f[6], ctx->f[5]);
    // 0x3c7f88: 0x460b3a02  mul.s       $f8, $f7, $f11
    ctx->pc = 0x3c7f88u;
    ctx->f[8] = FPU_MUL_S(ctx->f[7], ctx->f[11]);
    // 0x3c7f8c: 0x46091942  mul.s       $f5, $f3, $f9
    ctx->pc = 0x3c7f8cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[3], ctx->f[9]);
    // 0x3c7f90: 0x460b6002  mul.s       $f0, $f12, $f11
    ctx->pc = 0x3c7f90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[12], ctx->f[11]);
    // 0x3c7f94: 0x46091242  mul.s       $f9, $f2, $f9
    ctx->pc = 0x3c7f94u;
    ctx->f[9] = FPU_MUL_S(ctx->f[2], ctx->f[9]);
    // 0x3c7f98: 0x460b32c2  mul.s       $f11, $f6, $f11
    ctx->pc = 0x3c7f98u;
    ctx->f[11] = FPU_MUL_S(ctx->f[6], ctx->f[11]);
    // 0x3c7f9c: 0x460d2102  mul.s       $f4, $f4, $f13
    ctx->pc = 0x3c7f9cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[4], ctx->f[13]);
    // 0x3c7fa0: 0x460e6302  mul.s       $f12, $f12, $f14
    ctx->pc = 0x3c7fa0u;
    ctx->f[12] = FPU_MUL_S(ctx->f[12], ctx->f[14]);
    // 0x3c7fa4: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3c7fa4u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3c7fa8: 0x460d1082  mul.s       $f2, $f2, $f13
    ctx->pc = 0x3c7fa8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[13]);
    // 0x3c7fac: 0x460e3182  mul.s       $f6, $f6, $f14
    ctx->pc = 0x3c7facu;
    ctx->f[6] = FPU_MUL_S(ctx->f[6], ctx->f[14]);
    // 0x3c7fb0: 0x46082941  sub.s       $f5, $f5, $f8
    ctx->pc = 0x3c7fb0u;
    ctx->f[5] = FPU_SUB_S(ctx->f[5], ctx->f[8]);
    // 0x3c7fb4: 0x460b4a41  sub.s       $f9, $f9, $f11
    ctx->pc = 0x3c7fb4u;
    ctx->f[9] = FPU_SUB_S(ctx->f[9], ctx->f[11]);
    // 0x3c7fb8: 0x460d18c2  mul.s       $f3, $f3, $f13
    ctx->pc = 0x3c7fb8u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[13]);
    // 0x3c7fbc: 0x460e39c2  mul.s       $f7, $f7, $f14
    ctx->pc = 0x3c7fbcu;
    ctx->f[7] = FPU_MUL_S(ctx->f[7], ctx->f[14]);
    // 0x3c7fc0: 0x460c2101  sub.s       $f4, $f4, $f12
    ctx->pc = 0x3c7fc0u;
    ctx->f[4] = FPU_SUB_S(ctx->f[4], ctx->f[12]);
    // 0x3c7fc4: 0x46015042  mul.s       $f1, $f10, $f1
    ctx->pc = 0x3c7fc4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[10], ctx->f[1]);
    // 0x3c7fc8: 0x46061081  sub.s       $f2, $f2, $f6
    ctx->pc = 0x3c7fc8u;
    ctx->f[2] = FPU_SUB_S(ctx->f[2], ctx->f[6]);
    // 0x3c7fcc: 0x46055142  mul.s       $f5, $f10, $f5
    ctx->pc = 0x3c7fccu;
    ctx->f[5] = FPU_MUL_S(ctx->f[10], ctx->f[5]);
    // 0x3c7fd0: 0x46095242  mul.s       $f9, $f10, $f9
    ctx->pc = 0x3c7fd0u;
    ctx->f[9] = FPU_MUL_S(ctx->f[10], ctx->f[9]);
    // 0x3c7fd4: 0x460718c1  sub.s       $f3, $f3, $f7
    ctx->pc = 0x3c7fd4u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[7]);
    // 0x3c7fd8: 0x46045102  mul.s       $f4, $f10, $f4
    ctx->pc = 0x3c7fd8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[10], ctx->f[4]);
    // 0x3c7fdc: 0x46025082  mul.s       $f2, $f10, $f2
    ctx->pc = 0x3c7fdcu;
    ctx->f[2] = FPU_MUL_S(ctx->f[10], ctx->f[2]);
    // 0x3c7fe0: 0x46000847  neg.s       $f1, $f1
    ctx->pc = 0x3c7fe0u;
    ctx->f[1] = FPU_NEG_S(ctx->f[1]);
    // 0x3c7fe4: 0x46004a47  neg.s       $f9, $f9
    ctx->pc = 0x3c7fe4u;
    ctx->f[9] = FPU_NEG_S(ctx->f[9]);
    // 0x3c7fe8: 0xe4a4fff0  swc1        $f4, -0x10($a1)
    ctx->pc = 0x3c7fe8u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x61E340u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61E340u, _value); } while (0); }
    // 0x3c7fec: 0x46035282  mul.s       $f10, $f10, $f3
    ctx->pc = 0x3c7fecu;
    ctx->f[10] = FPU_MUL_S(ctx->f[10], ctx->f[3]);
    // 0x3c7ff0: 0x46002947  neg.s       $f5, $f5
    ctx->pc = 0x3c7ff0u;
    ctx->f[5] = FPU_NEG_S(ctx->f[5]);
    // 0x3c7ff4: 0xe6410030  swc1        $f1, 0x30($s2)
    ctx->pc = 0x3c7ff4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x61E350u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61E350u, _value); } while (0); }
    // 0x3c7ff8: 0xe482fff4  swc1        $f2, -0xC($a0)
    ctx->pc = 0x3c7ff8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x61E344u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61E344u, _value); } while (0); }
    // 0x3c7ffc: 0xe4890004  swc1        $f9, 0x4($a0)
    ctx->pc = 0x3c7ffcu;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x61E354u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61E354u, _value); } while (0); }
    // 0x3c8000: 0xe48afff8  swc1        $f10, -0x8($a0)
    ctx->pc = 0x3c8000u;
    { float f = ctx->f[10]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x61E348u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61E348u, _value); } while (0); }
    // 0x3c8004: 0xe4850008  swc1        $f5, 0x8($a0)
    ctx->pc = 0x3c8004u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x61E358u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61E358u, _value); } while (0); }
    // 0x3c8008: 0xe0182d  daddu       $v1, $a3, $zero
    ctx->pc = 0x3c8008u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c800c: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x3c800cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x61E278u));
    // 0x3c8010: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3C8010u;
    {
        const bool branch_taken_0x3c8010 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C8014u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8010u;
        // 0x3c8014: 0x100482d  daddu       $t1, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8010) {
            ctx->pc = 0x3C8030u;
            goto label_3c8030;
        }
    }
    ctx->pc = 0x3C8018u;
    // 0x3c8018: 0xc520e268  lwc1        $f0, -0x1D98($t1)
    ctx->pc = 0x3c8018u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4294959720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c801c: 0xc461003c  lwc1        $f1, 0x3C($v1)
    ctx->pc = 0x3c801cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c8020: 0xc462000c  lwc1        $f2, 0xC($v1)
    ctx->pc = 0x3c8020u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3c8024: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x3c8024u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x3c8028: 0x46020843  div.s       $f1, $f1, $f2
    ctx->pc = 0x3c8028u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[2]); }
    // 0x3c802c: 0xe4610004  swc1        $f1, 0x4($v1)
    ctx->pc = 0x3c802cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
label_3c8030:
    // 0x3c8030: 0x8c62004c  lw          $v0, 0x4C($v1)
    ctx->pc = 0x3c8030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 76)));
    // 0x3c8034: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3C8034u;
    {
        const bool branch_taken_0x3c8034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3c8034) {
            ctx->pc = 0x3C8038u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C8034u;
            // 0x3c8038: 0x8c620088  lw          $v0, 0x88($v1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C8058u;
            goto label_3c8058;
        }
    }
    ctx->pc = 0x3C803Cu;
    // 0x3c803c: 0xc4600078  lwc1        $f0, 0x78($v1)
    ctx->pc = 0x3c803cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c8040: 0xc461003c  lwc1        $f1, 0x3C($v1)
    ctx->pc = 0x3c8040u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c8044: 0xc4620048  lwc1        $f2, 0x48($v1)
    ctx->pc = 0x3c8044u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3c8048: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3c8048u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x3c804c: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x3c804cu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x3c8050: 0xe4600040  swc1        $f0, 0x40($v1)
    ctx->pc = 0x3c8050u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 64), bits); }
    // 0x3c8054: 0x8c620088  lw          $v0, 0x88($v1)
    ctx->pc = 0x3c8054u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 136)));
label_3c8058:
    // 0x3c8058: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3C8058u;
    {
        const bool branch_taken_0x3c8058 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C805Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8058u;
        // 0x3c805c: 0xc500e268  lwc1        $f0, -0x1D98($t0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 8), 4294959720)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8058) {
            ctx->pc = 0x3C8074u;
            goto label_3c8074;
        }
    }
    ctx->pc = 0x3C8060u;
    // 0x3c8060: 0xc4610078  lwc1        $f1, 0x78($v1)
    ctx->pc = 0x3c8060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 120)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c8064: 0xc4620084  lwc1        $f2, 0x84($v1)
    ctx->pc = 0x3c8064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3c8068: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x3c8068u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x3c806c: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x3c806cu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x3c8070: 0xe460007c  swc1        $f0, 0x7C($v1)
    ctx->pc = 0x3c8070u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 124), bits); }
label_3c8074:
    // 0x3c8074: 0x8ce4004c  lw          $a0, 0x4C($a3)
    ctx->pc = 0x3c8074u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 76)));
    // 0x3c8078: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x3c8078u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
    // 0x3c807c: 0x8ce30088  lw          $v1, 0x88($a3)
    ctx->pc = 0x3c807cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 136)));
    // 0x3c8080: 0x24a5b218  addiu       $a1, $a1, -0x4DE8
    ctx->pc = 0x3c8080u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294947352));
    // 0x3c8084: 0x8ce20010  lw          $v0, 0x10($a3)
    ctx->pc = 0x3c8084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 16)));
    // 0x3c8088: 0x427c2  srl         $a0, $a0, 31
    ctx->pc = 0x3c8088u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x3c808c: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x3c808cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x3c8090: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x3c8090u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x3c8094: 0x217c2  srl         $v0, $v0, 31
    ctx->pc = 0x3c8094u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 31));
    // 0x3c8098: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x3c8098u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x3c809c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x3c809cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x3c80a0: 0xc6420020  lwc1        $f2, 0x20($s2)
    ctx->pc = 0x3c80a0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3c80a4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3c80a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3c80a8: 0xc6430030  lwc1        $f3, 0x30($s2)
    ctx->pc = 0x3c80a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3c80ac: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x3c80acu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x3c80b0: 0x3413ffff  ori         $s3, $zero, 0xFFFF
    ctx->pc = 0x3c80b0u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x3c80b4: 0x458821  addu        $s1, $v0, $a1
    ctx->pc = 0x3c80b4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x3c80b8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3c80b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3c80bc: 0x8e220004  lw          $v0, 0x4($s1)
    ctx->pc = 0x3c80bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3c80c0: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x3c80c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c80c4: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x3c80c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c80c8: 0x46011082  mul.s       $f2, $f2, $f1
    ctx->pc = 0x3c80c8u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[1]);
    // 0x3c80cc: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x3c80ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x3c80d0: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x3c80d0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x3c80d4: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x3c80d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    // 0x3c80d8: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x3c80d8u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x3c80dc: 0x460218c0  add.s       $f3, $f3, $f2
    ctx->pc = 0x3c80dcu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[2]);
    // 0x3c80e0: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c80e0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x3c80e4: 0xe642000c  swc1        $f2, 0xC($s2)
    ctx->pc = 0x3c80e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x3c80e8: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c80e8u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3c80ec: 0xe6400004  swc1        $f0, 0x4($s2)
    ctx->pc = 0x3c80ecu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 4), bits); }
    // 0x3c80f0: 0xe4630024  swc1        $f3, 0x24($v1)
    ctx->pc = 0x3c80f0u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 36), bits); }
    // 0x3c80f4: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x3c80f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c80f8: 0xc6410024  lwc1        $f1, 0x24($s2)
    ctx->pc = 0x3c80f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c80fc: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x3c80fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3c8100: 0xc6400034  lwc1        $f0, 0x34($s2)
    ctx->pc = 0x3c8100u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c8104: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3c8104u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3c8108: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3c8108u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3c810c: 0xe4400028  swc1        $f0, 0x28($v0)
    ctx->pc = 0x3c810cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 40), bits); }
    // 0x3c8110: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x3c8110u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c8114: 0xc6410028  lwc1        $f1, 0x28($s2)
    ctx->pc = 0x3c8114u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c8118: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x3c8118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3c811c: 0xc6400038  lwc1        $f0, 0x38($s2)
    ctx->pc = 0x3c811cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 18), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c8120: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3c8120u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3c8124: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3c8124u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3c8128: 0xe460002c  swc1        $f0, 0x2C($v1)
    ctx->pc = 0x3c8128u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 44), bits); }
    // 0x3c812c: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x3c812cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3c8130: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x3c8130u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c8134: 0xc464000c  lwc1        $f4, 0xC($v1)
    ctx->pc = 0x3c8134u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x3c8138: 0xc4630004  lwc1        $f3, 0x4($v1)
    ctx->pc = 0x3c8138u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3c813c: 0xc4c10000  lwc1        $f1, 0x0($a2)
    ctx->pc = 0x3c813cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c8140: 0x46002147  neg.s       $f5, $f4
    ctx->pc = 0x3c8140u;
    ctx->f[5] = FPU_NEG_S(ctx->f[4]);
    // 0x3c8144: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x3c8144u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c8148: 0x460418c2  mul.s       $f3, $f3, $f4
    ctx->pc = 0x3c8148u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x3c814c: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x3c814cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3c8150: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x3c8150u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x3c8154: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x3c8154u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x3c8158: 0x46002b06  mov.s       $f12, $f5
    ctx->pc = 0x3c8158u;
    ctx->f[12] = FPU_MOV_S(ctx->f[5]);
    // 0x3c815c: 0x46031080  add.s       $f2, $f2, $f3
    ctx->pc = 0x3c815cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[3]);
    // 0x3c8160: 0x46000924  .word       0x46000924                   # cvt.w.s     $f4, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c8160u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[4], &tmp, sizeof(tmp)); }
    // 0x3c8164: 0xe684e320  swc1        $f4, -0x1CE0($s4)
    ctx->pc = 0x3c8164u;
    { float f = ctx->f[4]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4294959904), bits); }
    // 0x3c8168: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c8168u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3c816c: 0x44050800  mfc1        $a1, $f1
    ctx->pc = 0x3c816cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 5, bits); }
    // 0x3c8170: 0x46141042  mul.s       $f1, $f2, $f20
    ctx->pc = 0x3c8170u;
    ctx->f[1] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x3c8174: 0xe4620000  swc1        $f2, 0x0($v1)
    ctx->pc = 0x3c8174u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
    // 0x3c8178: 0x30a5ffff  andi        $a1, $a1, 0xFFFF
    ctx->pc = 0x3c8178u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)65535);
    // 0x3c817c: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c817cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3c8180: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x3c8180u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x3c8184: 0x8c620010  lw          $v0, 0x10($v1)
    ctx->pc = 0x3c8184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x3c8188: 0xe465000c  swc1        $f5, 0xC($v1)
    ctx->pc = 0x3c8188u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x3c818c: 0x21023  negu        $v0, $v0
    ctx->pc = 0x3c818cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x3c8190: 0xac620010  sw          $v0, 0x10($v1)
    ctx->pc = 0x3c8190u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 2));
    // 0x3c8194: 0xc4c0000c  lwc1        $f0, 0xC($a2)
    ctx->pc = 0x3c8194u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c8198: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3c8198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3c819c: 0x46050034  c.lt.s      $f0, $f5
    ctx->pc = 0x3c819cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[5])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3c81a0: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3c81a0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3c81a4: 0x3a21821  addu        $v1, $sp, $v0
    ctx->pc = 0x3c81a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), GPR_U32(ctx, 2)));
    // 0x3c81a8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3c81a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3c81ac: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x3c81acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3c81b0: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x3c81b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x3c81b4: 0xb32821  addu        $a1, $a1, $s3
    ctx->pc = 0x3c81b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    // 0x3c81b8: 0x45000002  bc1f        . + 4 + (0x2 << 2)
    ctx->pc = 0x3C81B8u;
    {
        const bool branch_taken_0x3c81b8 = (!(ctx->fcr31 & 0x800000));
        ctx->pc = 0x3C81BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C81B8u;
        // 0x3c81bc: 0x52c03  sra         $a1, $a1, 16 (Delay Slot)
        SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c81b8) {
            ctx->pc = 0x3C81C4u;
            goto label_3c81c4;
        }
    }
    ctx->pc = 0x3C81C0u;
    // 0x3c81c0: 0x46000306  mov.s       $f12, $f0
    ctx->pc = 0x3c81c0u;
    ctx->f[12] = FPU_MOV_S(ctx->f[0]);
label_3c81c4:
    // 0x3c81c4: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x3c81c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c81c8: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x3c81c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3c81cc: 0xc6020020  lwc1        $f2, 0x20($s0)
    ctx->pc = 0x3c81ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3c81d0: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x3c81d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c81d4: 0xc6000028  lwc1        $f0, 0x28($s0)
    ctx->pc = 0x3c81d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c81d8: 0xe6020050  swc1        $f2, 0x50($s0)
    ctx->pc = 0x3c81d8u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 80), bits); }
    // 0x3c81dc: 0xe6010054  swc1        $f1, 0x54($s0)
    ctx->pc = 0x3c81dcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 84), bits); }
    // 0x3c81e0: 0xc0f1e3c  jal         func_3C78F0
    ctx->pc = 0x3C81E0u;
    SET_GPR_U32(ctx, 31, 0x3C81E8u);
    ctx->pc = 0x3C81E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C81E0u;
    // 0x3c81e4: 0xe6000058  swc1        $f0, 0x58($s0) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 88), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C78F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C78F0u, 0x3C81E0u, 0x3C81E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C81E8u;
label_3c81e8:
    // 0x3c81e8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x3c81e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x3c81ec: 0x54400028  bnel        $v0, $zero, . + 4 + (0x28 << 2)
    ctx->pc = 0x3C81ECu;
    {
        const bool branch_taken_0x3c81ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3c81ec) {
            ctx->pc = 0x3C81F0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3C81ECu;
            // 0x3c81f0: 0x8e24000c  lw          $a0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3C8290u;
            goto label_3c8290;
        }
    }
    ctx->pc = 0x3C81F4u;
    // 0x3c81f4: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x3c81f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3c81f8: 0xc6010020  lwc1        $f1, 0x20($s0)
    ctx->pc = 0x3c81f8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 32)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c81fc: 0xc4400004  lwc1        $f0, 0x4($v0)
    ctx->pc = 0x3c81fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c8200: 0xc6020030  lwc1        $f2, 0x30($s0)
    ctx->pc = 0x3c8200u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3c8204: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x3c8204u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x3c8208: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x3c8208u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x3c820c: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x3c820cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x3c8210: 0x46011080  add.s       $f2, $f2, $f1
    ctx->pc = 0x3c8210u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[1]);
    // 0x3c8214: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c8214u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x3c8218: 0xe6010004  swc1        $f1, 0x4($s0)
    ctx->pc = 0x3c8218u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 4), bits); }
    // 0x3c821c: 0xe4420024  swc1        $f2, 0x24($v0)
    ctx->pc = 0x3c821cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 36), bits); }
    // 0x3c8220: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x3c8220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c8224: 0xc6010024  lwc1        $f1, 0x24($s0)
    ctx->pc = 0x3c8224u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c8228: 0xc4620004  lwc1        $f2, 0x4($v1)
    ctx->pc = 0x3c8228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3c822c: 0xc6000034  lwc1        $f0, 0x34($s0)
    ctx->pc = 0x3c822cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c8230: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3c8230u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3c8234: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3c8234u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3c8238: 0xe4600028  swc1        $f0, 0x28($v1)
    ctx->pc = 0x3c8238u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 40), bits); }
    // 0x3c823c: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x3c823cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c8240: 0xc6010028  lwc1        $f1, 0x28($s0)
    ctx->pc = 0x3c8240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c8244: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x3c8244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3c8248: 0xc6000038  lwc1        $f0, 0x38($s0)
    ctx->pc = 0x3c8248u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 16), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c824c: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3c824cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3c8250: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3c8250u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3c8254: 0xe440002c  swc1        $f0, 0x2C($v0)
    ctx->pc = 0x3c8254u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 44), bits); }
    // 0x3c8258: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x3c8258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3c825c: 0xc4600000  lwc1        $f0, 0x0($v1)
    ctx->pc = 0x3c825cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c8260: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x3c8260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c8264: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x3c8264u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x3c8268: 0xc46c000c  lwc1        $f12, 0xC($v1)
    ctx->pc = 0x3c8268u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x3c826c: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x3c826cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x3c8270: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c8270u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x3c8274: 0xe682e320  swc1        $f2, -0x1CE0($s4)
    ctx->pc = 0x3c8274u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 20), 4294959904), bits); }
    // 0x3c8278: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c8278u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3c827c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x3c827cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3c8280: 0x8c640010  lw          $a0, 0x10($v1)
    ctx->pc = 0x3c8280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x3c8284: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3c8284u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3c8288: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x3C8288u;
    {
        const bool branch_taken_0x3c8288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3C828Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8288u;
        // 0x3c828c: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3c8288) {
            ctx->pc = 0x3C82E8u;
            goto label_3c82e8;
        }
    }
    ctx->pc = 0x3C8290u;
label_3c8290:
    // 0x3c8290: 0xc482000c  lwc1        $f2, 0xC($a0)
    ctx->pc = 0x3c8290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3c8294: 0xc4810004  lwc1        $f1, 0x4($a0)
    ctx->pc = 0x3c8294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3c8298: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x3c8298u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3c829c: 0x46001307  neg.s       $f12, $f2
    ctx->pc = 0x3c829cu;
    ctx->f[12] = FPU_NEG_S(ctx->f[2]);
    // 0x3c82a0: 0x46020902  mul.s       $f4, $f1, $f2
    ctx->pc = 0x3c82a0u;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3c82a4: 0xc4830000  lwc1        $f3, 0x0($a0)
    ctx->pc = 0x3c82a4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3c82a8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x3c82a8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x3c82ac: 0xafa40004  sw          $a0, 0x4($sp)
    ctx->pc = 0x3c82acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
    // 0x3c82b0: 0x46140842  mul.s       $f1, $f1, $f20
    ctx->pc = 0x3c82b0u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x3c82b4: 0x460418c0  add.s       $f3, $f3, $f4
    ctx->pc = 0x3c82b4u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[4]);
    // 0x3c82b8: 0x46140002  mul.s       $f0, $f0, $f20
    ctx->pc = 0x3c82b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[20]);
    // 0x3c82bc: 0x460008a4  .word       0x460008A4                   # cvt.w.s     $f2, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c82bcu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x3c82c0: 0xe642000c  swc1        $f2, 0xC($s2)
    ctx->pc = 0x3c82c0u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 12), bits); }
    // 0x3c82c4: 0x46141842  mul.s       $f1, $f3, $f20
    ctx->pc = 0x3c82c4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[3], ctx->f[20]);
    // 0x3c82c8: 0xe4830000  swc1        $f3, 0x0($a0)
    ctx->pc = 0x3c82c8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 0), bits); }
    // 0x3c82cc: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c82ccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x3c82d0: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x3c82d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3c82d4: 0x46000824  .word       0x46000824                   # cvt.w.s     $f0, $f1 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x3c82d4u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[1]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x3c82d8: 0xe6400008  swc1        $f0, 0x8($s2)
    ctx->pc = 0x3c82d8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 18), 8), bits); }
    // 0x3c82dc: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x3c82dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x3c82e0: 0x8c830010  lw          $v1, 0x10($a0)
    ctx->pc = 0x3c82e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3c82e4: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x3c82e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_3c82e8:
    // 0x3c82e8: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x3c82e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x3c82ec: 0x22c03  sra         $a1, $v0, 16
    ctx->pc = 0x3c82ecu;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 2), 16));
    // 0x3c82f0: 0xc0f1e3c  jal         func_3C78F0
    ctx->pc = 0x3C82F0u;
    SET_GPR_U32(ctx, 31, 0x3C82F8u);
    ctx->pc = 0x3C82F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3C82F0u;
    // 0x3c82f4: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C78F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C78F0u, 0x3C82F0u, 0x3C82F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3C82F8u;
label_3c82f8:
    // 0x3c82f8: 0x8f82bda8  lw          $v0, -0x4258($gp)
    ctx->pc = 0x3c82f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950312)));
    // 0x3c82fc: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3c82fcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3c8300: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3c8300u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3c8304: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3c8304u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3c8308: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3c8308u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3c830c: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x3c830cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3c8310: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3c8310u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3c8314: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x3c8314u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3c8318: 0x3e00008  jr          $ra
    ctx->pc = 0x3C8318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3C831Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3C8318u;
        // 0x3c831c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3C8318u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3C8320u;
}
