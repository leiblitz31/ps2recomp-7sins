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

// Function: sub_0032BF98
// Address: 0x32bf98 - 0x32c0f8
void sub_0032BF98_0x32bf98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0032BF98_0x32bf98");
#endif

    switch (ctx->pc) {
        case 0x32c030u: goto label_32c030;
        default: break;
    }

    ctx->pc = 0x32bf98u;

    // 0x32bf98: 0x8ca90018  lw          $t1, 0x18($a1)
    ctx->pc = 0x32bf98u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x32bf9c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x32bf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x32bfa0: 0x18400052  blez        $v0, . + 4 + (0x52 << 2)
    ctx->pc = 0x32BFA0u;
    {
        const bool branch_taken_0x32bfa0 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x32BFA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BFA0u;
        // 0x32bfa4: 0x8c850000  lw          $a1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32bfa0) {
            ctx->pc = 0x32C0ECu;
            goto label_32c0ec;
        }
    }
    ctx->pc = 0x32BFA8u;
    // 0x32bfa8: 0x40702d  daddu       $t6, $v0, $zero
    ctx->pc = 0x32bfa8u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32bfac: 0xc0382d  daddu       $a3, $a2, $zero
    ctx->pc = 0x32bfacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32bfb0: 0x31c20001  andi        $v0, $t6, 0x1
    ctx->pc = 0x32bfb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)1);
    // 0x32bfb4: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x32BFB4u;
    {
        const bool branch_taken_0x32bfb4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x32BFB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32BFB4u;
        // 0x32bfb8: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32bfb4) {
            ctx->pc = 0x32C01Cu;
            goto label_32c01c;
        }
    }
    ctx->pc = 0x32BFBCu;
    // 0x32bfbc: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x32bfbcu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x32bfc0: 0x24a80002  addiu       $t0, $a1, 0x2
    ctx->pc = 0x32bfc0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x32bfc4: 0x24c70010  addiu       $a3, $a2, 0x10
    ctx->pc = 0x32bfc4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x32bfc8: 0x25ceffff  addiu       $t6, $t6, -0x1
    ctx->pc = 0x32bfc8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967295));
    // 0x32bfcc: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x32bfccu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32bfd0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x32bfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x32bfd4: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x32bfd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32bfd8: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x32bfd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x32bfdc: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x32bfdcu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x32bfe0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x32bfe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32bfe4: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x32bfe4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x32bfe8: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x32bfe8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x32bfec: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x32bfecu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x32bff0: 0xe4c00000  swc1        $f0, 0x0($a2)
    ctx->pc = 0x32bff0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 0), bits); }
    // 0x32bff4: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x32bff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x32bff8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x32bff8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x32bffc: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x32bffcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32c000: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x32c000u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x32c004: 0xe4c10004  swc1        $f1, 0x4($a2)
    ctx->pc = 0x32c004u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 4), bits); }
    // 0x32c008: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x32c008u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32c00c: 0xe4c00008  swc1        $f0, 0x8($a2)
    ctx->pc = 0x32c00cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 8), bits); }
    // 0x32c010: 0xc441000c  lwc1        $f1, 0xC($v0)
    ctx->pc = 0x32c010u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32c014: 0x11c00035  beqz        $t6, . + 4 + (0x35 << 2)
    ctx->pc = 0x32C014u;
    {
        const bool branch_taken_0x32c014 = (GPR_U64(ctx, 14) == GPR_U64(ctx, 0));
        ctx->pc = 0x32C018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C014u;
        // 0x32c018: 0xe4c1000c  swc1        $f1, 0xC($a2) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 6), 12), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c014) {
            ctx->pc = 0x32C0ECu;
            goto label_32c0ec;
        }
    }
    ctx->pc = 0x32C01Cu;
label_32c01c:
    // 0x32c01c: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x32c01cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c020: 0x140682d  daddu       $t5, $t2, $zero
    ctx->pc = 0x32c020u;
    SET_GPR_U64(ctx, 13, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c024: 0x140602d  daddu       $t4, $t2, $zero
    ctx->pc = 0x32c024u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c028: 0x140582d  daddu       $t3, $t2, $zero
    ctx->pc = 0x32c028u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c02c: 0x0  nop
    ctx->pc = 0x32c02cu;
    // NOP
label_32c030:
    // 0x32c030: 0x95020000  lhu         $v0, 0x0($t0)
    ctx->pc = 0x32c030u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x32c034: 0x25cefffe  addiu       $t6, $t6, -0x2
    ctx->pc = 0x32c034u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 4294967294));
    // 0x32c038: 0x95070000  lhu         $a3, 0x0($t0)
    ctx->pc = 0x32c038u;
    SET_GPR_ZE32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x32c03c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x32c03cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c040: 0x95060002  lhu         $a2, 0x2($t0)
    ctx->pc = 0x32c040u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x32c044: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x32c044u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x32c048: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x32c048u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x32c04c: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x32c04cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x32c050: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x32c050u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x32c054: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x32c054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32c058: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x32c058u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x32c05c: 0x42100  sll         $a0, $a0, 4
    ctx->pc = 0x32c05cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x32c060: 0x73900  sll         $a3, $a3, 4
    ctx->pc = 0x32c060u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 4));
    // 0x32c064: 0xe5600000  swc1        $f0, 0x0($t3)
    ctx->pc = 0x32c064u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 0), bits); }
    // 0x32c068: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x32c068u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x32c06c: 0xe93821  addu        $a3, $a3, $t1
    ctx->pc = 0x32c06cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x32c070: 0x63100  sll         $a2, $a2, 4
    ctx->pc = 0x32c070u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x32c074: 0xc4600004  lwc1        $f0, 0x4($v1)
    ctx->pc = 0x32c074u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32c078: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x32c078u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x32c07c: 0x95050002  lhu         $a1, 0x2($t0)
    ctx->pc = 0x32c07cu;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x32c080: 0xe5800004  swc1        $f0, 0x4($t4)
    ctx->pc = 0x32c080u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 4), bits); }
    // 0x32c084: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x32c084u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x32c088: 0x95030002  lhu         $v1, 0x2($t0)
    ctx->pc = 0x32c088u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x32c08c: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x32c08cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32c090: 0xa92821  addu        $a1, $a1, $t1
    ctx->pc = 0x32c090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 9)));
    // 0x32c094: 0x31900  sll         $v1, $v1, 4
    ctx->pc = 0x32c094u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 4));
    // 0x32c098: 0x95020002  lhu         $v0, 0x2($t0)
    ctx->pc = 0x32c098u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 2)));
    // 0x32c09c: 0xe5a00008  swc1        $f0, 0x8($t5)
    ctx->pc = 0x32c09cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 8), bits); }
    // 0x32c0a0: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x32c0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x32c0a4: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x32c0a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x32c0a8: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x32c0a8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x32c0ac: 0xc4e1000c  lwc1        $f1, 0xC($a3)
    ctx->pc = 0x32c0acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x32c0b0: 0x491021  addu        $v0, $v0, $t1
    ctx->pc = 0x32c0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x32c0b4: 0xe541000c  swc1        $f1, 0xC($t2)
    ctx->pc = 0x32c0b4u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 12), bits); }
    // 0x32c0b8: 0xc4c00000  lwc1        $f0, 0x0($a2)
    ctx->pc = 0x32c0b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32c0bc: 0xe5600010  swc1        $f0, 0x10($t3)
    ctx->pc = 0x32c0bcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 11), 16), bits); }
    // 0x32c0c0: 0x256b0020  addiu       $t3, $t3, 0x20
    ctx->pc = 0x32c0c0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 32));
    // 0x32c0c4: 0xc4a00004  lwc1        $f0, 0x4($a1)
    ctx->pc = 0x32c0c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32c0c8: 0xe5800014  swc1        $f0, 0x14($t4)
    ctx->pc = 0x32c0c8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 12), 20), bits); }
    // 0x32c0cc: 0x258c0020  addiu       $t4, $t4, 0x20
    ctx->pc = 0x32c0ccu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 12), 32));
    // 0x32c0d0: 0xc4600008  lwc1        $f0, 0x8($v1)
    ctx->pc = 0x32c0d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32c0d4: 0xe5a00018  swc1        $f0, 0x18($t5)
    ctx->pc = 0x32c0d4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 13), 24), bits); }
    // 0x32c0d8: 0x25ad0020  addiu       $t5, $t5, 0x20
    ctx->pc = 0x32c0d8u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 13), 32));
    // 0x32c0dc: 0xc440000c  lwc1        $f0, 0xC($v0)
    ctx->pc = 0x32c0dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x32c0e0: 0xe540001c  swc1        $f0, 0x1C($t2)
    ctx->pc = 0x32c0e0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 10), 28), bits); }
    // 0x32c0e4: 0x15c0ffd2  bnez        $t6, . + 4 + (-0x2E << 2)
    ctx->pc = 0x32C0E4u;
    {
        const bool branch_taken_0x32c0e4 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 0));
        ctx->pc = 0x32C0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32C0E4u;
        // 0x32c0e8: 0x254a0020  addiu       $t2, $t2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32c0e4) {
            ctx->pc = 0x32C030u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_32c030;
        }
    }
    ctx->pc = 0x32C0ECu;
label_32c0ec:
    // 0x32c0ec: 0x3e00008  jr          $ra
    ctx->pc = 0x32C0ECu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x32C0ECu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32C0F4u;
    // 0x32c0f4: 0x0  nop
    ctx->pc = 0x32c0f4u;
    // NOP
    ctx->pc = 0x32c0f8u;
}
