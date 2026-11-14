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

// Function: sub_004A28B0
// Address: 0x4a28b0 - 0x4a35c0
void sub_004A28B0_0x4a28b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A28B0_0x4a28b0");
#endif

    switch (ctx->pc) {
        case 0x4a28f8u: goto label_4a28f8;
        case 0x4a2970u: goto label_4a2970;
        case 0x4a29d0u: goto label_4a29d0;
        case 0x4a2a40u: goto label_4a2a40;
        case 0x4a2aa0u: goto label_4a2aa0;
        case 0x4a2b48u: goto label_4a2b48;
        case 0x4a2ba8u: goto label_4a2ba8;
        case 0x4a2c18u: goto label_4a2c18;
        case 0x4a2c78u: goto label_4a2c78;
        case 0x4a2d08u: goto label_4a2d08;
        case 0x4a2d80u: goto label_4a2d80;
        case 0x4a2e08u: goto label_4a2e08;
        case 0x4a2e80u: goto label_4a2e80;
        case 0x4a2ed8u: goto label_4a2ed8;
        case 0x4a3118u: goto label_4a3118;
        case 0x4a316cu: goto label_4a316c;
        case 0x4a31b4u: goto label_4a31b4;
        case 0x4a31c8u: goto label_4a31c8;
        case 0x4a3250u: goto label_4a3250;
        case 0x4a3268u: goto label_4a3268;
        case 0x4a3304u: goto label_4a3304;
        case 0x4a3330u: goto label_4a3330;
        case 0x4a3348u: goto label_4a3348;
        case 0x4a33a0u: goto label_4a33a0;
        case 0x4a33b4u: goto label_4a33b4;
        case 0x4a33c8u: goto label_4a33c8;
        case 0x4a33f4u: goto label_4a33f4;
        case 0x4a3430u: goto label_4a3430;
        case 0x4a3450u: goto label_4a3450;
        case 0x4a34a4u: goto label_4a34a4;
        case 0x4a34acu: goto label_4a34ac;
        case 0x4a356cu: goto label_4a356c;
        case 0x4a357cu: goto label_4a357c;
        default: break;
    }

    ctx->pc = 0x4a28b0u;

label_4a28b0:
    // 0x4a28b0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x4a28b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x4a28b4: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x4a28b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x4a28b8: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x4a28b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x4a28bc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4a28bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a28c0: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x4a28c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x4a28c4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4a28c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a28c8: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x4a28c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x4a28cc: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x4a28ccu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a28d0: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x4a28d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x4a28d4: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x4a28d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a28d8: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x4a28d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x4a28dc: 0x3a0a82d  daddu       $s5, $sp, $zero
    ctx->pc = 0x4a28dcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a28e0: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x4a28e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a28e4: 0x129a80b  movn        $s5, $t1, $t1
    ctx->pc = 0x4a28e4u;
    if (GPR_U64(ctx, 9) != 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 9));
    // 0x4a28e8: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x4a28e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a28ec: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4a28ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x4a28f0: 0xc128758  jal         func_4A1D60
    ctx->pc = 0x4A28F0u;
    SET_GPR_U32(ctx, 31, 0x4A28F8u);
    ctx->pc = 0x4A28F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A28F0u;
    // 0x4a28f4: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A1D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A1D60u, 0x4A28F0u, 0x4A28F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A28F8u;
label_4a28f8:
    // 0x4a28f8: 0x2549021  addu        $s2, $s2, $s4
    ctx->pc = 0x4a28f8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 20)));
    // 0x4a28fc: 0xaea20000  sw          $v0, 0x0($s5)
    ctx->pc = 0x4a28fcu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 2));
    // 0x4a2900: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x4a2900u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x4a2904: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x4a2904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x4a2908: 0x50800b  movn        $s0, $v0, $s0
    ctx->pc = 0x4a2908u;
    if (GPR_U64(ctx, 16) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x4a290c: 0x8e250008  lw          $a1, 0x8($s1)
    ctx->pc = 0x4a290cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x4a2910: 0x9222000c  lbu         $v0, 0xC($s1)
    ctx->pc = 0x4a2910u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x4a2914: 0x14430071  bne         $v0, $v1, . + 4 + (0x71 << 2)
    ctx->pc = 0x4A2914u;
    {
        const bool branch_taken_0x4a2914 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x4A2918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2914u;
        // 0x4a2918: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2914) {
            ctx->pc = 0x4A2ADCu;
            goto label_4a2adc;
        }
    }
    ctx->pc = 0x4A291Cu;
    // 0x4a291c: 0x9263000c  lbu         $v1, 0xC($s3)
    ctx->pc = 0x4a291cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x4a2920: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x4a2920u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x4a2924: 0x5462006f  bnel        $v1, $v0, . + 4 + (0x6F << 2)
    ctx->pc = 0x4A2924u;
    {
        const bool branch_taken_0x4a2924 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4a2924) {
            ctx->pc = 0x4A2928u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A2924u;
            // 0x4a2928: 0x308300ff  andi        $v1, $a0, 0xFF (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A2AE4u;
            goto label_4a2ae4;
        }
    }
    ctx->pc = 0x4A292Cu;
    // 0x4a292c: 0x92220018  lbu         $v0, 0x18($s1)
    ctx->pc = 0x4a292cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x4a2930: 0xb43023  subu        $a2, $a1, $s4
    ctx->pc = 0x4a2930u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
    // 0x4a2934: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4a2934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4a2938: 0x10400034  beqz        $v0, . + 4 + (0x34 << 2)
    ctx->pc = 0x4A2938u;
    {
        const bool branch_taken_0x4a2938 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A293Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2938u;
        // 0x4a293c: 0x54840  sll         $t1, $a1, 1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2938) {
            ctx->pc = 0x4A2A0Cu;
            goto label_4a2a0c;
        }
    }
    ctx->pc = 0x4A2940u;
    // 0x4a2940: 0x92620018  lbu         $v0, 0x18($s3)
    ctx->pc = 0x4a2940u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x4a2944: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4a2944u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4a2948: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x4A2948u;
    {
        const bool branch_taken_0x4a2948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a2948) {
            ctx->pc = 0x4A29ACu;
            goto label_4a29ac;
        }
    }
    ctx->pc = 0x4A2950u;
    // 0x4a2950: 0x12000162  beqz        $s0, . + 4 + (0x162 << 2)
    ctx->pc = 0x4A2950u;
    {
        const bool branch_taken_0x4a2950 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A2954u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2950u;
        // 0x4a2954: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2950) {
            ctx->pc = 0x4A2EDCu;
            goto label_4a2edc;
        }
    }
    ctx->pc = 0x4A2958u;
    // 0x4a2958: 0x10c00160  beqz        $a2, . + 4 + (0x160 << 2)
    ctx->pc = 0x4A2958u;
    {
        const bool branch_taken_0x4a2958 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A295Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2958u;
        // 0x4a295c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2958) {
            ctx->pc = 0x4A2EDCu;
            goto label_4a2edc;
        }
    }
    ctx->pc = 0x4A2960u;
    // 0x4a2960: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x4a2960u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x4a2964: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x4a2964u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a2968: 0xc7818190  lwc1        $f1, -0x7E70($gp)
    ctx->pc = 0x4a2968u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4a296c: 0x0  nop
    ctx->pc = 0x4a296cu;
    // NOP
label_4a2970:
    // 0x4a2970: 0x2471021  addu        $v0, $s2, $a3
    ctx->pc = 0x4a2970u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
    // 0x4a2974: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x4a2974u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4a2978: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x4a2978u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x4a297c: 0xe6202b  sltu        $a0, $a3, $a2
    ctx->pc = 0x4a297cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x4a2980: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4a2980u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4a2984: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4a2984u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4a2988: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x4a2988u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x4a298c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x4a298cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x4a2990: 0x460000e4  .word       0x460000E4                   # cvt.w.s     $f3, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4a2990u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x4a2994: 0x44021800  mfc1        $v0, $f3
    ctx->pc = 0x4a2994u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x4a2998: 0xa5020000  sh          $v0, 0x0($t0)
    ctx->pc = 0x4a2998u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4a299c: 0x1480fff4  bnez        $a0, . + 4 + (-0xC << 2)
    ctx->pc = 0x4A299Cu;
    {
        const bool branch_taken_0x4a299c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A29A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A299Cu;
        // 0x4a29a0: 0x25080002  addiu       $t0, $t0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a299c) {
            ctx->pc = 0x4A2970u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a2970;
        }
    }
    ctx->pc = 0x4A29A4u;
    // 0x4a29a4: 0x1000014d  b           . + 4 + (0x14D << 2)
    ctx->pc = 0x4A29A4u;
    {
        const bool branch_taken_0x4a29a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A29A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A29A4u;
        // 0x4a29a8: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a29a4) {
            ctx->pc = 0x4A2EDCu;
            goto label_4a2edc;
        }
    }
    ctx->pc = 0x4A29ACu;
label_4a29ac:
    // 0x4a29ac: 0x1200014b  beqz        $s0, . + 4 + (0x14B << 2)
    ctx->pc = 0x4A29ACu;
    {
        const bool branch_taken_0x4a29ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A29B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A29ACu;
        // 0x4a29b0: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a29ac) {
            ctx->pc = 0x4A2EDCu;
            goto label_4a2edc;
        }
    }
    ctx->pc = 0x4A29B4u;
    // 0x4a29b4: 0x10c00149  beqz        $a2, . + 4 + (0x149 << 2)
    ctx->pc = 0x4A29B4u;
    {
        const bool branch_taken_0x4a29b4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A29B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A29B4u;
        // 0x4a29b8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a29b4) {
            ctx->pc = 0x4A2EDCu;
            goto label_4a2edc;
        }
    }
    ctx->pc = 0x4A29BCu;
    // 0x4a29bc: 0x3c01c300  lui         $at, 0xC300
    ctx->pc = 0x4a29bcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49920 << 16));
    // 0x4a29c0: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x4a29c0u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x4a29c4: 0x200402d  daddu       $t0, $s0, $zero
    ctx->pc = 0x4a29c4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a29c8: 0xc7818194  lwc1        $f1, -0x7E6C($gp)
    ctx->pc = 0x4a29c8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934932)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4a29cc: 0x0  nop
    ctx->pc = 0x4a29ccu;
    // NOP
label_4a29d0:
    // 0x4a29d0: 0x2471021  addu        $v0, $s2, $a3
    ctx->pc = 0x4a29d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
    // 0x4a29d4: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x4a29d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4a29d8: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x4a29d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x4a29dc: 0xe6202b  sltu        $a0, $a3, $a2
    ctx->pc = 0x4a29dcu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x4a29e0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4a29e0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4a29e4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4a29e4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4a29e8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x4a29e8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x4a29ec: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x4a29ecu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x4a29f0: 0x460000e4  .word       0x460000E4                   # cvt.w.s     $f3, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4a29f0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x4a29f4: 0x44021800  mfc1        $v0, $f3
    ctx->pc = 0x4a29f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x4a29f8: 0xa5020000  sh          $v0, 0x0($t0)
    ctx->pc = 0x4a29f8u;
    WRITE16(ADD32(GPR_U32(ctx, 8), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4a29fc: 0x1480fff4  bnez        $a0, . + 4 + (-0xC << 2)
    ctx->pc = 0x4A29FCu;
    {
        const bool branch_taken_0x4a29fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A2A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A29FCu;
        // 0x4a2a00: 0x25080002  addiu       $t0, $t0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a29fc) {
            ctx->pc = 0x4A29D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a29d0;
        }
    }
    ctx->pc = 0x4A2A04u;
    // 0x4a2a04: 0x10000135  b           . + 4 + (0x135 << 2)
    ctx->pc = 0x4A2A04u;
    {
        const bool branch_taken_0x4a2a04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A2A08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2A04u;
        // 0x4a2a08: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2a04) {
            ctx->pc = 0x4A2EDCu;
            goto label_4a2edc;
        }
    }
    ctx->pc = 0x4A2A0Cu;
label_4a2a0c:
    // 0x4a2a0c: 0x92620018  lbu         $v0, 0x18($s3)
    ctx->pc = 0x4a2a0cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x4a2a10: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4a2a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4a2a14: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x4A2A14u;
    {
        const bool branch_taken_0x4a2a14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a2a14) {
            ctx->pc = 0x4A2A7Cu;
            goto label_4a2a7c;
        }
    }
    ctx->pc = 0x4A2A1Cu;
    // 0x4a2a1c: 0x1200012f  beqz        $s0, . + 4 + (0x12F << 2)
    ctx->pc = 0x4A2A1Cu;
    {
        const bool branch_taken_0x4a2a1c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A2A20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2A1Cu;
        // 0x4a2a20: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2a1c) {
            ctx->pc = 0x4A2EDCu;
            goto label_4a2edc;
        }
    }
    ctx->pc = 0x4A2A24u;
    // 0x4a2a24: 0x10c0012d  beqz        $a2, . + 4 + (0x12D << 2)
    ctx->pc = 0x4A2A24u;
    {
        const bool branch_taken_0x4a2a24 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A2A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2A24u;
        // 0x4a2a28: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2a24) {
            ctx->pc = 0x4A2EDCu;
            goto label_4a2edc;
        }
    }
    ctx->pc = 0x4A2A2Cu;
    // 0x4a2a2c: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x4a2a2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x4a2a30: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x4a2a30u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x4a2a34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4a2a34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a2a38: 0xc7818190  lwc1        $f1, -0x7E70($gp)
    ctx->pc = 0x4a2a38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934928)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4a2a3c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4a2a3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4a2a40:
    // 0x4a2a40: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x4a2a40u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a2a44: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x4a2a44u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x4a2a48: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4a2a48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x4a2a4c: 0xe6182b  sltu        $v1, $a3, $a2
    ctx->pc = 0x4a2a4cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x4a2a50: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4a2a50u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4a2a54: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4a2a54u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4a2a58: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x4a2a58u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x4a2a5c: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x4a2a5cu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x4a2a60: 0x460000e4  .word       0x460000E4                   # cvt.w.s     $f3, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4a2a60u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x4a2a64: 0x44021800  mfc1        $v0, $f3
    ctx->pc = 0x4a2a64u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x4a2a68: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x4a2a68u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4a2a6c: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x4A2A6Cu;
    {
        const bool branch_taken_0x4a2a6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A2A70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2A6Cu;
        // 0x4a2a70: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2a6c) {
            ctx->pc = 0x4A2A40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a2a40;
        }
    }
    ctx->pc = 0x4A2A74u;
    // 0x4a2a74: 0x10000119  b           . + 4 + (0x119 << 2)
    ctx->pc = 0x4A2A74u;
    {
        const bool branch_taken_0x4a2a74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A2A78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2A74u;
        // 0x4a2a78: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2a74) {
            ctx->pc = 0x4A2EDCu;
            goto label_4a2edc;
        }
    }
    ctx->pc = 0x4A2A7Cu;
label_4a2a7c:
    // 0x4a2a7c: 0x12000117  beqz        $s0, . + 4 + (0x117 << 2)
    ctx->pc = 0x4A2A7Cu;
    {
        const bool branch_taken_0x4a2a7c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A2A80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2A7Cu;
        // 0x4a2a80: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2a7c) {
            ctx->pc = 0x4A2EDCu;
            goto label_4a2edc;
        }
    }
    ctx->pc = 0x4A2A84u;
    // 0x4a2a84: 0x10c00115  beqz        $a2, . + 4 + (0x115 << 2)
    ctx->pc = 0x4A2A84u;
    {
        const bool branch_taken_0x4a2a84 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A2A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2A84u;
        // 0x4a2a88: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2a84) {
            ctx->pc = 0x4A2EDCu;
            goto label_4a2edc;
        }
    }
    ctx->pc = 0x4A2A8Cu;
    // 0x4a2a8c: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x4a2a8cu;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x4a2a90: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4a2a90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a2a94: 0xc7818194  lwc1        $f1, -0x7E6C($gp)
    ctx->pc = 0x4a2a94u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934932)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x4a2a98: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4a2a98u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a2a9c: 0x0  nop
    ctx->pc = 0x4a2a9cu;
    // NOP
label_4a2aa0:
    // 0x4a2aa0: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x4a2aa0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a2aa4: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x4a2aa4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x4a2aa8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4a2aa8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x4a2aac: 0xe6182b  sltu        $v1, $a3, $a2
    ctx->pc = 0x4a2aacu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x4a2ab0: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4a2ab0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4a2ab4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4a2ab4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4a2ab8: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x4a2ab8u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x4a2abc: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x4a2abcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x4a2ac0: 0x460000e4  .word       0x460000E4                   # cvt.w.s     $f3, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4a2ac0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x4a2ac4: 0x44021800  mfc1        $v0, $f3
    ctx->pc = 0x4a2ac4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x4a2ac8: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x4a2ac8u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4a2acc: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x4A2ACCu;
    {
        const bool branch_taken_0x4a2acc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A2AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2ACCu;
        // 0x4a2ad0: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2acc) {
            ctx->pc = 0x4A2AA0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a2aa0;
        }
    }
    ctx->pc = 0x4A2AD4u;
    // 0x4a2ad4: 0x10000101  b           . + 4 + (0x101 << 2)
    ctx->pc = 0x4A2AD4u;
    {
        const bool branch_taken_0x4a2ad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A2AD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2AD4u;
        // 0x4a2ad8: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2ad4) {
            ctx->pc = 0x4A2EDCu;
            goto label_4a2edc;
        }
    }
    ctx->pc = 0x4A2ADCu;
label_4a2adc:
    // 0x4a2adc: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x4a2adcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x4a2ae0: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x4a2ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4a2ae4:
    // 0x4a2ae4: 0x54620073  bnel        $v1, $v0, . + 4 + (0x73 << 2)
    ctx->pc = 0x4A2AE4u;
    {
        const bool branch_taken_0x4a2ae4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4a2ae4) {
            ctx->pc = 0x4A2AE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A2AE4u;
            // 0x4a2ae8: 0x92220018  lbu         $v0, 0x18($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A2CB4u;
            goto label_4a2cb4;
        }
    }
    ctx->pc = 0x4A2AECu;
    // 0x4a2aec: 0x9263000c  lbu         $v1, 0xC($s3)
    ctx->pc = 0x4a2aecu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x4a2af0: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x4a2af0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x4a2af4: 0x5462006f  bnel        $v1, $v0, . + 4 + (0x6F << 2)
    ctx->pc = 0x4A2AF4u;
    {
        const bool branch_taken_0x4a2af4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x4a2af4) {
            ctx->pc = 0x4A2AF8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A2AF4u;
            // 0x4a2af8: 0x92220018  lbu         $v0, 0x18($s1) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 24)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A2CB4u;
            goto label_4a2cb4;
        }
    }
    ctx->pc = 0x4A2AFCu;
    // 0x4a2afc: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x4a2afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x4a2b00: 0x8ea40000  lw          $a0, 0x0($s5)
    ctx->pc = 0x4a2b00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4a2b04: 0x92230018  lbu         $v1, 0x18($s1)
    ctx->pc = 0x4a2b04u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x4a2b08: 0x24842  srl         $t1, $v0, 1
    ctx->pc = 0x4a2b08u;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x4a2b0c: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x4a2b0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x4a2b10: 0x10600034  beqz        $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x4A2B10u;
    {
        const bool branch_taken_0x4a2b10 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A2B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2B10u;
        // 0x4a2b14: 0x1243023  subu        $a2, $t1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2b10) {
            ctx->pc = 0x4A2BE4u;
            goto label_4a2be4;
        }
    }
    ctx->pc = 0x4A2B18u;
    // 0x4a2b18: 0x92620018  lbu         $v0, 0x18($s3)
    ctx->pc = 0x4a2b18u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x4a2b1c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4a2b1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4a2b20: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x4A2B20u;
    {
        const bool branch_taken_0x4a2b20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a2b20) {
            ctx->pc = 0x4A2B84u;
            goto label_4a2b84;
        }
    }
    ctx->pc = 0x4A2B28u;
    // 0x4a2b28: 0x120000ec  beqz        $s0, . + 4 + (0xEC << 2)
    ctx->pc = 0x4A2B28u;
    {
        const bool branch_taken_0x4a2b28 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A2B2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2B28u;
        // 0x4a2b2c: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2b28) {
            ctx->pc = 0x4A2EDCu;
            goto label_4a2edc;
        }
    }
    ctx->pc = 0x4A2B30u;
    // 0x4a2b30: 0x10c000ea  beqz        $a2, . + 4 + (0xEA << 2)
    ctx->pc = 0x4A2B30u;
    {
        const bool branch_taken_0x4a2b30 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A2B34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2B30u;
        // 0x4a2b34: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2b30) {
            ctx->pc = 0x4A2EDCu;
            goto label_4a2edc;
        }
    }
    ctx->pc = 0x4A2B38u;
    // 0x4a2b38: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x4a2b38u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x4a2b3c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4a2b3cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a2b40: 0x3c013b7f  lui         $at, 0x3B7F
    ctx->pc = 0x4a2b40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15231 << 16));
    // 0x4a2b44: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x4a2b44u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4a2b48:
    // 0x4a2b48: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4a2b48u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a2b4c: 0x2072021  addu        $a0, $s0, $a3
    ctx->pc = 0x4a2b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x4a2b50: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x4a2b50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x4a2b54: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x4a2b54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x4a2b58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4a2b58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4a2b5c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4a2b5cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4a2b60: 0xe6182b  sltu        $v1, $a3, $a2
    ctx->pc = 0x4a2b60u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x4a2b64: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x4a2b64u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x4a2b68: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x4a2b68u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x4a2b6c: 0x460000e4  .word       0x460000E4                   # cvt.w.s     $f3, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4a2b6cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x4a2b70: 0x44021800  mfc1        $v0, $f3
    ctx->pc = 0x4a2b70u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x4a2b74: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x4A2B74u;
    {
        const bool branch_taken_0x4a2b74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A2B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2B74u;
        // 0x4a2b78: 0xa0820000  sb          $v0, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2b74) {
            ctx->pc = 0x4A2B48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a2b48;
        }
    }
    ctx->pc = 0x4A2B7Cu;
    // 0x4a2b7c: 0x100000d7  b           . + 4 + (0xD7 << 2)
    ctx->pc = 0x4A2B7Cu;
    {
        const bool branch_taken_0x4a2b7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A2B80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2B7Cu;
        // 0x4a2b80: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2b7c) {
            ctx->pc = 0x4A2EDCu;
            goto label_4a2edc;
        }
    }
    ctx->pc = 0x4A2B84u;
label_4a2b84:
    // 0x4a2b84: 0x120000d5  beqz        $s0, . + 4 + (0xD5 << 2)
    ctx->pc = 0x4A2B84u;
    {
        const bool branch_taken_0x4a2b84 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A2B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2B84u;
        // 0x4a2b88: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2b84) {
            ctx->pc = 0x4A2EDCu;
            goto label_4a2edc;
        }
    }
    ctx->pc = 0x4A2B8Cu;
    // 0x4a2b8c: 0x10c000d3  beqz        $a2, . + 4 + (0xD3 << 2)
    ctx->pc = 0x4A2B8Cu;
    {
        const bool branch_taken_0x4a2b8c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A2B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2B8Cu;
        // 0x4a2b90: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2b8c) {
            ctx->pc = 0x4A2EDCu;
            goto label_4a2edc;
        }
    }
    ctx->pc = 0x4A2B94u;
    // 0x4a2b94: 0x3c01c700  lui         $at, 0xC700
    ctx->pc = 0x4a2b94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50944 << 16));
    // 0x4a2b98: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x4a2b98u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x4a2b9c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4a2b9cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a2ba0: 0x3c013b7e  lui         $at, 0x3B7E
    ctx->pc = 0x4a2ba0u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15230 << 16));
    // 0x4a2ba4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x4a2ba4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4a2ba8:
    // 0x4a2ba8: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4a2ba8u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a2bac: 0x2072021  addu        $a0, $s0, $a3
    ctx->pc = 0x4a2bacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x4a2bb0: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x4a2bb0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x4a2bb4: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x4a2bb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x4a2bb8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4a2bb8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4a2bbc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4a2bbcu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4a2bc0: 0xe6182b  sltu        $v1, $a3, $a2
    ctx->pc = 0x4a2bc0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x4a2bc4: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x4a2bc4u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x4a2bc8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x4a2bc8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x4a2bcc: 0x460000e4  .word       0x460000E4                   # cvt.w.s     $f3, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4a2bccu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x4a2bd0: 0x44021800  mfc1        $v0, $f3
    ctx->pc = 0x4a2bd0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x4a2bd4: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x4A2BD4u;
    {
        const bool branch_taken_0x4a2bd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A2BD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2BD4u;
        // 0x4a2bd8: 0xa0820000  sb          $v0, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2bd4) {
            ctx->pc = 0x4A2BA8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a2ba8;
        }
    }
    ctx->pc = 0x4A2BDCu;
    // 0x4a2bdc: 0x100000bf  b           . + 4 + (0xBF << 2)
    ctx->pc = 0x4A2BDCu;
    {
        const bool branch_taken_0x4a2bdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A2BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2BDCu;
        // 0x4a2be0: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2bdc) {
            ctx->pc = 0x4A2EDCu;
            goto label_4a2edc;
        }
    }
    ctx->pc = 0x4A2BE4u;
label_4a2be4:
    // 0x4a2be4: 0x92620018  lbu         $v0, 0x18($s3)
    ctx->pc = 0x4a2be4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 24)));
    // 0x4a2be8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4a2be8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4a2bec: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x4A2BECu;
    {
        const bool branch_taken_0x4a2bec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a2bec) {
            ctx->pc = 0x4A2C54u;
            goto label_4a2c54;
        }
    }
    ctx->pc = 0x4A2BF4u;
    // 0x4a2bf4: 0x120000b9  beqz        $s0, . + 4 + (0xB9 << 2)
    ctx->pc = 0x4A2BF4u;
    {
        const bool branch_taken_0x4a2bf4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A2BF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2BF4u;
        // 0x4a2bf8: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2bf4) {
            ctx->pc = 0x4A2EDCu;
            goto label_4a2edc;
        }
    }
    ctx->pc = 0x4A2BFCu;
    // 0x4a2bfc: 0x10c000b7  beqz        $a2, . + 4 + (0xB7 << 2)
    ctx->pc = 0x4A2BFCu;
    {
        const bool branch_taken_0x4a2bfc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A2C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2BFCu;
        // 0x4a2c00: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2bfc) {
            ctx->pc = 0x4A2EDCu;
            goto label_4a2edc;
        }
    }
    ctx->pc = 0x4A2C04u;
    // 0x4a2c04: 0x3c014700  lui         $at, 0x4700
    ctx->pc = 0x4a2c04u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18176 << 16));
    // 0x4a2c08: 0x44811000  mtc1        $at, $f2
    ctx->pc = 0x4a2c08u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x4a2c0c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4a2c0cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a2c10: 0x3c013b7e  lui         $at, 0x3B7E
    ctx->pc = 0x4a2c10u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15230 << 16));
    // 0x4a2c14: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x4a2c14u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4a2c18:
    // 0x4a2c18: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4a2c18u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a2c1c: 0x2072021  addu        $a0, $s0, $a3
    ctx->pc = 0x4a2c1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x4a2c20: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x4a2c20u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x4a2c24: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x4a2c24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x4a2c28: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4a2c28u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4a2c2c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4a2c2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4a2c30: 0xe6182b  sltu        $v1, $a3, $a2
    ctx->pc = 0x4a2c30u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x4a2c34: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x4a2c34u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x4a2c38: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x4a2c38u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x4a2c3c: 0x460000e4  .word       0x460000E4                   # cvt.w.s     $f3, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4a2c3cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x4a2c40: 0x44021800  mfc1        $v0, $f3
    ctx->pc = 0x4a2c40u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x4a2c44: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x4A2C44u;
    {
        const bool branch_taken_0x4a2c44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A2C48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2C44u;
        // 0x4a2c48: 0xa0820000  sb          $v0, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2c44) {
            ctx->pc = 0x4A2C18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a2c18;
        }
    }
    ctx->pc = 0x4A2C4Cu;
    // 0x4a2c4c: 0x100000a3  b           . + 4 + (0xA3 << 2)
    ctx->pc = 0x4A2C4Cu;
    {
        const bool branch_taken_0x4a2c4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A2C50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2C4Cu;
        // 0x4a2c50: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2c4c) {
            ctx->pc = 0x4A2EDCu;
            goto label_4a2edc;
        }
    }
    ctx->pc = 0x4A2C54u;
label_4a2c54:
    // 0x4a2c54: 0x120000a1  beqz        $s0, . + 4 + (0xA1 << 2)
    ctx->pc = 0x4A2C54u;
    {
        const bool branch_taken_0x4a2c54 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A2C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2C54u;
        // 0x4a2c58: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2c54) {
            ctx->pc = 0x4A2EDCu;
            goto label_4a2edc;
        }
    }
    ctx->pc = 0x4A2C5Cu;
    // 0x4a2c5c: 0x10c0009f  beqz        $a2, . + 4 + (0x9F << 2)
    ctx->pc = 0x4A2C5Cu;
    {
        const bool branch_taken_0x4a2c5c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A2C60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2C5Cu;
        // 0x4a2c60: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2c5c) {
            ctx->pc = 0x4A2EDCu;
            goto label_4a2edc;
        }
    }
    ctx->pc = 0x4A2C64u;
    // 0x4a2c64: 0x44801000  mtc1        $zero, $f2
    ctx->pc = 0x4a2c64u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x4a2c68: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4a2c68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a2c6c: 0x3c013b7e  lui         $at, 0x3B7E
    ctx->pc = 0x4a2c6cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15230 << 16));
    // 0x4a2c70: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x4a2c70u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4a2c74: 0x0  nop
    ctx->pc = 0x4a2c74u;
    // NOP
label_4a2c78:
    // 0x4a2c78: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4a2c78u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a2c7c: 0x2072021  addu        $a0, $s0, $a3
    ctx->pc = 0x4a2c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x4a2c80: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x4a2c80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x4a2c84: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x4a2c84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x4a2c88: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4a2c88u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4a2c8c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4a2c8cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4a2c90: 0xe6182b  sltu        $v1, $a3, $a2
    ctx->pc = 0x4a2c90u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x4a2c94: 0x46020000  add.s       $f0, $f0, $f2
    ctx->pc = 0x4a2c94u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[2]);
    // 0x4a2c98: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x4a2c98u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x4a2c9c: 0x460000e4  .word       0x460000E4                   # cvt.w.s     $f3, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4a2c9cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[3], &tmp, sizeof(tmp)); }
    // 0x4a2ca0: 0x44021800  mfc1        $v0, $f3
    ctx->pc = 0x4a2ca0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[3], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x4a2ca4: 0x1460fff4  bnez        $v1, . + 4 + (-0xC << 2)
    ctx->pc = 0x4A2CA4u;
    {
        const bool branch_taken_0x4a2ca4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A2CA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2CA4u;
        // 0x4a2ca8: 0xa0820000  sb          $v0, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2ca4) {
            ctx->pc = 0x4A2C78u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a2c78;
        }
    }
    ctx->pc = 0x4A2CACu;
    // 0x4a2cac: 0x1000008b  b           . + 4 + (0x8B << 2)
    ctx->pc = 0x4A2CACu;
    {
        const bool branch_taken_0x4a2cac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A2CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2CACu;
        // 0x4a2cb0: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2cac) {
            ctx->pc = 0x4A2EDCu;
            goto label_4a2edc;
        }
    }
    ctx->pc = 0x4A2CB4u;
label_4a2cb4:
    // 0x4a2cb4: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4a2cb4u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a2cb8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4a2cb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4a2cbc: 0x14400041  bnez        $v0, . + 4 + (0x41 << 2)
    ctx->pc = 0x4A2CBCu;
    {
        const bool branch_taken_0x4a2cbc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A2CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2CBCu;
        // 0x4a2cc0: 0x92650018  lbu         $a1, 0x18($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 24)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2cbc) {
            ctx->pc = 0x4A2DC4u;
            goto label_4a2dc4;
        }
    }
    ctx->pc = 0x4A2CC4u;
    // 0x4a2cc4: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x4a2cc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x4a2cc8: 0x1040003b  beqz        $v0, . + 4 + (0x3B << 2)
    ctx->pc = 0x4A2CC8u;
    {
        const bool branch_taken_0x4a2cc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A2CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2CC8u;
        // 0x4a2ccc: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2cc8) {
            ctx->pc = 0x4A2DB8u;
            goto label_4a2db8;
        }
    }
    ctx->pc = 0x4A2CD0u;
    // 0x4a2cd0: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x4a2cd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x4a2cd4: 0x1462001a  bne         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x4A2CD4u;
    {
        const bool branch_taken_0x4a2cd4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4A2CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2CD4u;
        // 0x4a2cd8: 0x8e290008  lw          $t1, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2cd4) {
            ctx->pc = 0x4A2D40u;
            goto label_4a2d40;
        }
    }
    ctx->pc = 0x4A2CDCu;
    // 0x4a2cdc: 0x9262000c  lbu         $v0, 0xC($s3)
    ctx->pc = 0x4a2cdcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x4a2ce0: 0x14430018  bne         $v0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x4A2CE0u;
    {
        const bool branch_taken_0x4a2ce0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x4A2CE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2CE0u;
        // 0x4a2ce4: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2ce0) {
            ctx->pc = 0x4A2D44u;
            goto label_4a2d44;
        }
    }
    ctx->pc = 0x4A2CE8u;
    // 0x4a2ce8: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x4a2ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4a2cec: 0x12000070  beqz        $s0, . + 4 + (0x70 << 2)
    ctx->pc = 0x4A2CECu;
    {
        const bool branch_taken_0x4a2cec = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A2CF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2CECu;
        // 0x4a2cf0: 0x1223023  subu        $a2, $t1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2cec) {
            ctx->pc = 0x4A2EB0u;
            goto label_4a2eb0;
        }
    }
    ctx->pc = 0x4A2CF4u;
    // 0x4a2cf4: 0x10c0006e  beqz        $a2, . + 4 + (0x6E << 2)
    ctx->pc = 0x4A2CF4u;
    {
        const bool branch_taken_0x4a2cf4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A2CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2CF4u;
        // 0x4a2cf8: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2cf4) {
            ctx->pc = 0x4A2EB0u;
            goto label_4a2eb0;
        }
    }
    ctx->pc = 0x4A2CFCu;
    // 0x4a2cfc: 0x3c014300  lui         $at, 0x4300
    ctx->pc = 0x4a2cfcu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)17152 << 16));
    // 0x4a2d00: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x4a2d00u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4a2d04: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4a2d04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4a2d08:
    // 0x4a2d08: 0x80a20000  lb          $v0, 0x0($a1)
    ctx->pc = 0x4a2d08u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a2d0c: 0x2072021  addu        $a0, $s0, $a3
    ctx->pc = 0x4a2d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x4a2d10: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x4a2d10u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x4a2d14: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x4a2d14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x4a2d18: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4a2d18u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4a2d1c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4a2d1cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4a2d20: 0xe6182b  sltu        $v1, $a3, $a2
    ctx->pc = 0x4a2d20u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x4a2d24: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x4a2d24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x4a2d28: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4a2d28u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x4a2d2c: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x4a2d2cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x4a2d30: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x4A2D30u;
    {
        const bool branch_taken_0x4a2d30 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A2D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2D30u;
        // 0x4a2d34: 0xa0820000  sb          $v0, 0x0($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2d30) {
            ctx->pc = 0x4A2D08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a2d08;
        }
    }
    ctx->pc = 0x4A2D38u;
    // 0x4a2d38: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x4A2D38u;
    {
        const bool branch_taken_0x4a2d38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A2D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2D38u;
        // 0x4a2d3c: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2d38) {
            ctx->pc = 0x4A2EDCu;
            goto label_4a2edc;
        }
    }
    ctx->pc = 0x4A2D40u;
label_4a2d40:
    // 0x4a2d40: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x4a2d40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4a2d44:
    // 0x4a2d44: 0x14620065  bne         $v1, $v0, . + 4 + (0x65 << 2)
    ctx->pc = 0x4A2D44u;
    {
        const bool branch_taken_0x4a2d44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4A2D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2D44u;
        // 0x4a2d48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2d44) {
            ctx->pc = 0x4A2EDCu;
            goto label_4a2edc;
        }
    }
    ctx->pc = 0x4A2D4Cu;
    // 0x4a2d4c: 0x9262000c  lbu         $v0, 0xC($s3)
    ctx->pc = 0x4a2d4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x4a2d50: 0x14430062  bne         $v0, $v1, . + 4 + (0x62 << 2)
    ctx->pc = 0x4A2D50u;
    {
        const bool branch_taken_0x4a2d50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x4A2D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2D50u;
        // 0x4a2d54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2d50) {
            ctx->pc = 0x4A2EDCu;
            goto label_4a2edc;
        }
    }
    ctx->pc = 0x4A2D58u;
    // 0x4a2d58: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x4a2d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4a2d5c: 0x93042  srl         $a2, $t1, 1
    ctx->pc = 0x4a2d5cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 9), 1));
    // 0x4a2d60: 0x12000053  beqz        $s0, . + 4 + (0x53 << 2)
    ctx->pc = 0x4A2D60u;
    {
        const bool branch_taken_0x4a2d60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A2D64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2D60u;
        // 0x4a2d64: 0xc23023  subu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2d60) {
            ctx->pc = 0x4A2EB0u;
            goto label_4a2eb0;
        }
    }
    ctx->pc = 0x4A2D68u;
    // 0x4a2d68: 0x10c00051  beqz        $a2, . + 4 + (0x51 << 2)
    ctx->pc = 0x4A2D68u;
    {
        const bool branch_taken_0x4a2d68 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A2D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2D68u;
        // 0x4a2d6c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2d68) {
            ctx->pc = 0x4A2EB0u;
            goto label_4a2eb0;
        }
    }
    ctx->pc = 0x4A2D70u;
    // 0x4a2d70: 0x3c014700  lui         $at, 0x4700
    ctx->pc = 0x4a2d70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)18176 << 16));
    // 0x4a2d74: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x4a2d74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4a2d78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4a2d78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a2d7c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4a2d7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4a2d80:
    // 0x4a2d80: 0x84a20000  lh          $v0, 0x0($a1)
    ctx->pc = 0x4a2d80u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a2d84: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x4a2d84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x4a2d88: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x4a2d88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x4a2d8c: 0xe6182b  sltu        $v1, $a3, $a2
    ctx->pc = 0x4a2d8cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x4a2d90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4a2d90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4a2d94: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4a2d94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4a2d98: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x4a2d98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x4a2d9c: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4a2d9cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x4a2da0: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x4a2da0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x4a2da4: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x4a2da4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4a2da8: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x4A2DA8u;
    {
        const bool branch_taken_0x4a2da8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A2DACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2DA8u;
        // 0x4a2dac: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2da8) {
            ctx->pc = 0x4A2D80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a2d80;
        }
    }
    ctx->pc = 0x4A2DB0u;
    // 0x4a2db0: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x4A2DB0u;
    {
        const bool branch_taken_0x4a2db0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A2DB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2DB0u;
        // 0x4a2db4: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2db0) {
            ctx->pc = 0x4A2EDCu;
            goto label_4a2edc;
        }
    }
    ctx->pc = 0x4A2DB8u;
label_4a2db8:
    // 0x4a2db8: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x4a2db8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x4a2dbc: 0x5040003e  beql        $v0, $zero, . + 4 + (0x3E << 2)
    ctx->pc = 0x4A2DBCu;
    {
        const bool branch_taken_0x4a2dbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a2dbc) {
            ctx->pc = 0x4A2DC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A2DBCu;
            // 0x4a2dc0: 0x9263000c  lbu         $v1, 0xC($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A2EB8u;
            goto label_4a2eb8;
        }
    }
    ctx->pc = 0x4A2DC4u;
label_4a2dc4:
    // 0x4a2dc4: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x4a2dc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x4a2dc8: 0x5440003b  bnel        $v0, $zero, . + 4 + (0x3B << 2)
    ctx->pc = 0x4A2DC8u;
    {
        const bool branch_taken_0x4a2dc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x4a2dc8) {
            ctx->pc = 0x4A2DCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A2DC8u;
            // 0x4a2dcc: 0x9263000c  lbu         $v1, 0xC($s3) (Delay Slot)
            SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A2EB8u;
            goto label_4a2eb8;
        }
    }
    ctx->pc = 0x4A2DD0u;
    // 0x4a2dd0: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x4a2dd0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x4a2dd4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x4a2dd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x4a2dd8: 0x14620019  bne         $v1, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x4A2DD8u;
    {
        const bool branch_taken_0x4a2dd8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4A2DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2DD8u;
        // 0x4a2ddc: 0x8e290008  lw          $t1, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2dd8) {
            ctx->pc = 0x4A2E40u;
            goto label_4a2e40;
        }
    }
    ctx->pc = 0x4A2DE0u;
    // 0x4a2de0: 0x9262000c  lbu         $v0, 0xC($s3)
    ctx->pc = 0x4a2de0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x4a2de4: 0x14430017  bne         $v0, $v1, . + 4 + (0x17 << 2)
    ctx->pc = 0x4A2DE4u;
    {
        const bool branch_taken_0x4a2de4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x4A2DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2DE4u;
        // 0x4a2de8: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2de4) {
            ctx->pc = 0x4A2E44u;
            goto label_4a2e44;
        }
    }
    ctx->pc = 0x4A2DECu;
    // 0x4a2dec: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x4a2decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4a2df0: 0x1200002f  beqz        $s0, . + 4 + (0x2F << 2)
    ctx->pc = 0x4A2DF0u;
    {
        const bool branch_taken_0x4a2df0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A2DF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2DF0u;
        // 0x4a2df4: 0x1223023  subu        $a2, $t1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2df0) {
            ctx->pc = 0x4A2EB0u;
            goto label_4a2eb0;
        }
    }
    ctx->pc = 0x4A2DF8u;
    // 0x4a2df8: 0x10c0002d  beqz        $a2, . + 4 + (0x2D << 2)
    ctx->pc = 0x4A2DF8u;
    {
        const bool branch_taken_0x4a2df8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A2DFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2DF8u;
        // 0x4a2dfc: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2df8) {
            ctx->pc = 0x4A2EB0u;
            goto label_4a2eb0;
        }
    }
    ctx->pc = 0x4A2E00u;
    // 0x4a2e00: 0x3c01c300  lui         $at, 0xC300
    ctx->pc = 0x4a2e00u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)49920 << 16));
    // 0x4a2e04: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x4a2e04u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
label_4a2e08:
    // 0x4a2e08: 0x2471021  addu        $v0, $s2, $a3
    ctx->pc = 0x4a2e08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), GPR_U32(ctx, 7)));
    // 0x4a2e0c: 0x2072821  addu        $a1, $s0, $a3
    ctx->pc = 0x4a2e0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 7)));
    // 0x4a2e10: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x4a2e10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x4a2e14: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x4a2e14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x4a2e18: 0xe6202b  sltu        $a0, $a3, $a2
    ctx->pc = 0x4a2e18u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x4a2e1c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x4a2e1cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4a2e20: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4a2e20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4a2e24: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x4a2e24u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x4a2e28: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4a2e28u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x4a2e2c: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x4a2e2cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x4a2e30: 0x1480fff5  bnez        $a0, . + 4 + (-0xB << 2)
    ctx->pc = 0x4A2E30u;
    {
        const bool branch_taken_0x4a2e30 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A2E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2E30u;
        // 0x4a2e34: 0xa0a20000  sb          $v0, 0x0($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2e30) {
            ctx->pc = 0x4A2E08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a2e08;
        }
    }
    ctx->pc = 0x4A2E38u;
    // 0x4a2e38: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x4A2E38u;
    {
        const bool branch_taken_0x4a2e38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A2E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2E38u;
        // 0x4a2e3c: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2e38) {
            ctx->pc = 0x4A2EDCu;
            goto label_4a2edc;
        }
    }
    ctx->pc = 0x4A2E40u;
label_4a2e40:
    // 0x4a2e40: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x4a2e40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_4a2e44:
    // 0x4a2e44: 0x14620025  bne         $v1, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x4A2E44u;
    {
        const bool branch_taken_0x4a2e44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4A2E48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2E44u;
        // 0x4a2e48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2e44) {
            ctx->pc = 0x4A2EDCu;
            goto label_4a2edc;
        }
    }
    ctx->pc = 0x4A2E4Cu;
    // 0x4a2e4c: 0x9262000c  lbu         $v0, 0xC($s3)
    ctx->pc = 0x4a2e4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x4a2e50: 0x14430022  bne         $v0, $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x4A2E50u;
    {
        const bool branch_taken_0x4a2e50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x4A2E54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2E50u;
        // 0x4a2e54: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2e50) {
            ctx->pc = 0x4A2EDCu;
            goto label_4a2edc;
        }
    }
    ctx->pc = 0x4A2E58u;
    // 0x4a2e58: 0x8ea20000  lw          $v0, 0x0($s5)
    ctx->pc = 0x4a2e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x4a2e5c: 0x93042  srl         $a2, $t1, 1
    ctx->pc = 0x4a2e5cu;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 9), 1));
    // 0x4a2e60: 0x12000013  beqz        $s0, . + 4 + (0x13 << 2)
    ctx->pc = 0x4A2E60u;
    {
        const bool branch_taken_0x4a2e60 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A2E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2E60u;
        // 0x4a2e64: 0xc23023  subu        $a2, $a2, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2e60) {
            ctx->pc = 0x4A2EB0u;
            goto label_4a2eb0;
        }
    }
    ctx->pc = 0x4A2E68u;
    // 0x4a2e68: 0x10c00011  beqz        $a2, . + 4 + (0x11 << 2)
    ctx->pc = 0x4A2E68u;
    {
        const bool branch_taken_0x4a2e68 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A2E6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2E68u;
        // 0x4a2e6c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2e68) {
            ctx->pc = 0x4A2EB0u;
            goto label_4a2eb0;
        }
    }
    ctx->pc = 0x4A2E70u;
    // 0x4a2e70: 0x3c01c700  lui         $at, 0xC700
    ctx->pc = 0x4a2e70u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)50944 << 16));
    // 0x4a2e74: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x4a2e74u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4a2e78: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4a2e78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a2e7c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x4a2e7cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4a2e80:
    // 0x4a2e80: 0x94a20000  lhu         $v0, 0x0($a1)
    ctx->pc = 0x4a2e80u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x4a2e84: 0x24e70001  addiu       $a3, $a3, 0x1
    ctx->pc = 0x4a2e84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
    // 0x4a2e88: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x4a2e88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x4a2e8c: 0xe6182b  sltu        $v1, $a3, $a2
    ctx->pc = 0x4a2e8cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x4a2e90: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4a2e90u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4a2e94: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4a2e94u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4a2e98: 0x46010000  add.s       $f0, $f0, $f1
    ctx->pc = 0x4a2e98u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[1]);
    // 0x4a2e9c: 0x460000a4  .word       0x460000A4                   # cvt.w.s     $f2, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4a2e9cu;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[2], &tmp, sizeof(tmp)); }
    // 0x4a2ea0: 0x44021000  mfc1        $v0, $f2
    ctx->pc = 0x4a2ea0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[2], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x4a2ea4: 0xa4820000  sh          $v0, 0x0($a0)
    ctx->pc = 0x4a2ea4u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4a2ea8: 0x1460fff5  bnez        $v1, . + 4 + (-0xB << 2)
    ctx->pc = 0x4A2EA8u;
    {
        const bool branch_taken_0x4a2ea8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A2EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2EA8u;
        // 0x4a2eac: 0x24840002  addiu       $a0, $a0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2ea8) {
            ctx->pc = 0x4A2E80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a2e80;
        }
    }
    ctx->pc = 0x4A2EB0u;
label_4a2eb0:
    // 0x4a2eb0: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x4A2EB0u;
    {
        const bool branch_taken_0x4a2eb0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A2EB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2EB0u;
        // 0x4a2eb4: 0x120102d  daddu       $v0, $t1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2eb0) {
            ctx->pc = 0x4A2EDCu;
            goto label_4a2edc;
        }
    }
    ctx->pc = 0x4A2EB8u;
label_4a2eb8:
    // 0x4a2eb8: 0x308200ff  andi        $v0, $a0, 0xFF
    ctx->pc = 0x4a2eb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x4a2ebc: 0x14430007  bne         $v0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x4A2EBCu;
    {
        const bool branch_taken_0x4a2ebc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x4A2EC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2EBCu;
        // 0x4a2ec0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2ebc) {
            ctx->pc = 0x4A2EDCu;
            goto label_4a2edc;
        }
    }
    ctx->pc = 0x4A2EC4u;
    // 0x4a2ec4: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4A2EC4u;
    {
        const bool branch_taken_0x4a2ec4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A2EC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2EC4u;
        // 0x4a2ec8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2ec4) {
            ctx->pc = 0x4A2ED8u;
            goto label_4a2ed8;
        }
    }
    ctx->pc = 0x4A2ECCu;
    // 0x4a2ecc: 0x8e260008  lw          $a2, 0x8($s1)
    ctx->pc = 0x4a2eccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x4a2ed0: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x4A2ED0u;
    SET_GPR_U32(ctx, 31, 0x4A2ED8u);
    ctx->pc = 0x4A2ED4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A2ED0u;
    // 0x4a2ed4: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x4A2ED0u, 0x4A2ED8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A2ED8u;
label_4a2ed8:
    // 0x4a2ed8: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x4a2ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_4a2edc:
    // 0x4a2edc: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x4a2edcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4a2ee0: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x4a2ee0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4a2ee4: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x4a2ee4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4a2ee8: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x4a2ee8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4a2eec: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x4a2eecu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4a2ef0: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x4a2ef0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4a2ef4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4a2ef4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a2ef8: 0x3e00008  jr          $ra
    ctx->pc = 0x4A2EF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A2EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2EF8u;
        // 0x4a2efc: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A2EF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A2F00u;
    // 0x4a2f00: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x4a2f00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x4a2f04: 0x7fb50080  sq          $s5, 0x80($sp)
    ctx->pc = 0x4a2f04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 21));
    // 0x4a2f08: 0xc0a82d  daddu       $s5, $a2, $zero
    ctx->pc = 0x4a2f08u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a2f0c: 0x7fb000d0  sq          $s0, 0xD0($sp)
    ctx->pc = 0x4a2f0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 16));
    // 0x4a2f10: 0x7fb100c0  sq          $s1, 0xC0($sp)
    ctx->pc = 0x4a2f10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 17));
    // 0x4a2f14: 0xe0802d  daddu       $s0, $a3, $zero
    ctx->pc = 0x4a2f14u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a2f18: 0x7fb200b0  sq          $s2, 0xB0($sp)
    ctx->pc = 0x4a2f18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 18));
    // 0x4a2f1c: 0x100882d  daddu       $s1, $t0, $zero
    ctx->pc = 0x4a2f1cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a2f20: 0x7fb300a0  sq          $s3, 0xA0($sp)
    ctx->pc = 0x4a2f20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 19));
    // 0x4a2f24: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4a2f24u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a2f28: 0x7fb60070  sq          $s6, 0x70($sp)
    ctx->pc = 0x4a2f28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 22));
    // 0x4a2f2c: 0x120982d  daddu       $s3, $t1, $zero
    ctx->pc = 0x4a2f2cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a2f30: 0x7fb70060  sq          $s7, 0x60($sp)
    ctx->pc = 0x4a2f30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 23));
    // 0x4a2f34: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x4a2f34u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a2f38: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x4a2f38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x4a2f3c: 0x220b82d  daddu       $s7, $s1, $zero
    ctx->pc = 0x4a2f3cu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a2f40: 0xafb50040  sw          $s5, 0x40($sp)
    ctx->pc = 0x4a2f40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 21));
    // 0x4a2f44: 0x7fb40090  sq          $s4, 0x90($sp)
    ctx->pc = 0x4a2f44u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 20));
    // 0x4a2f48: 0x8c940008  lw          $s4, 0x8($a0)
    ctx->pc = 0x4a2f48u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x4a2f4c: 0x68820007  ldl         $v0, 0x7($a0)
    ctx->pc = 0x4a2f4cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x4a2f50: 0x6c820000  ldr         $v0, 0x0($a0)
    ctx->pc = 0x4a2f50u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x4a2f54: 0x6883000f  ldl         $v1, 0xF($a0)
    ctx->pc = 0x4a2f54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x4a2f58: 0x6c830008  ldr         $v1, 0x8($a0)
    ctx->pc = 0x4a2f58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x4a2f5c: 0x68850017  ldl         $a1, 0x17($a0)
    ctx->pc = 0x4a2f5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x4a2f60: 0x6c850010  ldr         $a1, 0x10($a0)
    ctx->pc = 0x4a2f60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x4a2f64: 0x8c860018  lw          $a2, 0x18($a0)
    ctx->pc = 0x4a2f64u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x4a2f68: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x4a2f68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4a2f6c: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x4a2f6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4a2f70: 0xb3a3000f  sdl         $v1, 0xF($sp)
    ctx->pc = 0x4a2f70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4a2f74: 0xb7a30008  sdr         $v1, 0x8($sp)
    ctx->pc = 0x4a2f74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4a2f78: 0xb3a50017  sdl         $a1, 0x17($sp)
    ctx->pc = 0x4a2f78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4a2f7c: 0xb7a50010  sdr         $a1, 0x10($sp)
    ctx->pc = 0x4a2f7cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4a2f80: 0x16600003  bnez        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x4A2F80u;
    {
        const bool branch_taken_0x4a2f80 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A2F84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2F80u;
        // 0x4a2f84: 0xafa60018  sw          $a2, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2f80) {
            ctx->pc = 0x4A2F90u;
            goto label_4a2f90;
        }
    }
    ctx->pc = 0x4A2F88u;
    // 0x4a2f88: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x4A2F88u;
    {
        const bool branch_taken_0x4a2f88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A2F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2F88u;
        // 0x4a2f8c: 0x27b30040  addiu       $s3, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2f88) {
            ctx->pc = 0x4A2F98u;
            goto label_4a2f98;
        }
    }
    ctx->pc = 0x4A2F90u;
label_4a2f90:
    // 0x4a2f90: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x4a2f90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4a2f94: 0xae620000  sw          $v0, 0x0($s3)
    ctx->pc = 0x4a2f94u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 2));
label_4a2f98:
    // 0x4a2f98: 0x9202000c  lbu         $v0, 0xC($s0)
    ctx->pc = 0x4a2f98u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x4a2f9c: 0x93a3000c  lbu         $v1, 0xC($sp)
    ctx->pc = 0x4a2f9cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x4a2fa0: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x4a2fa0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x4a2fa4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4a2fa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a2fa8: 0x10650064  beq         $v1, $a1, . + 4 + (0x64 << 2)
    ctx->pc = 0x4A2FA8u;
    {
        const bool branch_taken_0x4a2fa8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 5));
        ctx->pc = 0x4A2FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2FA8u;
        // 0x4a2fac: 0x60302d  daddu       $a2, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2fa8) {
            ctx->pc = 0x4A313Cu;
            goto label_4a313c;
        }
    }
    ctx->pc = 0x4A2FB0u;
    // 0x4a2fb0: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x4a2fb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x4a2fb4: 0x8e070000  lw          $a3, 0x0($s0)
    ctx->pc = 0x4a2fb4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a2fb8: 0x1047005e  beq         $v0, $a3, . + 4 + (0x5E << 2)
    ctx->pc = 0x4A2FB8u;
    {
        const bool branch_taken_0x4a2fb8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 7));
        if (branch_taken_0x4a2fb8) {
            ctx->pc = 0x4A3134u;
            goto label_4a3134;
        }
    }
    ctx->pc = 0x4A2FC0u;
    // 0x4a2fc0: 0x1220005c  beqz        $s1, . + 4 + (0x5C << 2)
    ctx->pc = 0x4A2FC0u;
    {
        const bool branch_taken_0x4a2fc0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A2FC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2FC0u;
        // 0x4a2fc4: 0x7ba20000  lq          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2fc0) {
            ctx->pc = 0x4A3134u;
            goto label_4a3134;
        }
    }
    ctx->pc = 0x4A2FC8u;
    // 0x4a2fc8: 0x530c2  srl         $a2, $a1, 3
    ctx->pc = 0x4a2fc8u;
    SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 5), 3));
    // 0x4a2fcc: 0xdfa40010  ld          $a0, 0x10($sp)
    ctx->pc = 0x4a2fccu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a2fd0: 0x7fa20020  sq          $v0, 0x20($sp)
    ctx->pc = 0x4a2fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 2));
    // 0x4a2fd4: 0x8fa30018  lw          $v1, 0x18($sp)
    ctx->pc = 0x4a2fd4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4a2fd8: 0x8fa20028  lw          $v0, 0x28($sp)
    ctx->pc = 0x4a2fd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x4a2fdc: 0xffa40030  sd          $a0, 0x30($sp)
    ctx->pc = 0x4a2fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 4));
    // 0x4a2fe0: 0xafa30038  sw          $v1, 0x38($sp)
    ctx->pc = 0x4a2fe0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 3));
    // 0x4a2fe4: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4A2FE4u;
    {
        const bool branch_taken_0x4a2fe4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4A2FE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2FE4u;
        // 0x4a2fe8: 0xafa70020  sw          $a3, 0x20($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2fe4) {
            ctx->pc = 0x4A2FFCu;
            goto label_4a2ffc;
        }
    }
    ctx->pc = 0x4A2FECu;
    // 0x4a2fec: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x4a2fecu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x4a2ff0: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x4a2ff0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x4a2ff4: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4A2FF4u;
    {
        const bool branch_taken_0x4a2ff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A2FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A2FF4u;
        // 0x4a2ff8: 0x9202000c  lbu         $v0, 0xC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a2ff4) {
            ctx->pc = 0x4A3018u;
            goto label_4a3018;
        }
    }
    ctx->pc = 0x4A2FFCu;
label_4a2ffc:
    // 0x4a2ffc: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x4a2ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x4a3000: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4a3000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4a3004: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4a3004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4a3008: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x4a3008u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x4a300c: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x4a300cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x4a3010: 0x46042100  add.s       $f4, $f4, $f4
    ctx->pc = 0x4a3010u;
    ctx->f[4] = FPU_ADD_S(ctx->f[4], ctx->f[4]);
    // 0x4a3014: 0x9202000c  lbu         $v0, 0xC($s0)
    ctx->pc = 0x4a3014u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
label_4a3018:
    // 0x4a3018: 0x93a3002c  lbu         $v1, 0x2C($sp)
    ctx->pc = 0x4a3018u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x4a301c: 0x9204000d  lbu         $a0, 0xD($s0)
    ctx->pc = 0x4a301cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 13)));
    // 0x4a3020: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x4a3020u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x4a3024: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x4a3024u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x4a3028: 0x93a5002d  lbu         $a1, 0x2D($sp)
    ctx->pc = 0x4a3028u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 45)));
    // 0x4a302c: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x4a302cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x4a3030: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x4a3030u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x4a3034: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x4a3034u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4a3038: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4a3038u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4a303c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4a303cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a3040: 0x44851000  mtc1        $a1, $f2
    ctx->pc = 0x4a3040u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x4a3044: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x4a3044u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x4a3048: 0x46030843  div.s       $f1, $f1, $f3
    ctx->pc = 0x4a3048u;
    { if (ctx->f[3] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[1] = FPU_DIV_S(ctx->f[1], ctx->f[3]); }
    // 0x4a304c: 0x46020003  div.s       $f0, $f0, $f2
    ctx->pc = 0x4a304cu;
    { if (ctx->f[2] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[0], ctx->f[2]); }
    // 0x4a3050: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4A3050u;
    {
        const bool branch_taken_0x4a3050 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4A3054u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3050u;
        // 0x4a3054: 0x46000842  mul.s       $f1, $f1, $f0 (Delay Slot)
        ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3050) {
            ctx->pc = 0x4A3068u;
            goto label_4a3068;
        }
    }
    ctx->pc = 0x4A3058u;
    // 0x4a3058: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x4a3058u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x4a305c: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x4a305cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x4a3060: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x4A3060u;
    {
        const bool branch_taken_0x4a3060 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A3064u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3060u;
        // 0x4a3064: 0x8fa20020  lw          $v0, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3060) {
            ctx->pc = 0x4A3084u;
            goto label_4a3084;
        }
    }
    ctx->pc = 0x4A3068u;
label_4a3068:
    // 0x4a3068: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x4a3068u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x4a306c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4a306cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4a3070: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4a3070u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4a3074: 0x44821000  mtc1        $v0, $f2
    ctx->pc = 0x4a3074u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x4a3078: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x4a3078u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x4a307c: 0x46021080  add.s       $f2, $f2, $f2
    ctx->pc = 0x4a307cu;
    ctx->f[2] = FPU_ADD_S(ctx->f[2], ctx->f[2]);
    // 0x4a3080: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x4a3080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_4a3084:
    // 0x4a3084: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4A3084u;
    {
        const bool branch_taken_0x4a3084 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4A3088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3084u;
        // 0x4a3088: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3084) {
            ctx->pc = 0x4A309Cu;
            goto label_4a309c;
        }
    }
    ctx->pc = 0x4A308Cu;
    // 0x4a308c: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4a308cu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4a3090: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4a3090u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4a3094: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4A3094u;
    {
        const bool branch_taken_0x4a3094 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a3094) {
            ctx->pc = 0x4A30B0u;
            goto label_4a30b0;
        }
    }
    ctx->pc = 0x4A309Cu;
label_4a309c:
    // 0x4a309c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4a309cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4a30a0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4a30a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4a30a4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4a30a4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4a30a8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4a30a8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4a30ac: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x4a30acu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_4a30b0:
    // 0x4a30b0: 0x46001003  div.s       $f0, $f2, $f0
    ctx->pc = 0x4a30b0u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[2], ctx->f[0]); }
    // 0x4a30b4: 0x61823  negu        $v1, $a2
    ctx->pc = 0x4a30b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 6)));
    // 0x4a30b8: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x4a30b8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x4a30bc: 0x46002002  mul.s       $f0, $f4, $f0
    ctx->pc = 0x4a30bcu;
    ctx->f[0] = FPU_MUL_S(ctx->f[4], ctx->f[0]);
    // 0x4a30c0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4a30c0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x4a30c4: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x4a30c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x4a30c8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x4a30c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x4a30cc: 0x461021  addu        $v0, $v0, $a2
    ctx->pc = 0x4a30ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x4a30d0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4a30d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x4a30d4: 0x4400005  bltz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x4A30D4u;
    {
        const bool branch_taken_0x4a30d4 = (GPR_S32(ctx, 2) < 0);
        ctx->pc = 0x4A30D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A30D4u;
        // 0x4a30d8: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a30d4) {
            ctx->pc = 0x4A30ECu;
            goto label_4a30ec;
        }
    }
    ctx->pc = 0x4A30DCu;
    // 0x4a30dc: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4a30dcu;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4a30e0: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4a30e0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4a30e4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x4A30E4u;
    {
        const bool branch_taken_0x4a30e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a30e4) {
            ctx->pc = 0x4A3100u;
            goto label_4a3100;
        }
    }
    ctx->pc = 0x4A30ECu;
label_4a30ec:
    // 0x4a30ec: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4a30ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4a30f0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x4a30f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x4a30f4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x4a30f4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x4a30f8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x4a30f8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x4a30fc: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x4a30fcu;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_4a3100:
    // 0x4a3100: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x4a3100u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x4a3104: 0x44040800  mfc1        $a0, $f1
    ctx->pc = 0x4a3104u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 4, bits); }
    // 0x4a3108: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x4a3108u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
    // 0x4a310c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x4a310cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a3110: 0xc127cc2  jal         func_49F308
    ctx->pc = 0x4A3110u;
    SET_GPR_U32(ctx, 31, 0x4A3118u);
    ctx->pc = 0x4A3114u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A3110u;
    // 0x4a3114: 0x34c60806  ori         $a2, $a2, 0x806 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2054);
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F308u, 0x4A3110u, 0x4A3118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A3118u;
label_4a3118:
    // 0x4a3118: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x4a3118u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a311c: 0x16400003  bnez        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x4A311Cu;
    {
        const bool branch_taken_0x4a311c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A3120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A311Cu;
        // 0x4a3120: 0x93a6000c  lbu         $a2, 0xC($sp) (Delay Slot)
        SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a311c) {
            ctx->pc = 0x4A312Cu;
            goto label_4a312c;
        }
    }
    ctx->pc = 0x4A3124u;
    // 0x4a3124: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x4A3124u;
    {
        const bool branch_taken_0x4a3124 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A3128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3124u;
        // 0x4a3128: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3124) {
            ctx->pc = 0x4A31CCu;
            goto label_4a31cc;
        }
    }
    ctx->pc = 0x4A312Cu;
label_4a312c:
    // 0x4a312c: 0x240882d  daddu       $s1, $s2, $zero
    ctx->pc = 0x4a312cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a3130: 0x9204000c  lbu         $a0, 0xC($s0)
    ctx->pc = 0x4a3130u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
label_4a3134:
    // 0x4a3134: 0x14c40007  bne         $a2, $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x4A3134u;
    {
        const bool branch_taken_0x4a3134 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 4));
        ctx->pc = 0x4A3138u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3134u;
        // 0x4a3138: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3134) {
            ctx->pc = 0x4A3154u;
            goto label_4a3154;
        }
    }
    ctx->pc = 0x4A313Cu;
label_4a313c:
    // 0x4a313c: 0x93a30018  lbu         $v1, 0x18($sp)
    ctx->pc = 0x4a313cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x4a3140: 0x92020018  lbu         $v0, 0x18($s0)
    ctx->pc = 0x4a3140u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x4a3144: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x4a3144u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x4a3148: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x4a3148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x4a314c: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x4A314Cu;
    {
        const bool branch_taken_0x4a314c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4A3150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A314Cu;
        // 0x4a3150: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a314c) {
            ctx->pc = 0x4A3180u;
            goto label_4a3180;
        }
    }
    ctx->pc = 0x4A3154u;
label_4a3154:
    // 0x4a3154: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4a3154u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a3158: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x4a3158u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a315c: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x4a315cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a3160: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x4a3160u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a3164: 0xc128a2c  jal         func_4A28B0
    ctx->pc = 0x4A3164u;
    SET_GPR_U32(ctx, 31, 0x4A316Cu);
    ctx->pc = 0x4A3168u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A3164u;
    // 0x4a3168: 0x260482d  daddu       $t1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A28B0u;
    goto label_4a28b0;
    ctx->pc = 0x4A316Cu;
label_4a316c:
    // 0x4a316c: 0x9203000c  lbu         $v1, 0xC($s0)
    ctx->pc = 0x4a316cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x4a3170: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x4a3170u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a3174: 0xafb40008  sw          $s4, 0x8($sp)
    ctx->pc = 0x4a3174u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 20));
    // 0x4a3178: 0xa3a3000c  sb          $v1, 0xC($sp)
    ctx->pc = 0x4a3178u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 12), (uint8_t)GPR_U32(ctx, 3));
    // 0x4a317c: 0x8e750000  lw          $s5, 0x0($s3)
    ctx->pc = 0x4a317cu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_4a3180:
    // 0x4a3180: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x4A3180u;
    {
        const bool branch_taken_0x4a3180 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A3184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3180u;
        // 0x4a3184: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3180) {
            ctx->pc = 0x4A3190u;
            goto label_4a3190;
        }
    }
    ctx->pc = 0x4A3188u;
    // 0x4a3188: 0x2e0882d  daddu       $s1, $s7, $zero
    ctx->pc = 0x4a3188u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a318c: 0x240b02d  daddu       $s6, $s2, $zero
    ctx->pc = 0x4a318cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_4a3190:
    // 0x4a3190: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x4a3190u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a3194: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x4A3194u;
    {
        const bool branch_taken_0x4a3194 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x4A3198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3194u;
        // 0x4a3198: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3194) {
            ctx->pc = 0x4A31B8u;
            goto label_4a31b8;
        }
    }
    ctx->pc = 0x4A319Cu;
    // 0x4a319c: 0x2a0302d  daddu       $a2, $s5, $zero
    ctx->pc = 0x4a319cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a31a0: 0x200382d  daddu       $a3, $s0, $zero
    ctx->pc = 0x4a31a0u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a31a4: 0x220402d  daddu       $t0, $s1, $zero
    ctx->pc = 0x4a31a4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a31a8: 0x260482d  daddu       $t1, $s3, $zero
    ctx->pc = 0x4a31a8u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a31ac: 0xc1288e0  jal         func_4A2380
    ctx->pc = 0x4A31ACu;
    SET_GPR_U32(ctx, 31, 0x4A31B4u);
    ctx->pc = 0x4A31B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A31ACu;
    // 0x4a31b0: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A2380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A2380u, 0x4A31ACu, 0x4A31B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A31B4u;
label_4a31b4:
    // 0x4a31b4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x4a31b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a31b8:
    // 0x4a31b8: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x4A31B8u;
    {
        const bool branch_taken_0x4a31b8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A31BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A31B8u;
        // 0x4a31bc: 0x280102d  daddu       $v0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a31b8) {
            ctx->pc = 0x4A31CCu;
            goto label_4a31cc;
        }
    }
    ctx->pc = 0x4A31C0u;
    // 0x4a31c0: 0xc127cae  jal         func_49F2B8
    ctx->pc = 0x4A31C0u;
    SET_GPR_U32(ctx, 31, 0x4A31C8u);
    ctx->pc = 0x4A31C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A31C0u;
    // 0x4a31c4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F2B8u, 0x4A31C0u, 0x4A31C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A31C8u;
label_4a31c8:
    // 0x4a31c8: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x4a31c8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_4a31cc:
    // 0x4a31cc: 0x7bb000d0  lq          $s0, 0xD0($sp)
    ctx->pc = 0x4a31ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x4a31d0: 0x7bb100c0  lq          $s1, 0xC0($sp)
    ctx->pc = 0x4a31d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x4a31d4: 0x7bb200b0  lq          $s2, 0xB0($sp)
    ctx->pc = 0x4a31d4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x4a31d8: 0x7bb300a0  lq          $s3, 0xA0($sp)
    ctx->pc = 0x4a31d8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x4a31dc: 0x7bb40090  lq          $s4, 0x90($sp)
    ctx->pc = 0x4a31dcu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x4a31e0: 0x7bb50080  lq          $s5, 0x80($sp)
    ctx->pc = 0x4a31e0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4a31e4: 0x7bb60070  lq          $s6, 0x70($sp)
    ctx->pc = 0x4a31e4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4a31e8: 0x7bb70060  lq          $s7, 0x60($sp)
    ctx->pc = 0x4a31e8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4a31ec: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x4a31ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4a31f0: 0x3e00008  jr          $ra
    ctx->pc = 0x4A31F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A31F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A31F0u;
        // 0x4a31f4: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A31F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A31F8u;
    // 0x4a31f8: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x4a31f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x4a31fc: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x4a31fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x4a3200: 0x3a9480a  movz        $t1, $sp, $t1
    ctx->pc = 0x4a3200u;
    if (GPR_U64(ctx, 9) == 0) SET_GPR_VEC(ctx, 9, GPR_VEC(ctx, 29));
    // 0x4a3204: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x4a3204u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x4a3208: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x4a3208u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a320c: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x4a320cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x4a3210: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x4a3210u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a3214: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x4a3214u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x4a3218: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x4a3218u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x4a321c: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x4a321cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x4a3220: 0xe0f02d  daddu       $fp, $a3, $zero
    ctx->pc = 0x4a3220u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a3224: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x4a3224u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x4a3228: 0x24a52610  addiu       $a1, $a1, 0x2610
    ctx->pc = 0x4a3228u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9744));
    // 0x4a322c: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x4a322cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x4a3230: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x4a3230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x4a3234: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x4a3234u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x4a3238: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x4a3238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x4a323c: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x4a323cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x4a3240: 0xafa60004  sw          $a2, 0x4($sp)
    ctx->pc = 0x4a3240u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 6));
    // 0x4a3244: 0xafa80008  sw          $t0, 0x8($sp)
    ctx->pc = 0x4a3244u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 8));
    // 0x4a3248: 0xc12a3ec  jal         func_4A8FB0
    ctx->pc = 0x4A3248u;
    SET_GPR_U32(ctx, 31, 0x4A3250u);
    ctx->pc = 0x4A324Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A3248u;
    // 0x4a324c: 0xafa9000c  sw          $t1, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 9));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8FB0u, 0x4A3248u, 0x4A3250u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A3250u;
label_4a3250:
    // 0x4a3250: 0x14400098  bnez        $v0, . + 4 + (0x98 << 2)
    ctx->pc = 0x4A3250u;
    {
        const bool branch_taken_0x4a3250 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A3254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3250u;
        // 0x4a3254: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3250) {
            ctx->pc = 0x4A34B4u;
            goto label_4a34b4;
        }
    }
    ctx->pc = 0x4A3258u;
    // 0x4a3258: 0x3c050060  lui         $a1, 0x60
    ctx->pc = 0x4a3258u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
    // 0x4a325c: 0x8fc40004  lw          $a0, 0x4($fp)
    ctx->pc = 0x4a325cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4)));
    // 0x4a3260: 0xc12a3ec  jal         func_4A8FB0
    ctx->pc = 0x4A3260u;
    SET_GPR_U32(ctx, 31, 0x4A3268u);
    ctx->pc = 0x4A3264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A3260u;
    // 0x4a3264: 0x24a52630  addiu       $a1, $a1, 0x2630 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 9776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A8FB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A8FB0u, 0x4A3260u, 0x4A3268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A3268u;
label_4a3268:
    // 0x4a3268: 0x14400092  bnez        $v0, . + 4 + (0x92 << 2)
    ctx->pc = 0x4A3268u;
    {
        const bool branch_taken_0x4a3268 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A326Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3268u;
        // 0x4a326c: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3268) {
            ctx->pc = 0x4A34B4u;
            goto label_4a34b4;
        }
    }
    ctx->pc = 0x4A3270u;
    // 0x4a3270: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x4a3270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4a3274: 0x2405000e  addiu       $a1, $zero, 0xE
    ctx->pc = 0x4a3274u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x4a3278: 0x9262000d  lbu         $v0, 0xD($s3)
    ctx->pc = 0x4a3278u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 13)));
    // 0x4a327c: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x4a327cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x4a3280: 0x8e640008  lw          $a0, 0x8($s3)
    ctx->pc = 0x4a3280u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x4a3284: 0x2463000d  addiu       $v1, $v1, 0xD
    ctx->pc = 0x4a3284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13));
    // 0x4a3288: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x4A3288u;
    {
        const bool branch_taken_0x4a3288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4a3288) {
            ctx->pc = 0x4A328Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A3288u;
            // 0x4a328c: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A3290u;
            goto label_4a3290;
        }
    }
    ctx->pc = 0x4A3290u;
label_4a3290:
    // 0x4a3290: 0x82001b  divu        $zero, $a0, $v0
    ctx->pc = 0x4a3290u;
    { uint32_t divisor = GPR_U32(ctx, 2); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 4) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,4); } }
    // 0x4a3294: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x4a3294u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x4a3298: 0x2012  mflo        $a0
    ctx->pc = 0x4a3298u;
    SET_GPR_U64(ctx, 4, ctx->lo);
    // 0x4a329c: 0x65001b  divu        $zero, $v1, $a1
    ctx->pc = 0x4a329cu;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 3) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,3); } }
    // 0x4a32a0: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x4a32a0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a32a4: 0x141042  srl         $v0, $s4, 1
    ctx->pc = 0x4a32a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 20), 1));
    // 0x4a32a8: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x4a32a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x4a32ac: 0x2442000d  addiu       $v0, $v0, 0xD
    ctx->pc = 0x4a32acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13));
    // 0x4a32b0: 0x1812  mflo        $v1
    ctx->pc = 0x4a32b0u;
    SET_GPR_U64(ctx, 3, ctx->lo);
    // 0x4a32b4: 0x45001b  divu        $zero, $v0, $a1
    ctx->pc = 0x4a32b4u;
    { uint32_t divisor = GPR_U32(ctx, 5); if (divisor != 0) { ctx->lo = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) / divisor); ctx->hi = (uint64_t)(int64_t)(int32_t)(GPR_U32(ctx, 2) % divisor); } else { ctx->lo = 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)(int32_t)GPR_U32(ctx,2); } }
    // 0x4a32b8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x4a32b8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x4a32bc: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x4a32bcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x4a32c0: 0x9263000d  lbu         $v1, 0xD($s3)
    ctx->pc = 0x4a32c0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 13)));
    // 0x4a32c4: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x4a32c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a32c8: 0x1012  mflo        $v0
    ctx->pc = 0x4a32c8u;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x4a32cc: 0x2a8c0  sll         $s5, $v0, 3
    ctx->pc = 0x4a32ccu;
    SET_GPR_S32(ctx, 21, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x4a32d0: 0x2a31018  mult        $v0, $s5, $v1
    ctx->pc = 0x4a32d0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4a32d4: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x4a32d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4a32d8: 0x106000ac  beqz        $v1, . + 4 + (0xAC << 2)
    ctx->pc = 0x4A32D8u;
    {
        const bool branch_taken_0x4a32d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A32DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A32D8u;
        // 0x4a32dc: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a32d8) {
            ctx->pc = 0x4A358Cu;
            goto label_4a358c;
        }
    }
    ctx->pc = 0x4A32E0u;
    // 0x4a32e0: 0x93c2000d  lbu         $v0, 0xD($fp)
    ctx->pc = 0x4a32e0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 13)));
    // 0x4a32e4: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x4a32e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x4a32e8: 0x14400027  bnez        $v0, . + 4 + (0x27 << 2)
    ctx->pc = 0x4A32E8u;
    {
        const bool branch_taken_0x4a32e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A32ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A32E8u;
        // 0x4a32ec: 0x2c0b82d  daddu       $s7, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a32e8) {
            ctx->pc = 0x4A3388u;
            goto label_4a3388;
        }
    }
    ctx->pc = 0x4A32F0u;
    // 0x4a32f0: 0x8e650008  lw          $a1, 0x8($s3)
    ctx->pc = 0x4a32f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x4a32f4: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x4a32f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
    // 0x4a32f8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4a32f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a32fc: 0xc127cc2  jal         func_49F308
    ctx->pc = 0x4A32FCu;
    SET_GPR_U32(ctx, 31, 0x4A3304u);
    ctx->pc = 0x4A3300u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A32FCu;
    // 0x4a3300: 0x34c60806  ori         $a2, $a2, 0x806 (Delay Slot)
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)2054);
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F308u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F308u, 0x4A32FCu, 0x4A3304u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A3304u;
label_4a3304:
    // 0x4a3304: 0x40b82d  daddu       $s7, $v0, $zero
    ctx->pc = 0x4a3304u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a3308: 0x12e000a1  beqz        $s7, . + 4 + (0xA1 << 2)
    ctx->pc = 0x4A3308u;
    {
        const bool branch_taken_0x4a3308 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A330Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3308u;
        // 0x4a330c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3308) {
            ctx->pc = 0x4A3590u;
            goto label_4a3590;
        }
    }
    ctx->pc = 0x4A3310u;
    // 0x4a3310: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x4a3310u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x4a3314: 0x9263000d  lbu         $v1, 0xD($s3)
    ctx->pc = 0x4a3314u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 13)));
    // 0x4a3318: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x4a3318u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x4a331c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4a331cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a3320: 0x282a024  and         $s4, $s4, $v0
    ctx->pc = 0x4a3320u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) & GPR_U64(ctx, 2));
    // 0x4a3324: 0x10600019  beqz        $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x4A3324u;
    {
        const bool branch_taken_0x4a3324 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A3328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3324u;
        // 0x4a3328: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3324) {
            ctx->pc = 0x4A338Cu;
            goto label_4a338c;
        }
    }
    ctx->pc = 0x4A332Cu;
    // 0x4a332c: 0x121040  sll         $v0, $s2, 1
    ctx->pc = 0x4a332cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
label_4a3330:
    // 0x4a3330: 0x26440001  addiu       $a0, $s2, 0x1
    ctx->pc = 0x4a3330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x4a3334: 0x2c28021  addu        $s0, $s6, $v0
    ctx->pc = 0x4a3334u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 2)));
    // 0x4a3338: 0x280182d  daddu       $v1, $s4, $zero
    ctx->pc = 0x4a3338u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a333c: 0x2921018  mult        $v0, $s4, $s2
    ctx->pc = 0x4a333cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4a3340: 0x12800009  beqz        $s4, . + 4 + (0x9 << 2)
    ctx->pc = 0x4A3340u;
    {
        const bool branch_taken_0x4a3340 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A3344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3340u;
        // 0x4a3344: 0x578821  addu        $s1, $v0, $s7 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3340) {
            ctx->pc = 0x4A3368u;
            goto label_4a3368;
        }
    }
    ctx->pc = 0x4A3348u;
label_4a3348:
    // 0x4a3348: 0x96020000  lhu         $v0, 0x0($s0)
    ctx->pc = 0x4a3348u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x4a334c: 0x2463fffe  addiu       $v1, $v1, -0x2
    ctx->pc = 0x4a334cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967294));
    // 0x4a3350: 0xa6220000  sh          $v0, 0x0($s1)
    ctx->pc = 0x4a3350u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x4a3354: 0x26310002  addiu       $s1, $s1, 0x2
    ctx->pc = 0x4a3354u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 2));
    // 0x4a3358: 0x9262000d  lbu         $v0, 0xD($s3)
    ctx->pc = 0x4a3358u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 13)));
    // 0x4a335c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x4a335cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x4a3360: 0x1460fff9  bnez        $v1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x4A3360u;
    {
        const bool branch_taken_0x4a3360 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A3364u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3360u;
        // 0x4a3364: 0x2028021  addu        $s0, $s0, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3360) {
            ctx->pc = 0x4A3348u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a3348;
        }
    }
    ctx->pc = 0x4A3368u;
label_4a3368:
    // 0x4a3368: 0x9262000d  lbu         $v0, 0xD($s3)
    ctx->pc = 0x4a3368u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 13)));
    // 0x4a336c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4a336cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a3370: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x4a3370u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a3374: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x4a3374u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4a3378: 0x1440ffed  bnez        $v0, . + 4 + (-0x13 << 2)
    ctx->pc = 0x4A3378u;
    {
        const bool branch_taken_0x4a3378 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A337Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3378u;
        // 0x4a337c: 0x121040  sll         $v0, $s2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3378) {
            ctx->pc = 0x4A3330u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a3330;
        }
    }
    ctx->pc = 0x4A3380u;
    // 0x4a3380: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4A3380u;
    {
        const bool branch_taken_0x4a3380 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A3384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3380u;
        // 0x4a3384: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3380) {
            ctx->pc = 0x4A338Cu;
            goto label_4a338c;
        }
    }
    ctx->pc = 0x4A3388u;
label_4a3388:
    // 0x4a3388: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4a3388u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_4a338c:
    // 0x4a338c: 0x1080001e  beqz        $a0, . + 4 + (0x1E << 2)
    ctx->pc = 0x4A338Cu;
    {
        const bool branch_taken_0x4a338c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A3390u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A338Cu;
        // 0x4a3390: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a338c) {
            ctx->pc = 0x4A3408u;
            goto label_4a3408;
        }
    }
    ctx->pc = 0x4A3394u;
    // 0x4a3394: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x4a3394u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4a3398: 0x2e31021  addu        $v0, $s7, $v1
    ctx->pc = 0x4a3398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 3)));
    // 0x4a339c: 0x283b023  subu        $s6, $s4, $v1
    ctx->pc = 0x4a339cu;
    SET_GPR_S32(ctx, 22, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_4a33a0:
    // 0x4a33a0: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4a33a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a33a4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x4a33a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a33a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4a33a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a33ac: 0xc0bb7e6  jal         func_2EDF98
    ctx->pc = 0x4A33ACu;
    SET_GPR_U32(ctx, 31, 0x4A33B4u);
    ctx->pc = 0x4A33B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A33ACu;
    // 0x4a33b0: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x4A33ACu, 0x4A33B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A33B4u;
label_4a33b4:
    // 0x4a33b4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4a33b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a33b8: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x4a33b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a33bc: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x4a33bcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a33c0: 0xc128d70  jal         func_4A35C0
    ctx->pc = 0x4A33C0u;
    SET_GPR_U32(ctx, 31, 0x4A33C8u);
    ctx->pc = 0x4A33C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A33C0u;
    // 0x4a33c4: 0x3c0382d  daddu       $a3, $fp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A35C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A35C0u, 0x4A33C0u, 0x4A33C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A33C8u;
label_4a33c8:
    // 0x4a33c8: 0x1040006e  beqz        $v0, . + 4 + (0x6E << 2)
    ctx->pc = 0x4A33C8u;
    {
        const bool branch_taken_0x4a33c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A33CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A33C8u;
        // 0x4a33cc: 0x8fa4000c  lw          $a0, 0xC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a33c8) {
            ctx->pc = 0x4A3584u;
            goto label_4a3584;
        }
    }
    ctx->pc = 0x4A33D0u;
    // 0x4a33d0: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x4a33d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a33d4: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x4a33d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a33d8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x4a33d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x4a33dc: 0x8c890000  lw          $t1, 0x0($a0)
    ctx->pc = 0x4a33dcu;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x4a33e0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x4a33e0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a33e4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4a33e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a33e8: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x4a33e8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x4a33ec: 0xc128e0a  jal         func_4A3828
    ctx->pc = 0x4A33ECu;
    SET_GPR_U32(ctx, 31, 0x4A33F4u);
    ctx->pc = 0x4A33F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A33ECu;
    // 0x4a33f0: 0x2a94823  subu        $t1, $s5, $t1 (Delay Slot)
    SET_GPR_S32(ctx, 9, (int32_t)SUB32(GPR_U32(ctx, 21), GPR_U32(ctx, 9)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A3828u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A3828u, 0x4A33ECu, 0x4A33F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A33F4u;
label_4a33f4:
    // 0x4a33f4: 0x9263000d  lbu         $v1, 0xD($s3)
    ctx->pc = 0x4a33f4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 13)));
    // 0x4a33f8: 0x2141021  addu        $v0, $s0, $s4
    ctx->pc = 0x4a33f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 20)));
    // 0x4a33fc: 0x243182b  sltu        $v1, $s2, $v1
    ctx->pc = 0x4a33fcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x4a3400: 0x1460ffe7  bnez        $v1, . + 4 + (-0x19 << 2)
    ctx->pc = 0x4A3400u;
    {
        const bool branch_taken_0x4a3400 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A3404u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3400u;
        // 0x4a3404: 0x2352021  addu        $a0, $s1, $s5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 21)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3400) {
            ctx->pc = 0x4A33A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a33a0;
        }
    }
    ctx->pc = 0x4A3408u;
label_4a3408:
    // 0x4a3408: 0x93c2000d  lbu         $v0, 0xD($fp)
    ctx->pc = 0x4a3408u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 13)));
    // 0x4a340c: 0x2c420002  sltiu       $v0, $v0, 0x2
    ctx->pc = 0x4a340cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x4a3410: 0x1440005f  bnez        $v0, . + 4 + (0x5F << 2)
    ctx->pc = 0x4A3410u;
    {
        const bool branch_taken_0x4a3410 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A3414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3410u;
        // 0x4a3414: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3410) {
            ctx->pc = 0x4A3590u;
            goto label_4a3590;
        }
    }
    ctx->pc = 0x4A3418u;
    // 0x4a3418: 0x93c2000d  lbu         $v0, 0xD($fp)
    ctx->pc = 0x4a3418u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 13)));
    // 0x4a341c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x4a341cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a3420: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x4A3420u;
    {
        const bool branch_taken_0x4a3420 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A3424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3420u;
        // 0x4a3424: 0x40182d  daddu       $v1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3420) {
            ctx->pc = 0x4A3490u;
            goto label_4a3490;
        }
    }
    ctx->pc = 0x4A3428u;
    // 0x4a3428: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x4a3428u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x4a342c: 0x0  nop
    ctx->pc = 0x4a342cu;
    // NOP
label_4a3430:
    // 0x4a3430: 0x26440001  addiu       $a0, $s2, 0x1
    ctx->pc = 0x4a3430u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x4a3434: 0x2e28821  addu        $s1, $s7, $v0
    ctx->pc = 0x4a3434u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 23), GPR_U32(ctx, 2)));
    // 0x4a3438: 0x2a0182d  daddu       $v1, $s5, $zero
    ctx->pc = 0x4a3438u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a343c: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x4a343cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4a3440: 0x400013  mtlo        $v0
    ctx->pc = 0x4a3440u;
    ctx->lo = GPR_U64(ctx, 2);
    // 0x4a3444: 0x12a0000c  beqz        $s5, . + 4 + (0xC << 2)
    ctx->pc = 0x4A3444u;
    {
        const bool branch_taken_0x4a3444 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A3448u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3444u;
        // 0x4a3448: 0x72b28000  madd        $s0, $s5, $s2 (Delay Slot)
        { uint64_t acc = Ps2HiLoToU64(ctx->hi, ctx->lo); int64_t prod = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 18); int64_t result = acc + prod; ctx->lo = Ps2SignExt32ToU64((uint32_t)result); ctx->hi = Ps2SignExt32ToU64((uint32_t)(result >> 32)); SET_GPR_S32(ctx, 16, (int32_t)result); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3444) {
            ctx->pc = 0x4A3478u;
            goto label_4a3478;
        }
    }
    ctx->pc = 0x4A344Cu;
    // 0x4a344c: 0x0  nop
    ctx->pc = 0x4a344cu;
    // NOP
label_4a3450:
    // 0x4a3450: 0x6a050007  ldl         $a1, 0x7($s0)
    ctx->pc = 0x4a3450u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x4a3454: 0x6e050000  ldr         $a1, 0x0($s0)
    ctx->pc = 0x4a3454u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x4a3458: 0xb2250007  sdl         $a1, 0x7($s1)
    ctx->pc = 0x4a3458u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4a345c: 0x2463fff8  addiu       $v1, $v1, -0x8
    ctx->pc = 0x4a345cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967288));
    // 0x4a3460: 0xb6250000  sdr         $a1, 0x0($s1)
    ctx->pc = 0x4a3460u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x4a3464: 0x93c2000d  lbu         $v0, 0xD($fp)
    ctx->pc = 0x4a3464u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 13)));
    // 0x4a3468: 0x26100008  addiu       $s0, $s0, 0x8
    ctx->pc = 0x4a3468u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x4a346c: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x4a346cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x4a3470: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
    ctx->pc = 0x4A3470u;
    {
        const bool branch_taken_0x4a3470 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A3474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3470u;
        // 0x4a3474: 0x2228821  addu        $s1, $s1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3470) {
            ctx->pc = 0x4A3450u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a3450;
        }
    }
    ctx->pc = 0x4A3478u;
label_4a3478:
    // 0x4a3478: 0x93c2000d  lbu         $v0, 0xD($fp)
    ctx->pc = 0x4a3478u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 30), 13)));
    // 0x4a347c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x4a347cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a3480: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4a3480u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a3484: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x4a3484u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x4a3488: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x4A3488u;
    {
        const bool branch_taken_0x4a3488 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A348Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3488u;
        // 0x4a348c: 0x1210c0  sll         $v0, $s2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3488) {
            ctx->pc = 0x4A3430u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a3430;
        }
    }
    ctx->pc = 0x4A3490u;
label_4a3490:
    // 0x4a3490: 0x2a30018  mult        $zero, $s5, $v1
    ctx->pc = 0x4a3490u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x4a3494: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x4a3494u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4a3498: 0x3012  mflo        $a2
    ctx->pc = 0x4a3498u;
    SET_GPR_U64(ctx, 6, ctx->lo);
    // 0x4a349c: 0xc0bb778  jal         func_2EDDE0
    ctx->pc = 0x4A349Cu;
    SET_GPR_U32(ctx, 31, 0x4A34A4u);
    ctx->pc = 0x4A34A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A349Cu;
    // 0x4a34a0: 0x2e0282d  daddu       $a1, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDDE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDDE0u, 0x4A349Cu, 0x4A34A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A34A4u;
label_4a34a4:
    // 0x4a34a4: 0xc127cae  jal         func_49F2B8
    ctx->pc = 0x4A34A4u;
    SET_GPR_U32(ctx, 31, 0x4A34ACu);
    ctx->pc = 0x4A34A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A34A4u;
    // 0x4a34a8: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x49F2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F2B8u, 0x4A34A4u, 0x4A34ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A34ACu;
label_4a34ac:
    // 0x4a34ac: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x4A34ACu;
    {
        const bool branch_taken_0x4a34ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A34B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A34ACu;
        // 0x4a34b0: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a34ac) {
            ctx->pc = 0x4A3590u;
            goto label_4a3590;
        }
    }
    ctx->pc = 0x4A34B4u;
label_4a34b4:
    // 0x4a34b4: 0x2405001c  addiu       $a1, $zero, 0x1C
    ctx->pc = 0x4a34b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x4a34b8: 0x8fa4000c  lw          $a0, 0xC($sp)
    ctx->pc = 0x4a34b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x4a34bc: 0x310c2  srl         $v0, $v1, 3
    ctx->pc = 0x4a34bcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 3), 3));
    // 0x4a34c0: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x4a34c0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4a34c4: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x4a34c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x4a34c8: 0x8e640010  lw          $a0, 0x10($s3)
    ctx->pc = 0x4a34c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x4a34cc: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x4A34CCu;
    {
        const bool branch_taken_0x4a34cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A34D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A34CCu;
        // 0x4a34d0: 0x24020060  addiu       $v0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a34cc) {
            ctx->pc = 0x4A34E0u;
            goto label_4a34e0;
        }
    }
    ctx->pc = 0x4A34D4u;
    // 0x4a34d4: 0x8e630014  lw          $v1, 0x14($s3)
    ctx->pc = 0x4a34d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x4a34d8: 0x50620006  beql        $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x4A34D8u;
    {
        const bool branch_taken_0x4a34d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x4a34d8) {
            ctx->pc = 0x4A34DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x4A34D8u;
            // 0x4a34dc: 0x8c860000  lw          $a2, 0x0($a0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x4A34F4u;
            goto label_4a34f4;
        }
    }
    ctx->pc = 0x4A34E0u;
label_4a34e0:
    // 0x4a34e0: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x4a34e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x4a34e4: 0x210c2  srl         $v0, $v0, 3
    ctx->pc = 0x4a34e4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 3));
    // 0x4a34e8: 0x451018  mult        $v0, $v0, $a1
    ctx->pc = 0x4a34e8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x4a34ec: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x4A34ECu;
    {
        const bool branch_taken_0x4a34ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A34F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A34ECu;
        // 0x4a34f0: 0x23042  srl         $a2, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a34ec) {
            ctx->pc = 0x4A3518u;
            goto label_4a3518;
        }
    }
    ctx->pc = 0x4A34F4u;
label_4a34f4:
    // 0x4a34f4: 0x61a02  srl         $v1, $a2, 8
    ctx->pc = 0x4a34f4u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 6), 8));
    // 0x4a34f8: 0x62602  srl         $a0, $a2, 24
    ctx->pc = 0x4a34f8u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 6), 24));
    // 0x4a34fc: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x4a34fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x4a3500: 0x30c2ff00  andi        $v0, $a2, 0xFF00
    ctx->pc = 0x4a3500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65280);
    // 0x4a3504: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x4a3504u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x4a3508: 0x21200  sll         $v0, $v0, 8
    ctx->pc = 0x4a3508u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 8));
    // 0x4a350c: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x4a350cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x4a3510: 0x61e00  sll         $v1, $a2, 24
    ctx->pc = 0x4a3510u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 24));
    // 0x4a3514: 0x833025  or          $a2, $a0, $v1
    ctx->pc = 0x4a3514u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
label_4a3518:
    // 0x4a3518: 0x63040  sll         $a2, $a2, 1
    ctx->pc = 0x4a3518u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x4a351c: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x4a351cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4a3520: 0x10a0001a  beqz        $a1, . + 4 + (0x1A << 2)
    ctx->pc = 0x4A3520u;
    {
        const bool branch_taken_0x4a3520 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A3524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3520u;
        // 0x4a3524: 0xafa60010  sw          $a2, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3520) {
            ctx->pc = 0x4A358Cu;
            goto label_4a358c;
        }
    }
    ctx->pc = 0x4A3528u;
    // 0x4a3528: 0x8e620010  lw          $v0, 0x10($s3)
    ctx->pc = 0x4a3528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x4a352c: 0x10400015  beqz        $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x4A352Cu;
    {
        const bool branch_taken_0x4a352c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A3530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A352Cu;
        // 0x4a3530: 0x24020060  addiu       $v0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a352c) {
            ctx->pc = 0x4A3584u;
            goto label_4a3584;
        }
    }
    ctx->pc = 0x4A3534u;
    // 0x4a3534: 0x8e630014  lw          $v1, 0x14($s3)
    ctx->pc = 0x4a3534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x4a3538: 0x14620015  bne         $v1, $v0, . + 4 + (0x15 << 2)
    ctx->pc = 0x4A3538u;
    {
        const bool branch_taken_0x4a3538 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x4A353Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3538u;
        // 0x4a353c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3538) {
            ctx->pc = 0x4A3590u;
            goto label_4a3590;
        }
    }
    ctx->pc = 0x4A3540u;
    // 0x4a3540: 0x8fa6000c  lw          $a2, 0xC($sp)
    ctx->pc = 0x4a3540u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x4a3544: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x4a3544u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a3548: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x4a3548u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4a354c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x4a354cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x4a3550: 0x8fa70004  lw          $a3, 0x4($sp)
    ctx->pc = 0x4a3550u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x4a3554: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x4a3554u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x4a3558: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x4a3558u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x4a355c: 0x2c7b021  addu        $s6, $s6, $a3
    ctx->pc = 0x4a355cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 7)));
    // 0x4a3560: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x4a3560u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a3564: 0xc0bb7e6  jal         func_2EDF98
    ctx->pc = 0x4A3564u;
    SET_GPR_U32(ctx, 31, 0x4A356Cu);
    ctx->pc = 0x4A3568u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A3564u;
    // 0x4a3568: 0xafa30008  sw          $v1, 0x8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDF98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDF98u, 0x4A3564u, 0x4A356Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A356Cu;
label_4a356c:
    // 0x4a356c: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x4a356cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x4a3570: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x4a3570u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x4a3574: 0xc128f70  jal         func_4A3DC0
    ctx->pc = 0x4A3574u;
    SET_GPR_U32(ctx, 31, 0x4A357Cu);
    ctx->pc = 0x4A3578u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A3574u;
    // 0x4a3578: 0x2c0282d  daddu       $a1, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4A3DC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4A3DC0u, 0x4A3574u, 0x4A357Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A357Cu;
label_4a357c:
    // 0x4a357c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x4A357Cu;
    {
        const bool branch_taken_0x4a357c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A3580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A357Cu;
        // 0x4a3580: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a357c) {
            ctx->pc = 0x4A3590u;
            goto label_4a3590;
        }
    }
    ctx->pc = 0x4A3584u;
label_4a3584:
    // 0x4a3584: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x4A3584u;
    {
        const bool branch_taken_0x4a3584 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A3588u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A3584u;
        // 0x4a3588: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a3584) {
            ctx->pc = 0x4A3590u;
            goto label_4a3590;
        }
    }
    ctx->pc = 0x4A358Cu;
label_4a358c:
    // 0x4a358c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4a358cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_4a3590:
    // 0x4a3590: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x4a3590u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x4a3594: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x4a3594u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x4a3598: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x4a3598u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x4a359c: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x4a359cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x4a35a0: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x4a35a0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x4a35a4: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x4a35a4u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x4a35a8: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x4a35a8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x4a35ac: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x4a35acu;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x4a35b0: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x4a35b0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x4a35b4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4a35b4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x4a35b8: 0x3e00008  jr          $ra
    ctx->pc = 0x4A35B8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A35BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A35B8u;
        // 0x4a35bc: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A35B8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A35C0u;
}
