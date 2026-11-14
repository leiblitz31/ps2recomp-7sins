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

// Function: sub_003B0010
// Address: 0x3b0010 - 0x3b0b08
void sub_003B0010_0x3b0010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B0010_0x3b0010");
#endif

    switch (ctx->pc) {
        case 0x3b0058u: goto label_3b0058;
        case 0x3b006cu: goto label_3b006c;
        case 0x3b0078u: goto label_3b0078;
        case 0x3b0094u: goto label_3b0094;
        case 0x3b00a8u: goto label_3b00a8;
        case 0x3b00c0u: goto label_3b00c0;
        case 0x3b0230u: goto label_3b0230;
        case 0x3b03d8u: goto label_3b03d8;
        case 0x3b03f0u: goto label_3b03f0;
        case 0x3b0560u: goto label_3b0560;
        case 0x3b0760u: goto label_3b0760;
        case 0x3b0770u: goto label_3b0770;
        case 0x3b0790u: goto label_3b0790;
        case 0x3b0850u: goto label_3b0850;
        case 0x3b09c0u: goto label_3b09c0;
        case 0x3b09d4u: goto label_3b09d4;
        case 0x3b09e0u: goto label_3b09e0;
        case 0x3b09fcu: goto label_3b09fc;
        case 0x3b0a04u: goto label_3b0a04;
        case 0x3b0a20u: goto label_3b0a20;
        case 0x3b0a38u: goto label_3b0a38;
        case 0x3b0a4cu: goto label_3b0a4c;
        case 0x3b0a58u: goto label_3b0a58;
        case 0x3b0a78u: goto label_3b0a78;
        case 0x3b0a8cu: goto label_3b0a8c;
        case 0x3b0ab0u: goto label_3b0ab0;
        default: break;
    }

    ctx->pc = 0x3b0010u;

    // 0x3b0010: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3b0010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3b0014: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x3b0014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x3b0018: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3b0018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x3b001c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x3b001cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0020: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x3b0020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x3b0024: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3b0024u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0028: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x3b0028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x3b002c: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x3b002cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x3b0030: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x3b0030u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x3b0034: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x3b0034u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x3b0038: 0x126001b0  beqz        $s3, . + 4 + (0x1B0 << 2)
    ctx->pc = 0x3B0038u;
    {
        const bool branch_taken_0x3b0038 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B003Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0038u;
        // 0x3b003c: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0038) {
            ctx->pc = 0x3B06FCu;
            goto label_3b06fc;
        }
    }
    ctx->pc = 0x3B0040u;
    // 0x3b0040: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3b0040u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x3b0044: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x3b0044u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b0048: 0x2455ce80  addiu       $s5, $v0, -0x3180
    ctx->pc = 0x3b0048u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954624));
    // 0x3b004c: 0x2414ffff  addiu       $s4, $zero, -0x1
    ctx->pc = 0x3b004cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3b0050: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x3b0050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x3b0054: 0x0  nop
    ctx->pc = 0x3b0054u;
    // NOP
label_3b0058:
    // 0x3b0058: 0x544000db  bnel        $v0, $zero, . + 4 + (0xDB << 2)
    ctx->pc = 0x3B0058u;
    {
        const bool branch_taken_0x3b0058 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b0058) {
            ctx->pc = 0x3B005Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B0058u;
            // 0x3b005c: 0x8e620004  lw          $v0, 0x4($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B03C8u;
            goto label_3b03c8;
        }
    }
    ctx->pc = 0x3B0060u;
    // 0x3b0060: 0x8eb00528  lw          $s0, 0x528($s5)
    ctx->pc = 0x3b0060u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1320)));
    // 0x3b0064: 0xc0ec620  jal         func_3B1880
    ctx->pc = 0x3B0064u;
    SET_GPR_U32(ctx, 31, 0x3B006Cu);
    ctx->pc = 0x3B0068u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0064u;
    // 0x3b0068: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1880u, 0x3B0064u, 0x3B006Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B006Cu;
label_3b006c:
    // 0x3b006c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3b006cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3b0070: 0xc1036d0  jal         func_40DB40
    ctx->pc = 0x3B0070u;
    SET_GPR_U32(ctx, 31, 0x3B0078u);
    ctx->pc = 0x3B0074u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0070u;
    // 0x3b0074: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB40u, 0x3B0070u, 0x3B0078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0078u;
label_3b0078:
    // 0x3b0078: 0xae100018  sw          $s0, 0x18($s0)
    ctx->pc = 0x3b0078u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 16));
    // 0x3b007c: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x3b007cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0080: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x3b0080u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x3b0084: 0x8eb20528  lw          $s2, 0x528($s5)
    ctx->pc = 0x3b0084u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1320)));
    // 0x3b0088: 0xae16000c  sw          $s6, 0xC($s0)
    ctx->pc = 0x3b0088u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 22));
    // 0x3b008c: 0xc0ebf52  jal         func_3AFD48
    ctx->pc = 0x3B008Cu;
    SET_GPR_U32(ctx, 31, 0x3B0094u);
    ctx->pc = 0x3B0090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B008Cu;
    // 0x3b0090: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFD48u, 0x3B008Cu, 0x3B0094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0094u;
label_3b0094:
    // 0x3b0094: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x3b0094u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x3b0098: 0x54740004  bnel        $v1, $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B0098u;
    {
        const bool branch_taken_0x3b0098 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 20));
        if (branch_taken_0x3b0098) {
            ctx->pc = 0x3B009Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B0098u;
            // 0x3b009c: 0x8e500000  lw          $s0, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B00ACu;
            goto label_3b00ac;
        }
    }
    ctx->pc = 0x3B00A0u;
    // 0x3b00a0: 0xc1036d2  jal         func_40DB48
    ctx->pc = 0x3B00A0u;
    SET_GPR_U32(ctx, 31, 0x3B00A8u);
    ctx->pc = 0x3B00A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B00A0u;
    // 0x3b00a4: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB48u, 0x3B00A0u, 0x3B00A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B00A8u;
label_3b00a8:
    // 0x3b00a8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b00a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b00ac:
    // 0x3b00ac: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x3b00acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x3b00b0: 0x14540003  bne         $v0, $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B00B0u;
    {
        const bool branch_taken_0x3b00b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x3b00b0) {
            ctx->pc = 0x3B00C0u;
            goto label_3b00c0;
        }
    }
    ctx->pc = 0x3B00B8u;
    // 0x3b00b8: 0xc10376a  jal         func_40DDA8
    ctx->pc = 0x3B00B8u;
    SET_GPR_U32(ctx, 31, 0x3B00C0u);
    ctx->pc = 0x3B00BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B00B8u;
    // 0x3b00bc: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DDA8u, 0x3B00B8u, 0x3B00C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B00C0u;
label_3b00c0:
    // 0x3b00c0: 0x5840018c  blezl       $v0, . + 4 + (0x18C << 2)
    ctx->pc = 0x3B00C0u;
    {
        const bool branch_taken_0x3b00c0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3b00c0) {
            ctx->pc = 0x3B00C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B00C0u;
            // 0x3b00c4: 0x8e730014  lw          $s3, 0x14($s3) (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B06F4u;
            goto label_3b06f4;
        }
    }
    ctx->pc = 0x3B00C8u;
    // 0x3b00c8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3b00c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b00cc: 0x51023  negu        $v0, $a1
    ctx->pc = 0x3b00ccu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x3b00d0: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x3b00d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x3b00d4: 0x10600054  beqz        $v1, . + 4 + (0x54 << 2)
    ctx->pc = 0x3B00D4u;
    {
        const bool branch_taken_0x3b00d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B00D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B00D4u;
        // 0x3b00d8: 0x26040008  addiu       $a0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b00d4) {
            ctx->pc = 0x3B0228u;
            goto label_3b0228;
        }
    }
    ctx->pc = 0x3B00DCu;
    // 0x3b00dc: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3b00dcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3b00e0: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x3B00E0u;
    {
        const bool branch_taken_0x3b00e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B00E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B00E0u;
        // 0x3b00e4: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b00e0) {
            ctx->pc = 0x3B01BCu;
            goto label_3b01bc;
        }
    }
    ctx->pc = 0x3B00E8u;
    // 0x3b00e8: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x3B00E8u;
    {
        const bool branch_taken_0x3b00e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B00ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B00E8u;
        // 0x3b00ec: 0xc481fffc  lwc1        $f1, -0x4($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b00e8) {
            ctx->pc = 0x3B0158u;
            goto label_3b0158;
        }
    }
    ctx->pc = 0x3B00F0u;
    // 0x3b00f0: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x3b00f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b00f4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3b00f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b00f8: 0x0  nop
    ctx->pc = 0x3b00f8u;
    // NOP
    // 0x3b00fc: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x3B00FCu;
    {
        const bool branch_taken_0x3b00fc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b00fc) {
            ctx->pc = 0x3B0100u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B00FCu;
            // 0x3b0100: 0xc6200008  lwc1        $f0, 0x8($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B010Cu;
            goto label_3b010c;
        }
    }
    ctx->pc = 0x3B0104u;
    // 0x3b0104: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3B0104u;
    {
        const bool branch_taken_0x3b0104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B0108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0104u;
        // 0x3b0108: 0xe6210000  swc1        $f1, 0x0($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0104) {
            ctx->pc = 0x3B011Cu;
            goto label_3b011c;
        }
    }
    ctx->pc = 0x3B010Cu;
label_3b010c:
    // 0x3b010c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3b010cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b0110: 0x0  nop
    ctx->pc = 0x3b0110u;
    // NOP
    // 0x3b0114: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3B0114u;
    {
        const bool branch_taken_0x3b0114 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b0114) {
            ctx->pc = 0x3B0118u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B0114u;
            // 0x3b0118: 0xe6210008  swc1        $f1, 0x8($s1) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B011Cu;
            goto label_3b011c;
        }
    }
    ctx->pc = 0x3B011Cu;
label_3b011c:
    // 0x3b011c: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x3b011cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b0120: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x3b0120u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b0124: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3b0124u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b0128: 0x0  nop
    ctx->pc = 0x3b0128u;
    // NOP
    // 0x3b012c: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x3B012Cu;
    {
        const bool branch_taken_0x3b012c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b012c) {
            ctx->pc = 0x3B0130u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B012Cu;
            // 0x3b0130: 0xc620000c  lwc1        $f0, 0xC($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B013Cu;
            goto label_3b013c;
        }
    }
    ctx->pc = 0x3B0134u;
    // 0x3b0134: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3B0134u;
    {
        const bool branch_taken_0x3b0134 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B0138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0134u;
        // 0x3b0138: 0xe6210004  swc1        $f1, 0x4($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0134) {
            ctx->pc = 0x3B014Cu;
            goto label_3b014c;
        }
    }
    ctx->pc = 0x3B013Cu;
label_3b013c:
    // 0x3b013c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3b013cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b0140: 0x0  nop
    ctx->pc = 0x3b0140u;
    // NOP
    // 0x3b0144: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3B0144u;
    {
        const bool branch_taken_0x3b0144 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b0144) {
            ctx->pc = 0x3B0148u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B0144u;
            // 0x3b0148: 0xe621000c  swc1        $f1, 0xC($s1) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B014Cu;
            goto label_3b014c;
        }
    }
    ctx->pc = 0x3B014Cu;
label_3b014c:
    // 0x3b014c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3b014cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3b0150: 0x24840018  addiu       $a0, $a0, 0x18
    ctx->pc = 0x3b0150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x3b0154: 0xc481fffc  lwc1        $f1, -0x4($a0)
    ctx->pc = 0x3b0154u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b0158:
    // 0x3b0158: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x3b0158u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b015c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3b015cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b0160: 0x0  nop
    ctx->pc = 0x3b0160u;
    // NOP
    // 0x3b0164: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x3B0164u;
    {
        const bool branch_taken_0x3b0164 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b0164) {
            ctx->pc = 0x3B0168u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B0164u;
            // 0x3b0168: 0xc6200008  lwc1        $f0, 0x8($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B0174u;
            goto label_3b0174;
        }
    }
    ctx->pc = 0x3B016Cu;
    // 0x3b016c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3B016Cu;
    {
        const bool branch_taken_0x3b016c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B0170u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B016Cu;
        // 0x3b0170: 0xe6210000  swc1        $f1, 0x0($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b016c) {
            ctx->pc = 0x3B0184u;
            goto label_3b0184;
        }
    }
    ctx->pc = 0x3B0174u;
label_3b0174:
    // 0x3b0174: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3b0174u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b0178: 0x0  nop
    ctx->pc = 0x3b0178u;
    // NOP
    // 0x3b017c: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3B017Cu;
    {
        const bool branch_taken_0x3b017c = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b017c) {
            ctx->pc = 0x3B0180u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B017Cu;
            // 0x3b0180: 0xe6210008  swc1        $f1, 0x8($s1) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B0184u;
            goto label_3b0184;
        }
    }
    ctx->pc = 0x3B0184u;
label_3b0184:
    // 0x3b0184: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x3b0184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b0188: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x3b0188u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b018c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3b018cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b0190: 0x0  nop
    ctx->pc = 0x3b0190u;
    // NOP
    // 0x3b0194: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x3B0194u;
    {
        const bool branch_taken_0x3b0194 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b0194) {
            ctx->pc = 0x3B0198u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B0194u;
            // 0x3b0198: 0xc620000c  lwc1        $f0, 0xC($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B01A4u;
            goto label_3b01a4;
        }
    }
    ctx->pc = 0x3B019Cu;
    // 0x3b019c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3B019Cu;
    {
        const bool branch_taken_0x3b019c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B01A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B019Cu;
        // 0x3b01a0: 0xe6210004  swc1        $f1, 0x4($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b019c) {
            ctx->pc = 0x3B01B4u;
            goto label_3b01b4;
        }
    }
    ctx->pc = 0x3B01A4u;
label_3b01a4:
    // 0x3b01a4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3b01a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b01a8: 0x0  nop
    ctx->pc = 0x3b01a8u;
    // NOP
    // 0x3b01ac: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3B01ACu;
    {
        const bool branch_taken_0x3b01ac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b01ac) {
            ctx->pc = 0x3B01B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B01ACu;
            // 0x3b01b0: 0xe621000c  swc1        $f1, 0xC($s1) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B01B4u;
            goto label_3b01b4;
        }
    }
    ctx->pc = 0x3B01B4u;
label_3b01b4:
    // 0x3b01b4: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3b01b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3b01b8: 0x24840018  addiu       $a0, $a0, 0x18
    ctx->pc = 0x3b01b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
label_3b01bc:
    // 0x3b01bc: 0xc481fffc  lwc1        $f1, -0x4($a0)
    ctx->pc = 0x3b01bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b01c0: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x3b01c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b01c4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3b01c4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b01c8: 0x0  nop
    ctx->pc = 0x3b01c8u;
    // NOP
    // 0x3b01cc: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x3B01CCu;
    {
        const bool branch_taken_0x3b01cc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b01cc) {
            ctx->pc = 0x3B01D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B01CCu;
            // 0x3b01d0: 0xc6200008  lwc1        $f0, 0x8($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B01DCu;
            goto label_3b01dc;
        }
    }
    ctx->pc = 0x3B01D4u;
    // 0x3b01d4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3B01D4u;
    {
        const bool branch_taken_0x3b01d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B01D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B01D4u;
        // 0x3b01d8: 0xe6210000  swc1        $f1, 0x0($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b01d4) {
            ctx->pc = 0x3B01ECu;
            goto label_3b01ec;
        }
    }
    ctx->pc = 0x3B01DCu;
label_3b01dc:
    // 0x3b01dc: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3b01dcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b01e0: 0x0  nop
    ctx->pc = 0x3b01e0u;
    // NOP
    // 0x3b01e4: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3B01E4u;
    {
        const bool branch_taken_0x3b01e4 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b01e4) {
            ctx->pc = 0x3B01E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B01E4u;
            // 0x3b01e8: 0xe6210008  swc1        $f1, 0x8($s1) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B01ECu;
            goto label_3b01ec;
        }
    }
    ctx->pc = 0x3B01ECu;
label_3b01ec:
    // 0x3b01ec: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x3b01ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b01f0: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x3b01f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b01f4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3b01f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b01f8: 0x0  nop
    ctx->pc = 0x3b01f8u;
    // NOP
    // 0x3b01fc: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x3B01FCu;
    {
        const bool branch_taken_0x3b01fc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b01fc) {
            ctx->pc = 0x3B0200u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B01FCu;
            // 0x3b0200: 0xc620000c  lwc1        $f0, 0xC($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B020Cu;
            goto label_3b020c;
        }
    }
    ctx->pc = 0x3B0204u;
    // 0x3b0204: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3B0204u;
    {
        const bool branch_taken_0x3b0204 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B0208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0204u;
        // 0x3b0208: 0xe6210004  swc1        $f1, 0x4($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0204) {
            ctx->pc = 0x3B021Cu;
            goto label_3b021c;
        }
    }
    ctx->pc = 0x3B020Cu;
label_3b020c:
    // 0x3b020c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3b020cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b0210: 0x0  nop
    ctx->pc = 0x3b0210u;
    // NOP
    // 0x3b0214: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3B0214u;
    {
        const bool branch_taken_0x3b0214 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b0214) {
            ctx->pc = 0x3B0218u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B0214u;
            // 0x3b0218: 0xe621000c  swc1        $f1, 0xC($s1) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B021Cu;
            goto label_3b021c;
        }
    }
    ctx->pc = 0x3B021Cu;
label_3b021c:
    // 0x3b021c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3b021cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3b0220: 0x10a00133  beqz        $a1, . + 4 + (0x133 << 2)
    ctx->pc = 0x3B0220u;
    {
        const bool branch_taken_0x3b0220 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B0224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0220u;
        // 0x3b0224: 0x24840018  addiu       $a0, $a0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0220) {
            ctx->pc = 0x3B06F0u;
            goto label_3b06f0;
        }
    }
    ctx->pc = 0x3B0228u;
label_3b0228:
    // 0x3b0228: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3b0228u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b022c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3b022cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b0230:
    // 0x3b0230: 0xc461fffc  lwc1        $f1, -0x4($v1)
    ctx->pc = 0x3b0230u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b0234: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x3b0234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b0238: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3b0238u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b023c: 0x0  nop
    ctx->pc = 0x3b023cu;
    // NOP
    // 0x3b0240: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x3B0240u;
    {
        const bool branch_taken_0x3b0240 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b0240) {
            ctx->pc = 0x3B0244u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B0240u;
            // 0x3b0244: 0xc6200008  lwc1        $f0, 0x8($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B0250u;
            goto label_3b0250;
        }
    }
    ctx->pc = 0x3B0248u;
    // 0x3b0248: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3B0248u;
    {
        const bool branch_taken_0x3b0248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B024Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0248u;
        // 0x3b024c: 0xe6210000  swc1        $f1, 0x0($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0248) {
            ctx->pc = 0x3B0260u;
            goto label_3b0260;
        }
    }
    ctx->pc = 0x3B0250u;
label_3b0250:
    // 0x3b0250: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3b0250u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b0254: 0x0  nop
    ctx->pc = 0x3b0254u;
    // NOP
    // 0x3b0258: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3B0258u;
    {
        const bool branch_taken_0x3b0258 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b0258) {
            ctx->pc = 0x3B025Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B0258u;
            // 0x3b025c: 0xe6210008  swc1        $f1, 0x8($s1) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B0260u;
            goto label_3b0260;
        }
    }
    ctx->pc = 0x3B0260u;
label_3b0260:
    // 0x3b0260: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x3b0260u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b0264: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x3b0264u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b0268: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3b0268u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b026c: 0x0  nop
    ctx->pc = 0x3b026cu;
    // NOP
    // 0x3b0270: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x3B0270u;
    {
        const bool branch_taken_0x3b0270 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b0270) {
            ctx->pc = 0x3B0274u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B0270u;
            // 0x3b0274: 0xc620000c  lwc1        $f0, 0xC($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B0280u;
            goto label_3b0280;
        }
    }
    ctx->pc = 0x3B0278u;
    // 0x3b0278: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3B0278u;
    {
        const bool branch_taken_0x3b0278 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B027Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0278u;
        // 0x3b027c: 0xe6210004  swc1        $f1, 0x4($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0278) {
            ctx->pc = 0x3B0290u;
            goto label_3b0290;
        }
    }
    ctx->pc = 0x3B0280u;
label_3b0280:
    // 0x3b0280: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3b0280u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b0284: 0x0  nop
    ctx->pc = 0x3b0284u;
    // NOP
    // 0x3b0288: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3B0288u;
    {
        const bool branch_taken_0x3b0288 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b0288) {
            ctx->pc = 0x3B028Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B0288u;
            // 0x3b028c: 0xe621000c  swc1        $f1, 0xC($s1) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B0290u;
            goto label_3b0290;
        }
    }
    ctx->pc = 0x3B0290u;
label_3b0290:
    // 0x3b0290: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x3b0290u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b0294: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x3b0294u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b0298: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3b0298u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b029c: 0x0  nop
    ctx->pc = 0x3b029cu;
    // NOP
    // 0x3b02a0: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x3B02A0u;
    {
        const bool branch_taken_0x3b02a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b02a0) {
            ctx->pc = 0x3B02A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B02A0u;
            // 0x3b02a4: 0xc6200008  lwc1        $f0, 0x8($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B02B0u;
            goto label_3b02b0;
        }
    }
    ctx->pc = 0x3B02A8u;
    // 0x3b02a8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3B02A8u;
    {
        const bool branch_taken_0x3b02a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B02ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B02A8u;
        // 0x3b02ac: 0xe6210000  swc1        $f1, 0x0($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b02a8) {
            ctx->pc = 0x3B02C0u;
            goto label_3b02c0;
        }
    }
    ctx->pc = 0x3B02B0u;
label_3b02b0:
    // 0x3b02b0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3b02b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b02b4: 0x0  nop
    ctx->pc = 0x3b02b4u;
    // NOP
    // 0x3b02b8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3B02B8u;
    {
        const bool branch_taken_0x3b02b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b02b8) {
            ctx->pc = 0x3B02BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B02B8u;
            // 0x3b02bc: 0xe6210008  swc1        $f1, 0x8($s1) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B02C0u;
            goto label_3b02c0;
        }
    }
    ctx->pc = 0x3B02C0u;
label_3b02c0:
    // 0x3b02c0: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x3b02c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b02c4: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x3b02c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b02c8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3b02c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b02cc: 0x0  nop
    ctx->pc = 0x3b02ccu;
    // NOP
    // 0x3b02d0: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x3B02D0u;
    {
        const bool branch_taken_0x3b02d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b02d0) {
            ctx->pc = 0x3B02D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B02D0u;
            // 0x3b02d4: 0xc620000c  lwc1        $f0, 0xC($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B02E0u;
            goto label_3b02e0;
        }
    }
    ctx->pc = 0x3B02D8u;
    // 0x3b02d8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3B02D8u;
    {
        const bool branch_taken_0x3b02d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B02DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B02D8u;
        // 0x3b02dc: 0xe6210004  swc1        $f1, 0x4($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b02d8) {
            ctx->pc = 0x3B02F0u;
            goto label_3b02f0;
        }
    }
    ctx->pc = 0x3B02E0u;
label_3b02e0:
    // 0x3b02e0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3b02e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b02e4: 0x0  nop
    ctx->pc = 0x3b02e4u;
    // NOP
    // 0x3b02e8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3B02E8u;
    {
        const bool branch_taken_0x3b02e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b02e8) {
            ctx->pc = 0x3B02ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B02E8u;
            // 0x3b02ec: 0xe621000c  swc1        $f1, 0xC($s1) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B02F0u;
            goto label_3b02f0;
        }
    }
    ctx->pc = 0x3B02F0u;
label_3b02f0:
    // 0x3b02f0: 0xc461002c  lwc1        $f1, 0x2C($v1)
    ctx->pc = 0x3b02f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b02f4: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x3b02f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b02f8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3b02f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b02fc: 0x0  nop
    ctx->pc = 0x3b02fcu;
    // NOP
    // 0x3b0300: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x3B0300u;
    {
        const bool branch_taken_0x3b0300 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b0300) {
            ctx->pc = 0x3B0304u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B0300u;
            // 0x3b0304: 0xc6200008  lwc1        $f0, 0x8($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B0310u;
            goto label_3b0310;
        }
    }
    ctx->pc = 0x3B0308u;
    // 0x3b0308: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3B0308u;
    {
        const bool branch_taken_0x3b0308 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B030Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0308u;
        // 0x3b030c: 0xe6210000  swc1        $f1, 0x0($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0308) {
            ctx->pc = 0x3B0320u;
            goto label_3b0320;
        }
    }
    ctx->pc = 0x3B0310u;
label_3b0310:
    // 0x3b0310: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3b0310u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b0314: 0x0  nop
    ctx->pc = 0x3b0314u;
    // NOP
    // 0x3b0318: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3B0318u;
    {
        const bool branch_taken_0x3b0318 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b0318) {
            ctx->pc = 0x3B031Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B0318u;
            // 0x3b031c: 0xe6210008  swc1        $f1, 0x8($s1) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B0320u;
            goto label_3b0320;
        }
    }
    ctx->pc = 0x3B0320u;
label_3b0320:
    // 0x3b0320: 0xc4410030  lwc1        $f1, 0x30($v0)
    ctx->pc = 0x3b0320u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b0324: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x3b0324u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b0328: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3b0328u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b032c: 0x0  nop
    ctx->pc = 0x3b032cu;
    // NOP
    // 0x3b0330: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x3B0330u;
    {
        const bool branch_taken_0x3b0330 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b0330) {
            ctx->pc = 0x3B0334u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B0330u;
            // 0x3b0334: 0xc620000c  lwc1        $f0, 0xC($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B0340u;
            goto label_3b0340;
        }
    }
    ctx->pc = 0x3B0338u;
    // 0x3b0338: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3B0338u;
    {
        const bool branch_taken_0x3b0338 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B033Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0338u;
        // 0x3b033c: 0xe6210004  swc1        $f1, 0x4($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0338) {
            ctx->pc = 0x3B0350u;
            goto label_3b0350;
        }
    }
    ctx->pc = 0x3B0340u;
label_3b0340:
    // 0x3b0340: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3b0340u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b0344: 0x0  nop
    ctx->pc = 0x3b0344u;
    // NOP
    // 0x3b0348: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3B0348u;
    {
        const bool branch_taken_0x3b0348 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b0348) {
            ctx->pc = 0x3B034Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B0348u;
            // 0x3b034c: 0xe621000c  swc1        $f1, 0xC($s1) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B0350u;
            goto label_3b0350;
        }
    }
    ctx->pc = 0x3B0350u;
label_3b0350:
    // 0x3b0350: 0xc4610044  lwc1        $f1, 0x44($v1)
    ctx->pc = 0x3b0350u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b0354: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x3b0354u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b0358: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3b0358u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b035c: 0x0  nop
    ctx->pc = 0x3b035cu;
    // NOP
    // 0x3b0360: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x3B0360u;
    {
        const bool branch_taken_0x3b0360 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b0360) {
            ctx->pc = 0x3B0364u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B0360u;
            // 0x3b0364: 0xc6200008  lwc1        $f0, 0x8($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B0370u;
            goto label_3b0370;
        }
    }
    ctx->pc = 0x3B0368u;
    // 0x3b0368: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3B0368u;
    {
        const bool branch_taken_0x3b0368 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B036Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0368u;
        // 0x3b036c: 0xe6210000  swc1        $f1, 0x0($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0368) {
            ctx->pc = 0x3B0380u;
            goto label_3b0380;
        }
    }
    ctx->pc = 0x3B0370u;
label_3b0370:
    // 0x3b0370: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3b0370u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b0374: 0x0  nop
    ctx->pc = 0x3b0374u;
    // NOP
    // 0x3b0378: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3B0378u;
    {
        const bool branch_taken_0x3b0378 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b0378) {
            ctx->pc = 0x3B037Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B0378u;
            // 0x3b037c: 0xe6210008  swc1        $f1, 0x8($s1) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B0380u;
            goto label_3b0380;
        }
    }
    ctx->pc = 0x3B0380u;
label_3b0380:
    // 0x3b0380: 0xc4410048  lwc1        $f1, 0x48($v0)
    ctx->pc = 0x3b0380u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b0384: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x3b0384u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b0388: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3b0388u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b038c: 0x0  nop
    ctx->pc = 0x3b038cu;
    // NOP
    // 0x3b0390: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x3B0390u;
    {
        const bool branch_taken_0x3b0390 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b0390) {
            ctx->pc = 0x3B0394u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B0390u;
            // 0x3b0394: 0xc620000c  lwc1        $f0, 0xC($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B03A0u;
            goto label_3b03a0;
        }
    }
    ctx->pc = 0x3B0398u;
    // 0x3b0398: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3B0398u;
    {
        const bool branch_taken_0x3b0398 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B039Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0398u;
        // 0x3b039c: 0xe6210004  swc1        $f1, 0x4($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0398) {
            ctx->pc = 0x3B03B0u;
            goto label_3b03b0;
        }
    }
    ctx->pc = 0x3B03A0u;
label_3b03a0:
    // 0x3b03a0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3b03a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b03a4: 0x0  nop
    ctx->pc = 0x3b03a4u;
    // NOP
    // 0x3b03a8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3B03A8u;
    {
        const bool branch_taken_0x3b03a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b03a8) {
            ctx->pc = 0x3B03ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B03A8u;
            // 0x3b03ac: 0xe621000c  swc1        $f1, 0xC($s1) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B03B0u;
            goto label_3b03b0;
        }
    }
    ctx->pc = 0x3B03B0u;
label_3b03b0:
    // 0x3b03b0: 0x24a5fffc  addiu       $a1, $a1, -0x4
    ctx->pc = 0x3b03b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
    // 0x3b03b4: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x3b03b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x3b03b8: 0x14a0ff9d  bnez        $a1, . + 4 + (-0x63 << 2)
    ctx->pc = 0x3B03B8u;
    {
        const bool branch_taken_0x3b03b8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B03BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B03B8u;
        // 0x3b03bc: 0x24630060  addiu       $v1, $v1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b03b8) {
            ctx->pc = 0x3B0230u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b0230;
        }
    }
    ctx->pc = 0x3B03C0u;
    // 0x3b03c0: 0x100000cc  b           . + 4 + (0xCC << 2)
    ctx->pc = 0x3B03C0u;
    {
        const bool branch_taken_0x3b03c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B03C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B03C0u;
        // 0x3b03c4: 0x8e730014  lw          $s3, 0x14($s3) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b03c0) {
            ctx->pc = 0x3B06F4u;
            goto label_3b06f4;
        }
    }
    ctx->pc = 0x3B03C8u;
label_3b03c8:
    // 0x3b03c8: 0x54540004  bnel        $v0, $s4, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B03C8u;
    {
        const bool branch_taken_0x3b03c8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x3b03c8) {
            ctx->pc = 0x3B03CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B03C8u;
            // 0x3b03cc: 0x8e700000  lw          $s0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B03DCu;
            goto label_3b03dc;
        }
    }
    ctx->pc = 0x3B03D0u;
    // 0x3b03d0: 0xc1036d2  jal         func_40DB48
    ctx->pc = 0x3B03D0u;
    SET_GPR_U32(ctx, 31, 0x3B03D8u);
    ctx->pc = 0x3B03D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B03D0u;
    // 0x3b03d4: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB48u, 0x3B03D0u, 0x3B03D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B03D8u;
label_3b03d8:
    // 0x3b03d8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b03d8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b03dc:
    // 0x3b03dc: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x3b03dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x3b03e0: 0x14540003  bne         $v0, $s4, . + 4 + (0x3 << 2)
    ctx->pc = 0x3B03E0u;
    {
        const bool branch_taken_0x3b03e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 20));
        if (branch_taken_0x3b03e0) {
            ctx->pc = 0x3B03F0u;
            goto label_3b03f0;
        }
    }
    ctx->pc = 0x3B03E8u;
    // 0x3b03e8: 0xc10376a  jal         func_40DDA8
    ctx->pc = 0x3B03E8u;
    SET_GPR_U32(ctx, 31, 0x3B03F0u);
    ctx->pc = 0x3B03ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B03E8u;
    // 0x3b03ec: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DDA8u, 0x3B03E8u, 0x3B03F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B03F0u;
label_3b03f0:
    // 0x3b03f0: 0x584000c0  blezl       $v0, . + 4 + (0xC0 << 2)
    ctx->pc = 0x3B03F0u;
    {
        const bool branch_taken_0x3b03f0 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x3b03f0) {
            ctx->pc = 0x3B03F4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B03F0u;
            // 0x3b03f4: 0x8e730014  lw          $s3, 0x14($s3) (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B06F4u;
            goto label_3b06f4;
        }
    }
    ctx->pc = 0x3B03F8u;
    // 0x3b03f8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3b03f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b03fc: 0x51023  negu        $v0, $a1
    ctx->pc = 0x3b03fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 5)));
    // 0x3b0400: 0x30430003  andi        $v1, $v0, 0x3
    ctx->pc = 0x3b0400u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x3b0404: 0x10600054  beqz        $v1, . + 4 + (0x54 << 2)
    ctx->pc = 0x3B0404u;
    {
        const bool branch_taken_0x3b0404 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B0408u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0404u;
        // 0x3b0408: 0x26040008  addiu       $a0, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0404) {
            ctx->pc = 0x3B0558u;
            goto label_3b0558;
        }
    }
    ctx->pc = 0x3B040Cu;
    // 0x3b040c: 0x28620003  slti        $v0, $v1, 0x3
    ctx->pc = 0x3b040cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x3b0410: 0x10400036  beqz        $v0, . + 4 + (0x36 << 2)
    ctx->pc = 0x3B0410u;
    {
        const bool branch_taken_0x3b0410 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B0414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0410u;
        // 0x3b0414: 0x28620002  slti        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0410) {
            ctx->pc = 0x3B04ECu;
            goto label_3b04ec;
        }
    }
    ctx->pc = 0x3B0418u;
    // 0x3b0418: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x3B0418u;
    {
        const bool branch_taken_0x3b0418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B041Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0418u;
        // 0x3b041c: 0xc481fffc  lwc1        $f1, -0x4($a0) (Delay Slot)
        { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0418) {
            ctx->pc = 0x3B0488u;
            goto label_3b0488;
        }
    }
    ctx->pc = 0x3B0420u;
    // 0x3b0420: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x3b0420u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b0424: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3b0424u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b0428: 0x0  nop
    ctx->pc = 0x3b0428u;
    // NOP
    // 0x3b042c: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x3B042Cu;
    {
        const bool branch_taken_0x3b042c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b042c) {
            ctx->pc = 0x3B0430u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B042Cu;
            // 0x3b0430: 0xc6200008  lwc1        $f0, 0x8($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B043Cu;
            goto label_3b043c;
        }
    }
    ctx->pc = 0x3B0434u;
    // 0x3b0434: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3B0434u;
    {
        const bool branch_taken_0x3b0434 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B0438u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0434u;
        // 0x3b0438: 0xe6210000  swc1        $f1, 0x0($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0434) {
            ctx->pc = 0x3B044Cu;
            goto label_3b044c;
        }
    }
    ctx->pc = 0x3B043Cu;
label_3b043c:
    // 0x3b043c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3b043cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b0440: 0x0  nop
    ctx->pc = 0x3b0440u;
    // NOP
    // 0x3b0444: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3B0444u;
    {
        const bool branch_taken_0x3b0444 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b0444) {
            ctx->pc = 0x3B0448u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B0444u;
            // 0x3b0448: 0xe6210008  swc1        $f1, 0x8($s1) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B044Cu;
            goto label_3b044c;
        }
    }
    ctx->pc = 0x3B044Cu;
label_3b044c:
    // 0x3b044c: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x3b044cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b0450: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x3b0450u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b0454: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3b0454u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b0458: 0x0  nop
    ctx->pc = 0x3b0458u;
    // NOP
    // 0x3b045c: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x3B045Cu;
    {
        const bool branch_taken_0x3b045c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b045c) {
            ctx->pc = 0x3B0460u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B045Cu;
            // 0x3b0460: 0xc620000c  lwc1        $f0, 0xC($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B046Cu;
            goto label_3b046c;
        }
    }
    ctx->pc = 0x3B0464u;
    // 0x3b0464: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3B0464u;
    {
        const bool branch_taken_0x3b0464 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B0468u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0464u;
        // 0x3b0468: 0xe6210004  swc1        $f1, 0x4($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0464) {
            ctx->pc = 0x3B047Cu;
            goto label_3b047c;
        }
    }
    ctx->pc = 0x3B046Cu;
label_3b046c:
    // 0x3b046c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3b046cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b0470: 0x0  nop
    ctx->pc = 0x3b0470u;
    // NOP
    // 0x3b0474: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3B0474u;
    {
        const bool branch_taken_0x3b0474 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b0474) {
            ctx->pc = 0x3B0478u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B0474u;
            // 0x3b0478: 0xe621000c  swc1        $f1, 0xC($s1) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B047Cu;
            goto label_3b047c;
        }
    }
    ctx->pc = 0x3B047Cu;
label_3b047c:
    // 0x3b047c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3b047cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3b0480: 0x24840018  addiu       $a0, $a0, 0x18
    ctx->pc = 0x3b0480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
    // 0x3b0484: 0xc481fffc  lwc1        $f1, -0x4($a0)
    ctx->pc = 0x3b0484u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_3b0488:
    // 0x3b0488: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x3b0488u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b048c: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3b048cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b0490: 0x0  nop
    ctx->pc = 0x3b0490u;
    // NOP
    // 0x3b0494: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x3B0494u;
    {
        const bool branch_taken_0x3b0494 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b0494) {
            ctx->pc = 0x3B0498u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B0494u;
            // 0x3b0498: 0xc6200008  lwc1        $f0, 0x8($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B04A4u;
            goto label_3b04a4;
        }
    }
    ctx->pc = 0x3B049Cu;
    // 0x3b049c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3B049Cu;
    {
        const bool branch_taken_0x3b049c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B04A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B049Cu;
        // 0x3b04a0: 0xe6210000  swc1        $f1, 0x0($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b049c) {
            ctx->pc = 0x3B04B4u;
            goto label_3b04b4;
        }
    }
    ctx->pc = 0x3B04A4u;
label_3b04a4:
    // 0x3b04a4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3b04a4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b04a8: 0x0  nop
    ctx->pc = 0x3b04a8u;
    // NOP
    // 0x3b04ac: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3B04ACu;
    {
        const bool branch_taken_0x3b04ac = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b04ac) {
            ctx->pc = 0x3B04B0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B04ACu;
            // 0x3b04b0: 0xe6210008  swc1        $f1, 0x8($s1) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B04B4u;
            goto label_3b04b4;
        }
    }
    ctx->pc = 0x3B04B4u;
label_3b04b4:
    // 0x3b04b4: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x3b04b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b04b8: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x3b04b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b04bc: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3b04bcu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b04c0: 0x0  nop
    ctx->pc = 0x3b04c0u;
    // NOP
    // 0x3b04c4: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x3B04C4u;
    {
        const bool branch_taken_0x3b04c4 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b04c4) {
            ctx->pc = 0x3B04C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B04C4u;
            // 0x3b04c8: 0xc620000c  lwc1        $f0, 0xC($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B04D4u;
            goto label_3b04d4;
        }
    }
    ctx->pc = 0x3B04CCu;
    // 0x3b04cc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3B04CCu;
    {
        const bool branch_taken_0x3b04cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B04D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B04CCu;
        // 0x3b04d0: 0xe6210004  swc1        $f1, 0x4($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b04cc) {
            ctx->pc = 0x3B04E4u;
            goto label_3b04e4;
        }
    }
    ctx->pc = 0x3B04D4u;
label_3b04d4:
    // 0x3b04d4: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3b04d4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b04d8: 0x0  nop
    ctx->pc = 0x3b04d8u;
    // NOP
    // 0x3b04dc: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3B04DCu;
    {
        const bool branch_taken_0x3b04dc = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b04dc) {
            ctx->pc = 0x3B04E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B04DCu;
            // 0x3b04e0: 0xe621000c  swc1        $f1, 0xC($s1) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B04E4u;
            goto label_3b04e4;
        }
    }
    ctx->pc = 0x3B04E4u;
label_3b04e4:
    // 0x3b04e4: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3b04e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3b04e8: 0x24840018  addiu       $a0, $a0, 0x18
    ctx->pc = 0x3b04e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
label_3b04ec:
    // 0x3b04ec: 0xc481fffc  lwc1        $f1, -0x4($a0)
    ctx->pc = 0x3b04ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b04f0: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x3b04f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b04f4: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3b04f4u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b04f8: 0x0  nop
    ctx->pc = 0x3b04f8u;
    // NOP
    // 0x3b04fc: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x3B04FCu;
    {
        const bool branch_taken_0x3b04fc = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b04fc) {
            ctx->pc = 0x3B0500u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B04FCu;
            // 0x3b0500: 0xc6200008  lwc1        $f0, 0x8($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B050Cu;
            goto label_3b050c;
        }
    }
    ctx->pc = 0x3B0504u;
    // 0x3b0504: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3B0504u;
    {
        const bool branch_taken_0x3b0504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B0508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0504u;
        // 0x3b0508: 0xe6210000  swc1        $f1, 0x0($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0504) {
            ctx->pc = 0x3B051Cu;
            goto label_3b051c;
        }
    }
    ctx->pc = 0x3B050Cu;
label_3b050c:
    // 0x3b050c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3b050cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b0510: 0x0  nop
    ctx->pc = 0x3b0510u;
    // NOP
    // 0x3b0514: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3B0514u;
    {
        const bool branch_taken_0x3b0514 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b0514) {
            ctx->pc = 0x3B0518u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B0514u;
            // 0x3b0518: 0xe6210008  swc1        $f1, 0x8($s1) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B051Cu;
            goto label_3b051c;
        }
    }
    ctx->pc = 0x3B051Cu;
label_3b051c:
    // 0x3b051c: 0xc4810000  lwc1        $f1, 0x0($a0)
    ctx->pc = 0x3b051cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b0520: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x3b0520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b0524: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3b0524u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b0528: 0x0  nop
    ctx->pc = 0x3b0528u;
    // NOP
    // 0x3b052c: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x3B052Cu;
    {
        const bool branch_taken_0x3b052c = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b052c) {
            ctx->pc = 0x3B0530u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B052Cu;
            // 0x3b0530: 0xc620000c  lwc1        $f0, 0xC($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B053Cu;
            goto label_3b053c;
        }
    }
    ctx->pc = 0x3B0534u;
    // 0x3b0534: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3B0534u;
    {
        const bool branch_taken_0x3b0534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B0538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0534u;
        // 0x3b0538: 0xe6210004  swc1        $f1, 0x4($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0534) {
            ctx->pc = 0x3B054Cu;
            goto label_3b054c;
        }
    }
    ctx->pc = 0x3B053Cu;
label_3b053c:
    // 0x3b053c: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3b053cu;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b0540: 0x0  nop
    ctx->pc = 0x3b0540u;
    // NOP
    // 0x3b0544: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3B0544u;
    {
        const bool branch_taken_0x3b0544 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b0544) {
            ctx->pc = 0x3B0548u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B0544u;
            // 0x3b0548: 0xe621000c  swc1        $f1, 0xC($s1) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B054Cu;
            goto label_3b054c;
        }
    }
    ctx->pc = 0x3B054Cu;
label_3b054c:
    // 0x3b054c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x3b054cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3b0550: 0x10a00067  beqz        $a1, . + 4 + (0x67 << 2)
    ctx->pc = 0x3B0550u;
    {
        const bool branch_taken_0x3b0550 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B0554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0550u;
        // 0x3b0554: 0x24840018  addiu       $a0, $a0, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0550) {
            ctx->pc = 0x3B06F0u;
            goto label_3b06f0;
        }
    }
    ctx->pc = 0x3B0558u;
label_3b0558:
    // 0x3b0558: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x3b0558u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b055c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x3b055cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b0560:
    // 0x3b0560: 0xc461fffc  lwc1        $f1, -0x4($v1)
    ctx->pc = 0x3b0560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b0564: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x3b0564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b0568: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3b0568u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b056c: 0x0  nop
    ctx->pc = 0x3b056cu;
    // NOP
    // 0x3b0570: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x3B0570u;
    {
        const bool branch_taken_0x3b0570 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b0570) {
            ctx->pc = 0x3B0574u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B0570u;
            // 0x3b0574: 0xc6200008  lwc1        $f0, 0x8($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B0580u;
            goto label_3b0580;
        }
    }
    ctx->pc = 0x3B0578u;
    // 0x3b0578: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3B0578u;
    {
        const bool branch_taken_0x3b0578 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B057Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0578u;
        // 0x3b057c: 0xe6210000  swc1        $f1, 0x0($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0578) {
            ctx->pc = 0x3B0590u;
            goto label_3b0590;
        }
    }
    ctx->pc = 0x3B0580u;
label_3b0580:
    // 0x3b0580: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3b0580u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b0584: 0x0  nop
    ctx->pc = 0x3b0584u;
    // NOP
    // 0x3b0588: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3B0588u;
    {
        const bool branch_taken_0x3b0588 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b0588) {
            ctx->pc = 0x3B058Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B0588u;
            // 0x3b058c: 0xe6210008  swc1        $f1, 0x8($s1) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B0590u;
            goto label_3b0590;
        }
    }
    ctx->pc = 0x3B0590u;
label_3b0590:
    // 0x3b0590: 0xc4410000  lwc1        $f1, 0x0($v0)
    ctx->pc = 0x3b0590u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b0594: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x3b0594u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b0598: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3b0598u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b059c: 0x0  nop
    ctx->pc = 0x3b059cu;
    // NOP
    // 0x3b05a0: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x3B05A0u;
    {
        const bool branch_taken_0x3b05a0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b05a0) {
            ctx->pc = 0x3B05A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B05A0u;
            // 0x3b05a4: 0xc620000c  lwc1        $f0, 0xC($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B05B0u;
            goto label_3b05b0;
        }
    }
    ctx->pc = 0x3B05A8u;
    // 0x3b05a8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3B05A8u;
    {
        const bool branch_taken_0x3b05a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B05ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B05A8u;
        // 0x3b05ac: 0xe6210004  swc1        $f1, 0x4($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b05a8) {
            ctx->pc = 0x3B05C0u;
            goto label_3b05c0;
        }
    }
    ctx->pc = 0x3B05B0u;
label_3b05b0:
    // 0x3b05b0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3b05b0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b05b4: 0x0  nop
    ctx->pc = 0x3b05b4u;
    // NOP
    // 0x3b05b8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3B05B8u;
    {
        const bool branch_taken_0x3b05b8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b05b8) {
            ctx->pc = 0x3B05BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B05B8u;
            // 0x3b05bc: 0xe621000c  swc1        $f1, 0xC($s1) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B05C0u;
            goto label_3b05c0;
        }
    }
    ctx->pc = 0x3B05C0u;
label_3b05c0:
    // 0x3b05c0: 0xc4610014  lwc1        $f1, 0x14($v1)
    ctx->pc = 0x3b05c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 20)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b05c4: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x3b05c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b05c8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3b05c8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b05cc: 0x0  nop
    ctx->pc = 0x3b05ccu;
    // NOP
    // 0x3b05d0: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x3B05D0u;
    {
        const bool branch_taken_0x3b05d0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b05d0) {
            ctx->pc = 0x3B05D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B05D0u;
            // 0x3b05d4: 0xc6200008  lwc1        $f0, 0x8($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B05E0u;
            goto label_3b05e0;
        }
    }
    ctx->pc = 0x3B05D8u;
    // 0x3b05d8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3B05D8u;
    {
        const bool branch_taken_0x3b05d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B05DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B05D8u;
        // 0x3b05dc: 0xe6210000  swc1        $f1, 0x0($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b05d8) {
            ctx->pc = 0x3B05F0u;
            goto label_3b05f0;
        }
    }
    ctx->pc = 0x3B05E0u;
label_3b05e0:
    // 0x3b05e0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3b05e0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b05e4: 0x0  nop
    ctx->pc = 0x3b05e4u;
    // NOP
    // 0x3b05e8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3B05E8u;
    {
        const bool branch_taken_0x3b05e8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b05e8) {
            ctx->pc = 0x3B05ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B05E8u;
            // 0x3b05ec: 0xe6210008  swc1        $f1, 0x8($s1) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B05F0u;
            goto label_3b05f0;
        }
    }
    ctx->pc = 0x3B05F0u;
label_3b05f0:
    // 0x3b05f0: 0xc4410018  lwc1        $f1, 0x18($v0)
    ctx->pc = 0x3b05f0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 24)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b05f4: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x3b05f4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b05f8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3b05f8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b05fc: 0x0  nop
    ctx->pc = 0x3b05fcu;
    // NOP
    // 0x3b0600: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x3B0600u;
    {
        const bool branch_taken_0x3b0600 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b0600) {
            ctx->pc = 0x3B0604u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B0600u;
            // 0x3b0604: 0xc620000c  lwc1        $f0, 0xC($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B0610u;
            goto label_3b0610;
        }
    }
    ctx->pc = 0x3B0608u;
    // 0x3b0608: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3B0608u;
    {
        const bool branch_taken_0x3b0608 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B060Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0608u;
        // 0x3b060c: 0xe6210004  swc1        $f1, 0x4($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0608) {
            ctx->pc = 0x3B0620u;
            goto label_3b0620;
        }
    }
    ctx->pc = 0x3B0610u;
label_3b0610:
    // 0x3b0610: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3b0610u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b0614: 0x0  nop
    ctx->pc = 0x3b0614u;
    // NOP
    // 0x3b0618: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3B0618u;
    {
        const bool branch_taken_0x3b0618 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b0618) {
            ctx->pc = 0x3B061Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B0618u;
            // 0x3b061c: 0xe621000c  swc1        $f1, 0xC($s1) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B0620u;
            goto label_3b0620;
        }
    }
    ctx->pc = 0x3B0620u;
label_3b0620:
    // 0x3b0620: 0xc461002c  lwc1        $f1, 0x2C($v1)
    ctx->pc = 0x3b0620u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 44)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b0624: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x3b0624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b0628: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3b0628u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b062c: 0x0  nop
    ctx->pc = 0x3b062cu;
    // NOP
    // 0x3b0630: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x3B0630u;
    {
        const bool branch_taken_0x3b0630 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b0630) {
            ctx->pc = 0x3B0634u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B0630u;
            // 0x3b0634: 0xc6200008  lwc1        $f0, 0x8($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B0640u;
            goto label_3b0640;
        }
    }
    ctx->pc = 0x3B0638u;
    // 0x3b0638: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3B0638u;
    {
        const bool branch_taken_0x3b0638 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B063Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0638u;
        // 0x3b063c: 0xe6210000  swc1        $f1, 0x0($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0638) {
            ctx->pc = 0x3B0650u;
            goto label_3b0650;
        }
    }
    ctx->pc = 0x3B0640u;
label_3b0640:
    // 0x3b0640: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3b0640u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b0644: 0x0  nop
    ctx->pc = 0x3b0644u;
    // NOP
    // 0x3b0648: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3B0648u;
    {
        const bool branch_taken_0x3b0648 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b0648) {
            ctx->pc = 0x3B064Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B0648u;
            // 0x3b064c: 0xe6210008  swc1        $f1, 0x8($s1) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B0650u;
            goto label_3b0650;
        }
    }
    ctx->pc = 0x3B0650u;
label_3b0650:
    // 0x3b0650: 0xc4410030  lwc1        $f1, 0x30($v0)
    ctx->pc = 0x3b0650u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b0654: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x3b0654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b0658: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3b0658u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b065c: 0x0  nop
    ctx->pc = 0x3b065cu;
    // NOP
    // 0x3b0660: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x3B0660u;
    {
        const bool branch_taken_0x3b0660 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b0660) {
            ctx->pc = 0x3B0664u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B0660u;
            // 0x3b0664: 0xc620000c  lwc1        $f0, 0xC($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B0670u;
            goto label_3b0670;
        }
    }
    ctx->pc = 0x3B0668u;
    // 0x3b0668: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3B0668u;
    {
        const bool branch_taken_0x3b0668 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B066Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0668u;
        // 0x3b066c: 0xe6210004  swc1        $f1, 0x4($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0668) {
            ctx->pc = 0x3B0680u;
            goto label_3b0680;
        }
    }
    ctx->pc = 0x3B0670u;
label_3b0670:
    // 0x3b0670: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3b0670u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b0674: 0x0  nop
    ctx->pc = 0x3b0674u;
    // NOP
    // 0x3b0678: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3B0678u;
    {
        const bool branch_taken_0x3b0678 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b0678) {
            ctx->pc = 0x3B067Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B0678u;
            // 0x3b067c: 0xe621000c  swc1        $f1, 0xC($s1) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B0680u;
            goto label_3b0680;
        }
    }
    ctx->pc = 0x3B0680u;
label_3b0680:
    // 0x3b0680: 0xc4610044  lwc1        $f1, 0x44($v1)
    ctx->pc = 0x3b0680u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b0684: 0xc6200000  lwc1        $f0, 0x0($s1)
    ctx->pc = 0x3b0684u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b0688: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3b0688u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b068c: 0x0  nop
    ctx->pc = 0x3b068cu;
    // NOP
    // 0x3b0690: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x3B0690u;
    {
        const bool branch_taken_0x3b0690 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b0690) {
            ctx->pc = 0x3B0694u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B0690u;
            // 0x3b0694: 0xc6200008  lwc1        $f0, 0x8($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B06A0u;
            goto label_3b06a0;
        }
    }
    ctx->pc = 0x3B0698u;
    // 0x3b0698: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3B0698u;
    {
        const bool branch_taken_0x3b0698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B069Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0698u;
        // 0x3b069c: 0xe6210000  swc1        $f1, 0x0($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0698) {
            ctx->pc = 0x3B06B0u;
            goto label_3b06b0;
        }
    }
    ctx->pc = 0x3B06A0u;
label_3b06a0:
    // 0x3b06a0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3b06a0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b06a4: 0x0  nop
    ctx->pc = 0x3b06a4u;
    // NOP
    // 0x3b06a8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3B06A8u;
    {
        const bool branch_taken_0x3b06a8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b06a8) {
            ctx->pc = 0x3B06ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B06A8u;
            // 0x3b06ac: 0xe6210008  swc1        $f1, 0x8($s1) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B06B0u;
            goto label_3b06b0;
        }
    }
    ctx->pc = 0x3B06B0u;
label_3b06b0:
    // 0x3b06b0: 0xc4410048  lwc1        $f1, 0x48($v0)
    ctx->pc = 0x3b06b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b06b4: 0xc6200004  lwc1        $f0, 0x4($s1)
    ctx->pc = 0x3b06b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b06b8: 0x46000834  c.lt.s      $f1, $f0
    ctx->pc = 0x3b06b8u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[1], ctx->f[0])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b06bc: 0x0  nop
    ctx->pc = 0x3b06bcu;
    // NOP
    // 0x3b06c0: 0x45020003  bc1fl       . + 4 + (0x3 << 2)
    ctx->pc = 0x3B06C0u;
    {
        const bool branch_taken_0x3b06c0 = (!(ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b06c0) {
            ctx->pc = 0x3B06C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B06C0u;
            // 0x3b06c4: 0xc620000c  lwc1        $f0, 0xC($s1) (Delay Slot)
            { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B06D0u;
            goto label_3b06d0;
        }
    }
    ctx->pc = 0x3B06C8u;
    // 0x3b06c8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3B06C8u;
    {
        const bool branch_taken_0x3b06c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B06CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B06C8u;
        // 0x3b06cc: 0xe6210004  swc1        $f1, 0x4($s1) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b06c8) {
            ctx->pc = 0x3B06E0u;
            goto label_3b06e0;
        }
    }
    ctx->pc = 0x3B06D0u;
label_3b06d0:
    // 0x3b06d0: 0x46010034  c.lt.s      $f0, $f1
    ctx->pc = 0x3b06d0u;
    ctx->fcr31 = (FPU_C_OLT_S(ctx->f[0], ctx->f[1])) ? (ctx->fcr31 | 0x800000) : (ctx->fcr31 & ~0x800000);
    // 0x3b06d4: 0x0  nop
    ctx->pc = 0x3b06d4u;
    // NOP
    // 0x3b06d8: 0x45030001  bc1tl       . + 4 + (0x1 << 2)
    ctx->pc = 0x3B06D8u;
    {
        const bool branch_taken_0x3b06d8 = ((ctx->fcr31 & 0x800000));
        if (branch_taken_0x3b06d8) {
            ctx->pc = 0x3B06DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B06D8u;
            // 0x3b06dc: 0xe621000c  swc1        $f1, 0xC($s1) (Delay Slot)
            { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 12), bits); }
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B06E0u;
            goto label_3b06e0;
        }
    }
    ctx->pc = 0x3B06E0u;
label_3b06e0:
    // 0x3b06e0: 0x24a5fffc  addiu       $a1, $a1, -0x4
    ctx->pc = 0x3b06e0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
    // 0x3b06e4: 0x24420060  addiu       $v0, $v0, 0x60
    ctx->pc = 0x3b06e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 96));
    // 0x3b06e8: 0x14a0ff9d  bnez        $a1, . + 4 + (-0x63 << 2)
    ctx->pc = 0x3B06E8u;
    {
        const bool branch_taken_0x3b06e8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B06ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B06E8u;
        // 0x3b06ec: 0x24630060  addiu       $v1, $v1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b06e8) {
            ctx->pc = 0x3B0560u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b0560;
        }
    }
    ctx->pc = 0x3B06F0u;
label_3b06f0:
    // 0x3b06f0: 0x8e730014  lw          $s3, 0x14($s3)
    ctx->pc = 0x3b06f0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
label_3b06f4:
    // 0x3b06f4: 0x5660fe58  bnel        $s3, $zero, . + 4 + (-0x1A8 << 2)
    ctx->pc = 0x3B06F4u;
    {
        const bool branch_taken_0x3b06f4 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b06f4) {
            ctx->pc = 0x3B06F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B06F4u;
            // 0x3b06f8: 0x8e62000c  lw          $v0, 0xC($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B0058u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b0058;
        }
    }
    ctx->pc = 0x3B06FCu;
label_3b06fc:
    // 0x3b06fc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3b06fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0700: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x3b0700u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3b0704: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x3b0704u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3b0708: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x3b0708u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3b070c: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x3b070cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3b0710: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x3b0710u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b0714: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x3b0714u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b0718: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x3b0718u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b071c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b071cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b0720: 0x3e00008  jr          $ra
    ctx->pc = 0x3B0720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B0724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0720u;
        // 0x3b0724: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B0720u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B0728u;
    // 0x3b0728: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3b0728u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3b072c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x3b072cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
    // 0x3b0730: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x3b0730u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
    // 0x3b0734: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3b0734u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0738: 0xe7b40070  swc1        $f20, 0x70($sp)
    ctx->pc = 0x3b0738u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 112), bits); }
    // 0x3b073c: 0x240802d  daddu       $s0, $s2, $zero
    ctx->pc = 0x3b073cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0740: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x3b0740u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
    // 0x3b0744: 0x46006506  mov.s       $f20, $f12
    ctx->pc = 0x3b0744u;
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    // 0x3b0748: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x3b0748u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x3b074c: 0x1240007f  beqz        $s2, . + 4 + (0x7F << 2)
    ctx->pc = 0x3B074Cu;
    {
        const bool branch_taken_0x3b074c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B0750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B074Cu;
        // 0x3b0750: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b074c) {
            ctx->pc = 0x3B094Cu;
            goto label_3b094c;
        }
    }
    ctx->pc = 0x3B0754u;
    // 0x3b0754: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x3b0754u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3b0758: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3b0758u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3b075c: 0x0  nop
    ctx->pc = 0x3b075cu;
    // NOP
label_3b0760:
    // 0x3b0760: 0x14530005  bne         $v0, $s3, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B0760u;
    {
        const bool branch_taken_0x3b0760 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x3B0764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0760u;
        // 0x3b0764: 0xe6140010  swc1        $f20, 0x10($s0) (Delay Slot)
        { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 16), 16), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0760) {
            ctx->pc = 0x3B0778u;
            goto label_3b0778;
        }
    }
    ctx->pc = 0x3B0768u;
    // 0x3b0768: 0xc1036d2  jal         func_40DB48
    ctx->pc = 0x3B0768u;
    SET_GPR_U32(ctx, 31, 0x3B0770u);
    ctx->pc = 0x3B076Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0768u;
    // 0x3b076c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB48u, 0x3B0768u, 0x3B0770u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0770u;
label_3b0770:
    // 0x3b0770: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3B0770u;
    {
        const bool branch_taken_0x3b0770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B0774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0770u;
        // 0x3b0774: 0x40882d  daddu       $s1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0770) {
            ctx->pc = 0x3B077Cu;
            goto label_3b077c;
        }
    }
    ctx->pc = 0x3B0778u;
label_3b0778:
    // 0x3b0778: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x3b0778u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3b077c:
    // 0x3b077c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x3b077cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3b0780: 0x14530004  bne         $v0, $s3, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B0780u;
    {
        const bool branch_taken_0x3b0780 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x3B0784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0780u;
        // 0x3b0784: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0780) {
            ctx->pc = 0x3B0794u;
            goto label_3b0794;
        }
    }
    ctx->pc = 0x3B0788u;
    // 0x3b0788: 0xc10376a  jal         func_40DDA8
    ctx->pc = 0x3B0788u;
    SET_GPR_U32(ctx, 31, 0x3B0790u);
    ctx->pc = 0x3B078Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0788u;
    // 0x3b078c: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DDA8u, 0x3B0788u, 0x3B0790u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0790u;
label_3b0790:
    // 0x3b0790: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x3b0790u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b0794:
    // 0x3b0794: 0x26240018  addiu       $a0, $s1, 0x18
    ctx->pc = 0x3b0794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 24));
    // 0x3b0798: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x3b0798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x3b079c: 0x80402d  daddu       $t0, $a0, $zero
    ctx->pc = 0x3b079cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b07a0: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x3b07a0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b07a4: 0x165102a  slt         $v0, $t3, $a1
    ctx->pc = 0x3b07a4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 11) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x3b07a8: 0x10400065  beqz        $v0, . + 4 + (0x65 << 2)
    ctx->pc = 0x3B07A8u;
    {
        const bool branch_taken_0x3b07a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B07ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B07A8u;
        // 0x3b07ac: 0x223400b  movn        $t0, $s1, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 8, GPR_VEC(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b07a8) {
            ctx->pc = 0x3B0940u;
            goto label_3b0940;
        }
    }
    ctx->pc = 0x3B07B0u;
    // 0x3b07b0: 0x24abffff  addiu       $t3, $a1, -0x1
    ctx->pc = 0x3b07b0u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x3b07b4: 0x31620001  andi        $v0, $t3, 0x1
    ctx->pc = 0x3b07b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)1);
    // 0x3b07b8: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x3B07B8u;
    {
        const bool branch_taken_0x3b07b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B07BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B07B8u;
        // 0x3b07bc: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b07b8) {
            ctx->pc = 0x3B0838u;
            goto label_3b0838;
        }
    }
    ctx->pc = 0x3B07C0u;
    // 0x3b07c0: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x3b07c0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b07c4: 0x60402d  daddu       $t0, $v1, $zero
    ctx->pc = 0x3b07c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b07c8: 0xc443000c  lwc1        $f3, 0xC($v0)
    ctx->pc = 0x3b07c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3b07cc: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x3b07ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b07d0: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x3b07d0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x3b07d4: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x3b07d4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3b07d8: 0xc4420010  lwc1        $f2, 0x10($v0)
    ctx->pc = 0x3b07d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3b07dc: 0xc4600010  lwc1        $f0, 0x10($v1)
    ctx->pc = 0x3b07dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b07e0: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x3b07e0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x3b07e4: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x3b07e4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3b07e8: 0xc460000c  lwc1        $f0, 0xC($v1)
    ctx->pc = 0x3b07e8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b07ec: 0xc4610010  lwc1        $f1, 0x10($v1)
    ctx->pc = 0x3b07ecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b07f0: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x3b07f0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x3b07f4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3b07f4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3b07f8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3b07f8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3b07fc: 0x4600a003  div.s       $f0, $f20, $f0
    ctx->pc = 0x3b07fcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
    // 0x3b0800: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x3b0800u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x3b0804: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x3b0804u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x3b0808: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x3b0808u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3b080c: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x3b080cu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3b0810: 0xc460ffec  lwc1        $f0, -0x14($v1)
    ctx->pc = 0x3b0810u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b0814: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x3b0814u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x3b0818: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x3b0818u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x3b081c: 0xc461fff0  lwc1        $f1, -0x10($v1)
    ctx->pc = 0x3b081cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4294967280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b0820: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x3b0820u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x3b0824: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x3b0824u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x3b0828: 0x24abfffe  addiu       $t3, $a1, -0x2
    ctx->pc = 0x3b0828u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967294));
    // 0x3b082c: 0x11600044  beqz        $t3, . + 4 + (0x44 << 2)
    ctx->pc = 0x3B082Cu;
    {
        const bool branch_taken_0x3b082c = (GPR_U64(ctx, 11) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B0830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B082Cu;
        // 0x3b0830: 0x26230030  addiu       $v1, $s1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b082c) {
            ctx->pc = 0x3B0940u;
            goto label_3b0940;
        }
    }
    ctx->pc = 0x3B0834u;
    // 0x3b0834: 0x0  nop
    ctx->pc = 0x3b0834u;
    // NOP
label_3b0838:
    // 0x3b0838: 0x60382d  daddu       $a3, $v1, $zero
    ctx->pc = 0x3b0838u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b083c: 0x60302d  daddu       $a2, $v1, $zero
    ctx->pc = 0x3b083cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0840: 0x60502d  daddu       $t2, $v1, $zero
    ctx->pc = 0x3b0840u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0844: 0x60482d  daddu       $t1, $v1, $zero
    ctx->pc = 0x3b0844u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0848: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x3b0848u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b084c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x3b084cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_3b0850:
    // 0x3b0850: 0x100102d  daddu       $v0, $t0, $zero
    ctx->pc = 0x3b0850u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0854: 0xc443000c  lwc1        $f3, 0xC($v0)
    ctx->pc = 0x3b0854u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3b0858: 0xc480000c  lwc1        $f0, 0xC($a0)
    ctx->pc = 0x3b0858u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b085c: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x3b085cu;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x3b0860: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x3b0860u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3b0864: 0xc4420010  lwc1        $f2, 0x10($v0)
    ctx->pc = 0x3b0864u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3b0868: 0xc4a00010  lwc1        $f0, 0x10($a1)
    ctx->pc = 0x3b0868u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b086c: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x3b086cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x3b0870: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x3b0870u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3b0874: 0xc520000c  lwc1        $f0, 0xC($t1)
    ctx->pc = 0x3b0874u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b0878: 0xc5410010  lwc1        $f1, 0x10($t2)
    ctx->pc = 0x3b0878u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b087c: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x3b087cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x3b0880: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3b0880u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3b0884: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3b0884u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3b0888: 0x4600a003  div.s       $f0, $f20, $f0
    ctx->pc = 0x3b0888u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
    // 0x3b088c: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x3b088cu;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x3b0890: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x3b0890u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x3b0894: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x3b0894u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3b0898: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x3b0898u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3b089c: 0xc4c0ffec  lwc1        $f0, -0x14($a2)
    ctx->pc = 0x3b089cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4294967276)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b08a0: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x3b08a0u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x3b08a4: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x3b08a4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x3b08a8: 0xc4e1fff0  lwc1        $f1, -0x10($a3)
    ctx->pc = 0x3b08a8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 4294967280)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b08ac: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x3b08acu;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x3b08b0: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x3b08b0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x3b08b4: 0x24680018  addiu       $t0, $v1, 0x18
    ctx->pc = 0x3b08b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 3), 24));
    // 0x3b08b8: 0xc463000c  lwc1        $f3, 0xC($v1)
    ctx->pc = 0x3b08b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x3b08bc: 0xc4800024  lwc1        $f0, 0x24($a0)
    ctx->pc = 0x3b08bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b08c0: 0x460018c0  add.s       $f3, $f3, $f0
    ctx->pc = 0x3b08c0u;
    ctx->f[3] = FPU_ADD_S(ctx->f[3], ctx->f[0]);
    // 0x3b08c4: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x3b08c4u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3b08c8: 0xc4620010  lwc1        $f2, 0x10($v1)
    ctx->pc = 0x3b08c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 16)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x3b08cc: 0xc4a00028  lwc1        $f0, 0x28($a1)
    ctx->pc = 0x3b08ccu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b08d0: 0x46001080  add.s       $f2, $f2, $f0
    ctx->pc = 0x3b08d0u;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[0]);
    // 0x3b08d4: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x3b08d4u;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3b08d8: 0xc5200024  lwc1        $f0, 0x24($t1)
    ctx->pc = 0x3b08d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 36)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b08dc: 0xc5410028  lwc1        $f1, 0x28($t2)
    ctx->pc = 0x3b08dcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 10), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b08e0: 0x46030002  mul.s       $f0, $f0, $f3
    ctx->pc = 0x3b08e0u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[3]);
    // 0x3b08e4: 0x46020842  mul.s       $f1, $f1, $f2
    ctx->pc = 0x3b08e4u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[2]);
    // 0x3b08e8: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x3b08e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x3b08ec: 0x4600a003  div.s       $f0, $f20, $f0
    ctx->pc = 0x3b08ecu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
    // 0x3b08f0: 0x460018c2  mul.s       $f3, $f3, $f0
    ctx->pc = 0x3b08f0u;
    ctx->f[3] = FPU_MUL_S(ctx->f[3], ctx->f[0]);
    // 0x3b08f4: 0x46001082  mul.s       $f2, $f2, $f0
    ctx->pc = 0x3b08f4u;
    ctx->f[2] = FPU_MUL_S(ctx->f[2], ctx->f[0]);
    // 0x3b08f8: 0xe7a30000  swc1        $f3, 0x0($sp)
    ctx->pc = 0x3b08f8u;
    { float f = ctx->f[3]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x3b08fc: 0xe7a20004  swc1        $f2, 0x4($sp)
    ctx->pc = 0x3b08fcu;
    { float f = ctx->f[2]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x3b0900: 0xc4c00004  lwc1        $f0, 0x4($a2)
    ctx->pc = 0x3b0900u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x3b0904: 0x46030001  sub.s       $f0, $f0, $f3
    ctx->pc = 0x3b0904u;
    ctx->f[0] = FPU_SUB_S(ctx->f[0], ctx->f[3]);
    // 0x3b0908: 0xe7a00010  swc1        $f0, 0x10($sp)
    ctx->pc = 0x3b0908u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 16), bits); }
    // 0x3b090c: 0xc4e10008  lwc1        $f1, 0x8($a3)
    ctx->pc = 0x3b090cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3b0910: 0x46020841  sub.s       $f1, $f1, $f2
    ctx->pc = 0x3b0910u;
    ctx->f[1] = FPU_SUB_S(ctx->f[1], ctx->f[2]);
    // 0x3b0914: 0xe7a10014  swc1        $f1, 0x14($sp)
    ctx->pc = 0x3b0914u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 20), bits); }
    // 0x3b0918: 0x256bfffe  addiu       $t3, $t3, -0x2
    ctx->pc = 0x3b0918u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), 4294967294));
    // 0x3b091c: 0x24e70030  addiu       $a3, $a3, 0x30
    ctx->pc = 0x3b091cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 48));
    // 0x3b0920: 0x24c60030  addiu       $a2, $a2, 0x30
    ctx->pc = 0x3b0920u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    // 0x3b0924: 0x254a0030  addiu       $t2, $t2, 0x30
    ctx->pc = 0x3b0924u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 48));
    // 0x3b0928: 0x25290030  addiu       $t1, $t1, 0x30
    ctx->pc = 0x3b0928u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 48));
    // 0x3b092c: 0x24a50030  addiu       $a1, $a1, 0x30
    ctx->pc = 0x3b092cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x3b0930: 0x24840030  addiu       $a0, $a0, 0x30
    ctx->pc = 0x3b0930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 48));
    // 0x3b0934: 0x1560ffc6  bnez        $t3, . + 4 + (-0x3A << 2)
    ctx->pc = 0x3B0934u;
    {
        const bool branch_taken_0x3b0934 = (GPR_U64(ctx, 11) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B0938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0934u;
        // 0x3b0938: 0x24630030  addiu       $v1, $v1, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0934) {
            ctx->pc = 0x3B0850u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b0850;
        }
    }
    ctx->pc = 0x3B093Cu;
    // 0x3b093c: 0x0  nop
    ctx->pc = 0x3b093cu;
    // NOP
label_3b0940:
    // 0x3b0940: 0x8e100014  lw          $s0, 0x14($s0)
    ctx->pc = 0x3b0940u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x3b0944: 0x5600ff86  bnel        $s0, $zero, . + 4 + (-0x7A << 2)
    ctx->pc = 0x3B0944u;
    {
        const bool branch_taken_0x3b0944 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b0944) {
            ctx->pc = 0x3B0948u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B0944u;
            // 0x3b0948: 0x8e020004  lw          $v0, 0x4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B0760u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b0760;
        }
    }
    ctx->pc = 0x3B094Cu;
label_3b094c:
    // 0x3b094c: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x3b094cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0950: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x3b0950u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3b0954: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x3b0954u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3b0958: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x3b0958u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3b095c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x3b095cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b0960: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3b0960u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b0964: 0xc7b40070  lwc1        $f20, 0x70($sp)
    ctx->pc = 0x3b0964u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 112)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3b0968: 0x3e00008  jr          $ra
    ctx->pc = 0x3B0968u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B096Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0968u;
        // 0x3b096c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B0968u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B0970u;
    // 0x3b0970: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x3b0970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x3b0974: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x3b0974u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
    // 0x3b0978: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x3b0978u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
    // 0x3b097c: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x3b097cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0980: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x3b0980u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
    // 0x3b0984: 0x2c0882d  daddu       $s1, $s6, $zero
    ctx->pc = 0x3b0984u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0988: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x3b0988u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
    // 0x3b098c: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x3b098cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
    // 0x3b0990: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x3b0990u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
    // 0x3b0994: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x3b0994u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
    // 0x3b0998: 0x7fb70020  sq          $s7, 0x20($sp)
    ctx->pc = 0x3b0998u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 23));
    // 0x3b099c: 0x7fbe0010  sq          $fp, 0x10($sp)
    ctx->pc = 0x3b099cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 30));
    // 0x3b09a0: 0x12c0004c  beqz        $s6, . + 4 + (0x4C << 2)
    ctx->pc = 0x3B09A0u;
    {
        const bool branch_taken_0x3b09a0 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B09A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B09A0u;
        // 0x3b09a4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b09a0) {
            ctx->pc = 0x3B0AD4u;
            goto label_3b0ad4;
        }
    }
    ctx->pc = 0x3B09A8u;
    // 0x3b09a8: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3b09a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x3b09ac: 0x24150001  addiu       $s5, $zero, 0x1
    ctx->pc = 0x3b09acu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3b09b0: 0x245ece80  addiu       $fp, $v0, -0x3180
    ctx->pc = 0x3b09b0u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 2), 4294954624));
    // 0x3b09b4: 0x2417ffff  addiu       $s7, $zero, -0x1
    ctx->pc = 0x3b09b4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x3b09b8: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x3b09b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x3b09bc: 0x0  nop
    ctx->pc = 0x3b09bcu;
    // NOP
label_3b09c0:
    // 0x3b09c0: 0x54400042  bnel        $v0, $zero, . + 4 + (0x42 << 2)
    ctx->pc = 0x3B09C0u;
    {
        const bool branch_taken_0x3b09c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b09c0) {
            ctx->pc = 0x3B09C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B09C0u;
            // 0x3b09c4: 0x8e310014  lw          $s1, 0x14($s1) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B0ACCu;
            goto label_3b0acc;
        }
    }
    ctx->pc = 0x3B09C8u;
    // 0x3b09c8: 0x8fd00528  lw          $s0, 0x528($fp)
    ctx->pc = 0x3b09c8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1320)));
    // 0x3b09cc: 0xc0ec620  jal         func_3B1880
    ctx->pc = 0x3B09CCu;
    SET_GPR_U32(ctx, 31, 0x3B09D4u);
    ctx->pc = 0x3B09D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B09CCu;
    // 0x3b09d0: 0x8e040014  lw          $a0, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1880u, 0x3B09CCu, 0x3B09D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B09D4u;
label_3b09d4:
    // 0x3b09d4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3b09d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3b09d8: 0xc1036d0  jal         func_40DB40
    ctx->pc = 0x3B09D8u;
    SET_GPR_U32(ctx, 31, 0x3B09E0u);
    ctx->pc = 0x3B09DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B09D8u;
    // 0x3b09dc: 0xae000014  sw          $zero, 0x14($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB40u, 0x3B09D8u, 0x3B09E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B09E0u;
label_3b09e0:
    // 0x3b09e0: 0xae100018  sw          $s0, 0x18($s0)
    ctx->pc = 0x3b09e0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 16));
    // 0x3b09e4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3b09e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b09e8: 0xae000008  sw          $zero, 0x8($s0)
    ctx->pc = 0x3b09e8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    // 0x3b09ec: 0x8fd20528  lw          $s2, 0x528($fp)
    ctx->pc = 0x3b09ecu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 1320)));
    // 0x3b09f0: 0xae15000c  sw          $s5, 0xC($s0)
    ctx->pc = 0x3b09f0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 21));
    // 0x3b09f4: 0xc0ebf52  jal         func_3AFD48
    ctx->pc = 0x3B09F4u;
    SET_GPR_U32(ctx, 31, 0x3B09FCu);
    ctx->pc = 0x3B09F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B09F4u;
    // 0x3b09f8: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3AFD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3AFD48u, 0x3B09F4u, 0x3B09FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B09FCu;
label_3b09fc:
    // 0x3b09fc: 0xc1036d0  jal         func_40DB40
    ctx->pc = 0x3B09FCu;
    SET_GPR_U32(ctx, 31, 0x3B0A04u);
    ctx->pc = 0x3B0A00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B09FCu;
    // 0x3b0a00: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB40u, 0x3B09FCu, 0x3B0A04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0A04u;
label_3b0a04:
    // 0x3b0a04: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x3b0a04u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x3b0a08: 0xae35000c  sw          $s5, 0xC($s1)
    ctx->pc = 0x3b0a08u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 21));
    // 0x3b0a0c: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x3b0a0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x3b0a10: 0x54570005  bnel        $v0, $s7, . + 4 + (0x5 << 2)
    ctx->pc = 0x3B0A10u;
    {
        const bool branch_taken_0x3b0a10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 23));
        if (branch_taken_0x3b0a10) {
            ctx->pc = 0x3B0A14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B0A10u;
            // 0x3b0a14: 0x8e540000  lw          $s4, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B0A28u;
            goto label_3b0a28;
        }
    }
    ctx->pc = 0x3B0A18u;
    // 0x3b0a18: 0xc1036d2  jal         func_40DB48
    ctx->pc = 0x3B0A18u;
    SET_GPR_U32(ctx, 31, 0x3B0A20u);
    ctx->pc = 0x3B0A1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0A18u;
    // 0x3b0a1c: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB48u, 0x3B0A18u, 0x3B0A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0A20u;
label_3b0a20:
    // 0x3b0a20: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3b0a20u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0a24: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x3b0a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_3b0a28:
    // 0x3b0a28: 0x54570004  bnel        $v0, $s7, . + 4 + (0x4 << 2)
    ctx->pc = 0x3B0A28u;
    {
        const bool branch_taken_0x3b0a28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 23));
        if (branch_taken_0x3b0a28) {
            ctx->pc = 0x3B0A2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B0A28u;
            // 0x3b0a2c: 0x8e330004  lw          $s3, 0x4($s1) (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B0A3Cu;
            goto label_3b0a3c;
        }
    }
    ctx->pc = 0x3B0A30u;
    // 0x3b0a30: 0xc10376a  jal         func_40DDA8
    ctx->pc = 0x3B0A30u;
    SET_GPR_U32(ctx, 31, 0x3B0A38u);
    ctx->pc = 0x3B0A34u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0A30u;
    // 0x3b0a34: 0x8e440000  lw          $a0, 0x0($s2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DDA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DDA8u, 0x3B0A30u, 0x3B0A38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0A38u;
label_3b0a38:
    // 0x3b0a38: 0x8e330004  lw          $s3, 0x4($s1)
    ctx->pc = 0x3b0a38u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
label_3b0a3c:
    // 0x3b0a3c: 0x16770015  bne         $s3, $s7, . + 4 + (0x15 << 2)
    ctx->pc = 0x3B0A3Cu;
    {
        const bool branch_taken_0x3b0a3c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 23));
        ctx->pc = 0x3B0A40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0A3Cu;
        // 0x3b0a40: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0a3c) {
            ctx->pc = 0x3B0A94u;
            goto label_3b0a94;
        }
    }
    ctx->pc = 0x3B0A44u;
    // 0x3b0a44: 0xc0ec620  jal         func_3B1880
    ctx->pc = 0x3B0A44u;
    SET_GPR_U32(ctx, 31, 0x3B0A4Cu);
    ctx->pc = 0x3B0A48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0A44u;
    // 0x3b0a48: 0x8e240014  lw          $a0, 0x14($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B1880u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B1880u, 0x3B0A44u, 0x3B0A4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0A4Cu;
label_3b0a4c:
    // 0x3b0a4c: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3b0a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3b0a50: 0xc1036d0  jal         func_40DB40
    ctx->pc = 0x3B0A50u;
    SET_GPR_U32(ctx, 31, 0x3B0A58u);
    ctx->pc = 0x3B0A54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0A50u;
    // 0x3b0a54: 0xae200014  sw          $zero, 0x14($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB40u, 0x3B0A50u, 0x3B0A58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0A58u;
label_3b0a58:
    // 0x3b0a58: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x3b0a58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x3b0a5c: 0x3c060003  lui         $a2, 0x3
    ctx->pc = 0x3b0a5cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)3 << 16));
    // 0x3b0a60: 0xae35000c  sw          $s5, 0xC($s1)
    ctx->pc = 0x3b0a60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 21));
    // 0x3b0a64: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3b0a64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0a68: 0xae310018  sw          $s1, 0x18($s1)
    ctx->pc = 0x3b0a68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 17));
    // 0x3b0a6c: 0x34c60190  ori         $a2, $a2, 0x190
    ctx->pc = 0x3b0a6cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)400);
    // 0x3b0a70: 0xc103722  jal         func_40DC88
    ctx->pc = 0x3B0A70u;
    SET_GPR_U32(ctx, 31, 0x3B0A78u);
    ctx->pc = 0x3B0A74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0A70u;
    // 0x3b0a74: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DC88u, 0x3B0A70u, 0x3B0A78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0A78u;
label_3b0a78:
    // 0x3b0a78: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x3b0a78u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x3b0a7c: 0x54730006  bnel        $v1, $s3, . + 4 + (0x6 << 2)
    ctx->pc = 0x3B0A7Cu;
    {
        const bool branch_taken_0x3b0a7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 19));
        if (branch_taken_0x3b0a7c) {
            ctx->pc = 0x3B0A80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B0A7Cu;
            // 0x3b0a80: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B0A98u;
            goto label_3b0a98;
        }
    }
    ctx->pc = 0x3B0A84u;
    // 0x3b0a84: 0xc1036d2  jal         func_40DB48
    ctx->pc = 0x3B0A84u;
    SET_GPR_U32(ctx, 31, 0x3B0A8Cu);
    ctx->pc = 0x3B0A88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0A84u;
    // 0x3b0a88: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB48u, 0x3B0A84u, 0x3B0A8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0A8Cu;
label_3b0a8c:
    // 0x3b0a8c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3B0A8Cu;
    {
        const bool branch_taken_0x3b0a8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B0A90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0A8Cu;
        // 0x3b0a90: 0x24030018  addiu       $v1, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b0a8c) {
            ctx->pc = 0x3B0A9Cu;
            goto label_3b0a9c;
        }
    }
    ctx->pc = 0x3B0A94u;
label_3b0a94:
    // 0x3b0a94: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3b0a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3b0a98:
    // 0x3b0a98: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x3b0a98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
label_3b0a9c:
    // 0x3b0a9c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3b0a9cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0aa0: 0x2030018  mult        $zero, $s0, $v1
    ctx->pc = 0x3b0aa0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x3b0aa4: 0x3012  mflo        $a2
    ctx->pc = 0x3b0aa4u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x3b0aa8: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x3B0AA8u;
    SET_GPR_U32(ctx, 31, 0x3B0AB0u);
    ctx->pc = 0x3B0AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B0AA8u;
    // 0x3b0aac: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x3B0AA8u, 0x3B0AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B0AB0u;
label_3b0ab0:
    // 0x3b0ab0: 0x8e430008  lw          $v1, 0x8($s2)
    ctx->pc = 0x3b0ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x3b0ab4: 0x54600002  bnel        $v1, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x3B0AB4u;
    {
        const bool branch_taken_0x3b0ab4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b0ab4) {
            ctx->pc = 0x3B0AB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B0AB4u;
            // 0x3b0ab8: 0xae350008  sw          $s5, 0x8($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 21));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B0AC0u;
            goto label_3b0ac0;
        }
    }
    ctx->pc = 0x3B0ABCu;
    // 0x3b0abc: 0x0  nop
    ctx->pc = 0x3b0abcu;
    // NOP
label_3b0ac0:
    // 0x3b0ac0: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x3b0ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x3b0ac4: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x3b0ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x3b0ac8: 0x8e310014  lw          $s1, 0x14($s1)
    ctx->pc = 0x3b0ac8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_3b0acc:
    // 0x3b0acc: 0x5620ffbc  bnel        $s1, $zero, . + 4 + (-0x44 << 2)
    ctx->pc = 0x3B0ACCu;
    {
        const bool branch_taken_0x3b0acc = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x3b0acc) {
            ctx->pc = 0x3B0AD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3B0ACCu;
            // 0x3b0ad0: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3B09C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b09c0;
        }
    }
    ctx->pc = 0x3B0AD4u;
label_3b0ad4:
    // 0x3b0ad4: 0x2c0102d  daddu       $v0, $s6, $zero
    ctx->pc = 0x3b0ad4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3b0ad8: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x3b0ad8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3b0adc: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x3b0adcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3b0ae0: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x3b0ae0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3b0ae4: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x3b0ae4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3b0ae8: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x3b0ae8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3b0aec: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x3b0aecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3b0af0: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x3b0af0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3b0af4: 0x7bb70020  lq          $s7, 0x20($sp)
    ctx->pc = 0x3b0af4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3b0af8: 0x7bbe0010  lq          $fp, 0x10($sp)
    ctx->pc = 0x3b0af8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3b0afc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x3b0afcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3b0b00: 0x3e00008  jr          $ra
    ctx->pc = 0x3B0B00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B0B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B0B00u;
        // 0x3b0b04: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B0B00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B0B08u;
}
