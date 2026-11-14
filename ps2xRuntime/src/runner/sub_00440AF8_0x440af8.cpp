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

// Function: sub_00440AF8
// Address: 0x440af8 - 0x440df8
void sub_00440AF8_0x440af8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00440AF8_0x440af8");
#endif

    ctx->pc = 0x440af8u;

    // 0x440af8: 0x80682d  daddu       $t5, $a0, $zero
    ctx->pc = 0x440af8u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x440afc: 0x3c0a005e  lui         $t2, 0x5E
    ctx->pc = 0x440afcu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)94 << 16));
    // 0x440b00: 0xc5a00080  lwc1        $f0, 0x80($t5)
    ctx->pc = 0x440b00u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x440b04: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x440b04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x440b08: 0x8dae0060  lw          $t6, 0x60($t5)
    ctx->pc = 0x440b08u;
    SET_GPR_S32(ctx, 14, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 96)));
    // 0x440b0c: 0x2482d690  addiu       $v0, $a0, -0x2970
    ctx->pc = 0x440b0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956688));
    // 0x440b10: 0xe480d690  swc1        $f0, -0x2970($a0)
    ctx->pc = 0x440b10u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5DD690u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5DD690u, _value); } while (0); }
    // 0x440b14: 0x3c08005e  lui         $t0, 0x5E
    ctx->pc = 0x440b14u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)94 << 16));
    // 0x440b18: 0x8dc5000c  lw          $a1, 0xC($t6)
    ctx->pc = 0x440b18u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 12)));
    // 0x440b1c: 0x2543d6a0  addiu       $v1, $t2, -0x2960
    ctx->pc = 0x440b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), 4294956704));
    // 0x440b20: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x440b20u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5DD694u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5DD694u, _value); } while (0); }
    // 0x440b24: 0x2507d6c0  addiu       $a3, $t0, -0x2940
    ctx->pc = 0x440b24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 8), 4294956736));
    // 0x440b28: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x440b28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5DD69Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5DD69Cu, _value); } while (0); }
    // 0x440b2c: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x440b2cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x440b30: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x440b30u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x440b34: 0xe4400008  swc1        $f0, 0x8($v0)
    ctx->pc = 0x440b34u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5DD698u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5DD698u, _value); } while (0); }
    // 0x440b38: 0x3c0b005e  lui         $t3, 0x5E
    ctx->pc = 0x440b38u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)94 << 16));
    // 0x440b3c: 0x8dc60010  lw          $a2, 0x10($t6)
    ctx->pc = 0x440b3cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 16)));
    // 0x440b40: 0x517c2  srl         $v0, $a1, 31
    ctx->pc = 0x440b40u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x440b44: 0xc5a00084  lwc1        $f0, 0x84($t5)
    ctx->pc = 0x440b44u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x440b48: 0x2569d6d0  addiu       $t1, $t3, -0x2930
    ctx->pc = 0x440b48u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 11), 4294956752));
    // 0x440b4c: 0x44861000  mtc1        $a2, $f2
    ctx->pc = 0x440b4cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x440b50: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x440b50u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x440b54: 0xe501d6c0  swc1        $f1, -0x2940($t0)
    ctx->pc = 0x440b54u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4294956736), bits); }
    // 0x440b58: 0xe540d6a0  swc1        $f0, -0x2960($t2)
    ctx->pc = 0x440b58u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4294956704), bits); }
    // 0x440b5c: 0xa22821  addu        $a1, $a1, $v0
    ctx->pc = 0x440b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x440b60: 0xe4600004  swc1        $f0, 0x4($v1)
    ctx->pc = 0x440b60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4), bits); }
    // 0x440b64: 0x617c2  srl         $v0, $a2, 31
    ctx->pc = 0x440b64u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 6), 31));
    // 0x440b68: 0xe4e20004  swc1        $f2, 0x4($a3)
    ctx->pc = 0x440b68u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x440b6c: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x440b6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x440b70: 0xe460000c  swc1        $f0, 0xC($v1)
    ctx->pc = 0x440b70u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 12), bits); }
    // 0x440b74: 0x52843  sra         $a1, $a1, 1
    ctx->pc = 0x440b74u;
    SET_GPR_S32(ctx, 5, SRA32(GPR_S32(ctx, 5), 1));
    // 0x440b78: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x440b78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
    // 0x440b7c: 0x3c0a005e  lui         $t2, 0x5E
    ctx->pc = 0x440b7cu;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)94 << 16));
    // 0x440b80: 0x8dcc0000  lw          $t4, 0x0($t6)
    ctx->pc = 0x440b80u;
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 0)));
    // 0x440b84: 0x63043  sra         $a2, $a2, 1
    ctx->pc = 0x440b84u;
    SET_GPR_S32(ctx, 6, SRA32(GPR_S32(ctx, 6), 1));
    // 0x440b88: 0xc5a0008c  lwc1        $f0, 0x8C($t5)
    ctx->pc = 0x440b88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 140)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x440b8c: 0x2548d6e0  addiu       $t0, $t2, -0x2920
    ctx->pc = 0x440b8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 10), 4294956768));
    // 0x440b90: 0xace0000c  sw          $zero, 0xC($a3)
    ctx->pc = 0x440b90u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
    // 0x440b94: 0x140782d  daddu       $t7, $t2, $zero
    ctx->pc = 0x440b94u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x440b98: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x440b98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x440b9c: 0xad60d6d0  sw          $zero, -0x2930($t3)
    ctx->pc = 0x440b9cu;
    WRITE32(ADD32(GPR_U32(ctx, 11), 4294956752), GPR_U32(ctx, 0));
    // 0x440ba0: 0xad200004  sw          $zero, 0x4($t1)
    ctx->pc = 0x440ba0u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 4), GPR_U32(ctx, 0));
    // 0x440ba4: 0x3c0b005e  lui         $t3, 0x5E
    ctx->pc = 0x440ba4u;
    SET_GPR_S32(ctx, 11, (int32_t)((uint32_t)94 << 16));
    // 0x440ba8: 0x8d84000c  lw          $a0, 0xC($t4)
    ctx->pc = 0x440ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 12)));
    // 0x440bac: 0x2567d760  addiu       $a3, $t3, -0x28A0
    ctx->pc = 0x440bacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 11), 4294956896));
    // 0x440bb0: 0xc5a00090  lwc1        $f0, 0x90($t5)
    ctx->pc = 0x440bb0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 144)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x440bb4: 0x8d830010  lw          $v1, 0x10($t4)
    ctx->pc = 0x440bb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 12), 16)));
    // 0x440bb8: 0x417c2  srl         $v0, $a0, 31
    ctx->pc = 0x440bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x440bbc: 0x822021  addu        $a0, $a0, $v0
    ctx->pc = 0x440bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x440bc0: 0xe5200008  swc1        $f0, 0x8($t1)
    ctx->pc = 0x440bc0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 8), bits); }
    // 0x440bc4: 0xad20000c  sw          $zero, 0xC($t1)
    ctx->pc = 0x440bc4u;
    WRITE32(ADD32(GPR_U32(ctx, 9), 12), GPR_U32(ctx, 0));
    // 0x440bc8: 0x317c2  srl         $v0, $v1, 31
    ctx->pc = 0x440bc8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x440bcc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x440bccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x440bd0: 0x42043  sra         $a0, $a0, 1
    ctx->pc = 0x440bd0u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 1));
    // 0x440bd4: 0x85c2001c  lh          $v0, 0x1C($t6)
    ctx->pc = 0x440bd4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 28)));
    // 0x440bd8: 0x2484f800  addiu       $a0, $a0, -0x800
    ctx->pc = 0x440bd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965248));
    // 0x440bdc: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x440bdcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x440be0: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x440be0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x440be4: 0x2463f800  addiu       $v1, $v1, -0x800
    ctx->pc = 0x440be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294965248));
    // 0x440be8: 0x452821  addu        $a1, $v0, $a1
    ctx->pc = 0x440be8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x440bec: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x440becu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x440bf0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x440bf0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x440bf4: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x440bf4u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x440bf8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x440bf8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x440bfc: 0xe540d6e0  swc1        $f0, -0x2920($t2)
    ctx->pc = 0x440bfcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 4294956768), bits); }
    // 0x440c00: 0x85c2001e  lh          $v0, 0x1E($t6)
    ctx->pc = 0x440c00u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 30)));
    // 0x440c04: 0xe561d760  swc1        $f1, -0x28A0($t3)
    ctx->pc = 0x440c04u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 4294956896), bits); }
    // 0x440c08: 0x431023  subu        $v0, $v0, $v1
    ctx->pc = 0x440c08u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x440c0c: 0xad00000c  sw          $zero, 0xC($t0)
    ctx->pc = 0x440c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 8), 12), GPR_U32(ctx, 0));
    // 0x440c10: 0x463021  addu        $a2, $v0, $a2
    ctx->pc = 0x440c10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x440c14: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x440c14u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x440c18: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x440c18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x440c1c: 0x44860000  mtc1        $a2, $f0
    ctx->pc = 0x440c1cu;
    { uint32_t bits = GPR_U32(ctx, 6); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x440c20: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x440c20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x440c24: 0xad000008  sw          $zero, 0x8($t0)
    ctx->pc = 0x440c24u;
    WRITE32(ADD32(GPR_U32(ctx, 8), 8), GPR_U32(ctx, 0));
    // 0x440c28: 0xe5000004  swc1        $f0, 0x4($t0)
    ctx->pc = 0x440c28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x440c2c: 0xe4e10004  swc1        $f1, 0x4($a3)
    ctx->pc = 0x440c2cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x440c30: 0x8f82bf10  lw          $v0, -0x40F0($gp)
    ctx->pc = 0x440c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950672)));
    // 0x440c34: 0xace0000c  sw          $zero, 0xC($a3)
    ctx->pc = 0x440c34u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 0));
    // 0x440c38: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x440C38u;
    {
        const bool branch_taken_0x440c38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x440C3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x440C38u;
        // 0x440c3c: 0xace00008  sw          $zero, 0x8($a3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 7), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x440c38) {
            ctx->pc = 0x440C6Cu;
            goto label_440c6c;
        }
    }
    ctx->pc = 0x440C40u;
    // 0x440c40: 0xc5a10084  lwc1        $f1, 0x84($t5)
    ctx->pc = 0x440c40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x440c44: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x440c44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x440c48: 0x3c01c37f  lui         $at, 0xC37F
    ctx->pc = 0x440c48u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50047 << 16));
    // 0x440c4c: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x440c4cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x440c50: 0xe441d6bc  swc1        $f1, -0x2944($v0)
    ctx->pc = 0x440c50u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5DD6BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5DD6BCu, _value); } while (0); }
    // 0x440c54: 0xc5a00084  lwc1        $f0, 0x84($t5)
    ctx->pc = 0x440c54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x440c58: 0xc5a10088  lwc1        $f1, 0x88($t5)
    ctx->pc = 0x440c58u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x440c5c: 0x46010001  sub.s       $f0, $f0, $f1
    ctx->pc = 0x440c5cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x440c60: 0x46001083  div.s       $f2, $f2, $f0
    ctx->pc = 0x440c60u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x440c64: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x440C64u;
    {
        const bool branch_taken_0x440c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x440C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x440C64u;
        // 0x440c68: 0x2443d6bc  addiu       $v1, $v0, -0x2944 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956732));
        ctx->in_delay_slot = false;
        if (branch_taken_0x440c64) {
            ctx->pc = 0x440C90u;
            goto label_440c90;
        }
    }
    ctx->pc = 0x440C6Cu;
label_440c6c:
    // 0x440c6c: 0xc781bf14  lwc1        $f1, -0x40EC($gp)
    ctx->pc = 0x440c6cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294950676)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x440c70: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x440c70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x440c74: 0x3c01c37f  lui         $at, 0xC37F
    ctx->pc = 0x440c74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50047 << 16));
    // 0x440c78: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x440c78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x440c7c: 0x2443d6bc  addiu       $v1, $v0, -0x2944
    ctx->pc = 0x440c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956732));
    // 0x440c80: 0xe441d6bc  swc1        $f1, -0x2944($v0)
    ctx->pc = 0x440c80u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5DD6BCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5DD6BCu, _value); } while (0); }
    // 0x440c84: 0xc5a00088  lwc1        $f0, 0x88($t5)
    ctx->pc = 0x440c84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 136)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x440c88: 0x46000841  sub.s       $f1, $f1, $f0
    ctx->pc = 0x440c88u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x440c8c: 0x46011083  div.s       $f2, $f2, $f1
    ctx->pc = 0x440c8cu;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[2] = FPU_DIV_S(ctx->f[2], ctx->f[1]); }
label_440c90:
    // 0x440c90: 0xe462fffc  swc1        $f2, -0x4($v1)
    ctx->pc = 0x440c90u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294967292), bits); }
    // 0x440c94: 0xc5e1d6e0  lwc1        $f1, -0x2920($t7)
    ctx->pc = 0x440c94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 15), 4294956768)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x440c98: 0x25e2d6e0  addiu       $v0, $t7, -0x2920
    ctx->pc = 0x440c98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 15), 4294956768));
    // 0x440c9c: 0xc7808080  lwc1        $f0, -0x7F80($gp)
    ctx->pc = 0x440c9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934656)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x440ca0: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x440ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x440ca4: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x440ca4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x440ca8: 0x44812000  mtc1        $at, $f4
    ctx->pc = 0x440ca8u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x440cac: 0x2489d650  addiu       $t1, $a0, -0x29B0
    ctx->pc = 0x440cacu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956624));
    // 0x440cb0: 0x460100c1  sub.s       $f3, $f0, $f1
    ctx->pc = 0x440cb0u;
    ctx->f[3] = FPU_SUB_S(ctx->f[0], ctx->f[1]);
    // 0x440cb4: 0xc4420004  lwc1        $f2, 0x4($v0)
    ctx->pc = 0x440cb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x440cb8: 0x8dc2000c  lw          $v0, 0xC($t6)
    ctx->pc = 0x440cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 12)));
    // 0x440cbc: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x440cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
    // 0x440cc0: 0x46020001  sub.s       $f0, $f0, $f2
    ctx->pc = 0x440cc0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[2]);
    // 0x440cc4: 0xc5a70080  lwc1        $f7, 0x80($t5)
    ctx->pc = 0x440cc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[7] = f; }
    // 0x440cc8: 0x46030869  min.s       $f1, $f1, $f3
    ctx->pc = 0x440cc8u;
    ctx->f[1] = std::min(ctx->f[1], ctx->f[3]);
    // 0x440ccc: 0x21043  sra         $v0, $v0, 1
    ctx->pc = 0x440cccu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 1));
    // 0x440cd0: 0x46012143  div.s       $f5, $f4, $f1
    ctx->pc = 0x440cd0u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = FPU_DIV_S(ctx->f[4], ctx->f[1]); }
    // 0x440cd4: 0xc5a30084  lwc1        $f3, 0x84($t5)
    ctx->pc = 0x440cd4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x440cd8: 0x460010a9  min.s       $f2, $f2, $f0
    ctx->pc = 0x440cd8u;
    ctx->f[2] = std::min(ctx->f[2], ctx->f[0]);
    // 0x440cdc: 0xe481d650  swc1        $f1, -0x29B0($a0)
    ctx->pc = 0x440cdcu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 4294956624), bits); }
    // 0x440ce0: 0x46022203  div.s       $f8, $f4, $f2
    ctx->pc = 0x440ce0u;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[8] = FPU_DIV_S(ctx->f[4], ctx->f[2]); }
    // 0x440ce4: 0x24420005  addiu       $v0, $v0, 0x5
    ctx->pc = 0x440ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 5));
    // 0x440ce8: 0x44823000  mtc1        $v0, $f6
    ctx->pc = 0x440ce8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[6], &bits, sizeof(bits)); }
    // 0x440cec: 0x468031a0  cvt.s.w     $f6, $f6
    ctx->pc = 0x440cecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[6], sizeof(tmp)); ctx->f[6] = FPU_CVT_S_W(tmp); }
    // 0x440cf0: 0x8dc30010  lw          $v1, 0x10($t6)
    ctx->pc = 0x440cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 14), 16)));
    // 0x440cf4: 0x24a8d660  addiu       $t0, $a1, -0x29A0
    ctx->pc = 0x440cf4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 4294956640));
    // 0x440cf8: 0x3c02005e  lui         $v0, 0x5E
    ctx->pc = 0x440cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)94 << 16));
    // 0x440cfc: 0x31843  sra         $v1, $v1, 1
    ctx->pc = 0x440cfcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 1));
    // 0x440d00: 0x2447d670  addiu       $a3, $v0, -0x2990
    ctx->pc = 0x440d00u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 4294956656));
    // 0x440d04: 0xe5250004  swc1        $f5, 0x4($t1)
    ctx->pc = 0x440d04u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4), bits); }
    // 0x440d08: 0x46062243  div.s       $f9, $f4, $f6
    ctx->pc = 0x440d08u;
    { if (ctx->f[6] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[9] = FPU_DIV_S(ctx->f[4], ctx->f[6]); }
    // 0x440d0c: 0x24630005  addiu       $v1, $v1, 0x5
    ctx->pc = 0x440d0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 5));
    // 0x440d10: 0x460718c1  sub.s       $f3, $f3, $f7
    ctx->pc = 0x440d10u;
    ctx->f[3] = FPU_SUB_S(ctx->f[3], ctx->f[7]);
    // 0x440d14: 0xc5a00084  lwc1        $f0, 0x84($t5)
    ctx->pc = 0x440d14u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x440d18: 0x44830800  mtc1        $v1, $f1
    ctx->pc = 0x440d18u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x440d1c: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x440d1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x440d20: 0xe4a2d660  swc1        $f2, -0x29A0($a1)
    ctx->pc = 0x440d20u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294956640), bits); }
    // 0x440d24: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x440d24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x440d28: 0xe520000c  swc1        $f0, 0xC($t1)
    ctx->pc = 0x440d28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 12), bits); }
    // 0x440d2c: 0x2466d680  addiu       $a2, $v1, -0x2980
    ctx->pc = 0x440d2cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956672));
    // 0x440d30: 0xe5080004  swc1        $f8, 0x4($t0)
    ctx->pc = 0x440d30u;
    { float f = ctx->f[8]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4), bits); }
    // 0x440d34: 0x46012143  div.s       $f5, $f4, $f1
    ctx->pc = 0x440d34u;
    { if (ctx->f[1] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[5] = FPU_DIV_S(ctx->f[4], ctx->f[1]); }
    // 0x440d38: 0x8da50014  lw          $a1, 0x14($t5)
    ctx->pc = 0x440d38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 20)));
    // 0x440d3c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x440d3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x440d40: 0xc5a00080  lwc1        $f0, 0x80($t5)
    ctx->pc = 0x440d40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x440d44: 0x46032103  div.s       $f4, $f4, $f3
    ctx->pc = 0x440d44u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[4] = FPU_DIV_S(ctx->f[4], ctx->f[3]); }
    // 0x440d48: 0xe446d670  swc1        $f6, -0x2990($v0)
    ctx->pc = 0x440d48u;
    { float f = ctx->f[6]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4294956656), bits); }
    // 0x440d4c: 0xe500000c  swc1        $f0, 0xC($t0)
    ctx->pc = 0x440d4cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 12), bits); }
    // 0x440d50: 0xe4e90004  swc1        $f9, 0x4($a3)
    ctx->pc = 0x440d50u;
    { float f = ctx->f[9]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 4), bits); }
    // 0x440d54: 0xc5a00084  lwc1        $f0, 0x84($t5)
    ctx->pc = 0x440d54u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x440d58: 0xe461d680  swc1        $f1, -0x2980($v1)
    ctx->pc = 0x440d58u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5DD680u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5DD680u, _value); } while (0); }
    // 0x440d5c: 0xe4e0000c  swc1        $f0, 0xC($a3)
    ctx->pc = 0x440d5cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 12), bits); }
    // 0x440d60: 0xe4c50004  swc1        $f5, 0x4($a2)
    ctx->pc = 0x440d60u;
    { float f = ctx->f[5]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); do { uint32_t _value = static_cast<uint32_t>(bits); ps2TraceGuestWrite(rdram, 0x5DD684u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x5DD684u, _value); } while (0); }
    // 0x440d64: 0xc5a00080  lwc1        $f0, 0x80($t5)
    ctx->pc = 0x440d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x440d68: 0x14a40014  bne         $a1, $a0, . + 4 + (0x14 << 2)
    ctx->pc = 0x440D68u;
    {
        const bool branch_taken_0x440d68 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x440D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x440D68u;
        // 0x440d6c: 0xe4c0000c  swc1        $f0, 0xC($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x440d68) {
            ctx->pc = 0x440DBCu;
            goto label_440dbc;
        }
    }
    ctx->pc = 0x440D70u;
    // 0x440d70: 0xc5a10080  lwc1        $f1, 0x80($t5)
    ctx->pc = 0x440d70u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x440d74: 0x3c01c000  lui         $at, 0xC000
    ctx->pc = 0x440d74u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49152 << 16));
    // 0x440d78: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x440d78u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x440d7c: 0xc5a00084  lwc1        $f0, 0x84($t5)
    ctx->pc = 0x440d7cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x440d80: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x440d80u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x440d84: 0x9382aed0  lbu         $v0, -0x5130($gp)
    ctx->pc = 0x440d84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294946512)));
    // 0x440d88: 0x304200f7  andi        $v0, $v0, 0xF7
    ctx->pc = 0x440d88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)247);
    // 0x440d8c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x440d8cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x440d90: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x440d90u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x440d94: 0xe5200008  swc1        $f0, 0x8($t1)
    ctx->pc = 0x440d94u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 8), bits); }
    // 0x440d98: 0xe4e00008  swc1        $f0, 0x8($a3)
    ctx->pc = 0x440d98u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
    // 0x440d9c: 0xc5a10080  lwc1        $f1, 0x80($t5)
    ctx->pc = 0x440d9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x440da0: 0xc5a00084  lwc1        $f0, 0x84($t5)
    ctx->pc = 0x440da0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x440da4: 0xa382aed0  sb          $v0, -0x5130($gp)
    ctx->pc = 0x440da4u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294946512), (uint8_t)GPR_U32(ctx, 2));
    // 0x440da8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x440da8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x440dac: 0x46040002  mul.s       $f0, $f0, $f4
    ctx->pc = 0x440dacu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[4]);
    // 0x440db0: 0xe5000008  swc1        $f0, 0x8($t0)
    ctx->pc = 0x440db0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x440db4: 0x3e00008  jr          $ra
    ctx->pc = 0x440DB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x440DB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x440DB4u;
        // 0x440db8: 0xe4c00008  swc1        $f0, 0x8($a2) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x440DB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x440DBCu;
label_440dbc:
    // 0x440dbc: 0xc5a20080  lwc1        $f2, 0x80($t5)
    ctx->pc = 0x440dbcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 128)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x440dc0: 0x46042040  add.s       $f1, $f4, $f4
    ctx->pc = 0x440dc0u;
    ctx->f[1] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
    // 0x440dc4: 0xc5a00084  lwc1        $f0, 0x84($t5)
    ctx->pc = 0x440dc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 13), 132)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x440dc8: 0x460020c7  neg.s       $f3, $f4
    ctx->pc = 0x440dc8u;
    ctx->f[3] = FPU_NEG_S(ctx->f[4]);
    // 0x440dcc: 0x9382aed0  lbu         $v0, -0x5130($gp)
    ctx->pc = 0x440dccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294946512)));
    // 0x440dd0: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x440dd0u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x440dd4: 0xe5010008  swc1        $f1, 0x8($t0)
    ctx->pc = 0x440dd4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 8), bits); }
    // 0x440dd8: 0xe4c10008  swc1        $f1, 0x8($a2)
    ctx->pc = 0x440dd8u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x440ddc: 0x34420008  ori         $v0, $v0, 0x8
    ctx->pc = 0x440ddcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
    // 0x440de0: 0xa382aed0  sb          $v0, -0x5130($gp)
    ctx->pc = 0x440de0u;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294946512), (uint8_t)GPR_U32(ctx, 2));
    // 0x440de4: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x440de4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x440de8: 0xe5200008  swc1        $f0, 0x8($t1)
    ctx->pc = 0x440de8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 8), bits); }
    // 0x440dec: 0x3e00008  jr          $ra
    ctx->pc = 0x440DECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x440DF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x440DECu;
        // 0x440df0: 0xe4e00008  swc1        $f0, 0x8($a3) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 8), bits); }
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x440DECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x440DF4u;
    // 0x440df4: 0x0  nop
    ctx->pc = 0x440df4u;
    // NOP
    ctx->pc = 0x440df8u;
}
