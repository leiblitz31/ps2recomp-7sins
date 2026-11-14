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

// Function: sub_0036CFD0
// Address: 0x36cfd0 - 0x36d3e8
void sub_0036CFD0_0x36cfd0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0036CFD0_0x36cfd0");
#endif

    switch (ctx->pc) {
        case 0x36d03cu: goto label_36d03c;
        case 0x36d044u: goto label_36d044;
        case 0x36d0e8u: goto label_36d0e8;
        case 0x36d288u: goto label_36d288;
        case 0x36d2a4u: goto label_36d2a4;
        case 0x36d2d8u: goto label_36d2d8;
        case 0x36d2f4u: goto label_36d2f4;
        case 0x36d34cu: goto label_36d34c;
        case 0x36d384u: goto label_36d384;
        case 0x36d394u: goto label_36d394;
        case 0x36d39cu: goto label_36d39c;
        case 0x36d3a4u: goto label_36d3a4;
        case 0x36d3acu: goto label_36d3ac;
        default: break;
    }

    ctx->pc = 0x36cfd0u;

    // 0x36cfd0: 0x3c020004  lui         $v0, 0x4
    ctx->pc = 0x36cfd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4 << 16));
    // 0x36cfd4: 0x30c80010  andi        $t0, $a2, 0x10
    ctx->pc = 0x36cfd4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)16);
    // 0x36cfd8: 0x24030076  addiu       $v1, $zero, 0x76
    ctx->pc = 0x36cfd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
    // 0x36cfdc: 0x34420042  ori         $v0, $v0, 0x42
    ctx->pc = 0x36cfdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)66);
    // 0x36cfe0: 0x2407000e  addiu       $a3, $zero, 0xE
    ctx->pc = 0x36cfe0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x36cfe4: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x36cfe4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x36cfe8: 0x68380b  movn        $a3, $v1, $t0
    ctx->pc = 0x36cfe8u;
    if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 3));
    // 0x36cfec: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x36cfecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x36cff0: 0x34e20008  ori         $v0, $a3, 0x8
    ctx->pc = 0x36cff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)8);
    // 0x36cff4: 0x7fb000e0  sq          $s0, 0xE0($sp)
    ctx->pc = 0x36cff4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 16));
    // 0x36cff8: 0xe6100a  movz        $v0, $a3, $a2
    ctx->pc = 0x36cff8u;
    if (GPR_U64(ctx, 6) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 7));
    // 0x36cffc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x36cffcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x36d000: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x36d000u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d004: 0x7fb60080  sq          $s6, 0x80($sp)
    ctx->pc = 0x36d004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 22));
    // 0x36d008: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x36d008u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
    // 0x36d00c: 0x102840  sll         $a1, $s0, 1
    ctx->pc = 0x36d00cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x36d010: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x36d010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x36d014: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x36d014u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d018: 0x7fbe0060  sq          $fp, 0x60($sp)
    ctx->pc = 0x36d018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 30));
    // 0x36d01c: 0x7fb100d0  sq          $s1, 0xD0($sp)
    ctx->pc = 0x36d01cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 17));
    // 0x36d020: 0x7fb200c0  sq          $s2, 0xC0($sp)
    ctx->pc = 0x36d020u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 18));
    // 0x36d024: 0x7fb300b0  sq          $s3, 0xB0($sp)
    ctx->pc = 0x36d024u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 19));
    // 0x36d028: 0x7fb400a0  sq          $s4, 0xA0($sp)
    ctx->pc = 0x36d028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 20));
    // 0x36d02c: 0x7fb50090  sq          $s5, 0x90($sp)
    ctx->pc = 0x36d02cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 21));
    // 0x36d030: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x36d030u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x36d034: 0xc0e2dbc  jal         func_38B6F0
    ctx->pc = 0x36D034u;
    SET_GPR_U32(ctx, 31, 0x36D03Cu);
    ctx->pc = 0x36D038u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D034u;
    // 0x36d038: 0xe7b400f0  swc1        $f20, 0xF0($sp) (Delay Slot)
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 240), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x38B6F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38B6F0u, 0x36D034u, 0x36D03Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D03Cu;
label_36d03c:
    // 0x36d03c: 0xc0e3992  jal         func_38E648
    ctx->pc = 0x36D03Cu;
    SET_GPR_U32(ctx, 31, 0x36D044u);
    ctx->pc = 0x36D040u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D03Cu;
    // 0x36d040: 0x40f02d  daddu       $fp, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E648u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E648u, 0x36D03Cu, 0x36D044u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D044u;
label_36d044:
    // 0x36d044: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x36d044u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x36d048: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x36d048u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x36d04c: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x36d04cu;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x36d050: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x36d050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x36d054: 0xc78081a0  lwc1        $f0, -0x7E60($gp)
    ctx->pc = 0x36d054u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934944)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x36d058: 0x8fa30024  lw          $v1, 0x24($sp)
    ctx->pc = 0x36d058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x36d05c: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x36d05cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x36d060: 0xe7a10008  swc1        $f1, 0x8($sp)
    ctx->pc = 0x36d060u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 8), bits); }
    // 0x36d064: 0xe7a00000  swc1        $f0, 0x0($sp)
    ctx->pc = 0x36d064u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 0), bits); }
    // 0x36d068: 0xe7a10004  swc1        $f1, 0x4($sp)
    ctx->pc = 0x36d068u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 4), bits); }
    // 0x36d06c: 0x6ba40007  ldl         $a0, 0x7($sp)
    ctx->pc = 0x36d06cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x36d070: 0x6fa40000  ldr         $a0, 0x0($sp)
    ctx->pc = 0x36d070u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x36d074: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x36d074u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x36d078: 0xb0640013  sdl         $a0, 0x13($v1)
    ctx->pc = 0x36d078u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36d07c: 0xb464000c  sdr         $a0, 0xC($v1)
    ctx->pc = 0x36d07cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36d080: 0xac650014  sw          $a1, 0x14($v1)
    ctx->pc = 0x36d080u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 5));
    // 0x36d084: 0x8fc2005c  lw          $v0, 0x5C($fp)
    ctx->pc = 0x36d084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 92)));
    // 0x36d088: 0xafa20028  sw          $v0, 0x28($sp)
    ctx->pc = 0x36d088u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 2));
    // 0x36d08c: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x36d08cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x36d090: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x36d090u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36d094: 0x8fc5002c  lw          $a1, 0x2C($fp)
    ctx->pc = 0x36d094u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 44)));
    // 0x36d098: 0x8fc30034  lw          $v1, 0x34($fp)
    ctx->pc = 0x36d098u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 52)));
    // 0x36d09c: 0x8c970018  lw          $s7, 0x18($a0)
    ctx->pc = 0x36d09cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x36d0a0: 0x8fd60030  lw          $s6, 0x30($fp)
    ctx->pc = 0x36d0a0u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 48)));
    // 0x36d0a4: 0x1a0000a6  blez        $s0, . + 4 + (0xA6 << 2)
    ctx->pc = 0x36D0A4u;
    {
        const bool branch_taken_0x36d0a4 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x36D0A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D0A4u;
        // 0x36d0a8: 0xafa5002c  sw          $a1, 0x2C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d0a4) {
            ctx->pc = 0x36D340u;
            goto label_36d340;
        }
    }
    ctx->pc = 0x36D0ACu;
    // 0x36d0ac: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x36d0acu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d0b0: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x36d0b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x36d0b4: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x36d0b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36d0b8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x36d0b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x36d0bc: 0xafb00030  sw          $s0, 0x30($sp)
    ctx->pc = 0x36d0bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 16));
    // 0x36d0c0: 0x46000d06  mov.s       $f20, $f1
    ctx->pc = 0x36d0c0u;
    ctx->f[20] = FPU_MOV_S(ctx->f[1]);
    // 0x36d0c4: 0xafa60038  sw          $a2, 0x38($sp)
    ctx->pc = 0x36d0c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 6));
    // 0x36d0c8: 0x60a82d  daddu       $s5, $v1, $zero
    ctx->pc = 0x36d0c8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d0cc: 0xafa7003c  sw          $a3, 0x3C($sp)
    ctx->pc = 0x36d0ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 7));
    // 0x36d0d0: 0x2e0982d  daddu       $s3, $s7, $zero
    ctx->pc = 0x36d0d0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d0d4: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x36d0d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x36d0d8: 0x2c0902d  daddu       $s2, $s6, $zero
    ctx->pc = 0x36d0d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d0dc: 0xafa00044  sw          $zero, 0x44($sp)
    ctx->pc = 0x36d0dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 0));
    // 0x36d0e0: 0xafa50048  sw          $a1, 0x48($sp)
    ctx->pc = 0x36d0e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
    // 0x36d0e4: 0xafa5004c  sw          $a1, 0x4C($sp)
    ctx->pc = 0x36d0e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 5));
label_36d0e8:
    // 0x36d0e8: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x36d0e8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
    // 0x36d0ec: 0xae800004  sw          $zero, 0x4($s4)
    ctx->pc = 0x36d0ecu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
    // 0x36d0f0: 0xae800008  sw          $zero, 0x8($s4)
    ctx->pc = 0x36d0f0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 0));
    // 0x36d0f4: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x36d0f4u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
    // 0x36d0f8: 0x2694000c  addiu       $s4, $s4, 0xC
    ctx->pc = 0x36d0f8u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
    // 0x36d0fc: 0xaea00004  sw          $zero, 0x4($s5)
    ctx->pc = 0x36d0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 0));
    // 0x36d100: 0x12c00008  beqz        $s6, . + 4 + (0x8 << 2)
    ctx->pc = 0x36D100u;
    {
        const bool branch_taken_0x36d100 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x36D104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D100u;
        // 0x36d104: 0x26b50008  addiu       $s5, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d100) {
            ctx->pc = 0x36D124u;
            goto label_36d124;
        }
    }
    ctx->pc = 0x36D108u;
    // 0x36d108: 0x240300ff  addiu       $v1, $zero, 0xFF
    ctx->pc = 0x36d108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x36d10c: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x36d10cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x36d110: 0xa2400001  sb          $zero, 0x1($s2)
    ctx->pc = 0x36d110u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x36d114: 0x26d60004  addiu       $s6, $s6, 0x4
    ctx->pc = 0x36d114u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
    // 0x36d118: 0xa2400002  sb          $zero, 0x2($s2)
    ctx->pc = 0x36d118u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x36d11c: 0xa2430003  sb          $v1, 0x3($s2)
    ctx->pc = 0x36d11cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x36d120: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x36d120u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_36d124:
    // 0x36d124: 0x12e00006  beqz        $s7, . + 4 + (0x6 << 2)
    ctx->pc = 0x36D124u;
    {
        const bool branch_taken_0x36d124 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x36d124) {
            ctx->pc = 0x36D140u;
            goto label_36d140;
        }
    }
    ctx->pc = 0x36D12Cu;
    // 0x36d12c: 0xe6740000  swc1        $f20, 0x0($s3)
    ctx->pc = 0x36d12cu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x36d130: 0x26f7000c  addiu       $s7, $s7, 0xC
    ctx->pc = 0x36d130u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 12));
    // 0x36d134: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x36d134u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
    // 0x36d138: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x36d138u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
    // 0x36d13c: 0x2673000c  addiu       $s3, $s3, 0xC
    ctx->pc = 0x36d13cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
label_36d140:
    // 0x36d140: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x36d140u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x36d144: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x36d144u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36d148: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x36d148u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
    // 0x36d14c: 0xae800004  sw          $zero, 0x4($s4)
    ctx->pc = 0x36d14cu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
    // 0x36d150: 0xae800008  sw          $zero, 0x8($s4)
    ctx->pc = 0x36d150u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 0));
    // 0x36d154: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x36d154u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
    // 0x36d158: 0x2694000c  addiu       $s4, $s4, 0xC
    ctx->pc = 0x36d158u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
    // 0x36d15c: 0xe6a00004  swc1        $f0, 0x4($s5)
    ctx->pc = 0x36d15cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4), bits); }
    // 0x36d160: 0x12c00008  beqz        $s6, . + 4 + (0x8 << 2)
    ctx->pc = 0x36D160u;
    {
        const bool branch_taken_0x36d160 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x36D164u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D160u;
        // 0x36d164: 0x26b50008  addiu       $s5, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d160) {
            ctx->pc = 0x36D184u;
            goto label_36d184;
        }
    }
    ctx->pc = 0x36D168u;
    // 0x36d168: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x36d168u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x36d16c: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x36d16cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x36d170: 0xa2400001  sb          $zero, 0x1($s2)
    ctx->pc = 0x36d170u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x36d174: 0x26d60004  addiu       $s6, $s6, 0x4
    ctx->pc = 0x36d174u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
    // 0x36d178: 0xa2400002  sb          $zero, 0x2($s2)
    ctx->pc = 0x36d178u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x36d17c: 0xa2440003  sb          $a0, 0x3($s2)
    ctx->pc = 0x36d17cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3), (uint8_t)GPR_U32(ctx, 4));
    // 0x36d180: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x36d180u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_36d184:
    // 0x36d184: 0x52e00007  beql        $s7, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x36D184u;
    {
        const bool branch_taken_0x36d184 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x36d184) {
            ctx->pc = 0x36D188u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36D184u;
            // 0x36d188: 0xae800000  sw          $zero, 0x0($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36D1A4u;
            goto label_36d1a4;
        }
    }
    ctx->pc = 0x36D18Cu;
    // 0x36d18c: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x36d18cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x36d190: 0x26f7000c  addiu       $s7, $s7, 0xC
    ctx->pc = 0x36d190u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 12));
    // 0x36d194: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x36d194u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
    // 0x36d198: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x36d198u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
    // 0x36d19c: 0x2673000c  addiu       $s3, $s3, 0xC
    ctx->pc = 0x36d19cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    // 0x36d1a0: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x36d1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
label_36d1a4:
    // 0x36d1a4: 0xae800004  sw          $zero, 0x4($s4)
    ctx->pc = 0x36d1a4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
    // 0x36d1a8: 0xae800008  sw          $zero, 0x8($s4)
    ctx->pc = 0x36d1a8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 0));
    // 0x36d1ac: 0xe6a00000  swc1        $f0, 0x0($s5)
    ctx->pc = 0x36d1acu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x36d1b0: 0x2694000c  addiu       $s4, $s4, 0xC
    ctx->pc = 0x36d1b0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
    // 0x36d1b4: 0xe6a00004  swc1        $f0, 0x4($s5)
    ctx->pc = 0x36d1b4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 4), bits); }
    // 0x36d1b8: 0x12c00008  beqz        $s6, . + 4 + (0x8 << 2)
    ctx->pc = 0x36D1B8u;
    {
        const bool branch_taken_0x36d1b8 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x36D1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D1B8u;
        // 0x36d1bc: 0x26b50008  addiu       $s5, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d1b8) {
            ctx->pc = 0x36D1DCu;
            goto label_36d1dc;
        }
    }
    ctx->pc = 0x36D1C0u;
    // 0x36d1c0: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x36d1c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x36d1c4: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x36d1c4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x36d1c8: 0xa2400001  sb          $zero, 0x1($s2)
    ctx->pc = 0x36d1c8u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x36d1cc: 0x26d60004  addiu       $s6, $s6, 0x4
    ctx->pc = 0x36d1ccu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
    // 0x36d1d0: 0xa2400002  sb          $zero, 0x2($s2)
    ctx->pc = 0x36d1d0u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x36d1d4: 0xa2450003  sb          $a1, 0x3($s2)
    ctx->pc = 0x36d1d4u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3), (uint8_t)GPR_U32(ctx, 5));
    // 0x36d1d8: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x36d1d8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_36d1dc:
    // 0x36d1dc: 0x52e00007  beql        $s7, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x36D1DCu;
    {
        const bool branch_taken_0x36d1dc = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x36d1dc) {
            ctx->pc = 0x36D1E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x36D1DCu;
            // 0x36d1e0: 0xae800000  sw          $zero, 0x0($s4) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x36D1FCu;
            goto label_36d1fc;
        }
    }
    ctx->pc = 0x36D1E4u;
    // 0x36d1e4: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x36d1e4u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x36d1e8: 0x26f7000c  addiu       $s7, $s7, 0xC
    ctx->pc = 0x36d1e8u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 12));
    // 0x36d1ec: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x36d1ecu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
    // 0x36d1f0: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x36d1f0u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
    // 0x36d1f4: 0x2673000c  addiu       $s3, $s3, 0xC
    ctx->pc = 0x36d1f4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    // 0x36d1f8: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x36d1f8u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
label_36d1fc:
    // 0x36d1fc: 0xae800004  sw          $zero, 0x4($s4)
    ctx->pc = 0x36d1fcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
    // 0x36d200: 0xae800008  sw          $zero, 0x8($s4)
    ctx->pc = 0x36d200u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 0));
    // 0x36d204: 0xe6a00000  swc1        $f0, 0x0($s5)
    ctx->pc = 0x36d204u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 21), 0), bits); }
    // 0x36d208: 0x2694000c  addiu       $s4, $s4, 0xC
    ctx->pc = 0x36d208u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 12));
    // 0x36d20c: 0xaea00004  sw          $zero, 0x4($s5)
    ctx->pc = 0x36d20cu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 4), GPR_U32(ctx, 0));
    // 0x36d210: 0x12c00008  beqz        $s6, . + 4 + (0x8 << 2)
    ctx->pc = 0x36D210u;
    {
        const bool branch_taken_0x36d210 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        ctx->pc = 0x36D214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D210u;
        // 0x36d214: 0x26b50008  addiu       $s5, $s5, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d210) {
            ctx->pc = 0x36D234u;
            goto label_36d234;
        }
    }
    ctx->pc = 0x36D218u;
    // 0x36d218: 0x240600ff  addiu       $a2, $zero, 0xFF
    ctx->pc = 0x36d218u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x36d21c: 0xa2400000  sb          $zero, 0x0($s2)
    ctx->pc = 0x36d21cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x36d220: 0xa2400001  sb          $zero, 0x1($s2)
    ctx->pc = 0x36d220u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x36d224: 0x26d60004  addiu       $s6, $s6, 0x4
    ctx->pc = 0x36d224u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 4));
    // 0x36d228: 0xa2400002  sb          $zero, 0x2($s2)
    ctx->pc = 0x36d228u;
    WRITE8(ADD32(GPR_U32(ctx, 18), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x36d22c: 0xa2460003  sb          $a2, 0x3($s2)
    ctx->pc = 0x36d22cu;
    WRITE8(ADD32(GPR_U32(ctx, 18), 3), (uint8_t)GPR_U32(ctx, 6));
    // 0x36d230: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x36d230u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_36d234:
    // 0x36d234: 0x12e00007  beqz        $s7, . + 4 + (0x7 << 2)
    ctx->pc = 0x36D234u;
    {
        const bool branch_taken_0x36d234 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x36D238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D234u;
        // 0x36d238: 0x8fa20044  lw          $v0, 0x44($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d234) {
            ctx->pc = 0x36D254u;
            goto label_36d254;
        }
    }
    ctx->pc = 0x36D23Cu;
    // 0x36d23c: 0xe6600000  swc1        $f0, 0x0($s3)
    ctx->pc = 0x36d23cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 19), 0), bits); }
    // 0x36d240: 0x26f7000c  addiu       $s7, $s7, 0xC
    ctx->pc = 0x36d240u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 12));
    // 0x36d244: 0xae600004  sw          $zero, 0x4($s3)
    ctx->pc = 0x36d244u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
    // 0x36d248: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x36d248u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
    // 0x36d24c: 0x2673000c  addiu       $s3, $s3, 0xC
    ctx->pc = 0x36d24cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
    // 0x36d250: 0x8fa20044  lw          $v0, 0x44($sp)
    ctx->pc = 0x36d250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
label_36d254:
    // 0x36d254: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x36d254u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d258: 0x8fa5002c  lw          $a1, 0x2C($sp)
    ctx->pc = 0x36d258u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x36d25c: 0x8fa70040  lw          $a3, 0x40($sp)
    ctx->pc = 0x36d25cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x36d260: 0x3051ffff  andi        $s1, $v0, 0xFFFF
    ctx->pc = 0x36d260u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x36d264: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x36d264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x36d268: 0xa0102d  daddu       $v0, $a1, $zero
    ctx->pc = 0x36d268u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d26c: 0x30f0ffff  andi        $s0, $a3, 0xFFFF
    ctx->pc = 0x36d26cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
    // 0x36d270: 0x24420008  addiu       $v0, $v0, 0x8
    ctx->pc = 0x36d270u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x36d274: 0x3067ffff  andi        $a3, $v1, 0xFFFF
    ctx->pc = 0x36d274u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x36d278: 0xafa2002c  sw          $v0, 0x2C($sp)
    ctx->pc = 0x36d278u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 2));
    // 0x36d27c: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x36d27cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d280: 0xc0e3356  jal         func_38CD58
    ctx->pc = 0x36D280u;
    SET_GPR_U32(ctx, 31, 0x36D288u);
    ctx->pc = 0x36D284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D280u;
    // 0x36d284: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CD58u, 0x36D280u, 0x36D288u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D288u;
label_36d288:
    // 0x36d288: 0x8fa30048  lw          $v1, 0x48($sp)
    ctx->pc = 0x36d288u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36d28c: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x36d28cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d290: 0x8fa5004c  lw          $a1, 0x4C($sp)
    ctx->pc = 0x36d290u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x36d294: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x36d294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x36d298: 0x8fa60024  lw          $a2, 0x24($sp)
    ctx->pc = 0x36d298u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x36d29c: 0xc0e335c  jal         func_38CD70
    ctx->pc = 0x36D29Cu;
    SET_GPR_U32(ctx, 31, 0x36D2A4u);
    ctx->pc = 0x36D2A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D29Cu;
    // 0x36d2a0: 0xafa30048  sw          $v1, 0x48($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CD70u, 0x36D29Cu, 0x36D2A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D2A4u;
label_36d2a4:
    // 0x36d2a4: 0x8fa4004c  lw          $a0, 0x4C($sp)
    ctx->pc = 0x36d2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x36d2a8: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x36d2a8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d2ac: 0x8fa20038  lw          $v0, 0x38($sp)
    ctx->pc = 0x36d2acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36d2b0: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x36d2b0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d2b4: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x36d2b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x36d2b8: 0x8fa5002c  lw          $a1, 0x2C($sp)
    ctx->pc = 0x36d2b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x36d2bc: 0xafa4004c  sw          $a0, 0x4C($sp)
    ctx->pc = 0x36d2bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 4));
    // 0x36d2c0: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x36d2c0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x36d2c4: 0x3c0202d  daddu       $a0, $fp, $zero
    ctx->pc = 0x36d2c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d2c8: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x36d2c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x36d2cc: 0x24630008  addiu       $v1, $v1, 0x8
    ctx->pc = 0x36d2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 8));
    // 0x36d2d0: 0xc0e3356  jal         func_38CD58
    ctx->pc = 0x36D2D0u;
    SET_GPR_U32(ctx, 31, 0x36D2D8u);
    ctx->pc = 0x36D2D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D2D0u;
    // 0x36d2d4: 0xafa3004c  sw          $v1, 0x4C($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CD58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CD58u, 0x36D2D0u, 0x36D2D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D2D8u;
label_36d2d8:
    // 0x36d2d8: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x36d2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x36d2dc: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x36d2dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36d2e0: 0x24840008  addiu       $a0, $a0, 0x8
    ctx->pc = 0x36d2e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 8));
    // 0x36d2e4: 0x8fa60024  lw          $a2, 0x24($sp)
    ctx->pc = 0x36d2e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    // 0x36d2e8: 0xafa4002c  sw          $a0, 0x2C($sp)
    ctx->pc = 0x36d2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 4));
    // 0x36d2ec: 0xc0e335c  jal         func_38CD70
    ctx->pc = 0x36D2ECu;
    SET_GPR_U32(ctx, 31, 0x36D2F4u);
    ctx->pc = 0x36D2F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D2ECu;
    // 0x36d2f0: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38CD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38CD70u, 0x36D2ECu, 0x36D2F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D2F4u;
label_36d2f4:
    // 0x36d2f4: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x36d2f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x36d2f8: 0x8fa60038  lw          $a2, 0x38($sp)
    ctx->pc = 0x36d2f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x36d2fc: 0x8fa7003c  lw          $a3, 0x3C($sp)
    ctx->pc = 0x36d2fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x36d300: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x36d300u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x36d304: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x36d304u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x36d308: 0x24c60004  addiu       $a2, $a2, 0x4
    ctx->pc = 0x36d308u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x36d30c: 0x8fa30044  lw          $v1, 0x44($sp)
    ctx->pc = 0x36d30cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 68)));
    // 0x36d310: 0x24e70004  addiu       $a3, $a3, 0x4
    ctx->pc = 0x36d310u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4));
    // 0x36d314: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x36d314u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x36d318: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x36d318u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x36d31c: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x36d31cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
    // 0x36d320: 0xafa50048  sw          $a1, 0x48($sp)
    ctx->pc = 0x36d320u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 5));
    // 0x36d324: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x36d324u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x36d328: 0xafa60038  sw          $a2, 0x38($sp)
    ctx->pc = 0x36d328u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 6));
    // 0x36d32c: 0xafa7003c  sw          $a3, 0x3C($sp)
    ctx->pc = 0x36d32cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 7));
    // 0x36d330: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x36d330u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x36d334: 0xafa30044  sw          $v1, 0x44($sp)
    ctx->pc = 0x36d334u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
    // 0x36d338: 0x1480ff6b  bnez        $a0, . + 4 + (-0x95 << 2)
    ctx->pc = 0x36D338u;
    {
        const bool branch_taken_0x36d338 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x36D33Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D338u;
        // 0x36d33c: 0xafa40030  sw          $a0, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x36d338) {
            ctx->pc = 0x36D0E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_36d0e8;
        }
    }
    ctx->pc = 0x36D340u;
label_36d340:
    // 0x36d340: 0x8fa50034  lw          $a1, 0x34($sp)
    ctx->pc = 0x36d340u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x36d344: 0xc0e2ab0  jal         func_38AAC0
    ctx->pc = 0x36D344u;
    SET_GPR_U32(ctx, 31, 0x36D34Cu);
    ctx->pc = 0x36D348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D344u;
    // 0x36d348: 0x8fa40028  lw          $a0, 0x28($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38AAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38AAC0u, 0x36D344u, 0x36D34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D34Cu;
label_36d34c:
    // 0x36d34c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x36d34cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x36d350: 0x44810000  mtc1        $at, $f0
    ctx->pc = 0x36d350u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x36d354: 0x8fa50028  lw          $a1, 0x28($sp)
    ctx->pc = 0x36d354u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x36d358: 0xe7a0001c  swc1        $f0, 0x1C($sp)
    ctx->pc = 0x36d358u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 28), bits); }
    // 0x36d35c: 0x6ba60017  ldl         $a2, 0x17($sp)
    ctx->pc = 0x36d35cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x36d360: 0x6fa60010  ldr         $a2, 0x10($sp)
    ctx->pc = 0x36d360u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x36d364: 0x6ba7001f  ldl         $a3, 0x1F($sp)
    ctx->pc = 0x36d364u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x36d368: 0x6fa70018  ldr         $a3, 0x18($sp)
    ctx->pc = 0x36d368u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x36d36c: 0xb0a6000b  sdl         $a2, 0xB($a1)
    ctx->pc = 0x36d36cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36d370: 0xb4a60004  sdr         $a2, 0x4($a1)
    ctx->pc = 0x36d370u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36d374: 0xb0a70013  sdl         $a3, 0x13($a1)
    ctx->pc = 0x36d374u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36d378: 0xb4a7000c  sdr         $a3, 0xC($a1)
    ctx->pc = 0x36d378u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x36d37c: 0xc0e2d08  jal         func_38B420
    ctx->pc = 0x36D37Cu;
    SET_GPR_U32(ctx, 31, 0x36D384u);
    ctx->pc = 0x36D380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D37Cu;
    // 0x36d380: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38B420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38B420u, 0x36D37Cu, 0x36D384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D384u;
label_36d384:
    // 0x36d384: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x36d384u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x36d388: 0x3c0282d  daddu       $a1, $fp, $zero
    ctx->pc = 0x36d388u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x36d38c: 0xc0e2836  jal         func_38A0D8
    ctx->pc = 0x36D38Cu;
    SET_GPR_U32(ctx, 31, 0x36D394u);
    ctx->pc = 0x36D390u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D38Cu;
    // 0x36d390: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38A0D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38A0D8u, 0x36D38Cu, 0x36D394u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D394u;
label_36d394:
    // 0x36d394: 0xc0e3414  jal         func_38D050
    ctx->pc = 0x36D394u;
    SET_GPR_U32(ctx, 31, 0x36D39Cu);
    ctx->pc = 0x36D398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D394u;
    // 0x36d398: 0x3c0202d  daddu       $a0, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38D050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38D050u, 0x36D394u, 0x36D39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D39Cu;
label_36d39c:
    // 0x36d39c: 0xc0e39c0  jal         func_38E700
    ctx->pc = 0x36D39Cu;
    SET_GPR_U32(ctx, 31, 0x36D3A4u);
    ctx->pc = 0x36D3A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D39Cu;
    // 0x36d3a0: 0x8fa40024  lw          $a0, 0x24($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x38E700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x38E700u, 0x36D39Cu, 0x36D3A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D3A4u;
label_36d3a4:
    // 0x36d3a4: 0xc0db4fa  jal         func_36D3E8
    ctx->pc = 0x36D3A4u;
    SET_GPR_U32(ctx, 31, 0x36D3ACu);
    ctx->pc = 0x36D3A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x36D3A4u;
    // 0x36d3a8: 0x8fa40020  lw          $a0, 0x20($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x36D3E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x36D3E8u, 0x36D3A4u, 0x36D3ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x36D3ACu;
label_36d3ac:
    // 0x36d3ac: 0x7bb000e0  lq          $s0, 0xE0($sp)
    ctx->pc = 0x36d3acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x36d3b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x36d3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x36d3b4: 0x7bb100d0  lq          $s1, 0xD0($sp)
    ctx->pc = 0x36d3b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x36d3b8: 0x7bb200c0  lq          $s2, 0xC0($sp)
    ctx->pc = 0x36d3b8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x36d3bc: 0x7bb300b0  lq          $s3, 0xB0($sp)
    ctx->pc = 0x36d3bcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x36d3c0: 0x7bb400a0  lq          $s4, 0xA0($sp)
    ctx->pc = 0x36d3c0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x36d3c4: 0x7bb50090  lq          $s5, 0x90($sp)
    ctx->pc = 0x36d3c4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x36d3c8: 0x7bb60080  lq          $s6, 0x80($sp)
    ctx->pc = 0x36d3c8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x36d3cc: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x36d3ccu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x36d3d0: 0x7bbe0060  lq          $fp, 0x60($sp)
    ctx->pc = 0x36d3d0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x36d3d4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x36d3d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x36d3d8: 0xc7b400f0  lwc1        $f20, 0xF0($sp)
    ctx->pc = 0x36d3d8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 240)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x36d3dc: 0x3e00008  jr          $ra
    ctx->pc = 0x36D3DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x36D3E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x36D3DCu;
        // 0x36d3e0: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x36D3DCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x36D3E4u;
    // 0x36d3e4: 0x0  nop
    ctx->pc = 0x36d3e4u;
    // NOP
    ctx->pc = 0x36d3e8u;
}
