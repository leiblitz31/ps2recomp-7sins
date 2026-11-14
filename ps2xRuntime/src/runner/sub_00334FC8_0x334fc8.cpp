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

// Function: sub_00334FC8
// Address: 0x334fc8 - 0x33a730
void sub_00334FC8_0x334fc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00334FC8_0x334fc8");
#endif

    switch (ctx->pc) {
        case 0x334ff0u: goto label_334ff0;
        case 0x335080u: goto label_335080;
        case 0x335174u: goto label_335174;
        case 0x335230u: goto label_335230;
        case 0x3352bcu: goto label_3352bc;
        case 0x335390u: goto label_335390;
        case 0x3353d4u: goto label_3353d4;
        case 0x335438u: goto label_335438;
        case 0x3354c0u: goto label_3354c0;
        case 0x3354dcu: goto label_3354dc;
        case 0x3354ecu: goto label_3354ec;
        case 0x3354fcu: goto label_3354fc;
        case 0x335508u: goto label_335508;
        case 0x3355b8u: goto label_3355b8;
        case 0x3355c8u: goto label_3355c8;
        case 0x3355d8u: goto label_3355d8;
        case 0x3355e4u: goto label_3355e4;
        case 0x335798u: goto label_335798;
        case 0x335960u: goto label_335960;
        case 0x335a08u: goto label_335a08;
        case 0x335b2cu: goto label_335b2c;
        case 0x335cd4u: goto label_335cd4;
        case 0x335d14u: goto label_335d14;
        case 0x335d78u: goto label_335d78;
        case 0x335ea0u: goto label_335ea0;
        case 0x3362a8u: goto label_3362a8;
        case 0x336314u: goto label_336314;
        case 0x336320u: goto label_336320;
        case 0x336384u: goto label_336384;
        case 0x3366d8u: goto label_3366d8;
        case 0x336724u: goto label_336724;
        case 0x3367e8u: goto label_3367e8;
        case 0x33684cu: goto label_33684c;
        case 0x336858u: goto label_336858;
        case 0x336874u: goto label_336874;
        case 0x3368a4u: goto label_3368a4;
        case 0x3368b4u: goto label_3368b4;
        case 0x33691cu: goto label_33691c;
        case 0x336a24u: goto label_336a24;
        case 0x336cc0u: goto label_336cc0;
        case 0x3370d4u: goto label_3370d4;
        case 0x33711cu: goto label_33711c;
        case 0x337368u: goto label_337368;
        case 0x33739cu: goto label_33739c;
        case 0x3373acu: goto label_3373ac;
        case 0x3373c4u: goto label_3373c4;
        case 0x3373f0u: goto label_3373f0;
        case 0x33741cu: goto label_33741c;
        case 0x33744cu: goto label_33744c;
        case 0x337460u: goto label_337460;
        case 0x3374e8u: goto label_3374e8;
        case 0x3374fcu: goto label_3374fc;
        case 0x3375d4u: goto label_3375d4;
        case 0x337a40u: goto label_337a40;
        case 0x337aa4u: goto label_337aa4;
        case 0x337ab0u: goto label_337ab0;
        case 0x337b10u: goto label_337b10;
        case 0x337e60u: goto label_337e60;
        case 0x337eacu: goto label_337eac;
        case 0x337f58u: goto label_337f58;
        case 0x337fbcu: goto label_337fbc;
        case 0x337fc8u: goto label_337fc8;
        case 0x338000u: goto label_338000;
        case 0x338010u: goto label_338010;
        case 0x338024u: goto label_338024;
        case 0x338050u: goto label_338050;
        case 0x33805cu: goto label_33805c;
        case 0x338070u: goto label_338070;
        case 0x338094u: goto label_338094;
        case 0x3380b8u: goto label_3380b8;
        case 0x3380e0u: goto label_3380e0;
        case 0x3380f0u: goto label_3380f0;
        case 0x338170u: goto label_338170;
        case 0x338180u: goto label_338180;
        case 0x338224u: goto label_338224;
        case 0x338560u: goto label_338560;
        case 0x338974u: goto label_338974;
        case 0x3389bcu: goto label_3389bc;
        case 0x338b18u: goto label_338b18;
        case 0x338d20u: goto label_338d20;
        case 0x338d54u: goto label_338d54;
        case 0x338d64u: goto label_338d64;
        case 0x338d7cu: goto label_338d7c;
        case 0x338da8u: goto label_338da8;
        case 0x338dd4u: goto label_338dd4;
        case 0x338e04u: goto label_338e04;
        case 0x338e18u: goto label_338e18;
        case 0x338ea0u: goto label_338ea0;
        case 0x338eb4u: goto label_338eb4;
        case 0x338f88u: goto label_338f88;
        case 0x339470u: goto label_339470;
        case 0x3394d4u: goto label_3394d4;
        case 0x3394e0u: goto label_3394e0;
        case 0x339544u: goto label_339544;
        case 0x33956cu: goto label_33956c;
        case 0x339628u: goto label_339628;
        case 0x3399a0u: goto label_3399a0;
        case 0x3399ecu: goto label_3399ec;
        case 0x339ac0u: goto label_339ac0;
        case 0x339b24u: goto label_339b24;
        case 0x339b30u: goto label_339b30;
        case 0x339b68u: goto label_339b68;
        case 0x339b7cu: goto label_339b7c;
        case 0x339bacu: goto label_339bac;
        case 0x339bbcu: goto label_339bbc;
        case 0x339bd0u: goto label_339bd0;
        case 0x339bfcu: goto label_339bfc;
        case 0x339c20u: goto label_339c20;
        case 0x339c48u: goto label_339c48;
        case 0x339c58u: goto label_339c58;
        case 0x339cdcu: goto label_339cdc;
        case 0x339cf0u: goto label_339cf0;
        case 0x339d9cu: goto label_339d9c;
        case 0x339e34u: goto label_339e34;
        case 0x339ef0u: goto label_339ef0;
        case 0x33a1e8u: goto label_33a1e8;
        case 0x33a5fcu: goto label_33a5fc;
        case 0x33a644u: goto label_33a644;
        case 0x33a688u: goto label_33a688;
        default: break;
    }

    ctx->pc = 0x334fc8u;

    // 0x334fc8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x334fc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x334fcc: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x334fccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x334fd0: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x334fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x334fd4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x334fd4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334fd8: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x334fd8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x334fdc: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x334fdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x334fe0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x334fe0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x334fe4: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x334fe4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x334fe8: 0xc10a322  jal         func_428C88
    ctx->pc = 0x334FE8u;
    SET_GPR_U32(ctx, 31, 0x334FF0u);
    ctx->pc = 0x334FECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x334FE8u;
    // 0x334fec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x428C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x428C88u, 0x334FE8u, 0x334FF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x334FF0u;
label_334ff0:
    // 0x334ff0: 0x8f90be20  lw          $s0, -0x41E0($gp)
    ctx->pc = 0x334ff0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x334ff4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x334ff4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x334ff8: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x334ff8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x334ffc: 0x3c026c03  lui         $v0, 0x6C03
    ctx->pc = 0x334ffcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27651 << 16));
    // 0x335000: 0x344202fd  ori         $v0, $v0, 0x2FD
    ctx->pc = 0x335000u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)765);
    // 0x335004: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x335004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x335008: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x335008u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x33500c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x33500cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x335010: 0x34420404  ori         $v0, $v0, 0x404
    ctx->pc = 0x335010u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x335014: 0x70431389  pcpyld      $v0, $v0, $v1
    ctx->pc = 0x335014u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x335018: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x335018u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x33501c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x33501cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x335020: 0x6a42001f  ldl         $v0, 0x1F($s2)
    ctx->pc = 0x335020u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x335024: 0x6e420018  ldr         $v0, 0x18($s2)
    ctx->pc = 0x335024u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x335028: 0x6a430027  ldl         $v1, 0x27($s2)
    ctx->pc = 0x335028u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x33502c: 0x6e430020  ldr         $v1, 0x20($s2)
    ctx->pc = 0x33502cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x335030: 0xb3a20007  sdl         $v0, 0x7($sp)
    ctx->pc = 0x335030u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x335034: 0xb7a20000  sdr         $v0, 0x0($sp)
    ctx->pc = 0x335034u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x335038: 0xb3a3000f  sdl         $v1, 0xF($sp)
    ctx->pc = 0x335038u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x33503c: 0xb7a30008  sdr         $v1, 0x8($sp)
    ctx->pc = 0x33503cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x335040: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x335040u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x335044: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x335044u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x335048: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x335048u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x33504c: 0x6a26001f  ldl         $a2, 0x1F($s1)
    ctx->pc = 0x33504cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x335050: 0x6e260018  ldr         $a2, 0x18($s1)
    ctx->pc = 0x335050u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x335054: 0x6a220027  ldl         $v0, 0x27($s1)
    ctx->pc = 0x335054u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x335058: 0x6e220020  ldr         $v0, 0x20($s1)
    ctx->pc = 0x335058u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x33505c: 0xb3a60007  sdl         $a2, 0x7($sp)
    ctx->pc = 0x33505cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x335060: 0xb7a60000  sdr         $a2, 0x0($sp)
    ctx->pc = 0x335060u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x335064: 0xb3a2000f  sdl         $v0, 0xF($sp)
    ctx->pc = 0x335064u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x335068: 0xb7a20008  sdr         $v0, 0x8($sp)
    ctx->pc = 0x335068u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x33506c: 0x7ba20000  lq          $v0, 0x0($sp)
    ctx->pc = 0x33506cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x335070: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x335070u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x335074: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x335074u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x335078: 0xc106784  jal         func_419E10
    ctx->pc = 0x335078u;
    SET_GPR_U32(ctx, 31, 0x335080u);
    ctx->pc = 0x33507Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335078u;
    // 0x33507c: 0x8e240004  lw          $a0, 0x4($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x419E10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419E10u, 0x335078u, 0x335080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335080u;
label_335080:
    // 0x335080: 0x68450027  ldl         $a1, 0x27($v0)
    ctx->pc = 0x335080u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x335084: 0x6c450020  ldr         $a1, 0x20($v0)
    ctx->pc = 0x335084u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x335088: 0x8c460028  lw          $a2, 0x28($v0)
    ctx->pc = 0x335088u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
    // 0x33508c: 0xb3a50017  sdl         $a1, 0x17($sp)
    ctx->pc = 0x33508cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x335090: 0xb7a50010  sdr         $a1, 0x10($sp)
    ctx->pc = 0x335090u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x335094: 0xafa60018  sw          $a2, 0x18($sp)
    ctx->pc = 0x335094u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 6));
    // 0x335098: 0x7ba20010  lq          $v0, 0x10($sp)
    ctx->pc = 0x335098u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33509c: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x33509cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x3350a0: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x3350a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x3350a4: 0xaf90be20  sw          $s0, -0x41E0($gp)
    ctx->pc = 0x3350a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 16));
    // 0x3350a8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3350a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3350ac: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x3350acu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3350b0: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x3350b0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3350b4: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x3350b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3350b8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3350b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3350bc: 0x3e00008  jr          $ra
    ctx->pc = 0x3350BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3350C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3350BCu;
        // 0x3350c0: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3350BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3350C4u;
    // 0x3350c4: 0x0  nop
    ctx->pc = 0x3350c4u;
    // NOP
    // 0x3350c8: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x3350c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x3350cc: 0x8f82bd78  lw          $v0, -0x4288($gp)
    ctx->pc = 0x3350ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950264)));
    // 0x3350d0: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x3350d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x3350d4: 0x7fb00120  sq          $s0, 0x120($sp)
    ctx->pc = 0x3350d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 16));
    // 0x3350d8: 0x7fb10110  sq          $s1, 0x110($sp)
    ctx->pc = 0x3350d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 17));
    // 0x3350dc: 0x7fb20100  sq          $s2, 0x100($sp)
    ctx->pc = 0x3350dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 18));
    // 0x3350e0: 0x7fb300f0  sq          $s3, 0xF0($sp)
    ctx->pc = 0x3350e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 19));
    // 0x3350e4: 0x7fb400e0  sq          $s4, 0xE0($sp)
    ctx->pc = 0x3350e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 20));
    // 0x3350e8: 0x7fb500d0  sq          $s5, 0xD0($sp)
    ctx->pc = 0x3350e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 21));
    // 0x3350ec: 0x7fb600c0  sq          $s6, 0xC0($sp)
    ctx->pc = 0x3350ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 22));
    // 0x3350f0: 0x7fb700b0  sq          $s7, 0xB0($sp)
    ctx->pc = 0x3350f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 23));
    // 0x3350f4: 0x7fbe00a0  sq          $fp, 0xA0($sp)
    ctx->pc = 0x3350f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 30));
    // 0x3350f8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x3350f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x3350fc: 0xe7b40130  swc1        $f20, 0x130($sp)
    ctx->pc = 0x3350fcu;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 304), bits); }
    // 0x335100: 0x8c830008  lw          $v1, 0x8($a0)
    ctx->pc = 0x335100u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x335104: 0xafa30058  sw          $v1, 0x58($sp)
    ctx->pc = 0x335104u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 3));
    // 0x335108: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x335108u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x33510c: 0x8c64c4c0  lw          $a0, -0x3B40($v1)
    ctx->pc = 0x33510cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x61C4C0u));
    // 0x335110: 0x2463c4c0  addiu       $v1, $v1, -0x3B40
    ctx->pc = 0x335110u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952128));
    // 0x335114: 0xafa40064  sw          $a0, 0x64($sp)
    ctx->pc = 0x335114u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 4));
    // 0x335118: 0x8fa40058  lw          $a0, 0x58($sp)
    ctx->pc = 0x335118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x33511c: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x33511cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61C4C4u));
    // 0x335120: 0x8c900018  lw          $s0, 0x18($a0)
    ctx->pc = 0x335120u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x335124: 0xafa50054  sw          $a1, 0x54($sp)
    ctx->pc = 0x335124u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 5));
    // 0x335128: 0xafa30060  sw          $v1, 0x60($sp)
    ctx->pc = 0x335128u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 3));
    // 0x33512c: 0x2022821  addu        $a1, $s0, $v0
    ctx->pc = 0x33512cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x335130: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x335130u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x335134: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x335134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x335138: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x335138u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x33513c: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x33513Cu;
    {
        const bool branch_taken_0x33513c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x335140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33513Cu;
        // 0x335140: 0xac43000c  sw          $v1, 0xC($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33513c) {
            ctx->pc = 0x335160u;
            goto label_335160;
        }
    }
    ctx->pc = 0x335144u;
    // 0x335144: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x335144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x335148: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x335148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33514c: 0x94430004  lhu         $v1, 0x4($v0)
    ctx->pc = 0x33514cu;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x335150: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x335150u;
    {
        const bool branch_taken_0x335150 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x335154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335150u;
        // 0x335154: 0x8f84bd78  lw          $a0, -0x4288($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950264)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335150) {
            ctx->pc = 0x335168u;
            goto label_335168;
        }
    }
    ctx->pc = 0x335158u;
    // 0x335158: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x335158u;
    {
        const bool branch_taken_0x335158 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33515Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335158u;
        // 0x33515c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335158) {
            ctx->pc = 0x335174u;
            goto label_335174;
        }
    }
    ctx->pc = 0x335160u;
label_335160:
    // 0x335160: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x335160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x335164: 0x8f84bd78  lw          $a0, -0x4288($gp)
    ctx->pc = 0x335164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950264)));
label_335168:
    // 0x335168: 0x94450004  lhu         $a1, 0x4($v0)
    ctx->pc = 0x335168u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x33516c: 0xc0e7eec  jal         func_39FBB0
    ctx->pc = 0x33516Cu;
    SET_GPR_U32(ctx, 31, 0x335174u);
    ctx->pc = 0x335170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33516Cu;
    // 0x335170: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39FBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39FBB0u, 0x33516Cu, 0x335174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335174u;
label_335174:
    // 0x335174: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x335174u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x335178: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x335178u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x33517c: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x33517cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x335180: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x335180u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x335184: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x335184u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x335188: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x335188u;
    {
        const bool branch_taken_0x335188 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x33518Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335188u;
        // 0x33518c: 0xaca20010  sw          $v0, 0x10($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335188) {
            ctx->pc = 0x3351A4u;
            goto label_3351a4;
        }
    }
    ctx->pc = 0x335190u;
    // 0x335190: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x335190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x335194: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x335194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x335198: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x335198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x33519c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x33519cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3351a0: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x3351a0u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
label_3351a4:
    // 0x3351a4: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x3351a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3351a8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x3351a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x3351ac: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x3351acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3351b0: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x3351b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3351b4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3351B4u;
    {
        const bool branch_taken_0x3351b4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3351B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3351B4u;
        // 0x3351b8: 0x8fa40050  lw          $a0, 0x50($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3351b4) {
            ctx->pc = 0x3351D0u;
            goto label_3351d0;
        }
    }
    ctx->pc = 0x3351BCu;
    // 0x3351bc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3351bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3351c0: 0xa0820029  sb          $v0, 0x29($a0)
    ctx->pc = 0x3351c0u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 41), (uint8_t)GPR_U32(ctx, 2));
    // 0x3351c4: 0x9383aed0  lbu         $v1, -0x5130($gp)
    ctx->pc = 0x3351c4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294946512)));
    // 0x3351c8: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3351C8u;
    {
        const bool branch_taken_0x3351c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3351CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3351C8u;
        // 0x3351cc: 0xa0830028  sb          $v1, 0x28($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 40), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3351c8) {
            ctx->pc = 0x3351F4u;
            goto label_3351f4;
        }
    }
    ctx->pc = 0x3351D0u;
label_3351d0:
    // 0x3351d0: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3351d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3351d4: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x3351D4u;
    {
        const bool branch_taken_0x3351d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3351d4) {
            ctx->pc = 0x3351D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3351D4u;
            // 0x3351d8: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3351F8u;
            goto label_3351f8;
        }
    }
    ctx->pc = 0x3351DCu;
    // 0x3351dc: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x3351dcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3351e0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3351e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3351e4: 0xa0a30029  sb          $v1, 0x29($a1)
    ctx->pc = 0x3351e4u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 41), (uint8_t)GPR_U32(ctx, 3));
    // 0x3351e8: 0x9382aed0  lbu         $v0, -0x5130($gp)
    ctx->pc = 0x3351e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294946512)));
    // 0x3351ec: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x3351ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x3351f0: 0xa0a20028  sb          $v0, 0x28($a1)
    ctx->pc = 0x3351f0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 40), (uint8_t)GPR_U32(ctx, 2));
label_3351f4:
    // 0x3351f4: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x3351f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3351f8:
    // 0x3351f8: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x3351f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
    // 0x3351fc: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3351fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x335200: 0x144001a5  bnez        $v0, . + 4 + (0x1A5 << 2)
    ctx->pc = 0x335200u;
    {
        const bool branch_taken_0x335200 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x335204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335200u;
        // 0x335204: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335200) {
            ctx->pc = 0x335898u;
            goto label_335898;
        }
    }
    ctx->pc = 0x335208u;
    // 0x335208: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x335208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x33520c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x33520cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335210: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x335210u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x335214: 0x10400144  beqz        $v0, . + 4 + (0x144 << 2)
    ctx->pc = 0x335214u;
    {
        const bool branch_taken_0x335214 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x335218u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335214u;
        // 0x335218: 0xafa0005c  sw          $zero, 0x5C($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335214) {
            ctx->pc = 0x335728u;
            goto label_335728;
        }
    }
    ctx->pc = 0x33521Cu;
    // 0x33521c: 0x3c05ffff  lui         $a1, 0xFFFF
    ctx->pc = 0x33521cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65535 << 16));
    // 0x335220: 0x34a5fff7  ori         $a1, $a1, 0xFFF7
    ctx->pc = 0x335220u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65527);
    // 0x335224: 0xafa5006c  sw          $a1, 0x6C($sp)
    ctx->pc = 0x335224u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 5));
    // 0x335228: 0x24020070  addiu       $v0, $zero, 0x70
    ctx->pc = 0x335228u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x33522c: 0x0  nop
    ctx->pc = 0x33522cu;
    // NOP
label_335230:
    // 0x335230: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x335230u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x335234: 0x821818  mult        $v1, $a0, $v0
    ctx->pc = 0x335234u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x335238: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x335238u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x33523c: 0x439021  addu        $s2, $v0, $v1
    ctx->pc = 0x33523cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x335240: 0x8e50006c  lw          $s0, 0x6C($s2)
    ctx->pc = 0x335240u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
    // 0x335244: 0x8e0300f0  lw          $v1, 0xF0($s0)
    ctx->pc = 0x335244u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x335248: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x335248u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x33524c: 0x1040012a  beqz        $v0, . + 4 + (0x12A << 2)
    ctx->pc = 0x33524Cu;
    {
        const bool branch_taken_0x33524c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x335250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33524Cu;
        // 0x335250: 0x8fa50064  lw          $a1, 0x64($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33524c) {
            ctx->pc = 0x3356F8u;
            goto label_3356f8;
        }
    }
    ctx->pc = 0x335254u;
    // 0x335254: 0x8e0200f8  lw          $v0, 0xF8($s0)
    ctx->pc = 0x335254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 248)));
    // 0x335258: 0x54450128  bnel        $v0, $a1, . + 4 + (0x128 << 2)
    ctx->pc = 0x335258u;
    {
        const bool branch_taken_0x335258 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x335258) {
            ctx->pc = 0x33525Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x335258u;
            // 0x33525c: 0x8e0200f0  lw          $v0, 0xF0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3356FCu;
            goto label_3356fc;
        }
    }
    ctx->pc = 0x335260u;
    // 0x335260: 0x34620008  ori         $v0, $v1, 0x8
    ctx->pc = 0x335260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x335264: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x335264u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x335268: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x335268u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x33526c: 0xafa3005c  sw          $v1, 0x5C($sp)
    ctx->pc = 0x33526cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 3));
    // 0x335270: 0xae0200f0  sw          $v0, 0xF0($s0)
    ctx->pc = 0x335270u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 2));
    // 0x335274: 0x8fa50050  lw          $a1, 0x50($sp)
    ctx->pc = 0x335274u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x335278: 0x90a30028  lbu         $v1, 0x28($a1)
    ctx->pc = 0x335278u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 40)));
    // 0x33527c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x33527cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x335280: 0xae430060  sw          $v1, 0x60($s2)
    ctx->pc = 0x335280u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 3));
    // 0x335284: 0x8e0200d8  lw          $v0, 0xD8($s0)
    ctx->pc = 0x335284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x335288: 0x10450004  beq         $v0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x335288u;
    {
        const bool branch_taken_0x335288 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x33528Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335288u;
        // 0x33528c: 0x34620002  ori         $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x335288) {
            ctx->pc = 0x33529Cu;
            goto label_33529c;
        }
    }
    ctx->pc = 0x335290u;
    // 0x335290: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x335290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x335294: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x335294u;
    {
        const bool branch_taken_0x335294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x335298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335294u;
        // 0x335298: 0x34620002  ori         $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x335294) {
            ctx->pc = 0x3352A0u;
            goto label_3352a0;
        }
    }
    ctx->pc = 0x33529Cu;
label_33529c:
    // 0x33529c: 0xae420060  sw          $v0, 0x60($s2)
    ctx->pc = 0x33529cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 96), GPR_U32(ctx, 2));
label_3352a0:
    // 0x3352a0: 0x8e0300d0  lw          $v1, 0xD0($s0)
    ctx->pc = 0x3352a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x3352a4: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3352a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3352a8: 0x1060010c  beqz        $v1, . + 4 + (0x10C << 2)
    ctx->pc = 0x3352A8u;
    {
        const bool branch_taken_0x3352a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3352ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3352A8u;
        // 0x3352ac: 0xafa40070  sw          $a0, 0x70($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3352a8) {
            ctx->pc = 0x3356DCu;
            goto label_3356dc;
        }
    }
    ctx->pc = 0x3352B0u;
    // 0x3352b0: 0x8e430068  lw          $v1, 0x68($s2)
    ctx->pc = 0x3352b0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
    // 0x3352b4: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x3352b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x3352b8: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x3352b8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_3352bc:
    // 0x3352bc: 0x42000039  di
    ctx->pc = 0x3352bcu;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x3352c0: 0x40f  sync.p
    ctx->pc = 0x3352c0u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3352c4: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x3352c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x3352c8: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x3352c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x3352cc: 0x0  nop
    ctx->pc = 0x3352ccu;
    // NOP
    // 0x3352d0: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3352D0u;
    {
        const bool branch_taken_0x3352d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3352d0) {
            ctx->pc = 0x3352BCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3352bc;
        }
    }
    ctx->pc = 0x3352D8u;
    // 0x3352d8: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x3352d8u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3352dc: 0xd8620010  lqc2        $vf2, 0x10($v1)
    ctx->pc = 0x3352dcu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x3352e0: 0xd8630020  lqc2        $vf3, 0x20($v1)
    ctx->pc = 0x3352e0u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x3352e4: 0xd8640030  lqc2        $vf4, 0x30($v1)
    ctx->pc = 0x3352e4u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x3352e8: 0x4bc312fe  vopmula.xyz $ACC, $vf2, $vf3
    ctx->pc = 0x3352e8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x3352ec: 0x4bc2196e  vopmsub.xyz $vf5, $vf3, $vf2
    ctx->pc = 0x3352ecu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x3352f0: 0x4bc007c3  vaddw.xyz   $vf31, $vf0, $vf0w
    ctx->pc = 0x3352f0u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x3352f4: 0x4bc11afe  vopmula.xyz $ACC, $vf3, $vf1
    ctx->pc = 0x3352f4u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x3352f8: 0x4bc309ae  vopmsub.xyz $vf6, $vf1, $vf3
    ctx->pc = 0x3352f8u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x3352fc: 0x4be12a2a  vmul.xyzw   $vf8, $vf5, $vf1
    ctx->pc = 0x3352fcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x335300: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x335300u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x335304: 0x4bc111ee  vopmsub.xyz $vf7, $vf2, $vf1
    ctx->pc = 0x335304u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x335308: 0x4b050040  vaddx.x     $vf1, $vf0, $vf5x
    ctx->pc = 0x335308u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x33530c: 0x4b08403d  vadday.x    $ACC, $vf8, $vf8y
    ctx->pc = 0x33530cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x335310: 0x4b08fa0a  vmaddz.x    $vf8, $vf31, $vf8z
    ctx->pc = 0x335310u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x335314: 0x4a860040  vaddx.y     $vf1, $vf0, $vf6x
    ctx->pc = 0x335314u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x335318: 0x4a470040  vaddx.z     $vf1, $vf0, $vf7x
    ctx->pc = 0x335318u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x33531c: 0x4b050081  vaddy.x     $vf2, $vf0, $vf5y
    ctx->pc = 0x33531cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x335320: 0x4a6803bc  vdiv        $Q, $vf0w, $vf8x
    ctx->pc = 0x335320u;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x335324: 0x4a860081  vaddy.y     $vf2, $vf0, $vf6y
    ctx->pc = 0x335324u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x335328: 0x4a470081  vaddy.z     $vf2, $vf0, $vf7y
    ctx->pc = 0x335328u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x33532c: 0x4b0500c2  vaddz.x     $vf3, $vf0, $vf5z
    ctx->pc = 0x33532cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x335330: 0x4a8600c2  vaddz.y     $vf3, $vf0, $vf6z
    ctx->pc = 0x335330u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x335334: 0x4a4700c2  vaddz.z     $vf3, $vf0, $vf7z
    ctx->pc = 0x335334u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x335338: 0x4bc001bc  vmulax.xyz  $ACC, $vf0, $vf0x
    ctx->pc = 0x335338u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x33533c: 0x4bc0295c  vmulq.xyz   $vf5, $vf5, $Q
    ctx->pc = 0x33533cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x335340: 0x4bc0319c  vmulq.xyz   $vf6, $vf6, $Q
    ctx->pc = 0x335340u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x335344: 0x4bc039dc  vmulq.xyz   $vf7, $vf7, $Q
    ctx->pc = 0x335344u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x335348: 0x4bc5226d  vmsub.xyz   $vf9, $vf4, $vf5
    ctx->pc = 0x335348u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x33534c: 0x4bc622ad  vmsub.xyz   $vf10, $vf4, $vf6
    ctx->pc = 0x33534cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[6]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x335350: 0x4bc722ed  vmsub.xyz   $vf11, $vf4, $vf7
    ctx->pc = 0x335350u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[7]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x335354: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x335354u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x335358: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x335358u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x33535c: 0x4bc018dc  vmulq.xyz   $vf3, $vf3, $Q
    ctx->pc = 0x33535cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x335360: 0x4b09483d  vadday.x    $ACC, $vf9, $vf9y
    ctx->pc = 0x335360u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x335364: 0x4b09f90a  vmaddz.x    $vf4, $vf31, $vf9z
    ctx->pc = 0x335364u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x335368: 0x4a8a503c  vaddax.y    $ACC, $vf10, $vf10x
    ctx->pc = 0x335368u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, 0))); }
    // 0x33536c: 0x4a8af90a  vmaddz.y    $vf4, $vf31, $vf10z
    ctx->pc = 0x33536cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x335370: 0x4a4b583d  vadday.z    $ACC, $vf11, $vf11y
    ctx->pc = 0x335370u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, 0))); }
    // 0x335374: 0x4a4bf908  vmaddx.z    $vf4, $vf31, $vf11x
    ctx->pc = 0x335374u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x335378: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x335378u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x33537c: 0xfba20010  sqc2        $vf2, 0x10($sp)
    ctx->pc = 0x33537cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x335380: 0xfba30020  sqc2        $vf3, 0x20($sp)
    ctx->pc = 0x335380u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x335384: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x335384u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x335388: 0x42000038  ei
    ctx->pc = 0x335388u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x33538c: 0xafa4000c  sw          $a0, 0xC($sp)
    ctx->pc = 0x33538cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 4));
label_335390:
    // 0x335390: 0x42000039  di
    ctx->pc = 0x335390u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x335394: 0x40f  sync.p
    ctx->pc = 0x335394u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x335398: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x335398u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x33539c: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x33539cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x3353a0: 0x0  nop
    ctx->pc = 0x3353a0u;
    // NOP
    // 0x3353a4: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3353A4u;
    {
        const bool branch_taken_0x3353a4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3353a4) {
            ctx->pc = 0x335390u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_335390;
        }
    }
    ctx->pc = 0x3353ACu;
    // 0x3353ac: 0x26030060  addiu       $v1, $s0, 0x60
    ctx->pc = 0x3353acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 96));
    // 0x3353b0: 0xd8650000  lqc2        $vf5, 0x0($v1)
    ctx->pc = 0x3353b0u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3353b4: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x3353b4u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3353b8: 0xdba20010  lqc2        $vf2, 0x10($sp)
    ctx->pc = 0x3353b8u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3353bc: 0xdba30020  lqc2        $vf3, 0x20($sp)
    ctx->pc = 0x3353bcu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3353c0: 0x4be509bc  vmulax.xyzw $ACC, $vf1, $vf5x
    ctx->pc = 0x3353c0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3353c4: 0x4be510bd  vmadday.xyzw $ACC, $vf2, $vf5y
    ctx->pc = 0x3353c4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x3353c8: 0x4be5194a  vmaddz.xyzw $vf5, $vf3, $vf5z
    ctx->pc = 0x3353c8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x3353cc: 0xfa450000  sqc2        $vf5, 0x0($s2)
    ctx->pc = 0x3353ccu;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x3353d0: 0x42000038  ei
    ctx->pc = 0x3353d0u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_3353d4:
    // 0x3353d4: 0x42000039  di
    ctx->pc = 0x3353d4u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x3353d8: 0x40f  sync.p
    ctx->pc = 0x3353d8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3353dc: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x3353dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x3353e0: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x3353e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x3353e4: 0x0  nop
    ctx->pc = 0x3353e4u;
    // NOP
    // 0x3353e8: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3353E8u;
    {
        const bool branch_taken_0x3353e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3353e8) {
            ctx->pc = 0x3353D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3353d4;
        }
    }
    ctx->pc = 0x3353F0u;
    // 0x3353f0: 0xda410000  lqc2        $vf1, 0x0($s2)
    ctx->pc = 0x3353f0u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x3353f4: 0x4bc108aa  vmul.xyz    $vf2, $vf1, $vf1
    ctx->pc = 0x3353f4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = PS2_VBLEND(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x3353f8: 0x4bc007c3  vaddw.xyz   $vf31, $vf0, $vf0w
    ctx->pc = 0x3353f8u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x3353fc: 0x4a0002ff  vnop
    ctx->pc = 0x3353fcu;
    // NOP operation, no action needed for VU0
    // 0x335400: 0x4a0002ff  vnop
    ctx->pc = 0x335400u;
    // NOP operation, no action needed for VU0
    // 0x335404: 0x4b02103d  vadday.x    $ACC, $vf2, $vf2y
    ctx->pc = 0x335404u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x335408: 0x4b02f8ca  vmaddz.x    $vf3, $vf31, $vf2z
    ctx->pc = 0x335408u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x33540c: 0x4a0002ff  vnop
    ctx->pc = 0x33540cu;
    // NOP operation, no action needed for VU0
    // 0x335410: 0x4a0002ff  vnop
    ctx->pc = 0x335410u;
    // NOP operation, no action needed for VU0
    // 0x335414: 0x4a0002ff  vnop
    ctx->pc = 0x335414u;
    // NOP operation, no action needed for VU0
    // 0x335418: 0x4a6303be  vrsqrt      $Q, $vf0w, $vf3x
    ctx->pc = 0x335418u;
    { float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft > 0.0f) ? (1.0f / sqrtf(ft)) : 0.0f; }
    // 0x33541c: 0x4a0003bf  vwaitq
    ctx->pc = 0x33541cu;
    // VWAITQ (Q already resolved in this runtime)
    // 0x335420: 0x4bc0091c  vmulq.xyz   $vf4, $vf1, $Q
    ctx->pc = 0x335420u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x335424: 0x4a0002ff  vnop
    ctx->pc = 0x335424u;
    // NOP operation, no action needed for VU0
    // 0x335428: 0x4a0002ff  vnop
    ctx->pc = 0x335428u;
    // NOP operation, no action needed for VU0
    // 0x33542c: 0x4a0002ff  vnop
    ctx->pc = 0x33542cu;
    // NOP operation, no action needed for VU0
    // 0x335430: 0xfa440000  sqc2        $vf4, 0x0($s2)
    ctx->pc = 0x335430u;
    WRITE128(ADD32(GPR_U32(ctx, 18), 0), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x335434: 0x42000038  ei
    ctx->pc = 0x335434u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
label_335438:
    // 0x335438: 0x42000039  di
    ctx->pc = 0x335438u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x33543c: 0x40f  sync.p
    ctx->pc = 0x33543cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x335440: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x335440u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x335444: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x335444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x335448: 0x0  nop
    ctx->pc = 0x335448u;
    // NOP
    // 0x33544c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x33544Cu;
    {
        const bool branch_taken_0x33544c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33544c) {
            ctx->pc = 0x335438u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_335438;
        }
    }
    ctx->pc = 0x335454u;
    // 0x335454: 0x26430010  addiu       $v1, $s2, 0x10
    ctx->pc = 0x335454u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 18), 16));
    // 0x335458: 0x26020070  addiu       $v0, $s0, 0x70
    ctx->pc = 0x335458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 112));
    // 0x33545c: 0xd8450000  lqc2        $vf5, 0x0($v0)
    ctx->pc = 0x33545cu;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x335460: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x335460u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x335464: 0xdba20010  lqc2        $vf2, 0x10($sp)
    ctx->pc = 0x335464u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x335468: 0xdba30020  lqc2        $vf3, 0x20($sp)
    ctx->pc = 0x335468u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33546c: 0xdba40030  lqc2        $vf4, 0x30($sp)
    ctx->pc = 0x33546cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x335470: 0x4be509bc  vmulax.xyzw $ACC, $vf1, $vf5x
    ctx->pc = 0x335470u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x335474: 0x4be510bd  vmadday.xyzw $ACC, $vf2, $vf5y
    ctx->pc = 0x335474u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x335478: 0x4be518be  vmaddaz.xyzw $ACC, $vf3, $vf5z
    ctx->pc = 0x335478u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x33547c: 0x4be0214b  vmaddw.xyzw $vf5, $vf4, $vf0w
    ctx->pc = 0x33547cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x335480: 0xf8650000  sqc2        $vf5, 0x0($v1)
    ctx->pc = 0x335480u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x335484: 0x42000038  ei
    ctx->pc = 0x335484u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x335488: 0xafa00068  sw          $zero, 0x68($sp)
    ctx->pc = 0x335488u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 0));
    // 0x33548c: 0x3c013f80  lui         $at, 0x3F80
    ctx->pc = 0x33548cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16256 << 16));
    // 0x335490: 0x4481a000  mtc1        $at, $f20
    ctx->pc = 0x335490u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[20], &bits, sizeof(bits)); }
    // 0x335494: 0x2642002c  addiu       $v0, $s2, 0x2C
    ctx->pc = 0x335494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 44));
    // 0x335498: 0x261e0080  addiu       $fp, $s0, 0x80
    ctx->pc = 0x335498u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 16), 128));
    // 0x33549c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x33549cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3354a0: 0x26570020  addiu       $s7, $s2, 0x20
    ctx->pc = 0x3354a0u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
    // 0x3354a4: 0xafb10074  sw          $s1, 0x74($sp)
    ctx->pc = 0x3354a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 17));
    // 0x3354a8: 0x220b02d  daddu       $s6, $s1, $zero
    ctx->pc = 0x3354a8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3354ac: 0xafb10078  sw          $s1, 0x78($sp)
    ctx->pc = 0x3354acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 17));
    // 0x3354b0: 0x261500c0  addiu       $s5, $s0, 0xC0
    ctx->pc = 0x3354b0u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 16), 192));
    // 0x3354b4: 0xafb1007c  sw          $s1, 0x7C($sp)
    ctx->pc = 0x3354b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 17));
    // 0x3354b8: 0xafb10080  sw          $s1, 0x80($sp)
    ctx->pc = 0x3354b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 17));
    // 0x3354bc: 0xafb10084  sw          $s1, 0x84($sp)
    ctx->pc = 0x3354bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 17));
label_3354c0:
    // 0x3354c0: 0x8e0200d0  lw          $v0, 0xD0($s0)
    ctx->pc = 0x3354c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x3354c4: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x3354c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3354c8: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x3354c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3354cc: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x3354CCu;
    {
        const bool branch_taken_0x3354cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3354D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3354CCu;
        // 0x3354d0: 0x8fa40068  lw          $a0, 0x68($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3354cc) {
            ctx->pc = 0x335598u;
            goto label_335598;
        }
    }
    ctx->pc = 0x3354D4u;
    // 0x3354d4: 0xc104d24  jal         func_413490
    ctx->pc = 0x3354D4u;
    SET_GPR_U32(ctx, 31, 0x3354DCu);
    ctx->pc = 0x3354D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3354D4u;
    // 0x3354d8: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413490u, 0x3354D4u, 0x3354DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3354DCu;
label_3354dc:
    // 0x3354dc: 0x4600a003  div.s       $f0, $f20, $f0
    ctx->pc = 0x3354dcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
    // 0x3354e0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3354e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3354e4: 0xc104d24  jal         func_413490
    ctx->pc = 0x3354E4u;
    SET_GPR_U32(ctx, 31, 0x3354ECu);
    ctx->pc = 0x3354E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3354E4u;
    // 0x3354e8: 0xe7a00040  swc1        $f0, 0x40($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x413490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413490u, 0x3354E4u, 0x3354ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3354ECu;
label_3354ec:
    // 0x3354ec: 0x4600a003  div.s       $f0, $f20, $f0
    ctx->pc = 0x3354ecu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
    // 0x3354f0: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3354f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3354f4: 0xc104d24  jal         func_413490
    ctx->pc = 0x3354F4u;
    SET_GPR_U32(ctx, 31, 0x3354FCu);
    ctx->pc = 0x3354F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3354F4u;
    // 0x3354f8: 0xe7a00044  swc1        $f0, 0x44($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x413490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413490u, 0x3354F4u, 0x3354FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3354FCu;
label_3354fc:
    // 0x3354fc: 0x4600a003  div.s       $f0, $f20, $f0
    ctx->pc = 0x3354fcu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
    // 0x335500: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x335500u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x335504: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x335504u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_335508:
    // 0x335508: 0x42000039  di
    ctx->pc = 0x335508u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x33550c: 0x40f  sync.p
    ctx->pc = 0x33550cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x335510: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x335510u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x335514: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x335514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x335518: 0x0  nop
    ctx->pc = 0x335518u;
    // NOP
    // 0x33551c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x33551Cu;
    {
        const bool branch_taken_0x33551c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x33551c) {
            ctx->pc = 0x335508u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_335508;
        }
    }
    ctx->pc = 0x335524u;
    // 0x335524: 0xdbc50000  lqc2        $vf5, 0x0($fp)
    ctx->pc = 0x335524u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 30), 0)));
    // 0x335528: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x335528u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33552c: 0xdba20010  lqc2        $vf2, 0x10($sp)
    ctx->pc = 0x33552cu;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x335530: 0xdba30020  lqc2        $vf3, 0x20($sp)
    ctx->pc = 0x335530u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x335534: 0x4be509bc  vmulax.xyzw $ACC, $vf1, $vf5x
    ctx->pc = 0x335534u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x335538: 0x4be510bd  vmadday.xyzw $ACC, $vf2, $vf5y
    ctx->pc = 0x335538u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x33553c: 0x4be5194a  vmaddz.xyzw $vf5, $vf3, $vf5z
    ctx->pc = 0x33553cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x335540: 0xfae50000  sqc2        $vf5, 0x0($s7)
    ctx->pc = 0x335540u;
    WRITE128(ADD32(GPR_U32(ctx, 23), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x335544: 0x42000038  ei
    ctx->pc = 0x335544u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x335548: 0xc6c0fff4  lwc1        $f0, -0xC($s6)
    ctx->pc = 0x335548u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4294967284)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33554c: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x33554cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x335550: 0x8fa50084  lw          $a1, 0x84($sp)
    ctx->pc = 0x335550u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x335554: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x335554u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x335558: 0xe4a0fff4  swc1        $f0, -0xC($a1)
    ctx->pc = 0x335558u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294967284), bits); }
    // 0x33555c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x33555cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x335560: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x335560u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x335564: 0xc441fff8  lwc1        $f1, -0x8($v0)
    ctx->pc = 0x335564u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294967288)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x335568: 0x8fa3007c  lw          $v1, 0x7C($sp)
    ctx->pc = 0x335568u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x33556c: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x33556cu;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x335570: 0xe461fff8  swc1        $f1, -0x8($v1)
    ctx->pc = 0x335570u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 4294967288), bits); }
    // 0x335574: 0x8fa40078  lw          $a0, 0x78($sp)
    ctx->pc = 0x335574u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x335578: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x335578u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33557c: 0xc480fffc  lwc1        $f0, -0x4($a0)
    ctx->pc = 0x33557cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 4294967292)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x335580: 0x8fa50074  lw          $a1, 0x74($sp)
    ctx->pc = 0x335580u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x335584: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x335584u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x335588: 0xe4a0fffc  swc1        $f0, -0x4($a1)
    ctx->pc = 0x335588u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 5), 4294967292), bits); }
    // 0x33558c: 0xc6a10000  lwc1        $f1, 0x0($s5)
    ctx->pc = 0x33558cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x335590: 0xe6210000  swc1        $f1, 0x0($s1)
    ctx->pc = 0x335590u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 0), bits); }
    // 0x335594: 0x8fa40068  lw          $a0, 0x68($sp)
    ctx->pc = 0x335594u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
label_335598:
    // 0x335598: 0x27d40010  addiu       $s4, $fp, 0x10
    ctx->pc = 0x335598u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 30), 16));
    // 0x33559c: 0x8e0300d0  lw          $v1, 0xD0($s0)
    ctx->pc = 0x33559cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
    // 0x3355a0: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x3355a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3355a4: 0x43102b  sltu        $v0, $v0, $v1
    ctx->pc = 0x3355a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3355a8: 0x10400031  beqz        $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x3355A8u;
    {
        const bool branch_taken_0x3355a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3355ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3355A8u;
        // 0x3355ac: 0x26f30010  addiu       $s3, $s7, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 23), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3355a8) {
            ctx->pc = 0x335670u;
            goto label_335670;
        }
    }
    ctx->pc = 0x3355B0u;
    // 0x3355b0: 0xc104d24  jal         func_413490
    ctx->pc = 0x3355B0u;
    SET_GPR_U32(ctx, 31, 0x3355B8u);
    ctx->pc = 0x3355B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3355B0u;
    // 0x3355b4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x413490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413490u, 0x3355B0u, 0x3355B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3355B8u;
label_3355b8:
    // 0x3355b8: 0x4600a003  div.s       $f0, $f20, $f0
    ctx->pc = 0x3355b8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
    // 0x3355bc: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x3355bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3355c0: 0xc104d24  jal         func_413490
    ctx->pc = 0x3355C0u;
    SET_GPR_U32(ctx, 31, 0x3355C8u);
    ctx->pc = 0x3355C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3355C0u;
    // 0x3355c4: 0xe7a00040  swc1        $f0, 0x40($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 64), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x413490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413490u, 0x3355C0u, 0x3355C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3355C8u;
label_3355c8:
    // 0x3355c8: 0x4600a003  div.s       $f0, $f20, $f0
    ctx->pc = 0x3355c8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
    // 0x3355cc: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x3355ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x3355d0: 0xc104d24  jal         func_413490
    ctx->pc = 0x3355D0u;
    SET_GPR_U32(ctx, 31, 0x3355D8u);
    ctx->pc = 0x3355D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3355D0u;
    // 0x3355d4: 0xe7a00044  swc1        $f0, 0x44($sp) (Delay Slot)
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 68), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x413490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x413490u, 0x3355D0u, 0x3355D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3355D8u;
label_3355d8:
    // 0x3355d8: 0x4600a003  div.s       $f0, $f20, $f0
    ctx->pc = 0x3355d8u;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[20], ctx->f[0]); }
    // 0x3355dc: 0xe7a00048  swc1        $f0, 0x48($sp)
    ctx->pc = 0x3355dcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 72), bits); }
    // 0x3355e0: 0x3c050001  lui         $a1, 0x1
    ctx->pc = 0x3355e0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)1 << 16));
label_3355e4:
    // 0x3355e4: 0x42000039  di
    ctx->pc = 0x3355e4u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x3355e8: 0x40f  sync.p
    ctx->pc = 0x3355e8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3355ec: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x3355ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x3355f0: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x3355f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x3355f4: 0x0  nop
    ctx->pc = 0x3355f4u;
    // NOP
    // 0x3355f8: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3355F8u;
    {
        const bool branch_taken_0x3355f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3355f8) {
            ctx->pc = 0x3355E4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3355e4;
        }
    }
    ctx->pc = 0x335600u;
    // 0x335600: 0xda850000  lqc2        $vf5, 0x0($s4)
    ctx->pc = 0x335600u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x335604: 0xdba10000  lqc2        $vf1, 0x0($sp)
    ctx->pc = 0x335604u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x335608: 0xdba20010  lqc2        $vf2, 0x10($sp)
    ctx->pc = 0x335608u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33560c: 0xdba30020  lqc2        $vf3, 0x20($sp)
    ctx->pc = 0x33560cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x335610: 0x4be509bc  vmulax.xyzw $ACC, $vf1, $vf5x
    ctx->pc = 0x335610u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x335614: 0x4be510bd  vmadday.xyzw $ACC, $vf2, $vf5y
    ctx->pc = 0x335614u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[2], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(-1, -1, -1, -1))); }
    // 0x335618: 0x4be5194a  vmaddz.xyzw $vf5, $vf3, $vf5z
    ctx->pc = 0x335618u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[3], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x33561c: 0xfa650000  sqc2        $vf5, 0x0($s3)
    ctx->pc = 0x33561cu;
    WRITE128(ADD32(GPR_U32(ctx, 19), 0), _mm_castps_si128(ctx->vu0_vf[5]));
    // 0x335620: 0x42000038  ei
    ctx->pc = 0x335620u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x335624: 0xc6c00004  lwc1        $f0, 0x4($s6)
    ctx->pc = 0x335624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 22), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x335628: 0xc7a10040  lwc1        $f1, 0x40($sp)
    ctx->pc = 0x335628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 64)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33562c: 0x8fa20084  lw          $v0, 0x84($sp)
    ctx->pc = 0x33562cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x335630: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x335630u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x335634: 0xe4400004  swc1        $f0, 0x4($v0)
    ctx->pc = 0x335634u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 4), bits); }
    // 0x335638: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x335638u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x33563c: 0xc7a00044  lwc1        $f0, 0x44($sp)
    ctx->pc = 0x33563cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 68)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x335640: 0xc4610008  lwc1        $f1, 0x8($v1)
    ctx->pc = 0x335640u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x335644: 0x8fa4007c  lw          $a0, 0x7C($sp)
    ctx->pc = 0x335644u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x335648: 0x46000842  mul.s       $f1, $f1, $f0
    ctx->pc = 0x335648u;
    ctx->f[1] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x33564c: 0xe4810008  swc1        $f1, 0x8($a0)
    ctx->pc = 0x33564cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 8), bits); }
    // 0x335650: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x335650u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x335654: 0xc7a10048  lwc1        $f1, 0x48($sp)
    ctx->pc = 0x335654u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 72)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x335658: 0xc4a0000c  lwc1        $f0, 0xC($a1)
    ctx->pc = 0x335658u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 5), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33565c: 0x8fa20074  lw          $v0, 0x74($sp)
    ctx->pc = 0x33565cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x335660: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x335660u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x335664: 0xe440000c  swc1        $f0, 0xC($v0)
    ctx->pc = 0x335664u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 12), bits); }
    // 0x335668: 0xc6a10004  lwc1        $f1, 0x4($s5)
    ctx->pc = 0x335668u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 21), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33566c: 0xe6210010  swc1        $f1, 0x10($s1)
    ctx->pc = 0x33566cu;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 16), bits); }
label_335670:
    // 0x335670: 0x8fa40074  lw          $a0, 0x74($sp)
    ctx->pc = 0x335670u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 116)));
    // 0x335674: 0x26b50008  addiu       $s5, $s5, 0x8
    ctx->pc = 0x335674u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 21), 8));
    // 0x335678: 0x8fa30068  lw          $v1, 0x68($sp)
    ctx->pc = 0x335678u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x33567c: 0x26310020  addiu       $s1, $s1, 0x20
    ctx->pc = 0x33567cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x335680: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x335680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x335684: 0x8fa50078  lw          $a1, 0x78($sp)
    ctx->pc = 0x335684u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x335688: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x335688u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x33568c: 0xafa40074  sw          $a0, 0x74($sp)
    ctx->pc = 0x33568cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 4));
    // 0x335690: 0xafa30068  sw          $v1, 0x68($sp)
    ctx->pc = 0x335690u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 3));
    // 0x335694: 0x24a50020  addiu       $a1, $a1, 0x20
    ctx->pc = 0x335694u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x335698: 0x8fa2007c  lw          $v0, 0x7C($sp)
    ctx->pc = 0x335698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 124)));
    // 0x33569c: 0x26d60020  addiu       $s6, $s6, 0x20
    ctx->pc = 0x33569cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 32));
    // 0x3356a0: 0x8fa40084  lw          $a0, 0x84($sp)
    ctx->pc = 0x3356a0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x3356a4: 0x27de0020  addiu       $fp, $fp, 0x20
    ctx->pc = 0x3356a4u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 30), 32));
    // 0x3356a8: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x3356a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3356ac: 0x24420020  addiu       $v0, $v0, 0x20
    ctx->pc = 0x3356acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 32));
    // 0x3356b0: 0xafa50078  sw          $a1, 0x78($sp)
    ctx->pc = 0x3356b0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 5));
    // 0x3356b4: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x3356b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x3356b8: 0xafa2007c  sw          $v0, 0x7C($sp)
    ctx->pc = 0x3356b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 2));
    // 0x3356bc: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x3356bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x3356c0: 0xafa40084  sw          $a0, 0x84($sp)
    ctx->pc = 0x3356c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 4));
    // 0x3356c4: 0x26f70020  addiu       $s7, $s7, 0x20
    ctx->pc = 0x3356c4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 23), 32));
    // 0x3356c8: 0x8fa50068  lw          $a1, 0x68($sp)
    ctx->pc = 0x3356c8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x3356cc: 0xafa30080  sw          $v1, 0x80($sp)
    ctx->pc = 0x3356ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 3));
    // 0x3356d0: 0x2ca20004  sltiu       $v0, $a1, 0x4
    ctx->pc = 0x3356d0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x3356d4: 0x1440ff7a  bnez        $v0, . + 4 + (-0x86 << 2)
    ctx->pc = 0x3356D4u;
    {
        const bool branch_taken_0x3356d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3356D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3356D4u;
        // 0x3356d8: 0x8e0300d0  lw          $v1, 0xD0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 208)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3356d4) {
            ctx->pc = 0x3354C0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3354c0;
        }
    }
    ctx->pc = 0x3356DCu;
label_3356dc:
    // 0x3356dc: 0xae43000c  sw          $v1, 0xC($s2)
    ctx->pc = 0x3356dcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 3));
    // 0x3356e0: 0x8e0200d4  lw          $v0, 0xD4($s0)
    ctx->pc = 0x3356e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 212)));
    // 0x3356e4: 0x8e0300d8  lw          $v1, 0xD8($s0)
    ctx->pc = 0x3356e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x3356e8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3356e8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3356ec: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3356ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3356f0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x3356F0u;
    {
        const bool branch_taken_0x3356f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3356F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3356F0u;
        // 0x3356f4: 0xae43001c  sw          $v1, 0x1C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3356f0) {
            ctx->pc = 0x335710u;
            goto label_335710;
        }
    }
    ctx->pc = 0x3356F8u;
label_3356f8:
    // 0x3356f8: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x3356f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
label_3356fc:
    // 0x3356fc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3356fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x335700: 0x8fa3006c  lw          $v1, 0x6C($sp)
    ctx->pc = 0x335700u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x335704: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x335704u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x335708: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x335708u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x33570c: 0xae0200f0  sw          $v0, 0xF0($s0)
    ctx->pc = 0x33570cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 240), GPR_U32(ctx, 2));
label_335710:
    // 0x335710: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x335710u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x335714: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x335714u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x335718: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x335718u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x33571c: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x33571cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x335720: 0x1440fec3  bnez        $v0, . + 4 + (-0x13D << 2)
    ctx->pc = 0x335720u;
    {
        const bool branch_taken_0x335720 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x335724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335720u;
        // 0x335724: 0x24020070  addiu       $v0, $zero, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335720) {
            ctx->pc = 0x335230u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_335230;
        }
    }
    ctx->pc = 0x335728u;
label_335728:
    // 0x335728: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x335728u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x33572c: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x33572Cu;
    {
        const bool branch_taken_0x33572c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x335730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33572Cu;
        // 0x335730: 0x8fa40054  lw          $a0, 0x54($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 84)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33572c) {
            ctx->pc = 0x33573Cu;
            goto label_33573c;
        }
    }
    ctx->pc = 0x335734u;
    // 0x335734: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x335734u;
    {
        const bool branch_taken_0x335734 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x335738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335734u;
        // 0x335738: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335734) {
            ctx->pc = 0x335898u;
            goto label_335898;
        }
    }
    ctx->pc = 0x33573Cu;
label_33573c:
    // 0x33573c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x33573cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x335740: 0x2443c4c0  addiu       $v1, $v0, -0x3B40
    ctx->pc = 0x335740u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952128));
    // 0x335744: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x335744u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
    // 0x335748: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x335748u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x33574c: 0xac60000c  sw          $zero, 0xC($v1)
    ctx->pc = 0x33574cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x61C4CCu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61C4CCu, _value); } while (0);
    // 0x335750: 0xac650008  sw          $a1, 0x8($v1)
    ctx->pc = 0x335750u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 5)); ps2TraceGuestWrite(rdram, 0x61C4C8u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x61C4C8u, _value); } while (0);
    // 0x335754: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x335754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x335758: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x335758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x33575c: 0xaf82bd74  sw          $v0, -0x428C($gp)
    ctx->pc = 0x33575cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950260), GPR_U32(ctx, 2));
    // 0x335760: 0x8fa20058  lw          $v0, 0x58($sp)
    ctx->pc = 0x335760u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x335764: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x335764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x335768: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x335768u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33576c: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x33576cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x335770: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x335770u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x335774: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x335774u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x335778: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x335778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x33577c: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x33577cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x335780: 0x90700028  lbu         $s0, 0x28($v1)
    ctx->pc = 0x335780u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 40)));
    // 0x335784: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x335784u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x335788: 0x90710029  lbu         $s1, 0x29($v1)
    ctx->pc = 0x335788u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 41)));
    // 0x33578c: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x33578cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x335790: 0xc10a322  jal         func_428C88
    ctx->pc = 0x335790u;
    SET_GPR_U32(ctx, 31, 0x335798u);
    ctx->pc = 0x335794u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335790u;
    // 0x335794: 0xa062002a  sb          $v0, 0x2A($v1) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 3), 42), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x428C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x428C88u, 0x335790u, 0x335798u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335798u;
label_335798:
    // 0x335798: 0x8f83be20  lw          $v1, -0x41E0($gp)
    ctx->pc = 0x335798u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x33579c: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x33579cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x3357a0: 0x34a50006  ori         $a1, $a1, 0x6
    ctx->pc = 0x3357a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)6);
    // 0x3357a4: 0x3c026c06  lui         $v0, 0x6C06
    ctx->pc = 0x3357a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27654 << 16));
    // 0x3357a8: 0x344203d3  ori         $v0, $v0, 0x3D3
    ctx->pc = 0x3357a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)979);
    // 0x3357ac: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3357acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3357b0: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x3357b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x3357b4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3357b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3357b8: 0x34420404  ori         $v0, $v0, 0x404
    ctx->pc = 0x3357b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x3357bc: 0x70452b89  pcpyld      $a1, $v0, $a1
    ctx->pc = 0x3357bcu;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
    // 0x3357c0: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x3357c0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x3357c4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x3357c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3357c8: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x3357c8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x3357cc: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x3357ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x3357d0: 0x34a58003  ori         $a1, $a1, 0x8003
    ctx->pc = 0x3357d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32771);
    // 0x3357d4: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x3357d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x3357d8: 0x70452b89  pcpyld      $a1, $v0, $a1
    ctx->pc = 0x3357d8u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
    // 0x3357dc: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x3357dcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x3357e0: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x3357e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3357e4: 0xdf85ae38  ld          $a1, -0x51C8($gp)
    ctx->pc = 0x3357e4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 28), 4294946360)));
    // 0x3357e8: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x3357e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x3357ec: 0x21478  dsll        $v0, $v0, 17
    ctx->pc = 0x3357ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 17);
    // 0x3357f0: 0x2404004f  addiu       $a0, $zero, 0x4F
    ctx->pc = 0x3357f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x3357f4: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x3357f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x3357f8: 0x70852b89  pcpyld      $a1, $a0, $a1
    ctx->pc = 0x3357f8u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x3357fc: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x3357fcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x335800: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x335800u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x335804: 0x24040043  addiu       $a0, $zero, 0x43
    ctx->pc = 0x335804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x335808: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x335808u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x33580c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x33580cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x335810: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x335810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x335814: 0x70822b89  pcpyld      $a1, $a0, $v0
    ctx->pc = 0x335814u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x335818: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x335818u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x33581c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x33581cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x335820: 0x24040048  addiu       $a0, $zero, 0x48
    ctx->pc = 0x335820u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x335824: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x335824u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x335828: 0x3442d003  ori         $v0, $v0, 0xD003
    ctx->pc = 0x335828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53251);
    // 0x33582c: 0x70822b89  pcpyld      $a1, $a0, $v0
    ctx->pc = 0x33582cu;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x335830: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x335830u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x335834: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x335834u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x335838: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x335838u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x33583c: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x33583cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x335840: 0x34a50001  ori         $a1, $a1, 0x1
    ctx->pc = 0x335840u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
    // 0x335844: 0x72452b89  pcpyld      $a1, $s2, $a1
    ctx->pc = 0x335844u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 18), GPR_VEC(ctx, 5)));
    // 0x335848: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x335848u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x33584c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x33584cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x335850: 0x108178  dsll        $s0, $s0, 5
    ctx->pc = 0x335850u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << 5);
    // 0x335854: 0x24020240  addiu       $v0, $zero, 0x240
    ctx->pc = 0x335854u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
    // 0x335858: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x335858u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x33585c: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x33585cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x335860: 0x34844000  ori         $a0, $a0, 0x4000
    ctx->pc = 0x335860u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x335864: 0x2118025  or          $s0, $s0, $s1
    ctx->pc = 0x335864u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 17));
    // 0x335868: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x335868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x33586c: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x33586cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x335870: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x335870u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x335874: 0x1083c0  sll         $s0, $s0, 15
    ctx->pc = 0x335874u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 15));
    // 0x335878: 0x2048025  or          $s0, $s0, $a0
    ctx->pc = 0x335878u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 4));
    // 0x33587c: 0x10283c  dsll32      $a1, $s0, 0
    ctx->pc = 0x33587cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) << (32 + 0));
    // 0x335880: 0x70452b89  pcpyld      $a1, $v0, $a1
    ctx->pc = 0x335880u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
    // 0x335884: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x335884u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x335888: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x335888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x33588c: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x33588cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x335890: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x335890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x335894: 0x0  nop
    ctx->pc = 0x335894u;
    // NOP
label_335898:
    // 0x335898: 0x7bb00120  lq          $s0, 0x120($sp)
    ctx->pc = 0x335898u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x33589c: 0x7bb10110  lq          $s1, 0x110($sp)
    ctx->pc = 0x33589cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x3358a0: 0x7bb20100  lq          $s2, 0x100($sp)
    ctx->pc = 0x3358a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x3358a4: 0x7bb300f0  lq          $s3, 0xF0($sp)
    ctx->pc = 0x3358a4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x3358a8: 0x7bb400e0  lq          $s4, 0xE0($sp)
    ctx->pc = 0x3358a8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x3358ac: 0x7bb500d0  lq          $s5, 0xD0($sp)
    ctx->pc = 0x3358acu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x3358b0: 0x7bb600c0  lq          $s6, 0xC0($sp)
    ctx->pc = 0x3358b0u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x3358b4: 0x7bb700b0  lq          $s7, 0xB0($sp)
    ctx->pc = 0x3358b4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3358b8: 0x7bbe00a0  lq          $fp, 0xA0($sp)
    ctx->pc = 0x3358b8u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3358bc: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x3358bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3358c0: 0xc7b40130  lwc1        $f20, 0x130($sp)
    ctx->pc = 0x3358c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 304)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3358c4: 0x3e00008  jr          $ra
    ctx->pc = 0x3358C4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3358C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3358C4u;
        // 0x3358c8: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3358C4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3358CCu;
    // 0x3358cc: 0x0  nop
    ctx->pc = 0x3358ccu;
    // NOP
    // 0x3358d0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x3358d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x3358d4: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3358d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
    // 0x3358d8: 0x7fb20050  sq          $s2, 0x50($sp)
    ctx->pc = 0x3358d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 18));
    // 0x3358dc: 0x7fb30040  sq          $s3, 0x40($sp)
    ctx->pc = 0x3358dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 19));
    // 0x3358e0: 0x7fb50020  sq          $s5, 0x20($sp)
    ctx->pc = 0x3358e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 21));
    // 0x3358e4: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3358e4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3358e8: 0x7fb60010  sq          $s6, 0x10($sp)
    ctx->pc = 0x3358e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 22));
    // 0x3358ec: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x3358ecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3358f0: 0x7fb00070  sq          $s0, 0x70($sp)
    ctx->pc = 0x3358f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 16));
    // 0x3358f4: 0x60b02d  daddu       $s6, $v1, $zero
    ctx->pc = 0x3358f4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3358f8: 0x7fb10060  sq          $s1, 0x60($sp)
    ctx->pc = 0x3358f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 17));
    // 0x3358fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3358fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x335900: 0x7fb40030  sq          $s4, 0x30($sp)
    ctx->pc = 0x335900u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 20));
    // 0x335904: 0x8e740008  lw          $s4, 0x8($s3)
    ctx->pc = 0x335904u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x335908: 0x8c72c4c0  lw          $s2, -0x3B40($v1)
    ctx->pc = 0x335908u;
    SET_GPR_S32(ctx, 18, (int32_t)FAST_READ32(0x61C4C0u));
    // 0x33590c: 0x8e900018  lw          $s0, 0x18($s4)
    ctx->pc = 0x33590cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x335910: 0x2463c4c0  addiu       $v1, $v1, -0x3B40
    ctx->pc = 0x335910u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952128));
    // 0x335914: 0x8f82bd78  lw          $v0, -0x4288($gp)
    ctx->pc = 0x335914u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950264)));
    // 0x335918: 0x8c710004  lw          $s1, 0x4($v1)
    ctx->pc = 0x335918u;
    SET_GPR_S32(ctx, 17, (int32_t)FAST_READ32(0x61C4C4u));
    // 0x33591c: 0x2022821  addu        $a1, $s0, $v0
    ctx->pc = 0x33591cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x335920: 0x8e030054  lw          $v1, 0x54($s0)
    ctx->pc = 0x335920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x335924: 0x8ca40000  lw          $a0, 0x0($a1)
    ctx->pc = 0x335924u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x335928: 0x10800008  beqz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x335928u;
    {
        const bool branch_taken_0x335928 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x33592Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335928u;
        // 0x33592c: 0xae63000c  sw          $v1, 0xC($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335928) {
            ctx->pc = 0x33594Cu;
            goto label_33594c;
        }
    }
    ctx->pc = 0x335930u;
    // 0x335930: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x335930u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x335934: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x335934u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x335938: 0x94430004  lhu         $v1, 0x4($v0)
    ctx->pc = 0x335938u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x33593c: 0x14830005  bne         $a0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x33593Cu;
    {
        const bool branch_taken_0x33593c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        ctx->pc = 0x335940u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33593Cu;
        // 0x335940: 0x8f84bd78  lw          $a0, -0x4288($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950264)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33593c) {
            ctx->pc = 0x335954u;
            goto label_335954;
        }
    }
    ctx->pc = 0x335944u;
    // 0x335944: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x335944u;
    {
        const bool branch_taken_0x335944 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x335948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335944u;
        // 0x335948: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335944) {
            ctx->pc = 0x335960u;
            goto label_335960;
        }
    }
    ctx->pc = 0x33594Cu;
label_33594c:
    // 0x33594c: 0x8e020054  lw          $v0, 0x54($s0)
    ctx->pc = 0x33594cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x335950: 0x8f84bd78  lw          $a0, -0x4288($gp)
    ctx->pc = 0x335950u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950264)));
label_335954:
    // 0x335954: 0x94450004  lhu         $a1, 0x4($v0)
    ctx->pc = 0x335954u;
    SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x335958: 0xc0e7eec  jal         func_39FBB0
    ctx->pc = 0x335958u;
    SET_GPR_U32(ctx, 31, 0x335960u);
    ctx->pc = 0x33595Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335958u;
    // 0x33595c: 0x2042021  addu        $a0, $s0, $a0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x39FBB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x39FBB0u, 0x335958u, 0x335960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335960u;
label_335960:
    // 0x335960: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x335960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x335964: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x335964u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x335968: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x335968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x33596c: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x33596cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x335970: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x335970u;
    {
        const bool branch_taken_0x335970 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x335974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335970u;
        // 0x335974: 0xae620010  sw          $v0, 0x10($s3) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 19), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335970) {
            ctx->pc = 0x33598Cu;
            goto label_33598c;
        }
    }
    ctx->pc = 0x335978u;
    // 0x335978: 0x8e630014  lw          $v1, 0x14($s3)
    ctx->pc = 0x335978u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 20)));
    // 0x33597c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x33597cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x335980: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x335980u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
    // 0x335984: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x335984u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x335988: 0xae630014  sw          $v1, 0x14($s3)
    ctx->pc = 0x335988u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 20), GPR_U32(ctx, 3));
label_33598c:
    // 0x33598c: 0x8e62000c  lw          $v0, 0xC($s3)
    ctx->pc = 0x33598cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
    // 0x335990: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x335990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x335994: 0x30430001  andi        $v1, $v0, 0x1
    ctx->pc = 0x335994u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x335998: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x335998u;
    {
        const bool branch_taken_0x335998 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x33599Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335998u;
        // 0x33599c: 0x304200ff  andi        $v0, $v0, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
        if (branch_taken_0x335998) {
            ctx->pc = 0x3359B4u;
            goto label_3359b4;
        }
    }
    ctx->pc = 0x3359A0u;
    // 0x3359a0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3359a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3359a4: 0xa2620029  sb          $v0, 0x29($s3)
    ctx->pc = 0x3359a4u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 41), (uint8_t)GPR_U32(ctx, 2));
    // 0x3359a8: 0x9383aed0  lbu         $v1, -0x5130($gp)
    ctx->pc = 0x3359a8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294946512)));
    // 0x3359ac: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x3359ACu;
    {
        const bool branch_taken_0x3359ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3359B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3359ACu;
        // 0x3359b0: 0xa2630028  sb          $v1, 0x28($s3) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 19), 40), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3359ac) {
            ctx->pc = 0x3359D0u;
            goto label_3359d0;
        }
    }
    ctx->pc = 0x3359B4u;
label_3359b4:
    // 0x3359b4: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3359B4u;
    {
        const bool branch_taken_0x3359b4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3359b4) {
            ctx->pc = 0x3359B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3359B4u;
            // 0x3359b8: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3359D4u;
            goto label_3359d4;
        }
    }
    ctx->pc = 0x3359BCu;
    // 0x3359bc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3359bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3359c0: 0xa2630029  sb          $v1, 0x29($s3)
    ctx->pc = 0x3359c0u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 41), (uint8_t)GPR_U32(ctx, 3));
    // 0x3359c4: 0x9382aed0  lbu         $v0, -0x5130($gp)
    ctx->pc = 0x3359c4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294946512)));
    // 0x3359c8: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x3359c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x3359cc: 0xa2620028  sb          $v0, 0x28($s3)
    ctx->pc = 0x3359ccu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 40), (uint8_t)GPR_U32(ctx, 2));
label_3359d0:
    // 0x3359d0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x3359d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_3359d4:
    // 0x3359d4: 0x3c030200  lui         $v1, 0x200
    ctx->pc = 0x3359d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)512 << 16));
    // 0x3359d8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3359d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3359dc: 0x14400092  bnez        $v0, . + 4 + (0x92 << 2)
    ctx->pc = 0x3359DCu;
    {
        const bool branch_taken_0x3359dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3359E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3359DCu;
        // 0x3359e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3359dc) {
            ctx->pc = 0x335C28u;
            goto label_335c28;
        }
    }
    ctx->pc = 0x3359E4u;
    // 0x3359e4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3359e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3359e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3359e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3359ec: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x3359ECu;
    {
        const bool branch_taken_0x3359ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3359F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3359ECu;
        // 0x3359f0: 0x482d  daddu       $t1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3359ec) {
            ctx->pc = 0x335AD0u;
            goto label_335ad0;
        }
    }
    ctx->pc = 0x3359F4u;
    // 0x3359f4: 0x3c0affff  lui         $t2, 0xFFFF
    ctx->pc = 0x3359f4u;
    SET_GPR_S32(ctx, 10, (int32_t)((uint32_t)65535 << 16));
    // 0x3359f8: 0x240b0003  addiu       $t3, $zero, 0x3
    ctx->pc = 0x3359f8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3359fc: 0x354afff7  ori         $t2, $t2, 0xFFF7
    ctx->pc = 0x3359fcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | (uint64_t)(uint16_t)65527);
    // 0x335a00: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x335a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x335a04: 0x0  nop
    ctx->pc = 0x335a04u;
    // NOP
label_335a08:
    // 0x335a08: 0x518c0  sll         $v1, $a1, 3
    ctx->pc = 0x335a08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x335a0c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x335a0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x335a10: 0x8c870000  lw          $a3, 0x0($a0)
    ctx->pc = 0x335a10u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x335a14: 0x8ce300f0  lw          $v1, 0xF0($a3)
    ctx->pc = 0x335a14u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 240)));
    // 0x335a18: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x335a18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x335a1c: 0x50400024  beql        $v0, $zero, . + 4 + (0x24 << 2)
    ctx->pc = 0x335A1Cu;
    {
        const bool branch_taken_0x335a1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x335a1c) {
            ctx->pc = 0x335A20u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x335A1Cu;
            // 0x335a20: 0x8ce200f0  lw          $v0, 0xF0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x335AB0u;
            goto label_335ab0;
        }
    }
    ctx->pc = 0x335A24u;
    // 0x335a24: 0x8ce200f8  lw          $v0, 0xF8($a3)
    ctx->pc = 0x335a24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 248)));
    // 0x335a28: 0x54520021  bnel        $v0, $s2, . + 4 + (0x21 << 2)
    ctx->pc = 0x335A28u;
    {
        const bool branch_taken_0x335a28 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 18));
        if (branch_taken_0x335a28) {
            ctx->pc = 0x335A2Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x335A28u;
            // 0x335a2c: 0x8ce200f0  lw          $v0, 0xF0($a3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 240)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x335AB0u;
            goto label_335ab0;
        }
    }
    ctx->pc = 0x335A30u;
    // 0x335a30: 0x34620008  ori         $v0, $v1, 0x8
    ctx->pc = 0x335a30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)8);
    // 0x335a34: 0xace200f0  sw          $v0, 0xF0($a3)
    ctx->pc = 0x335a34u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 240), GPR_U32(ctx, 2));
    // 0x335a38: 0x92630028  lbu         $v1, 0x28($s3)
    ctx->pc = 0x335a38u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x335a3c: 0xac830004  sw          $v1, 0x4($a0)
    ctx->pc = 0x335a3cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 3));
    // 0x335a40: 0x8ce200d8  lw          $v0, 0xD8($a3)
    ctx->pc = 0x335a40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 216)));
    // 0x335a44: 0x104b0004  beq         $v0, $t3, . + 4 + (0x4 << 2)
    ctx->pc = 0x335A44u;
    {
        const bool branch_taken_0x335a44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 11));
        ctx->pc = 0x335A48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335A44u;
        // 0x335a48: 0x25290001  addiu       $t1, $t1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335a44) {
            ctx->pc = 0x335A58u;
            goto label_335a58;
        }
    }
    ctx->pc = 0x335A4Cu;
    // 0x335a4c: 0x8ce200d4  lw          $v0, 0xD4($a3)
    ctx->pc = 0x335a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 212)));
    // 0x335a50: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x335A50u;
    {
        const bool branch_taken_0x335a50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x335A54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335A50u;
        // 0x335a54: 0x24a80001  addiu       $t0, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335a50) {
            ctx->pc = 0x335A68u;
            goto label_335a68;
        }
    }
    ctx->pc = 0x335A58u;
label_335a58:
    // 0x335a58: 0x34620002  ori         $v0, $v1, 0x2
    ctx->pc = 0x335a58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x335a5c: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x335a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
    // 0x335a60: 0x8ce200d4  lw          $v0, 0xD4($a3)
    ctx->pc = 0x335a60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 212)));
    // 0x335a64: 0x24a80001  addiu       $t0, $a1, 0x1
    ctx->pc = 0x335a64u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
label_335a68:
    // 0x335a68: 0x8ce300d8  lw          $v1, 0xD8($a3)
    ctx->pc = 0x335a68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 216)));
    // 0x335a6c: 0x24e600c0  addiu       $a2, $a3, 0xC0
    ctx->pc = 0x335a6cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 192));
    // 0x335a70: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x335a70u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x335a74: 0x8ce500d0  lw          $a1, 0xD0($a3)
    ctx->pc = 0x335a74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 208)));
    // 0x335a78: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x335a78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x335a7c: 0x24e4002c  addiu       $a0, $a3, 0x2C
    ctx->pc = 0x335a7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 7), 44));
    // 0x335a80: 0xace5000c  sw          $a1, 0xC($a3)
    ctx->pc = 0x335a80u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 12), GPR_U32(ctx, 5));
    // 0x335a84: 0xace3001c  sw          $v1, 0x1C($a3)
    ctx->pc = 0x335a84u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 28), GPR_U32(ctx, 3));
    // 0x335a88: 0xc4e000c0  lwc1        $f0, 0xC0($a3)
    ctx->pc = 0x335a88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 7), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x335a8c: 0xe4e0002c  swc1        $f0, 0x2C($a3)
    ctx->pc = 0x335a8cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 7), 44), bits); }
    // 0x335a90: 0xc4c10004  lwc1        $f1, 0x4($a2)
    ctx->pc = 0x335a90u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x335a94: 0xe4810010  swc1        $f1, 0x10($a0)
    ctx->pc = 0x335a94u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 16), bits); }
    // 0x335a98: 0xc4c00008  lwc1        $f0, 0x8($a2)
    ctx->pc = 0x335a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x335a9c: 0xe4800020  swc1        $f0, 0x20($a0)
    ctx->pc = 0x335a9cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 32), bits); }
    // 0x335aa0: 0xc4c1000c  lwc1        $f1, 0xC($a2)
    ctx->pc = 0x335aa0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 6), 12)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x335aa4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x335AA4u;
    {
        const bool branch_taken_0x335aa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x335AA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335AA4u;
        // 0x335aa8: 0xe4810030  swc1        $f1, 0x30($a0) (Delay Slot)
        { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 4), 48), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x335aa4) {
            ctx->pc = 0x335ABCu;
            goto label_335abc;
        }
    }
    ctx->pc = 0x335AACu;
    // 0x335aac: 0x0  nop
    ctx->pc = 0x335aacu;
    // NOP
label_335ab0:
    // 0x335ab0: 0x24a80001  addiu       $t0, $a1, 0x1
    ctx->pc = 0x335ab0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x335ab4: 0x4a1024  and         $v0, $v0, $t2
    ctx->pc = 0x335ab4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 10));
    // 0x335ab8: 0xace200f0  sw          $v0, 0xF0($a3)
    ctx->pc = 0x335ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 240), GPR_U32(ctx, 2));
label_335abc:
    // 0x335abc: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x335abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x335ac0: 0x100282d  daddu       $a1, $t0, $zero
    ctx->pc = 0x335ac0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335ac4: 0xa2102b  sltu        $v0, $a1, $v0
    ctx->pc = 0x335ac4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 5) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x335ac8: 0x5440ffcf  bnel        $v0, $zero, . + 4 + (-0x31 << 2)
    ctx->pc = 0x335AC8u;
    {
        const bool branch_taken_0x335ac8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x335ac8) {
            ctx->pc = 0x335ACCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x335AC8u;
            // 0x335acc: 0x8e22000c  lw          $v0, 0xC($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x335A08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_335a08;
        }
    }
    ctx->pc = 0x335AD0u;
label_335ad0:
    // 0x335ad0: 0x15200003  bnez        $t1, . + 4 + (0x3 << 2)
    ctx->pc = 0x335AD0u;
    {
        const bool branch_taken_0x335ad0 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x335AD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335AD0u;
        // 0x335ad4: 0x26c3c4c0  addiu       $v1, $s6, -0x3B40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 22), 4294952128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335ad0) {
            ctx->pc = 0x335AE0u;
            goto label_335ae0;
        }
    }
    ctx->pc = 0x335AD8u;
    // 0x335ad8: 0x10000053  b           . + 4 + (0x53 << 2)
    ctx->pc = 0x335AD8u;
    {
        const bool branch_taken_0x335ad8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x335ADCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335AD8u;
        // 0x335adc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335ad8) {
            ctx->pc = 0x335C28u;
            goto label_335c28;
        }
    }
    ctx->pc = 0x335AE0u;
label_335ae0:
    // 0x335ae0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x335ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x335ae4: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x335ae4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x335ae8: 0xac690008  sw          $t1, 0x8($v1)
    ctx->pc = 0x335ae8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 9));
    // 0x335aec: 0xaea00000  sw          $zero, 0x0($s5)
    ctx->pc = 0x335aecu;
    WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 0));
    // 0x335af0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x335af0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x335af4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x335af4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x335af8: 0xaf82bd74  sw          $v0, -0x428C($gp)
    ctx->pc = 0x335af8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950260), GPR_U32(ctx, 2));
    // 0x335afc: 0x8e830018  lw          $v1, 0x18($s4)
    ctx->pc = 0x335afcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 24)));
    // 0x335b00: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x335b00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335b04: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x335b04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x335b08: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x335b08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x335b0c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x335b0cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x335b10: 0x92700028  lbu         $s0, 0x28($s3)
    ctx->pc = 0x335b10u;
    SET_GPR_ZE32(ctx, 16, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x335b14: 0x21183  sra         $v0, $v0, 6
    ctx->pc = 0x335b14u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 6));
    // 0x335b18: 0x92710029  lbu         $s1, 0x29($s3)
    ctx->pc = 0x335b18u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 41)));
    // 0x335b1c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x335b1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x335b20: 0x32100001  andi        $s0, $s0, 0x1
    ctx->pc = 0x335b20u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)1);
    // 0x335b24: 0xc10a322  jal         func_428C88
    ctx->pc = 0x335B24u;
    SET_GPR_U32(ctx, 31, 0x335B2Cu);
    ctx->pc = 0x335B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335B24u;
    // 0x335b28: 0xa262002a  sb          $v0, 0x2A($s3) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 19), 42), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x428C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x428C88u, 0x335B24u, 0x335B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335B2Cu;
label_335b2c:
    // 0x335b2c: 0x8f83be20  lw          $v1, -0x41E0($gp)
    ctx->pc = 0x335b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x335b30: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x335b30u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x335b34: 0x34a50006  ori         $a1, $a1, 0x6
    ctx->pc = 0x335b34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)6);
    // 0x335b38: 0x3c026c06  lui         $v0, 0x6C06
    ctx->pc = 0x335b38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27654 << 16));
    // 0x335b3c: 0x344203d3  ori         $v0, $v0, 0x3D3
    ctx->pc = 0x335b3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)979);
    // 0x335b40: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x335b40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x335b44: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x335b44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x335b48: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x335b48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x335b4c: 0x34420404  ori         $v0, $v0, 0x404
    ctx->pc = 0x335b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x335b50: 0x70452b89  pcpyld      $a1, $v0, $a1
    ctx->pc = 0x335b50u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
    // 0x335b54: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x335b54u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x335b58: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x335b58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x335b5c: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x335b5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x335b60: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x335b60u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x335b64: 0x34a58003  ori         $a1, $a1, 0x8003
    ctx->pc = 0x335b64u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32771);
    // 0x335b68: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x335b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x335b6c: 0x70452b89  pcpyld      $a1, $v0, $a1
    ctx->pc = 0x335b6cu;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
    // 0x335b70: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x335b70u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x335b74: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x335b74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x335b78: 0xdf85ae38  ld          $a1, -0x51C8($gp)
    ctx->pc = 0x335b78u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 28), 4294946360)));
    // 0x335b7c: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x335b7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x335b80: 0x21478  dsll        $v0, $v0, 17
    ctx->pc = 0x335b80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 17);
    // 0x335b84: 0x2404004f  addiu       $a0, $zero, 0x4F
    ctx->pc = 0x335b84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x335b88: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x335b88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
    // 0x335b8c: 0x70852b89  pcpyld      $a1, $a0, $a1
    ctx->pc = 0x335b8cu;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x335b90: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x335b90u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x335b94: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x335b94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x335b98: 0x24040043  addiu       $a0, $zero, 0x43
    ctx->pc = 0x335b98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x335b9c: 0x24020080  addiu       $v0, $zero, 0x80
    ctx->pc = 0x335b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x335ba0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x335ba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x335ba4: 0x34420001  ori         $v0, $v0, 0x1
    ctx->pc = 0x335ba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1);
    // 0x335ba8: 0x70822b89  pcpyld      $a1, $a0, $v0
    ctx->pc = 0x335ba8u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x335bac: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x335bacu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x335bb0: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x335bb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x335bb4: 0x24040048  addiu       $a0, $zero, 0x48
    ctx->pc = 0x335bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x335bb8: 0x3c020005  lui         $v0, 0x5
    ctx->pc = 0x335bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)5 << 16));
    // 0x335bbc: 0x3442d003  ori         $v0, $v0, 0xD003
    ctx->pc = 0x335bbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)53251);
    // 0x335bc0: 0x70822b89  pcpyld      $a1, $a0, $v0
    ctx->pc = 0x335bc0u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x335bc4: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x335bc4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x335bc8: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x335bc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x335bcc: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x335bccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x335bd0: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x335bd0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x335bd4: 0x34a50001  ori         $a1, $a1, 0x1
    ctx->pc = 0x335bd4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
    // 0x335bd8: 0x72452b89  pcpyld      $a1, $s2, $a1
    ctx->pc = 0x335bd8u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 18), GPR_VEC(ctx, 5)));
    // 0x335bdc: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x335bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x335be0: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x335be0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x335be4: 0x108178  dsll        $s0, $s0, 5
    ctx->pc = 0x335be4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << 5);
    // 0x335be8: 0x24020240  addiu       $v0, $zero, 0x240
    ctx->pc = 0x335be8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 576));
    // 0x335bec: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x335becu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x335bf0: 0x2228825  or          $s1, $s1, $v0
    ctx->pc = 0x335bf0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x335bf4: 0x34844000  ori         $a0, $a0, 0x4000
    ctx->pc = 0x335bf4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)16384);
    // 0x335bf8: 0x2118025  or          $s0, $s0, $s1
    ctx->pc = 0x335bf8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 17));
    // 0x335bfc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x335bfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x335c00: 0x10803c  dsll32      $s0, $s0, 0
    ctx->pc = 0x335c00u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << (32 + 0));
    // 0x335c04: 0x10803f  dsra32      $s0, $s0, 0
    ctx->pc = 0x335c04u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 0));
    // 0x335c08: 0x1083c0  sll         $s0, $s0, 15
    ctx->pc = 0x335c08u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 16), 15));
    // 0x335c0c: 0x2048025  or          $s0, $s0, $a0
    ctx->pc = 0x335c0cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) | GPR_U64(ctx, 4));
    // 0x335c10: 0x10283c  dsll32      $a1, $s0, 0
    ctx->pc = 0x335c10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 16) << (32 + 0));
    // 0x335c14: 0x70452b89  pcpyld      $a1, $v0, $a1
    ctx->pc = 0x335c14u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
    // 0x335c18: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x335c18u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x335c1c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x335c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x335c20: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x335c20u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x335c24: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x335c24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_335c28:
    // 0x335c28: 0x7bb00070  lq          $s0, 0x70($sp)
    ctx->pc = 0x335c28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x335c2c: 0x7bb10060  lq          $s1, 0x60($sp)
    ctx->pc = 0x335c2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x335c30: 0x7bb20050  lq          $s2, 0x50($sp)
    ctx->pc = 0x335c30u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x335c34: 0x7bb30040  lq          $s3, 0x40($sp)
    ctx->pc = 0x335c34u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x335c38: 0x7bb40030  lq          $s4, 0x30($sp)
    ctx->pc = 0x335c38u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x335c3c: 0x7bb50020  lq          $s5, 0x20($sp)
    ctx->pc = 0x335c3cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x335c40: 0x7bb60010  lq          $s6, 0x10($sp)
    ctx->pc = 0x335c40u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x335c44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x335c44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x335c48: 0x3e00008  jr          $ra
    ctx->pc = 0x335C48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x335C4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335C48u;
        // 0x335c4c: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x335C48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x335C50u;
    // 0x335c50: 0x27bdfe60  addiu       $sp, $sp, -0x1A0
    ctx->pc = 0x335c50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966880));
    // 0x335c54: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x335c54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x335c58: 0x7fb20160  sq          $s2, 0x160($sp)
    ctx->pc = 0x335c58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 18));
    // 0x335c5c: 0x2446c4c0  addiu       $a2, $v0, -0x3B40
    ctx->pc = 0x335c5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952128));
    // 0x335c60: 0x7fb40140  sq          $s4, 0x140($sp)
    ctx->pc = 0x335c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 20));
    // 0x335c64: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x335c64u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335c68: 0x7fb00180  sq          $s0, 0x180($sp)
    ctx->pc = 0x335c68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 16));
    // 0x335c6c: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x335c6cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335c70: 0x7fb10170  sq          $s1, 0x170($sp)
    ctx->pc = 0x335c70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 17));
    // 0x335c74: 0x3c050200  lui         $a1, 0x200
    ctx->pc = 0x335c74u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)512 << 16));
    // 0x335c78: 0x7fb30150  sq          $s3, 0x150($sp)
    ctx->pc = 0x335c78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 19));
    // 0x335c7c: 0x7fb50130  sq          $s5, 0x130($sp)
    ctx->pc = 0x335c7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 21));
    // 0x335c80: 0x7fb60120  sq          $s6, 0x120($sp)
    ctx->pc = 0x335c80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 22));
    // 0x335c84: 0x7fb70110  sq          $s7, 0x110($sp)
    ctx->pc = 0x335c84u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 23));
    // 0x335c88: 0x7fbe0100  sq          $fp, 0x100($sp)
    ctx->pc = 0x335c88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 30));
    // 0x335c8c: 0xffbf00f0  sd          $ra, 0xF0($sp)
    ctx->pc = 0x335c8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 240), GPR_U64(ctx, 31));
    // 0x335c90: 0xe7b50198  swc1        $f21, 0x198($sp)
    ctx->pc = 0x335c90u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 408), bits); }
    // 0x335c94: 0xe7b40190  swc1        $f20, 0x190($sp)
    ctx->pc = 0x335c94u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 400), bits); }
    // 0x335c98: 0x8e830008  lw          $v1, 0x8($s4)
    ctx->pc = 0x335c98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 8)));
    // 0x335c9c: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x335c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
    // 0x335ca0: 0x8c630018  lw          $v1, 0x18($v1)
    ctx->pc = 0x335ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x335ca4: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x335ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x61C4C4u));
    // 0x335ca8: 0xafa40008  sw          $a0, 0x8($sp)
    ctx->pc = 0x335ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 4));
    // 0x335cac: 0x8cc4000c  lw          $a0, 0xC($a2)
    ctx->pc = 0x335cacu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x61C4CCu));
    // 0x335cb0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x335cb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x335cb4: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x335cb4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x335cb8: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x335cb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x335cbc: 0x8cc50008  lw          $a1, 0x8($a2)
    ctx->pc = 0x335cbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x335cc0: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x335cc0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x335cc4: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x335CC4u;
    {
        const bool branch_taken_0x335cc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x335CC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335CC4u;
        // 0x335cc8: 0xafa5000c  sw          $a1, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335cc4) {
            ctx->pc = 0x335CE4u;
            goto label_335ce4;
        }
    }
    ctx->pc = 0x335CCCu;
    // 0x335ccc: 0x10000522  b           . + 4 + (0x522 << 2)
    ctx->pc = 0x335CCCu;
    {
        const bool branch_taken_0x335ccc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x335CD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335CCCu;
        // 0x335cd0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335ccc) {
            ctx->pc = 0x337158u;
            goto label_337158;
        }
    }
    ctx->pc = 0x335CD4u;
label_335cd4:
    // 0x335cd4: 0xdf82ae48  ld          $v0, -0x51B8($gp)
    ctx->pc = 0x335cd4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946376)));
    // 0x335cd8: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x335cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x335cdc: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x335CDCu;
    {
        const bool branch_taken_0x335cdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x335CE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335CDCu;
        // 0x335ce0: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335cdc) {
            ctx->pc = 0x335E44u;
            goto label_335e44;
        }
    }
    ctx->pc = 0x335CE4u;
label_335ce4:
    // 0x335ce4: 0x8e83002c  lw          $v1, 0x2C($s4)
    ctx->pc = 0x335ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
    // 0x335ce8: 0x8f84a8f8  lw          $a0, -0x5708($gp)
    ctx->pc = 0x335ce8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945016)));
    // 0x335cec: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x335cecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x335cf0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x335cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x335cf4: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x335cf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x335cf8: 0x1460028d  bnez        $v1, . + 4 + (0x28D << 2)
    ctx->pc = 0x335CF8u;
    {
        const bool branch_taken_0x335cf8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x335CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335CF8u;
        // 0x335cfc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335cf8) {
            ctx->pc = 0x336730u;
            goto label_336730;
        }
    }
    ctx->pc = 0x335D00u;
    // 0x335d00: 0x8e840040  lw          $a0, 0x40($s4)
    ctx->pc = 0x335d00u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
    // 0x335d04: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x335D04u;
    {
        const bool branch_taken_0x335d04 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x335d04) {
            ctx->pc = 0x335D08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x335D04u;
            // 0x335d08: 0x8e910040  lw          $s1, 0x40($s4) (Delay Slot)
            SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x335D18u;
            goto label_335d18;
        }
    }
    ctx->pc = 0x335D0Cu;
    // 0x335d0c: 0xc110e98  jal         func_443A60
    ctx->pc = 0x335D0Cu;
    SET_GPR_U32(ctx, 31, 0x335D14u);
    ctx->pc = 0x335D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335D0Cu;
    // 0x335d10: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x443A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443A60u, 0x335D0Cu, 0x335D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335D14u;
label_335d14:
    // 0x335d14: 0x8e910040  lw          $s1, 0x40($s4)
    ctx->pc = 0x335d14u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
label_335d18:
    // 0x335d18: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x335D18u;
    {
        const bool branch_taken_0x335d18 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x335D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335D18u;
        // 0x335d1c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335d18) {
            ctx->pc = 0x335D24u;
            goto label_335d24;
        }
    }
    ctx->pc = 0x335D20u;
    // 0x335d20: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x335d20u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_335d24:
    // 0x335d24: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x335D24u;
    {
        const bool branch_taken_0x335d24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x335D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335D24u;
        // 0x335d28: 0xaf80bec4  sw          $zero, -0x413C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950596), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335d24) {
            ctx->pc = 0x335D4Cu;
            goto label_335d4c;
        }
    }
    ctx->pc = 0x335D2Cu;
    // 0x335d2c: 0x92020023  lbu         $v0, 0x23($s0)
    ctx->pc = 0x335d2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 35)));
    // 0x335d30: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x335d30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x335d34: 0x38430005  xori        $v1, $v0, 0x5
    ctx->pc = 0x335d34u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)5);
    // 0x335d38: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x335d38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x335d3c: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x335d3cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x335d40: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x335d40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x335d44: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x335d44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x335d48: 0xaf82bec4  sw          $v0, -0x413C($gp)
    ctx->pc = 0x335d48u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950596), GPR_U32(ctx, 2));
label_335d4c:
    // 0x335d4c: 0x8f82bec0  lw          $v0, -0x4140($gp)
    ctx->pc = 0x335d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950592)));
    // 0x335d50: 0x12020038  beq         $s0, $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x335D50u;
    {
        const bool branch_taken_0x335d50 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x335D54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335D50u;
        // 0x335d54: 0x8f82bec4  lw          $v0, -0x413C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950596)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335d50) {
            ctx->pc = 0x335E34u;
            goto label_335e34;
        }
    }
    ctx->pc = 0x335D58u;
    // 0x335d58: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
    ctx->pc = 0x335D58u;
    {
        const bool branch_taken_0x335d58 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x335D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335D58u;
        // 0x335d5c: 0xdf82ae80  ld          $v0, -0x5180($gp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335d58) {
            ctx->pc = 0x335D80u;
            goto label_335d80;
        }
    }
    ctx->pc = 0x335D60u;
    // 0x335d60: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x335d60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x335d64: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x335d64u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335d68: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x335d68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335d6c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x335d6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x335d70: 0xc110b7e  jal         func_442DF8
    ctx->pc = 0x335D70u;
    SET_GPR_U32(ctx, 31, 0x335D78u);
    ctx->pc = 0x335D74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335D70u;
    // 0x335d74: 0xff82ae80  sd          $v0, -0x5180($gp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946432), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x442DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x442DF8u, 0x335D70u, 0x335D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335D78u;
label_335d78:
    // 0x335d78: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x335D78u;
    {
        const bool branch_taken_0x335d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x335D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335D78u;
        // 0x335d7c: 0xaf90bec0  sw          $s0, -0x4140($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950592), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335d78) {
            ctx->pc = 0x335D90u;
            goto label_335d90;
        }
    }
    ctx->pc = 0x335D80u;
label_335d80:
    // 0x335d80: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x335d80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x335d84: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x335d84u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x335d88: 0xff82ae80  sd          $v0, -0x5180($gp)
    ctx->pc = 0x335d88u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946432), GPR_U64(ctx, 2));
    // 0x335d8c: 0xaf90bec0  sw          $s0, -0x4140($gp)
    ctx->pc = 0x335d8cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950592), GPR_U32(ctx, 16));
label_335d90:
    // 0x335d90: 0x12200027  beqz        $s1, . + 4 + (0x27 << 2)
    ctx->pc = 0x335D90u;
    {
        const bool branch_taken_0x335d90 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x335D94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335D90u;
        // 0x335d94: 0x2404fe1f  addiu       $a0, $zero, -0x1E1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966815));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335d90) {
            ctx->pc = 0x335E30u;
            goto label_335e30;
        }
    }
    ctx->pc = 0x335D98u;
    // 0x335d98: 0x8e250050  lw          $a1, 0x50($s1)
    ctx->pc = 0x335d98u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x335d9c: 0xdf82ae68  ld          $v0, -0x5198($gp)
    ctx->pc = 0x335d9cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946408)));
    // 0x335da0: 0x30a300ff  andi        $v1, $a1, 0xFF
    ctx->pc = 0x335da0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)255);
    // 0x335da4: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x335da4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x335da8: 0x34010006  ori         $at, $zero, 0x6
    ctx->pc = 0x335da8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)6);
    // 0x335dac: 0x5023000e  beql        $at, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x335DACu;
    {
        const bool branch_taken_0x335dac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 3));
        if (branch_taken_0x335dac) {
            ctx->pc = 0x335DB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x335DACu;
            // 0x335db0: 0x34420160  ori         $v0, $v0, 0x160 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)352);
            ctx->in_delay_slot = false;
            ctx->pc = 0x335DE8u;
            goto label_335de8;
        }
    }
    ctx->pc = 0x335DB4u;
    // 0x335db4: 0x34010005  ori         $at, $zero, 0x5
    ctx->pc = 0x335db4u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)5);
    // 0x335db8: 0x5023000b  beql        $at, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x335DB8u;
    {
        const bool branch_taken_0x335db8 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 3));
        if (branch_taken_0x335db8) {
            ctx->pc = 0x335DBCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x335DB8u;
            // 0x335dbc: 0x344200c0  ori         $v0, $v0, 0xC0 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
            ctx->in_delay_slot = false;
            ctx->pc = 0x335DE8u;
            goto label_335de8;
        }
    }
    ctx->pc = 0x335DC0u;
    // 0x335dc0: 0x34010004  ori         $at, $zero, 0x4
    ctx->pc = 0x335dc0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)4);
    // 0x335dc4: 0x50230008  beql        $at, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x335DC4u;
    {
        const bool branch_taken_0x335dc4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 3));
        if (branch_taken_0x335dc4) {
            ctx->pc = 0x335DC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x335DC4u;
            // 0x335dc8: 0x34420120  ori         $v0, $v0, 0x120 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)288);
            ctx->in_delay_slot = false;
            ctx->pc = 0x335DE8u;
            goto label_335de8;
        }
    }
    ctx->pc = 0x335DCCu;
    // 0x335dcc: 0x34010003  ori         $at, $zero, 0x3
    ctx->pc = 0x335dccu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)3);
    // 0x335dd0: 0x50230005  beql        $at, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x335DD0u;
    {
        const bool branch_taken_0x335dd0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 3));
        if (branch_taken_0x335dd0) {
            ctx->pc = 0x335DD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x335DD0u;
            // 0x335dd4: 0x34420080  ori         $v0, $v0, 0x80 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
            ctx->in_delay_slot = false;
            ctx->pc = 0x335DE8u;
            goto label_335de8;
        }
    }
    ctx->pc = 0x335DD8u;
    // 0x335dd8: 0x34010002  ori         $at, $zero, 0x2
    ctx->pc = 0x335dd8u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)2);
    // 0x335ddc: 0x50230002  beql        $at, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x335DDCu;
    {
        const bool branch_taken_0x335ddc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 3));
        if (branch_taken_0x335ddc) {
            ctx->pc = 0x335DE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x335DDCu;
            // 0x335de0: 0x34420060  ori         $v0, $v0, 0x60 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)96);
            ctx->in_delay_slot = false;
            ctx->pc = 0x335DE8u;
            goto label_335de8;
        }
    }
    ctx->pc = 0x335DE4u;
    // 0x335de4: 0x34420000  ori         $v0, $v0, 0x0
    ctx->pc = 0x335de4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)0);
label_335de8:
    // 0x335de8: 0x0  nop
    ctx->pc = 0x335de8u;
    // NOP
    // 0x335dec: 0xff82ae68  sd          $v0, -0x5198($gp)
    ctx->pc = 0x335decu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946408), GPR_U64(ctx, 2));
    // 0x335df0: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x335df0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x335df4: 0x30a20f00  andi        $v0, $a1, 0xF00
    ctx->pc = 0x335df4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3840);
    // 0x335df8: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x335df8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x335dfc: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x335DFCu;
    {
        const bool branch_taken_0x335dfc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x335E00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335DFCu;
        // 0x335e00: 0xff80ae60  sd          $zero, -0x51A0($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294946400), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335dfc) {
            ctx->pc = 0x335E10u;
            goto label_335e10;
        }
    }
    ctx->pc = 0x335E04u;
    // 0x335e04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x335e04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x335e08: 0xff82ae60  sd          $v0, -0x51A0($gp)
    ctx->pc = 0x335e08u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946400), GPR_U64(ctx, 2));
    // 0x335e0c: 0x0  nop
    ctx->pc = 0x335e0cu;
    // NOP
label_335e10:
    // 0x335e10: 0x30a2f000  andi        $v0, $a1, 0xF000
    ctx->pc = 0x335e10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)61440);
    // 0x335e14: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x335e14u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x335e18: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x335E18u;
    {
        const bool branch_taken_0x335e18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x335E1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335E18u;
        // 0x335e1c: 0x8f82bec4  lw          $v0, -0x413C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950596)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335e18) {
            ctx->pc = 0x335E34u;
            goto label_335e34;
        }
    }
    ctx->pc = 0x335E20u;
    // 0x335e20: 0xdf82ae60  ld          $v0, -0x51A0($gp)
    ctx->pc = 0x335e20u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946400)));
    // 0x335e24: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x335e24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x335e28: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x335e28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x335e2c: 0xff82ae60  sd          $v0, -0x51A0($gp)
    ctx->pc = 0x335e2cu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946400), GPR_U64(ctx, 2));
label_335e30:
    // 0x335e30: 0x8f82bec4  lw          $v0, -0x413C($gp)
    ctx->pc = 0x335e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950596)));
label_335e34:
    // 0x335e34: 0x1440ffa7  bnez        $v0, . + 4 + (-0x59 << 2)
    ctx->pc = 0x335E34u;
    {
        const bool branch_taken_0x335e34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x335E38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335E34u;
        // 0x335e38: 0x2403fffe  addiu       $v1, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335e34) {
            ctx->pc = 0x335CD4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_335cd4;
        }
    }
    ctx->pc = 0x335E3Cu;
    // 0x335e3c: 0xdf82ae48  ld          $v0, -0x51B8($gp)
    ctx->pc = 0x335e3cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946376)));
    // 0x335e40: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x335e40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_335e44:
    // 0x335e44: 0xff82ae48  sd          $v0, -0x51B8($gp)
    ctx->pc = 0x335e44u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946376), GPR_U64(ctx, 2));
    // 0x335e48: 0x8fb7000c  lw          $s7, 0xC($sp)
    ctx->pc = 0x335e48u;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x335e4c: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x335e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x335e50: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x335e50u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x335e54: 0x24110010  addiu       $s1, $zero, 0x10
    ctx->pc = 0x335e54u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x335e58: 0x2ee40015  sltiu       $a0, $s7, 0x15
    ctx->pc = 0x335e58u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)(int64_t)(int32_t)21) ? 1 : 0);
    // 0x335e5c: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x335e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x335e60: 0x66880b  movn        $s1, $v1, $a2
    ctx->pc = 0x335e60u;
    if (GPR_U64(ctx, 6) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
    // 0x335e64: 0x24d00001  addiu       $s0, $a2, 0x1
    ctx->pc = 0x335e64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x335e68: 0x44b80a  movz        $s7, $v0, $a0
    ctx->pc = 0x335e68u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 2));
    // 0x335e6c: 0x2302821  addu        $a1, $s1, $s0
    ctx->pc = 0x335e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x335e70: 0xb71018  mult        $v0, $a1, $s7
    ctx->pc = 0x335e70u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 23); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x335e74: 0x8e830030  lw          $v1, 0x30($s4)
    ctx->pc = 0x335e74u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x335e78: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x335e78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335e7c: 0x572821  addu        $a1, $v0, $s7
    ctx->pc = 0x335e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 23)));
    // 0x335e80: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x335e80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x335e84: 0x24a5000d  addiu       $a1, $a1, 0xD
    ctx->pc = 0x335e84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 13));
    // 0x335e88: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x335e88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x335e8c: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x335e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x335e90: 0x771823  subu        $v1, $v1, $s7
    ctx->pc = 0x335e90u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x335e94: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x335e94u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x335e98: 0xc10a322  jal         func_428C88
    ctx->pc = 0x335E98u;
    SET_GPR_U32(ctx, 31, 0x335EA0u);
    ctx->pc = 0x335E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x335E98u;
    // 0x335e9c: 0xafa3000c  sw          $v1, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x428C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x428C88u, 0x335E98u, 0x335EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x335EA0u;
label_335ea0:
    // 0x335ea0: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x335ea0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x335ea4: 0x34a5000b  ori         $a1, $a1, 0xB
    ctx->pc = 0x335ea4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)11);
    // 0x335ea8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x335ea8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335eac: 0x70851b89  pcpyld      $v1, $a0, $a1
    ctx->pc = 0x335eacu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x335eb0: 0x8f82be20  lw          $v0, -0x41E0($gp)
    ctx->pc = 0x335eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x335eb4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x335eb4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x335eb8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x335eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x335ebc: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x335ebcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x335ec0: 0x3c066c01  lui         $a2, 0x6C01
    ctx->pc = 0x335ec0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)27649 << 16));
    // 0x335ec4: 0x34c603fa  ori         $a2, $a2, 0x3FA
    ctx->pc = 0x335ec4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1018);
    // 0x335ec8: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x335ec8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x335ecc: 0x34c60100  ori         $a2, $a2, 0x100
    ctx->pc = 0x335eccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)256);
    // 0x335ed0: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x335ed0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x335ed4: 0x34c60404  ori         $a2, $a2, 0x404
    ctx->pc = 0x335ed4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1028);
    // 0x335ed8: 0x70c42389  pcpyld      $a0, $a2, $a0
    ctx->pc = 0x335ed8u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 4)));
    // 0x335edc: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x335edcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x335ee0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x335ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x335ee4: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x335ee4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x335ee8: 0x92830047  lbu         $v1, 0x47($s4)
    ctx->pc = 0x335ee8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 71)));
    // 0x335eec: 0x8f82bec4  lw          $v0, -0x413C($gp)
    ctx->pc = 0x335eecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950596)));
    // 0x335ef0: 0x386300ff  xori        $v1, $v1, 0xFF
    ctx->pc = 0x335ef0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)255);
    // 0x335ef4: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x335ef4u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x335ef8: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x335ef8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x335efc: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x335EFCu;
    {
        const bool branch_taken_0x335efc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x335F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335EFCu;
        // 0x335f00: 0xaf83bec8  sw          $v1, -0x4138($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950600), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335efc) {
            ctx->pc = 0x335F18u;
            goto label_335f18;
        }
    }
    ctx->pc = 0x335F04u;
    // 0x335f04: 0xdf82ae80  ld          $v0, -0x5180($gp)
    ctx->pc = 0x335f04u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946432)));
    // 0x335f08: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x335f08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x335f0c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x335F0Cu;
    {
        const bool branch_taken_0x335f0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x335F10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335F0Cu;
        // 0x335f10: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335f0c) {
            ctx->pc = 0x335F24u;
            goto label_335f24;
        }
    }
    ctx->pc = 0x335F14u;
    // 0x335f14: 0x0  nop
    ctx->pc = 0x335f14u;
    // NOP
label_335f18:
    // 0x335f18: 0xdf82ae80  ld          $v0, -0x5180($gp)
    ctx->pc = 0x335f18u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946432)));
    // 0x335f1c: 0x2403ffbf  addiu       $v1, $zero, -0x41
    ctx->pc = 0x335f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x335f20: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x335f20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_335f24:
    // 0x335f24: 0xff82ae80  sd          $v0, -0x5180($gp)
    ctx->pc = 0x335f24u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946432), GPR_U64(ctx, 2));
    // 0x335f28: 0x92860029  lbu         $a2, 0x29($s4)
    ctx->pc = 0x335f28u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 41)));
    // 0x335f2c: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x335f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x335f30: 0x8f82ae80  lw          $v0, -0x5180($gp)
    ctx->pc = 0x335f30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946432)));
    // 0x335f34: 0x3c07fc00  lui         $a3, 0xFC00
    ctx->pc = 0x335f34u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64512 << 16));
    // 0x335f38: 0x34e77fff  ori         $a3, $a3, 0x7FFF
    ctx->pc = 0x335f38u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32767);
    // 0x335f3c: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x335f3cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x335f40: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x335f40u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x335f44: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x335f44u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x335f48: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x335f48u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x335f4c: 0xdc64d5d0  ld          $a0, -0x2A30($v1)
    ctx->pc = 0x335f4cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 4294956496)));
    // 0x335f50: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x335f50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x335f54: 0x2463d5d0  addiu       $v1, $v1, -0x2A30
    ctx->pc = 0x335f54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956496));
    // 0x335f58: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x335f58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x335f5c: 0x873024  and         $a2, $a0, $a3
    ctx->pc = 0x335f5cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x335f60: 0x213fc  dsll32      $v0, $v0, 15
    ctx->pc = 0x335f60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 15));
    // 0x335f64: 0xdc650008  ld          $a1, 0x8($v1)
    ctx->pc = 0x335f64u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x335f68: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x335f68u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x335f6c: 0x70a62389  pcpyld      $a0, $a1, $a2
    ctx->pc = 0x335f6cu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 6)));
    // 0x335f70: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x335f70u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x335f74: 0x8f86be20  lw          $a2, -0x41E0($gp)
    ctx->pc = 0x335f74u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x335f78: 0x7cc40000  sq          $a0, 0x0($a2)
    ctx->pc = 0x335f78u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 4));
    // 0x335f7c: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x335f7cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x335f80: 0xaf86be20  sw          $a2, -0x41E0($gp)
    ctx->pc = 0x335f80u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 6));
    // 0x335f84: 0x3c026c01  lui         $v0, 0x6C01
    ctx->pc = 0x335f84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27649 << 16));
    // 0x335f88: 0x344203fb  ori         $v0, $v0, 0x3FB
    ctx->pc = 0x335f88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1019);
    // 0x335f8c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x335f8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x335f90: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x335f90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x335f94: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x335f94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x335f98: 0x34420404  ori         $v0, $v0, 0x404
    ctx->pc = 0x335f98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x335f9c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x335f9cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x335fa0: 0x70471389  pcpyld      $v0, $v0, $a3
    ctx->pc = 0x335fa0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x335fa4: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x335fa4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x335fa8: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x335fa8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x335fac: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x335facu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x335fb0: 0xdf82ae80  ld          $v0, -0x5180($gp)
    ctx->pc = 0x335fb0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946432)));
    // 0x335fb4: 0xc7858054  lwc1        $f5, -0x7FAC($gp)
    ctx->pc = 0x335fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x335fb8: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x335fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x335fbc: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x335FBCu;
    {
        const bool branch_taken_0x335fbc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x335FC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x335FBCu;
        // 0x335fc0: 0x92820044  lbu         $v0, 0x44($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x335fbc) {
            ctx->pc = 0x335FC8u;
            goto label_335fc8;
        }
    }
    ctx->pc = 0x335FC4u;
    // 0x335fc4: 0xc7858434  lwc1        $f5, -0x7BCC($gp)
    ctx->pc = 0x335fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_335fc8:
    // 0x335fc8: 0x92830045  lbu         $v1, 0x45($s4)
    ctx->pc = 0x335fc8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 69)));
    // 0x335fcc: 0x92840046  lbu         $a0, 0x46($s4)
    ctx->pc = 0x335fccu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 70)));
    // 0x335fd0: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x335fd0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x335fd4: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x335fd4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x335fd8: 0x92850047  lbu         $a1, 0x47($s4)
    ctx->pc = 0x335fd8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 71)));
    // 0x335fdc: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x335fdcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x335fe0: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x335fe0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x335fe4: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x335fe4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x335fe8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x335fe8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x335fec: 0xc7818434  lwc1        $f1, -0x7BCC($gp)
    ctx->pc = 0x335fecu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x335ff0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x335ff0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x335ff4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x335ff4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x335ff8: 0x46010182  mul.s       $f6, $f0, $f1
    ctx->pc = 0x335ff8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x335ffc: 0x460519c2  mul.s       $f7, $f3, $f5
    ctx->pc = 0x335ffcu;
    ctx->f[7] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x336000: 0x44023000  mfc1        $v0, $f6
    ctx->pc = 0x336000u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x336004: 0x44033800  mfc1        $v1, $f7
    ctx->pc = 0x336004u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x336008: 0x70021789  pexew       $v0, $v0
    ctx->pc = 0x336008u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 2)));
    // 0x33600c: 0x70031f89  pexew       $v1, $v1
    ctx->pc = 0x33600cu;
    SET_GPR_VEC(ctx, 3, PS2_PEXEW(GPR_VEC(ctx, 3)));
    // 0x336010: 0x46051182  mul.s       $f6, $f2, $f5
    ctx->pc = 0x336010u;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x336014: 0x460521c2  mul.s       $f7, $f4, $f5
    ctx->pc = 0x336014u;
    ctx->f[7] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x336018: 0x44023000  mfc1        $v0, $f6
    ctx->pc = 0x336018u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x33601c: 0x44033800  mfc1        $v1, $f7
    ctx->pc = 0x33601cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x336020: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x336020u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x336024: 0x7cc20010  sq          $v0, 0x10($a2)
    ctx->pc = 0x336024u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 2));
    // 0x336028: 0x24c30020  addiu       $v1, $a2, 0x20
    ctx->pc = 0x336028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x33602c: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x33602cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x336030: 0x3c026c01  lui         $v0, 0x6C01
    ctx->pc = 0x336030u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27649 << 16));
    // 0x336034: 0x344203fc  ori         $v0, $v0, 0x3FC
    ctx->pc = 0x336034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1020);
    // 0x336038: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x336038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x33603c: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x33603cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x336040: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x336040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x336044: 0x34420404  ori         $v0, $v0, 0x404
    ctx->pc = 0x336044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x336048: 0x70471389  pcpyld      $v0, $v0, $a3
    ctx->pc = 0x336048u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x33604c: 0x7cc20020  sq          $v0, 0x20($a2)
    ctx->pc = 0x33604cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 2));
    // 0x336050: 0x24c30030  addiu       $v1, $a2, 0x30
    ctx->pc = 0x336050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    // 0x336054: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x336054u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x336058: 0x8e82003c  lw          $v0, 0x3C($s4)
    ctx->pc = 0x336058u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 60)));
    // 0x33605c: 0xc7848240  lwc1        $f4, -0x7DC0($gp)
    ctx->pc = 0x33605cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x336060: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x336060u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x336064: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x336064u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x336068: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x336068u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33606c: 0xc680001c  lwc1        $f0, 0x1C($s4)
    ctx->pc = 0x33606cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 20), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x336070: 0x46040942  mul.s       $f5, $f1, $f4
    ctx->pc = 0x336070u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x336074: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x336074u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x336078: 0x44032800  mfc1        $v1, $f5
    ctx->pc = 0x336078u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x33607c: 0x70021789  pexew       $v0, $v0
    ctx->pc = 0x33607cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 2)));
    // 0x336080: 0x70031f89  pexew       $v1, $v1
    ctx->pc = 0x336080u;
    SET_GPR_VEC(ctx, 3, PS2_PEXEW(GPR_VEC(ctx, 3)));
    // 0x336084: 0x46041982  mul.s       $f6, $f3, $f4
    ctx->pc = 0x336084u;
    ctx->f[6] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x336088: 0x46041142  mul.s       $f5, $f2, $f4
    ctx->pc = 0x336088u;
    ctx->f[5] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x33608c: 0x44023000  mfc1        $v0, $f6
    ctx->pc = 0x33608cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x336090: 0x44032800  mfc1        $v1, $f5
    ctx->pc = 0x336090u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x336094: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x336094u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x336098: 0x7cc20030  sq          $v0, 0x30($a2)
    ctx->pc = 0x336098u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), GPR_VEC(ctx, 2));
    // 0x33609c: 0x24c30040  addiu       $v1, $a2, 0x40
    ctx->pc = 0x33609cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x3360a0: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x3360a0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x3360a4: 0x8e820040  lw          $v0, 0x40($s4)
    ctx->pc = 0x3360a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
    // 0x3360a8: 0x5040001f  beql        $v0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x3360A8u;
    {
        const bool branch_taken_0x3360a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3360a8) {
            ctx->pc = 0x3360ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3360A8u;
            // 0x3360ac: 0x700014a9  por         $v0, $zero, $zero (Delay Slot)
            SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x336128u;
            goto label_336128;
        }
    }
    ctx->pc = 0x3360B0u;
    // 0x3360b0: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x3360b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x3360b4: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x3360b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x3360b8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3360b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3360bc: 0x70471389  pcpyld      $v0, $v0, $a3
    ctx->pc = 0x3360bcu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x3360c0: 0x7cc20040  sq          $v0, 0x40($a2)
    ctx->pc = 0x3360c0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 64), GPR_VEC(ctx, 2));
    // 0x3360c4: 0x24c20050  addiu       $v0, $a2, 0x50
    ctx->pc = 0x3360c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
    // 0x3360c8: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x3360c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x3360cc: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x3360ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x3360d0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3360d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3360d4: 0x34638003  ori         $v1, $v1, 0x8003
    ctx->pc = 0x3360d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32771);
    // 0x3360d8: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x3360d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x3360dc: 0x70431389  pcpyld      $v0, $v0, $v1
    ctx->pc = 0x3360dcu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x3360e0: 0x7cc20050  sq          $v0, 0x50($a2)
    ctx->pc = 0x3360e0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 80), GPR_VEC(ctx, 2));
    // 0x3360e4: 0x24c20060  addiu       $v0, $a2, 0x60
    ctx->pc = 0x3360e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 96));
    // 0x3360e8: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x3360e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x3360ec: 0xdf83ae48  ld          $v1, -0x51B8($gp)
    ctx->pc = 0x3360ecu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294946376)));
    // 0x3360f0: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x3360f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x3360f4: 0x70431389  pcpyld      $v0, $v0, $v1
    ctx->pc = 0x3360f4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x3360f8: 0x7cc20060  sq          $v0, 0x60($a2)
    ctx->pc = 0x3360f8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 96), GPR_VEC(ctx, 2));
    // 0x3360fc: 0x24c20070  addiu       $v0, $a2, 0x70
    ctx->pc = 0x3360fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 112));
    // 0x336100: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x336100u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x336104: 0xdf83ae68  ld          $v1, -0x5198($gp)
    ctx->pc = 0x336104u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294946408)));
    // 0x336108: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x336108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x33610c: 0x70431389  pcpyld      $v0, $v0, $v1
    ctx->pc = 0x33610cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x336110: 0x7cc20070  sq          $v0, 0x70($a2)
    ctx->pc = 0x336110u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 112), GPR_VEC(ctx, 2));
    // 0x336114: 0x24c20080  addiu       $v0, $a2, 0x80
    ctx->pc = 0x336114u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x336118: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x336118u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x33611c: 0xdf83ae60  ld          $v1, -0x51A0($gp)
    ctx->pc = 0x33611cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294946400)));
    // 0x336120: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x336120u;
    {
        const bool branch_taken_0x336120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x336124u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336120u;
        // 0x336124: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336120) {
            ctx->pc = 0x336188u;
            goto label_336188;
        }
    }
    ctx->pc = 0x336128u;
label_336128:
    // 0x336128: 0x7cc20040  sq          $v0, 0x40($a2)
    ctx->pc = 0x336128u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 64), GPR_VEC(ctx, 2));
    // 0x33612c: 0x24c20050  addiu       $v0, $a2, 0x50
    ctx->pc = 0x33612cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
    // 0x336130: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x336130u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x336134: 0x70001ca9  por         $v1, $zero, $zero
    ctx->pc = 0x336134u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x336138: 0x7cc30050  sq          $v1, 0x50($a2)
    ctx->pc = 0x336138u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 80), GPR_VEC(ctx, 3));
    // 0x33613c: 0x24c20060  addiu       $v0, $a2, 0x60
    ctx->pc = 0x33613cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 96));
    // 0x336140: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x336140u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x336144: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x336144u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x336148: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x336148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x33614c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x33614cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x336150: 0x70471389  pcpyld      $v0, $v0, $a3
    ctx->pc = 0x336150u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x336154: 0x7cc20060  sq          $v0, 0x60($a2)
    ctx->pc = 0x336154u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 96), GPR_VEC(ctx, 2));
    // 0x336158: 0x24c20070  addiu       $v0, $a2, 0x70
    ctx->pc = 0x336158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 112));
    // 0x33615c: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x33615cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x336160: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x336160u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x336164: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x336164u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x336168: 0x34638001  ori         $v1, $v1, 0x8001
    ctx->pc = 0x336168u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32769);
    // 0x33616c: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x33616cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x336170: 0x70431389  pcpyld      $v0, $v0, $v1
    ctx->pc = 0x336170u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x336174: 0x7cc20070  sq          $v0, 0x70($a2)
    ctx->pc = 0x336174u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 112), GPR_VEC(ctx, 2));
    // 0x336178: 0x24c20080  addiu       $v0, $a2, 0x80
    ctx->pc = 0x336178u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x33617c: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x33617cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x336180: 0xdf83ae48  ld          $v1, -0x51B8($gp)
    ctx->pc = 0x336180u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294946376)));
    // 0x336184: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x336184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
label_336188:
    // 0x336188: 0x70431389  pcpyld      $v0, $v0, $v1
    ctx->pc = 0x336188u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x33618c: 0x7cc20080  sq          $v0, 0x80($a2)
    ctx->pc = 0x33618cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 128), GPR_VEC(ctx, 2));
    // 0x336190: 0x24c20090  addiu       $v0, $a2, 0x90
    ctx->pc = 0x336190u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 144));
    // 0x336194: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x336194u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x336198: 0x2642c4c0  addiu       $v0, $s2, -0x3B40
    ctx->pc = 0x336198u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294952128));
    // 0x33619c: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x33619cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x3361a0: 0x90650090  lbu         $a1, 0x90($v1)
    ctx->pc = 0x3361a0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 144)));
    // 0x3361a4: 0xa285002b  sb          $a1, 0x2B($s4)
    ctx->pc = 0x3361a4u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 43), (uint8_t)GPR_U32(ctx, 5));
    // 0x3361a8: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x3361a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x3361ac: 0x8f85aed4  lw          $a1, -0x512C($gp)
    ctx->pc = 0x3361acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946516)));
    // 0x3361b0: 0x9282002b  lbu         $v0, 0x2B($s4)
    ctx->pc = 0x3361b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 43)));
    // 0x3361b4: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x3361b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x3361b8: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3361b8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3361bc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3361bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3361c0: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x3361c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3361c4: 0x10a6000a  beq         $a1, $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x3361C4u;
    {
        const bool branch_taken_0x3361c4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x3361C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3361C4u;
        // 0x3361c8: 0x6203c  dsll32      $a0, $a2, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3361c4) {
            ctx->pc = 0x3361F0u;
            goto label_3361f0;
        }
    }
    ctx->pc = 0x3361CCu;
    // 0x3361cc: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x3361ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x3361d0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3361d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3361d4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3361d4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3361d8: 0x70441389  pcpyld      $v0, $v0, $a0
    ctx->pc = 0x3361d8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x3361dc: 0x8f83be20  lw          $v1, -0x41E0($gp)
    ctx->pc = 0x3361dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x3361e0: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x3361e0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x3361e4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x3361e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3361e8: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x3361e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x3361ec: 0xaf86aed4  sw          $a2, -0x512C($gp)
    ctx->pc = 0x3361ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946516), GPR_U32(ctx, 6));
label_3361f0:
    // 0x3361f0: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x3361f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x3361f4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3361f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3361f8: 0x2222825  or          $a1, $s1, $v0
    ctx->pc = 0x3361f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) | GPR_U64(ctx, 2));
    // 0x3361fc: 0x70853389  pcpyld      $a2, $a0, $a1
    ctx->pc = 0x3361fcu;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x336200: 0x7fa60020  sq          $a2, 0x20($sp)
    ctx->pc = 0x336200u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 6));
    // 0x336204: 0x3c026c06  lui         $v0, 0x6C06
    ctx->pc = 0x336204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27654 << 16));
    // 0x336208: 0x344203d9  ori         $v0, $v0, 0x3D9
    ctx->pc = 0x336208u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)985);
    // 0x33620c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x33620cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x336210: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x336210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x336214: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x336214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x336218: 0x34420404  ori         $v0, $v0, 0x404
    ctx->pc = 0x336218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x33621c: 0x7044f389  pcpyld      $fp, $v0, $a0
    ctx->pc = 0x33621cu;
    SET_GPR_VEC(ctx, 30, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x336220: 0x3c036c04  lui         $v1, 0x6C04
    ctx->pc = 0x336220u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27652 << 16));
    // 0x336224: 0x346303df  ori         $v1, $v1, 0x3DF
    ctx->pc = 0x336224u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)991);
    // 0x336228: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x336228u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x33622c: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x33622cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x336230: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x336230u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x336234: 0x34630404  ori         $v1, $v1, 0x404
    ctx->pc = 0x336234u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1028);
    // 0x336238: 0x7064b389  pcpyld      $s6, $v1, $a0
    ctx->pc = 0x336238u;
    SET_GPR_VEC(ctx, 22, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x33623c: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x33623cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x336240: 0x9c450008  lwu         $a1, 0x8($v0)
    ctx->pc = 0x336240u;
    SET_GPR_ZE32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x336244: 0x3c070200  lui         $a3, 0x200
    ctx->pc = 0x336244u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)512 << 16));
    // 0x336248: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x336248u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x33624c: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x33624cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x336250: 0x3c060300  lui         $a2, 0x300
    ctx->pc = 0x336250u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)768 << 16));
    // 0x336254: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x336254u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x336258: 0x8c820014  lw          $v0, 0x14($a0)
    ctx->pc = 0x336258u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x33625c: 0xa32825  or          $a1, $a1, $v1
    ctx->pc = 0x33625cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x336260: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x336260u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x336264: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x336264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x336268: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x336268u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x33626c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x33626cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x336270: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x336270u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x336274: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x336274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x336278: 0x70453389  pcpyld      $a2, $v0, $a1
    ctx->pc = 0x336278u;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
    // 0x33627c: 0xafa00004  sw          $zero, 0x4($sp)
    ctx->pc = 0x33627cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
    // 0x336280: 0x10600114  beqz        $v1, . + 4 + (0x114 << 2)
    ctx->pc = 0x336280u;
    {
        const bool branch_taken_0x336280 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x336284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336280u;
        // 0x336284: 0x7fa60030  sq          $a2, 0x30($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336280) {
            ctx->pc = 0x3366D4u;
            goto label_3366d4;
        }
    }
    ctx->pc = 0x336288u;
    // 0x336288: 0x2301021  addu        $v0, $s1, $s0
    ctx->pc = 0x336288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x33628c: 0x3c036c00  lui         $v1, 0x6C00
    ctx->pc = 0x33628cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27648 << 16));
    // 0x336290: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x336290u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x336294: 0x34630346  ori         $v1, $v1, 0x346
    ctx->pc = 0x336294u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)838);
    // 0x336298: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x336298u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x33629c: 0xafa30060  sw          $v1, 0x60($sp)
    ctx->pc = 0x33629cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 3));
    // 0x3362a0: 0xafa000cc  sw          $zero, 0xCC($sp)
    ctx->pc = 0x3362a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 0));
    // 0x3362a4: 0xafa000d0  sw          $zero, 0xD0($sp)
    ctx->pc = 0x3362a4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 0));
label_3362a8:
    // 0x3362a8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x3362a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3362ac: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x3362acu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3362b0: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3362B0u;
    {
        const bool branch_taken_0x3362b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3362B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3362B0u;
        // 0x3362b4: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3362b0) {
            ctx->pc = 0x3362D0u;
            goto label_3362d0;
        }
    }
    ctx->pc = 0x3362B8u;
    // 0x3362b8: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x3362b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3362bc: 0x8fa600d0  lw          $a2, 0xD0($sp)
    ctx->pc = 0x3362bcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x3362c0: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x3362c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x3362c4: 0x469021  addu        $s2, $v0, $a2
    ctx->pc = 0x3362c4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x3362c8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x3362C8u;
    {
        const bool branch_taken_0x3362c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3362CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3362C8u;
        // 0x3362cc: 0x8e530000  lw          $s3, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3362c8) {
            ctx->pc = 0x3362E4u;
            goto label_3362e4;
        }
    }
    ctx->pc = 0x3362D0u;
label_3362d0:
    // 0x3362d0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x3362d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3362d4: 0x8fa400cc  lw          $a0, 0xCC($sp)
    ctx->pc = 0x3362d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x3362d8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x3362d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x3362dc: 0x448821  addu        $s1, $v0, $a0
    ctx->pc = 0x3362dcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3362e0: 0x8e33006c  lw          $s3, 0x6C($s1)
    ctx->pc = 0x3362e0u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
label_3362e4:
    // 0x3362e4: 0x8e6200f0  lw          $v0, 0xF0($s3)
    ctx->pc = 0x3362e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 240)));
    // 0x3362e8: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x3362e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x3362ec: 0x104000ec  beqz        $v0, . + 4 + (0xEC << 2)
    ctx->pc = 0x3362ECu;
    {
        const bool branch_taken_0x3362ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3362F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3362ECu;
        // 0x3362f0: 0x8fa50010  lw          $a1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3362ec) {
            ctx->pc = 0x3366A0u;
            goto label_3366a0;
        }
    }
    ctx->pc = 0x3362F4u;
    // 0x3362f4: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x3362f4u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3362f8: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x3362f8u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3362fc: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x3362FCu;
    {
        const bool branch_taken_0x3362fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x336300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3362FCu;
        // 0x336300: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3362fc) {
            ctx->pc = 0x336338u;
            goto label_336338;
        }
    }
    ctx->pc = 0x336304u;
    // 0x336304: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x336304u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x336308: 0x260802d  daddu       $s0, $s3, $zero
    ctx->pc = 0x336308u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33630c: 0xc0de61a  jal         func_379868
    ctx->pc = 0x33630Cu;
    SET_GPR_U32(ctx, 31, 0x336314u);
    ctx->pc = 0x336310u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33630Cu;
    // 0x336310: 0x8cc40018  lw          $a0, 0x18($a2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x379868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x379868u, 0x33630Cu, 0x336314u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336314u;
label_336314:
    // 0x336314: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x336314u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336318: 0xc0de646  jal         func_379918
    ctx->pc = 0x336318u;
    SET_GPR_U32(ctx, 31, 0x336320u);
    ctx->pc = 0x33631Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336318u;
    // 0x33631c: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x379918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x379918u, 0x336318u, 0x336320u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336320u;
label_336320:
    // 0x336320: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x336320u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x336324: 0x24080  sll         $t0, $v0, 2
    ctx->pc = 0x336324u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x336328: 0x92420004  lbu         $v0, 0x4($s2)
    ctx->pc = 0x336328u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x33632c: 0x8c63010c  lw          $v1, 0x10C($v1)
    ctx->pc = 0x33632cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
    // 0x336330: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x336330u;
    {
        const bool branch_taken_0x336330 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x336334u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336330u;
        // 0x336334: 0xafa30050  sw          $v1, 0x50($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336330) {
            ctx->pc = 0x33633Cu;
            goto label_33633c;
        }
    }
    ctx->pc = 0x336338u;
label_336338:
    // 0x336338: 0x92220060  lbu         $v0, 0x60($s1)
    ctx->pc = 0x336338u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 96)));
label_33633c:
    // 0x33633c: 0xa2820028  sb          $v0, 0x28($s4)
    ctx->pc = 0x33633cu;
    WRITE8(ADD32(GPR_U32(ctx, 20), 40), (uint8_t)GPR_U32(ctx, 2));
    // 0x336340: 0x8fa20018  lw          $v0, 0x18($sp)
    ctx->pc = 0x336340u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x336344: 0x54570012  bnel        $v0, $s7, . + 4 + (0x12 << 2)
    ctx->pc = 0x336344u;
    {
        const bool branch_taken_0x336344 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 23));
        if (branch_taken_0x336344) {
            ctx->pc = 0x336348u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x336344u;
            // 0x336348: 0x8f87be20  lw          $a3, -0x41E0($gp) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x336390u;
            goto label_336390;
        }
    }
    ctx->pc = 0x33634Cu;
    // 0x33634c: 0x8fb7000c  lw          $s7, 0xC($sp)
    ctx->pc = 0x33634cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x336350: 0x24030014  addiu       $v1, $zero, 0x14
    ctx->pc = 0x336350u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x336354: 0x7fa800e0  sq          $t0, 0xE0($sp)
    ctx->pc = 0x336354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 8));
    // 0x336358: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x336358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33635c: 0x2ee20015  sltiu       $v0, $s7, 0x15
    ctx->pc = 0x33635cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 23) < (uint64_t)(int64_t)(int32_t)21) ? 1 : 0);
    // 0x336360: 0xafa00018  sw          $zero, 0x18($sp)
    ctx->pc = 0x336360u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
    // 0x336364: 0x62b80a  movz        $s7, $v1, $v0
    ctx->pc = 0x336364u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 23, GPR_VEC(ctx, 3));
    // 0x336368: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x336368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x33636c: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x33636cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x336370: 0x2e20018  mult        $zero, $s7, $v0
    ctx->pc = 0x336370u;
    { int64_t result = (int64_t)GPR_S32(ctx, 23) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x336374: 0x771823  subu        $v1, $v1, $s7
    ctx->pc = 0x336374u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 23)));
    // 0x336378: 0x2812  mflo        $a1
    ctx->pc = 0x336378u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x33637c: 0xc10a322  jal         func_428C88
    ctx->pc = 0x33637Cu;
    SET_GPR_U32(ctx, 31, 0x336384u);
    ctx->pc = 0x336380u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33637Cu;
    // 0x336380: 0xafa3000c  sw          $v1, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x428C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x428C88u, 0x33637Cu, 0x336384u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336384u;
label_336384:
    // 0x336384: 0x7ba800e0  lq          $t0, 0xE0($sp)
    ctx->pc = 0x336384u;
    SET_GPR_VEC(ctx, 8, READ128(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x336388: 0x8f87be20  lw          $a3, -0x41E0($gp)
    ctx->pc = 0x336388u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x33638c: 0x0  nop
    ctx->pc = 0x33638cu;
    // NOP
label_336390:
    // 0x336390: 0x7ba40020  lq          $a0, 0x20($sp)
    ctx->pc = 0x336390u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x336394: 0x7ce40000  sq          $a0, 0x0($a3)
    ctx->pc = 0x336394u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 4));
    // 0x336398: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x336398u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x33639c: 0x7cfe0000  sq          $fp, 0x0($a3)
    ctx->pc = 0x33639cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 30));
    // 0x3363a0: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x3363a0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3363a4: 0x10a0003c  beqz        $a1, . + 4 + (0x3C << 2)
    ctx->pc = 0x3363A4u;
    {
        const bool branch_taken_0x3363a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3363A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3363A4u;
        // 0x3363a8: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3363a4) {
            ctx->pc = 0x336498u;
            goto label_336498;
        }
    }
    ctx->pc = 0x3363ACu;
    // 0x3363ac: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x3363acu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3363b0: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x3363b0u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x3363b4: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x3363b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x3363b8: 0x7a020010  lq          $v0, 0x10($s0)
    ctx->pc = 0x3363b8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x3363bc: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x3363bcu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x3363c0: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x3363c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x3363c4: 0x7a020020  lq          $v0, 0x20($s0)
    ctx->pc = 0x3363c4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x3363c8: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x3363c8u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x3363cc: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x3363ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x3363d0: 0x7a020030  lq          $v0, 0x30($s0)
    ctx->pc = 0x3363d0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x3363d4: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x3363d4u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x3363d8: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x3363d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x3363dc: 0x7a020040  lq          $v0, 0x40($s0)
    ctx->pc = 0x3363dcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x3363e0: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x3363e0u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x3363e4: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x3363e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x3363e8: 0x7a020050  lq          $v0, 0x50($s0)
    ctx->pc = 0x3363e8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x3363ec: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x3363ecu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x3363f0: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x3363f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x3363f4: 0x7cf60000  sq          $s6, 0x0($a3)
    ctx->pc = 0x3363f4u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 22));
    // 0x3363f8: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x3363f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x3363fc: 0x8e630108  lw          $v1, 0x108($s3)
    ctx->pc = 0x3363fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 264)));
    // 0x336400: 0x24640050  addiu       $a0, $v1, 0x50
    ctx->pc = 0x336400u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x336404: 0x78620050  lq          $v0, 0x50($v1)
    ctx->pc = 0x336404u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x336408: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x336408u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x33640c: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x33640cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x336410: 0x78820010  lq          $v0, 0x10($a0)
    ctx->pc = 0x336410u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x336414: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x336414u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x336418: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x336418u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x33641c: 0x78820020  lq          $v0, 0x20($a0)
    ctx->pc = 0x33641cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x336420: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x336420u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x336424: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x336424u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x336428: 0xdc830030  ld          $v1, 0x30($a0)
    ctx->pc = 0x336428u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x33642c: 0x9c820038  lwu         $v0, 0x38($a0)
    ctx->pc = 0x33642cu;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x336430: 0x70431389  pcpyld      $v0, $v0, $v1
    ctx->pc = 0x336430u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x336434: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x336434u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x336438: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x336438u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x33643c: 0x26a5001c  addiu       $a1, $s5, 0x1C
    ctx->pc = 0x33643cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 28));
    // 0x336440: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x336440u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x336444: 0x34c60001  ori         $a2, $a2, 0x1
    ctx->pc = 0x336444u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1);
    // 0x336448: 0x3c026c01  lui         $v0, 0x6C01
    ctx->pc = 0x336448u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27649 << 16));
    // 0x33644c: 0x34420345  ori         $v0, $v0, 0x345
    ctx->pc = 0x33644cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)837);
    // 0x336450: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x336450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x336454: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x336454u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x336458: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x336458u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x33645c: 0x34420404  ori         $v0, $v0, 0x404
    ctx->pc = 0x33645cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x336460: 0x70461389  pcpyld      $v0, $v0, $a2
    ctx->pc = 0x336460u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x336464: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x336464u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x336468: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x336468u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x33646c: 0x9ca60004  lwu         $a2, 0x4($a1)
    ctx->pc = 0x33646cu;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x336470: 0x9ca2000c  lwu         $v0, 0xC($a1)
    ctx->pc = 0x336470u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x336474: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x336474u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x336478: 0x9ea3001c  lwu         $v1, 0x1C($s5)
    ctx->pc = 0x336478u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x33647c: 0x9ca40008  lwu         $a0, 0x8($a1)
    ctx->pc = 0x33647cu;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x336480: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x336480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x336484: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x336484u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x336488: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x336488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x33648c: 0x70461389  pcpyld      $v0, $v0, $a2
    ctx->pc = 0x33648cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x336490: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x336490u;
    {
        const bool branch_taken_0x336490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x336494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336490u;
        // 0x336494: 0x7ce20000  sq          $v0, 0x0($a3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336490) {
            ctx->pc = 0x336520u;
            goto label_336520;
        }
    }
    ctx->pc = 0x336498u;
label_336498:
    // 0x336498: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x336498u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x33649c: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x33649cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x3364a0: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x3364a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x3364a4: 0x7a220010  lq          $v0, 0x10($s1)
    ctx->pc = 0x3364a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x3364a8: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x3364a8u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x3364ac: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x3364acu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x3364b0: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x3364b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x3364b4: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x3364b4u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x3364b8: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x3364b8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x3364bc: 0x7a220030  lq          $v0, 0x30($s1)
    ctx->pc = 0x3364bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x3364c0: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x3364c0u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x3364c4: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x3364c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x3364c8: 0x7a220040  lq          $v0, 0x40($s1)
    ctx->pc = 0x3364c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x3364cc: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x3364ccu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x3364d0: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x3364d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x3364d4: 0x7a220050  lq          $v0, 0x50($s1)
    ctx->pc = 0x3364d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x3364d8: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x3364d8u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x3364dc: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x3364dcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x3364e0: 0x7cf60000  sq          $s6, 0x0($a3)
    ctx->pc = 0x3364e0u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 22));
    // 0x3364e4: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x3364e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x3364e8: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x3364e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x3364ec: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x3364ecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3364f0: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x3364f0u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x3364f4: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x3364f4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x3364f8: 0x78820010  lq          $v0, 0x10($a0)
    ctx->pc = 0x3364f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3364fc: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x3364fcu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x336500: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x336500u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x336504: 0x78820020  lq          $v0, 0x20($a0)
    ctx->pc = 0x336504u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x336508: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x336508u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x33650c: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x33650cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x336510: 0xdc830030  ld          $v1, 0x30($a0)
    ctx->pc = 0x336510u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x336514: 0x9c820038  lwu         $v0, 0x38($a0)
    ctx->pc = 0x336514u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x336518: 0x70431389  pcpyld      $v0, $v0, $v1
    ctx->pc = 0x336518u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x33651c: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x33651cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
label_336520:
    // 0x336520: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x336520u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x336524: 0xaf87be20  sw          $a3, -0x41E0($gp)
    ctx->pc = 0x336524u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 7));
    // 0x336528: 0x92820028  lbu         $v0, 0x28($s4)
    ctx->pc = 0x336528u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 40)));
    // 0x33652c: 0x3c046c03  lui         $a0, 0x6C03
    ctx->pc = 0x33652cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)27651 << 16));
    // 0x336530: 0x348403fd  ori         $a0, $a0, 0x3FD
    ctx->pc = 0x336530u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1021);
    // 0x336534: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x336534u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x336538: 0x34840100  ori         $a0, $a0, 0x100
    ctx->pc = 0x336538u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
    // 0x33653c: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x33653cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x336540: 0x34840404  ori         $a0, $a0, 0x404
    ctx->pc = 0x336540u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1028);
    // 0x336544: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x336544u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336548: 0x30450007  andi        $a1, $v0, 0x7
    ctx->pc = 0x336548u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x33654c: 0x70861389  pcpyld      $v0, $a0, $a2
    ctx->pc = 0x33654cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 6)));
    // 0x336550: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x336550u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x336554: 0x24e20010  addiu       $v0, $a3, 0x10
    ctx->pc = 0x336554u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x336558: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x336558u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x33655c: 0x8f83aee0  lw          $v1, -0x5120($gp)
    ctx->pc = 0x33655cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946528)));
    // 0x336560: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x336560u;
    {
        const bool branch_taken_0x336560 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x336564u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336560u;
        // 0x336564: 0x30a20004  andi        $v0, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x336560) {
            ctx->pc = 0x336570u;
            goto label_336570;
        }
    }
    ctx->pc = 0x336568u;
    // 0x336568: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x336568u;
    {
        const bool branch_taken_0x336568 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x336568) {
            ctx->pc = 0x33656Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x336568u;
            // 0x33656c: 0x34a50008  ori         $a1, $a1, 0x8 (Delay Slot)
            SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x336588u;
            goto label_336588;
        }
    }
    ctx->pc = 0x336570u;
label_336570:
    // 0x336570: 0x8f82aee4  lw          $v0, -0x511C($gp)
    ctx->pc = 0x336570u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946532)));
    // 0x336574: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x336574u;
    {
        const bool branch_taken_0x336574 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x336578u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336574u;
        // 0x336578: 0x30a20004  andi        $v0, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x336574) {
            ctx->pc = 0x3365B0u;
            goto label_3365b0;
        }
    }
    ctx->pc = 0x33657Cu;
    // 0x33657c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x33657Cu;
    {
        const bool branch_taken_0x33657c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x336580u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33657Cu;
        // 0x336580: 0x3c04005e  lui         $a0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33657c) {
            ctx->pc = 0x3365B8u;
            goto label_3365b8;
        }
    }
    ctx->pc = 0x336584u;
    // 0x336584: 0x34a50008  ori         $a1, $a1, 0x8
    ctx->pc = 0x336584u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8);
label_336588:
    // 0x336588: 0x8f82be20  lw          $v0, -0x41E0($gp)
    ctx->pc = 0x336588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x33658c: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x33658cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x336590: 0x2484d670  addiu       $a0, $a0, -0x2990
    ctx->pc = 0x336590u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956656));
    // 0x336594: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x336594u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x5DD670u));
    // 0x336598: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x336598u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x33659c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x33659cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x3365a0: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x3365a0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x3365a4: 0x3c06005e  lui         $a2, 0x5E
    ctx->pc = 0x3365a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)94 << 16));
    // 0x3365a8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3365A8u;
    {
        const bool branch_taken_0x3365a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3365ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3365A8u;
        // 0x3365ac: 0x24c6d680  addiu       $a2, $a2, -0x2980 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956672));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3365a8) {
            ctx->pc = 0x3365D8u;
            goto label_3365d8;
        }
    }
    ctx->pc = 0x3365B0u;
label_3365b0:
    // 0x3365b0: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x3365b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x3365b4: 0x0  nop
    ctx->pc = 0x3365b4u;
    // NOP
label_3365b8:
    // 0x3365b8: 0x8f82be20  lw          $v0, -0x41E0($gp)
    ctx->pc = 0x3365b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x3365bc: 0x2484d650  addiu       $a0, $a0, -0x29B0
    ctx->pc = 0x3365bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956624));
    // 0x3365c0: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x3365c0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3365c4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x3365c4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x3365c8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x3365c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x3365cc: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x3365ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x3365d0: 0x3c06005e  lui         $a2, 0x5E
    ctx->pc = 0x3365d0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)94 << 16));
    // 0x3365d4: 0x24c6d660  addiu       $a2, $a2, -0x29A0
    ctx->pc = 0x3365d4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956640));
label_3365d8:
    // 0x3365d8: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x3365d8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3365dc: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x3365dcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x3365e0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x3365e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x3365e4: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x3365e4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x3365e8: 0x8f82becc  lw          $v0, -0x4134($gp)
    ctx->pc = 0x3365e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950604)));
    // 0x3365ec: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3365ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3365f0: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3365F0u;
    {
        const bool branch_taken_0x3365f0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3365F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3365F0u;
        // 0x3365f4: 0xaf80aed8  sw          $zero, -0x5128($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294946520), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3365f0) {
            ctx->pc = 0x336600u;
            goto label_336600;
        }
    }
    ctx->pc = 0x3365F8u;
    // 0x3365f8: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x3365f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3365fc: 0xaf84aed8  sw          $a0, -0x5128($gp)
    ctx->pc = 0x3365fcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946520), GPR_U32(ctx, 4));
label_336600:
    // 0x336600: 0x9f82aedc  lwu         $v0, -0x5124($gp)
    ctx->pc = 0x336600u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294946524)));
    // 0x336604: 0x5183c  dsll32      $v1, $a1, 0
    ctx->pc = 0x336604u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
    // 0x336608: 0x9f84aed8  lwu         $a0, -0x5128($gp)
    ctx->pc = 0x336608u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294946520)));
    // 0x33660c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x33660cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x336610: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x336610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x336614: 0x442025  or          $a0, $v0, $a0
    ctx->pc = 0x336614u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x336618: 0x70831389  pcpyld      $v0, $a0, $v1
    ctx->pc = 0x336618u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x33661c: 0x8f85be20  lw          $a1, -0x41E0($gp)
    ctx->pc = 0x33661cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x336620: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x336620u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x336624: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x336624u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x336628: 0xaf85be20  sw          $a1, -0x41E0($gp)
    ctx->pc = 0x336628u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 5));
    // 0x33662c: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x33662cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x336630: 0x10c00013  beqz        $a2, . + 4 + (0x13 << 2)
    ctx->pc = 0x336630u;
    {
        const bool branch_taken_0x336630 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x336634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336630u;
        // 0x336634: 0x8fa60060  lw          $a2, 0x60($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336630) {
            ctx->pc = 0x336680u;
            goto label_336680;
        }
    }
    ctx->pc = 0x336638u;
    // 0x336638: 0x310200ff  andi        $v0, $t0, 0xFF
    ctx->pc = 0x336638u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x33663c: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x33663cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x336640: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x336640u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x336644: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x336644u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x336648: 0x1032025  or          $a0, $t0, $v1
    ctx->pc = 0x336648u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) | GPR_U64(ctx, 3));
    // 0x33664c: 0x8fa60050  lw          $a2, 0x50($sp)
    ctx->pc = 0x33664cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x336650: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x336650u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x336654: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x336654u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x336658: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x336658u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x33665c: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x33665cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
    // 0x336660: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x336660u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x336664: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x336664u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x336668: 0x34840404  ori         $a0, $a0, 0x404
    ctx->pc = 0x336668u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1028);
    // 0x33666c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x33666cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x336670: 0x70431389  pcpyld      $v0, $v0, $v1
    ctx->pc = 0x336670u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x336674: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x336674u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x336678: 0x24a30010  addiu       $v1, $a1, 0x10
    ctx->pc = 0x336678u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x33667c: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x33667cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_336680:
    // 0x336680: 0x8f82be20  lw          $v0, -0x41E0($gp)
    ctx->pc = 0x336680u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x336684: 0x7ba50030  lq          $a1, 0x30($sp)
    ctx->pc = 0x336684u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x336688: 0x7c450000  sq          $a1, 0x0($v0)
    ctx->pc = 0x336688u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 5));
    // 0x33668c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x33668cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x336690: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x336690u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x336694: 0x8fa60018  lw          $a2, 0x18($sp)
    ctx->pc = 0x336694u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x336698: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x336698u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x33669c: 0xafa60018  sw          $a2, 0x18($sp)
    ctx->pc = 0x33669cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 6));
label_3366a0:
    // 0x3366a0: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x3366a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3366a4: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x3366a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x3366a8: 0x8fa500cc  lw          $a1, 0xCC($sp)
    ctx->pc = 0x3366a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 204)));
    // 0x3366ac: 0x8fa600d0  lw          $a2, 0xD0($sp)
    ctx->pc = 0x3366acu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x3366b0: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x3366b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x3366b4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3366b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3366b8: 0x24a50070  addiu       $a1, $a1, 0x70
    ctx->pc = 0x3366b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
    // 0x3366bc: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x3366bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x3366c0: 0xafa40004  sw          $a0, 0x4($sp)
    ctx->pc = 0x3366c0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 4));
    // 0x3366c4: 0xafa500cc  sw          $a1, 0xCC($sp)
    ctx->pc = 0x3366c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 204), GPR_U32(ctx, 5));
    // 0x3366c8: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x3366c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3366cc: 0x1440fef6  bnez        $v0, . + 4 + (-0x10A << 2)
    ctx->pc = 0x3366CCu;
    {
        const bool branch_taken_0x3366cc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3366D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3366CCu;
        // 0x3366d0: 0xafa600d0  sw          $a2, 0xD0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3366cc) {
            ctx->pc = 0x3362A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3362a8;
        }
    }
    ctx->pc = 0x3366D4u;
label_3366d4:
    // 0x3366d4: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x3366d4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_3366d8:
    // 0x3366d8: 0x42000039  di
    ctx->pc = 0x3366d8u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x3366dc: 0x40f  sync.p
    ctx->pc = 0x3366dcu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3366e0: 0x40036000  mfc0        $v1, Status
    ctx->pc = 0x3366e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_status);
    // 0x3366e4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3366e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3366e8: 0x0  nop
    ctx->pc = 0x3366e8u;
    // NOP
    // 0x3366ec: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3366ECu;
    {
        const bool branch_taken_0x3366ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3366ec) {
            ctx->pc = 0x3366D8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3366d8;
        }
    }
    ctx->pc = 0x3366F4u;
    // 0x3366f4: 0x8fa40014  lw          $a0, 0x14($sp)
    ctx->pc = 0x3366f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x3366f8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3366f8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3366fc: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3366fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x336700: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x336700u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x336704: 0x42000038  ei
    ctx->pc = 0x336704u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x336708: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x336708u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x33670c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33670cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x336710: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x336710u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x336714: 0x1443028f  bne         $v0, $v1, . + 4 + (0x28F << 2)
    ctx->pc = 0x336714u;
    {
        const bool branch_taken_0x336714 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x336718u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336714u;
        // 0x336718: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336714) {
            ctx->pc = 0x337154u;
            goto label_337154;
        }
    }
    ctx->pc = 0x33671Cu;
    // 0x33671c: 0xc10a762  jal         func_429D88
    ctx->pc = 0x33671Cu;
    SET_GPR_U32(ctx, 31, 0x336724u);
    ctx->pc = 0x336720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33671Cu;
    // 0x336720: 0x8fa40014  lw          $a0, 0x14($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x429D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x429D88u, 0x33671Cu, 0x336724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336724u;
label_336724:
    // 0x336724: 0x1000028c  b           . + 4 + (0x28C << 2)
    ctx->pc = 0x336724u;
    {
        const bool branch_taken_0x336724 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x336728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336724u;
        // 0x336728: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336724) {
            ctx->pc = 0x337158u;
            goto label_337158;
        }
    }
    ctx->pc = 0x33672Cu;
    // 0x33672c: 0x0  nop
    ctx->pc = 0x33672cu;
    // NOP
label_336730:
    // 0x336730: 0xafa50064  sw          $a1, 0x64($sp)
    ctx->pc = 0x336730u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 5));
    // 0x336734: 0x3c036c06  lui         $v1, 0x6C06
    ctx->pc = 0x336734u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27654 << 16));
    // 0x336738: 0x346303d9  ori         $v1, $v1, 0x3D9
    ctx->pc = 0x336738u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)985);
    // 0x33673c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x33673cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x336740: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x336740u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x336744: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x336744u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x336748: 0x34630404  ori         $v1, $v1, 0x404
    ctx->pc = 0x336748u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1028);
    // 0x33674c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x33674cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336750: 0x70641389  pcpyld      $v0, $v1, $a0
    ctx->pc = 0x336750u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x336754: 0x7fa20070  sq          $v0, 0x70($sp)
    ctx->pc = 0x336754u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 2));
    // 0x336758: 0x3c026c04  lui         $v0, 0x6C04
    ctx->pc = 0x336758u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27652 << 16));
    // 0x33675c: 0x344203df  ori         $v0, $v0, 0x3DF
    ctx->pc = 0x33675cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)991);
    // 0x336760: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x336760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x336764: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x336764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x336768: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x336768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x33676c: 0x34420404  ori         $v0, $v0, 0x404
    ctx->pc = 0x33676cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x336770: 0x7044b389  pcpyld      $s6, $v0, $a0
    ctx->pc = 0x336770u;
    SET_GPR_VEC(ctx, 22, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x336774: 0x8fa40008  lw          $a0, 0x8($sp)
    ctx->pc = 0x336774u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x336778: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x336778u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33677c: 0x10600275  beqz        $v1, . + 4 + (0x275 << 2)
    ctx->pc = 0x33677Cu;
    {
        const bool branch_taken_0x33677c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x336780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33677Cu;
        // 0x336780: 0xafa00004  sw          $zero, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33677c) {
            ctx->pc = 0x337154u;
            goto label_337154;
        }
    }
    ctx->pc = 0x336784u;
    // 0x336784: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x336784u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336788: 0x3c026c01  lui         $v0, 0x6C01
    ctx->pc = 0x336788u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27649 << 16));
    // 0x33678c: 0x344203fb  ori         $v0, $v0, 0x3FB
    ctx->pc = 0x33678cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1019);
    // 0x336790: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x336790u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x336794: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x336794u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x336798: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x336798u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x33679c: 0x34420404  ori         $v0, $v0, 0x404
    ctx->pc = 0x33679cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x3367a0: 0x3c036c01  lui         $v1, 0x6C01
    ctx->pc = 0x3367a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27649 << 16));
    // 0x3367a4: 0x346303fc  ori         $v1, $v1, 0x3FC
    ctx->pc = 0x3367a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1020);
    // 0x3367a8: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x3367a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x3367ac: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x3367acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x3367b0: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x3367b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x3367b4: 0x34630404  ori         $v1, $v1, 0x404
    ctx->pc = 0x3367b4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1028);
    // 0x3367b8: 0x70572b89  pcpyld      $a1, $v0, $s7
    ctx->pc = 0x3367b8u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 23)));
    // 0x3367bc: 0x70771389  pcpyld      $v0, $v1, $s7
    ctx->pc = 0x3367bcu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 23)));
    // 0x3367c0: 0x7fa50090  sq          $a1, 0x90($sp)
    ctx->pc = 0x3367c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 5));
    // 0x3367c4: 0x3c036c00  lui         $v1, 0x6C00
    ctx->pc = 0x3367c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27648 << 16));
    // 0x3367c8: 0x7fa200a0  sq          $v0, 0xA0($sp)
    ctx->pc = 0x3367c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 2));
    // 0x3367cc: 0x34630346  ori         $v1, $v1, 0x346
    ctx->pc = 0x3367ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)838);
    // 0x3367d0: 0xc7958434  lwc1        $f21, -0x7BCC($gp)
    ctx->pc = 0x3367d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x3367d4: 0xc7948240  lwc1        $f20, -0x7DC0($gp)
    ctx->pc = 0x3367d4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x3367d8: 0x280f02d  daddu       $fp, $s4, $zero
    ctx->pc = 0x3367d8u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3367dc: 0xafa300c0  sw          $v1, 0xC0($sp)
    ctx->pc = 0x3367dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 3));
    // 0x3367e0: 0xafa000c4  sw          $zero, 0xC4($sp)
    ctx->pc = 0x3367e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 0));
    // 0x3367e4: 0xafa000c8  sw          $zero, 0xC8($sp)
    ctx->pc = 0x3367e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 0));
label_3367e8:
    // 0x3367e8: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x3367e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3367ec: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3367ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3367f0: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3367F0u;
    {
        const bool branch_taken_0x3367f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3367F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3367F0u;
        // 0x3367f4: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3367f0) {
            ctx->pc = 0x336810u;
            goto label_336810;
        }
    }
    ctx->pc = 0x3367F8u;
    // 0x3367f8: 0x8fa50008  lw          $a1, 0x8($sp)
    ctx->pc = 0x3367f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x3367fc: 0x8fa600c8  lw          $a2, 0xC8($sp)
    ctx->pc = 0x3367fcu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x336800: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x336800u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x336804: 0x468021  addu        $s0, $v0, $a2
    ctx->pc = 0x336804u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x336808: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x336808u;
    {
        const bool branch_taken_0x336808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33680Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336808u;
        // 0x33680c: 0x8e120000  lw          $s2, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336808) {
            ctx->pc = 0x336824u;
            goto label_336824;
        }
    }
    ctx->pc = 0x336810u;
label_336810:
    // 0x336810: 0x8fa30008  lw          $v1, 0x8($sp)
    ctx->pc = 0x336810u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x336814: 0x8fa400c4  lw          $a0, 0xC4($sp)
    ctx->pc = 0x336814u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x336818: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x336818u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x33681c: 0x449821  addu        $s3, $v0, $a0
    ctx->pc = 0x33681cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x336820: 0x8e72006c  lw          $s2, 0x6C($s3)
    ctx->pc = 0x336820u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 108)));
label_336824:
    // 0x336824: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x336824u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x336828: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x336828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x33682c: 0x1040023c  beqz        $v0, . + 4 + (0x23C << 2)
    ctx->pc = 0x33682Cu;
    {
        const bool branch_taken_0x33682c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x336830u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33682Cu;
        // 0x336830: 0x8fa50010  lw          $a1, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33682c) {
            ctx->pc = 0x337120u;
            goto label_337120;
        }
    }
    ctx->pc = 0x336834u;
    // 0x336834: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x336834u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336838: 0x10a00012  beqz        $a1, . + 4 + (0x12 << 2)
    ctx->pc = 0x336838u;
    {
        const bool branch_taken_0x336838 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x33683Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336838u;
        // 0x33683c: 0xafa00080  sw          $zero, 0x80($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336838) {
            ctx->pc = 0x336884u;
            goto label_336884;
        }
    }
    ctx->pc = 0x336840u;
    // 0x336840: 0x8fa60000  lw          $a2, 0x0($sp)
    ctx->pc = 0x336840u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x336844: 0xc0de61a  jal         func_379868
    ctx->pc = 0x336844u;
    SET_GPR_U32(ctx, 31, 0x33684Cu);
    ctx->pc = 0x336848u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336844u;
    // 0x336848: 0x8cc40018  lw          $a0, 0x18($a2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x379868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x379868u, 0x336844u, 0x33684Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33684Cu;
label_33684c:
    // 0x33684c: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x33684cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336850: 0xc0de646  jal         func_379918
    ctx->pc = 0x336850u;
    SET_GPR_U32(ctx, 31, 0x336858u);
    ctx->pc = 0x336854u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336850u;
    // 0x336854: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x379918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x379918u, 0x336850u, 0x336858u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336858u;
label_336858:
    // 0x336858: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x336858u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x33685c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x33685cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x336860: 0xafa20080  sw          $v0, 0x80($sp)
    ctx->pc = 0x336860u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
    // 0x336864: 0x92020004  lbu         $v0, 0x4($s0)
    ctx->pc = 0x336864u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x336868: 0x8c63010c  lw          $v1, 0x10C($v1)
    ctx->pc = 0x336868u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
    // 0x33686c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x33686Cu;
    {
        const bool branch_taken_0x33686c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x336870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33686Cu;
        // 0x336870: 0xafa300b0  sw          $v1, 0xB0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33686c) {
            ctx->pc = 0x336888u;
            goto label_336888;
        }
    }
    ctx->pc = 0x336874u;
label_336874:
    // 0x336874: 0xdf82ae48  ld          $v0, -0x51B8($gp)
    ctx->pc = 0x336874u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946376)));
    // 0x336878: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x336878u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33687c: 0x10000059  b           . + 4 + (0x59 << 2)
    ctx->pc = 0x33687Cu;
    {
        const bool branch_taken_0x33687c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x336880u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33687Cu;
        // 0x336880: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33687c) {
            ctx->pc = 0x3369E4u;
            goto label_3369e4;
        }
    }
    ctx->pc = 0x336884u;
label_336884:
    // 0x336884: 0x92620060  lbu         $v0, 0x60($s3)
    ctx->pc = 0x336884u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 96)));
label_336888:
    // 0x336888: 0xa2820028  sb          $v0, 0x28($s4)
    ctx->pc = 0x336888u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 40), (uint8_t)GPR_U32(ctx, 2));
    // 0x33688c: 0x8e4200d8  lw          $v0, 0xD8($s2)
    ctx->pc = 0x33688cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
    // 0x336890: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x336890u;
    {
        const bool branch_taken_0x336890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x336894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336890u;
        // 0x336894: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336890) {
            ctx->pc = 0x3369E8u;
            goto label_3369e8;
        }
    }
    ctx->pc = 0x336898u;
    // 0x336898: 0x8e82002c  lw          $v0, 0x2C($s4)
    ctx->pc = 0x336898u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
    // 0x33689c: 0xc0dfea2  jal         func_37FA88
    ctx->pc = 0x33689Cu;
    SET_GPR_U32(ctx, 31, 0x3368A4u);
    ctx->pc = 0x3368A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33689Cu;
    // 0x3368a0: 0x8c440008  lw          $a0, 0x8($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37FA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37FA88u, 0x33689Cu, 0x3368A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3368A4u;
label_3368a4:
    // 0x3368a4: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3368A4u;
    {
        const bool branch_taken_0x3368a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3368A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3368A4u;
        // 0x3368a8: 0xae820040  sw          $v0, 0x40($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 64), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3368a4) {
            ctx->pc = 0x3368B8u;
            goto label_3368b8;
        }
    }
    ctx->pc = 0x3368ACu;
    // 0x3368ac: 0xc110e98  jal         func_443A60
    ctx->pc = 0x3368ACu;
    SET_GPR_U32(ctx, 31, 0x3368B4u);
    ctx->pc = 0x3368B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3368ACu;
    // 0x3368b0: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x443A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443A60u, 0x3368ACu, 0x3368B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3368B4u;
label_3368b4:
    // 0x3368b4: 0x0  nop
    ctx->pc = 0x3368b4u;
    // NOP
label_3368b8:
    // 0x3368b8: 0x8e900040  lw          $s0, 0x40($s4)
    ctx->pc = 0x3368b8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
    // 0x3368bc: 0x12000002  beqz        $s0, . + 4 + (0x2 << 2)
    ctx->pc = 0x3368BCu;
    {
        const bool branch_taken_0x3368bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3368C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3368BCu;
        // 0x3368c0: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3368bc) {
            ctx->pc = 0x3368C8u;
            goto label_3368c8;
        }
    }
    ctx->pc = 0x3368C4u;
    // 0x3368c4: 0x8e110000  lw          $s1, 0x0($s0)
    ctx->pc = 0x3368c4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_3368c8:
    // 0x3368c8: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3368C8u;
    {
        const bool branch_taken_0x3368c8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x3368CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3368C8u;
        // 0x3368cc: 0xaf80bec4  sw          $zero, -0x413C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950596), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3368c8) {
            ctx->pc = 0x3368F0u;
            goto label_3368f0;
        }
    }
    ctx->pc = 0x3368D0u;
    // 0x3368d0: 0x92220023  lbu         $v0, 0x23($s1)
    ctx->pc = 0x3368d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 35)));
    // 0x3368d4: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x3368d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x3368d8: 0x38430005  xori        $v1, $v0, 0x5
    ctx->pc = 0x3368d8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)5);
    // 0x3368dc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x3368dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
    // 0x3368e0: 0x2c630001  sltiu       $v1, $v1, 0x1
    ctx->pc = 0x3368e0u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3368e4: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x3368e4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x3368e8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3368e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3368ec: 0xaf82bec4  sw          $v0, -0x413C($gp)
    ctx->pc = 0x3368ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950596), GPR_U32(ctx, 2));
label_3368f0:
    // 0x3368f0: 0x8f82bec0  lw          $v0, -0x4140($gp)
    ctx->pc = 0x3368f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950592)));
    // 0x3368f4: 0x12220037  beq         $s1, $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x3368F4u;
    {
        const bool branch_taken_0x3368f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 2));
        ctx->pc = 0x3368F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3368F4u;
        // 0x3368f8: 0x8f82bec4  lw          $v0, -0x413C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950596)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3368f4) {
            ctx->pc = 0x3369D4u;
            goto label_3369d4;
        }
    }
    ctx->pc = 0x3368FCu;
    // 0x3368fc: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3368FCu;
    {
        const bool branch_taken_0x3368fc = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x336900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3368FCu;
        // 0x336900: 0xdf82ae80  ld          $v0, -0x5180($gp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3368fc) {
            ctx->pc = 0x336924u;
            goto label_336924;
        }
    }
    ctx->pc = 0x336904u;
    // 0x336904: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x336904u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x336908: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x336908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33690c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x33690cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336910: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x336910u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x336914: 0xc110b7e  jal         func_442DF8
    ctx->pc = 0x336914u;
    SET_GPR_U32(ctx, 31, 0x33691Cu);
    ctx->pc = 0x336918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336914u;
    // 0x336918: 0xff82ae80  sd          $v0, -0x5180($gp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946432), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x442DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x442DF8u, 0x336914u, 0x33691Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33691Cu;
label_33691c:
    // 0x33691c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x33691Cu;
    {
        const bool branch_taken_0x33691c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x336920u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33691Cu;
        // 0x336920: 0xaf91bec0  sw          $s1, -0x4140($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950592), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33691c) {
            ctx->pc = 0x336934u;
            goto label_336934;
        }
    }
    ctx->pc = 0x336924u;
label_336924:
    // 0x336924: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x336924u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x336928: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x336928u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x33692c: 0xff82ae80  sd          $v0, -0x5180($gp)
    ctx->pc = 0x33692cu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946432), GPR_U64(ctx, 2));
    // 0x336930: 0xaf91bec0  sw          $s1, -0x4140($gp)
    ctx->pc = 0x336930u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950592), GPR_U32(ctx, 17));
label_336934:
    // 0x336934: 0x12000026  beqz        $s0, . + 4 + (0x26 << 2)
    ctx->pc = 0x336934u;
    {
        const bool branch_taken_0x336934 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x336938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336934u;
        // 0x336938: 0x2405fe1f  addiu       $a1, $zero, -0x1E1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966815));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336934) {
            ctx->pc = 0x3369D0u;
            goto label_3369d0;
        }
    }
    ctx->pc = 0x33693Cu;
    // 0x33693c: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x33693cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x336940: 0xdf82ae68  ld          $v0, -0x5198($gp)
    ctx->pc = 0x336940u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946408)));
    // 0x336944: 0x308300ff  andi        $v1, $a0, 0xFF
    ctx->pc = 0x336944u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x336948: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x336948u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
    // 0x33694c: 0x34010006  ori         $at, $zero, 0x6
    ctx->pc = 0x33694cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)6);
    // 0x336950: 0x5023000e  beql        $at, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x336950u;
    {
        const bool branch_taken_0x336950 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 3));
        if (branch_taken_0x336950) {
            ctx->pc = 0x336954u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x336950u;
            // 0x336954: 0x34420160  ori         $v0, $v0, 0x160 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)352);
            ctx->in_delay_slot = false;
            ctx->pc = 0x33698Cu;
            goto label_33698c;
        }
    }
    ctx->pc = 0x336958u;
    // 0x336958: 0x34010005  ori         $at, $zero, 0x5
    ctx->pc = 0x336958u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)5);
    // 0x33695c: 0x5023000b  beql        $at, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x33695Cu;
    {
        const bool branch_taken_0x33695c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 3));
        if (branch_taken_0x33695c) {
            ctx->pc = 0x336960u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33695Cu;
            // 0x336960: 0x344200c0  ori         $v0, $v0, 0xC0 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)192);
            ctx->in_delay_slot = false;
            ctx->pc = 0x33698Cu;
            goto label_33698c;
        }
    }
    ctx->pc = 0x336964u;
    // 0x336964: 0x34010004  ori         $at, $zero, 0x4
    ctx->pc = 0x336964u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)4);
    // 0x336968: 0x50230008  beql        $at, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x336968u;
    {
        const bool branch_taken_0x336968 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 3));
        if (branch_taken_0x336968) {
            ctx->pc = 0x33696Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x336968u;
            // 0x33696c: 0x34420120  ori         $v0, $v0, 0x120 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)288);
            ctx->in_delay_slot = false;
            ctx->pc = 0x33698Cu;
            goto label_33698c;
        }
    }
    ctx->pc = 0x336970u;
    // 0x336970: 0x34010003  ori         $at, $zero, 0x3
    ctx->pc = 0x336970u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)3);
    // 0x336974: 0x50230005  beql        $at, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x336974u;
    {
        const bool branch_taken_0x336974 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 3));
        if (branch_taken_0x336974) {
            ctx->pc = 0x336978u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x336974u;
            // 0x336978: 0x34420080  ori         $v0, $v0, 0x80 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
            ctx->in_delay_slot = false;
            ctx->pc = 0x33698Cu;
            goto label_33698c;
        }
    }
    ctx->pc = 0x33697Cu;
    // 0x33697c: 0x34010002  ori         $at, $zero, 0x2
    ctx->pc = 0x33697cu;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)2);
    // 0x336980: 0x50230002  beql        $at, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x336980u;
    {
        const bool branch_taken_0x336980 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 3));
        if (branch_taken_0x336980) {
            ctx->pc = 0x336984u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x336980u;
            // 0x336984: 0x34420060  ori         $v0, $v0, 0x60 (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)96);
            ctx->in_delay_slot = false;
            ctx->pc = 0x33698Cu;
            goto label_33698c;
        }
    }
    ctx->pc = 0x336988u;
    // 0x336988: 0x34420000  ori         $v0, $v0, 0x0
    ctx->pc = 0x336988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)0);
label_33698c:
    // 0x33698c: 0x0  nop
    ctx->pc = 0x33698cu;
    // NOP
    // 0x336990: 0xff82ae68  sd          $v0, -0x5198($gp)
    ctx->pc = 0x336990u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946408), GPR_U64(ctx, 2));
    // 0x336994: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x336994u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x336998: 0x30820f00  andi        $v0, $a0, 0xF00
    ctx->pc = 0x336998u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3840);
    // 0x33699c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x33699cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x3369a0: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3369A0u;
    {
        const bool branch_taken_0x3369a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3369A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3369A0u;
        // 0x3369a4: 0xff80ae60  sd          $zero, -0x51A0($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294946400), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3369a0) {
            ctx->pc = 0x3369B0u;
            goto label_3369b0;
        }
    }
    ctx->pc = 0x3369A8u;
    // 0x3369a8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x3369a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3369ac: 0xff86ae60  sd          $a2, -0x51A0($gp)
    ctx->pc = 0x3369acu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946400), GPR_U64(ctx, 6));
label_3369b0:
    // 0x3369b0: 0x3082f000  andi        $v0, $a0, 0xF000
    ctx->pc = 0x3369b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)61440);
    // 0x3369b4: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x3369b4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x3369b8: 0x14430006  bne         $v0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3369B8u;
    {
        const bool branch_taken_0x3369b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3369BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3369B8u;
        // 0x3369bc: 0x8f82bec4  lw          $v0, -0x413C($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950596)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3369b8) {
            ctx->pc = 0x3369D4u;
            goto label_3369d4;
        }
    }
    ctx->pc = 0x3369C0u;
    // 0x3369c0: 0xdf82ae60  ld          $v0, -0x51A0($gp)
    ctx->pc = 0x3369c0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946400)));
    // 0x3369c4: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x3369c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3369c8: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3369c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3369cc: 0xff82ae60  sd          $v0, -0x51A0($gp)
    ctx->pc = 0x3369ccu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946400), GPR_U64(ctx, 2));
label_3369d0:
    // 0x3369d0: 0x8f82bec4  lw          $v0, -0x413C($gp)
    ctx->pc = 0x3369d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950596)));
label_3369d4:
    // 0x3369d4: 0x1440ffa7  bnez        $v0, . + 4 + (-0x59 << 2)
    ctx->pc = 0x3369D4u;
    {
        const bool branch_taken_0x3369d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3369D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3369D4u;
        // 0x3369d8: 0x2404fffe  addiu       $a0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3369d4) {
            ctx->pc = 0x336874u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_336874;
        }
    }
    ctx->pc = 0x3369DCu;
    // 0x3369dc: 0xdf82ae48  ld          $v0, -0x51B8($gp)
    ctx->pc = 0x3369dcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946376)));
    // 0x3369e0: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x3369e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_3369e4:
    // 0x3369e4: 0xff82ae48  sd          $v0, -0x51B8($gp)
    ctx->pc = 0x3369e4u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946376), GPR_U64(ctx, 2));
label_3369e8:
    // 0x3369e8: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x3369e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3369ec: 0x24100019  addiu       $s0, $zero, 0x19
    ctx->pc = 0x3369ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 25));
    // 0x3369f0: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x3369F0u;
    {
        const bool branch_taken_0x3369f0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3369F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3369F0u;
        // 0x3369f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3369f0) {
            ctx->pc = 0x336A00u;
            goto label_336a00;
        }
    }
    ctx->pc = 0x3369F8u;
    // 0x3369f8: 0x2410001b  addiu       $s0, $zero, 0x1B
    ctx->pc = 0x3369f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 27));
    // 0x3369fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3369fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_336a00:
    // 0x336a00: 0x8fa20064  lw          $v0, 0x64($sp)
    ctx->pc = 0x336a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x336a04: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x336A04u;
    {
        const bool branch_taken_0x336a04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x336a04) {
            ctx->pc = 0x336A08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x336A04u;
            // 0x336a08: 0xb02821  addu        $a1, $a1, $s0 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x336A18u;
            goto label_336a18;
        }
    }
    ctx->pc = 0x336A0Cu;
    // 0x336a0c: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x336a0cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x336a10: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x336a10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x336a14: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x336a14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
label_336a18:
    // 0x336a18: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x336a18u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336a1c: 0xc10a322  jal         func_428C88
    ctx->pc = 0x336A1Cu;
    SET_GPR_U32(ctx, 31, 0x336A24u);
    ctx->pc = 0x336A20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336A1Cu;
    // 0x336a20: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x428C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x428C88u, 0x336A1Cu, 0x336A24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336A24u;
label_336a24:
    // 0x336a24: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x336A24u;
    {
        const bool branch_taken_0x336a24 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x336A28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336A24u;
        // 0x336a28: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336a24) {
            ctx->pc = 0x336A50u;
            goto label_336a50;
        }
    }
    ctx->pc = 0x336A2Cu;
    // 0x336a2c: 0x2031025  or          $v0, $s0, $v1
    ctx->pc = 0x336a2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x336a30: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x336a30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x336a34: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x336a34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x336a38: 0x72e21389  pcpyld      $v0, $s7, $v0
    ctx->pc = 0x336a38u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 23), GPR_VEC(ctx, 2)));
    // 0x336a3c: 0x8f83be20  lw          $v1, -0x41E0($gp)
    ctx->pc = 0x336a3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x336a40: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x336a40u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x336a44: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x336a44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x336a48: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x336a48u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x336a4c: 0x0  nop
    ctx->pc = 0x336a4cu;
    // NOP
label_336a50:
    // 0x336a50: 0x8f87be20  lw          $a3, -0x41E0($gp)
    ctx->pc = 0x336a50u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x336a54: 0x7ba40070  lq          $a0, 0x70($sp)
    ctx->pc = 0x336a54u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x336a58: 0x7ce40000  sq          $a0, 0x0($a3)
    ctx->pc = 0x336a58u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 4));
    // 0x336a5c: 0x8fa50010  lw          $a1, 0x10($sp)
    ctx->pc = 0x336a5cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x336a60: 0x10a0003d  beqz        $a1, . + 4 + (0x3D << 2)
    ctx->pc = 0x336A60u;
    {
        const bool branch_taken_0x336a60 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x336A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336A60u;
        // 0x336a64: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336a60) {
            ctx->pc = 0x336B58u;
            goto label_336b58;
        }
    }
    ctx->pc = 0x336A68u;
    // 0x336a68: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x336a68u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x336a6c: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x336a6cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x336a70: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x336a70u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x336a74: 0x7a420010  lq          $v0, 0x10($s2)
    ctx->pc = 0x336a74u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x336a78: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x336a78u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x336a7c: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x336a7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x336a80: 0x7a420020  lq          $v0, 0x20($s2)
    ctx->pc = 0x336a80u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x336a84: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x336a84u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x336a88: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x336a88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x336a8c: 0x7a420030  lq          $v0, 0x30($s2)
    ctx->pc = 0x336a8cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x336a90: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x336a90u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x336a94: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x336a94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x336a98: 0x7a420040  lq          $v0, 0x40($s2)
    ctx->pc = 0x336a98u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x336a9c: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x336a9cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x336aa0: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x336aa0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x336aa4: 0x7a420050  lq          $v0, 0x50($s2)
    ctx->pc = 0x336aa4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x336aa8: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x336aa8u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x336aac: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x336aacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x336ab0: 0x7cf60000  sq          $s6, 0x0($a3)
    ctx->pc = 0x336ab0u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 22));
    // 0x336ab4: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x336ab4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x336ab8: 0x8e430108  lw          $v1, 0x108($s2)
    ctx->pc = 0x336ab8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 264)));
    // 0x336abc: 0x24640050  addiu       $a0, $v1, 0x50
    ctx->pc = 0x336abcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x336ac0: 0x78620050  lq          $v0, 0x50($v1)
    ctx->pc = 0x336ac0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x336ac4: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x336ac4u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x336ac8: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x336ac8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x336acc: 0x78820010  lq          $v0, 0x10($a0)
    ctx->pc = 0x336accu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x336ad0: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x336ad0u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x336ad4: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x336ad4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x336ad8: 0x78820020  lq          $v0, 0x20($a0)
    ctx->pc = 0x336ad8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x336adc: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x336adcu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x336ae0: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x336ae0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x336ae4: 0xdc830030  ld          $v1, 0x30($a0)
    ctx->pc = 0x336ae4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x336ae8: 0x9c820038  lwu         $v0, 0x38($a0)
    ctx->pc = 0x336ae8u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x336aec: 0x70431389  pcpyld      $v0, $v0, $v1
    ctx->pc = 0x336aecu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x336af0: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x336af0u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x336af4: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x336af4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x336af8: 0x26a5001c  addiu       $a1, $s5, 0x1C
    ctx->pc = 0x336af8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 28));
    // 0x336afc: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x336afcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x336b00: 0x34c60001  ori         $a2, $a2, 0x1
    ctx->pc = 0x336b00u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1);
    // 0x336b04: 0x3c026c01  lui         $v0, 0x6C01
    ctx->pc = 0x336b04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27649 << 16));
    // 0x336b08: 0x34420345  ori         $v0, $v0, 0x345
    ctx->pc = 0x336b08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)837);
    // 0x336b0c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x336b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x336b10: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x336b10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x336b14: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x336b14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x336b18: 0x34420404  ori         $v0, $v0, 0x404
    ctx->pc = 0x336b18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x336b1c: 0x70461389  pcpyld      $v0, $v0, $a2
    ctx->pc = 0x336b1cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x336b20: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x336b20u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x336b24: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x336b24u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x336b28: 0x9ca60004  lwu         $a2, 0x4($a1)
    ctx->pc = 0x336b28u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x336b2c: 0x9ca2000c  lwu         $v0, 0xC($a1)
    ctx->pc = 0x336b2cu;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x336b30: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x336b30u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x336b34: 0x9ea3001c  lwu         $v1, 0x1C($s5)
    ctx->pc = 0x336b34u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x336b38: 0x9ca40008  lwu         $a0, 0x8($a1)
    ctx->pc = 0x336b38u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x336b3c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x336b3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x336b40: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x336b40u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x336b44: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x336b44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x336b48: 0x70461389  pcpyld      $v0, $v0, $a2
    ctx->pc = 0x336b48u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x336b4c: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x336B4Cu;
    {
        const bool branch_taken_0x336b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x336B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336B4Cu;
        // 0x336b50: 0x7ce20000  sq          $v0, 0x0($a3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336b4c) {
            ctx->pc = 0x336BE0u;
            goto label_336be0;
        }
    }
    ctx->pc = 0x336B54u;
    // 0x336b54: 0x0  nop
    ctx->pc = 0x336b54u;
    // NOP
label_336b58:
    // 0x336b58: 0x7a620000  lq          $v0, 0x0($s3)
    ctx->pc = 0x336b58u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x336b5c: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x336b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x336b60: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x336b60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x336b64: 0x7a620010  lq          $v0, 0x10($s3)
    ctx->pc = 0x336b64u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 16)));
    // 0x336b68: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x336b68u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x336b6c: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x336b6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x336b70: 0x7a620020  lq          $v0, 0x20($s3)
    ctx->pc = 0x336b70u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 32)));
    // 0x336b74: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x336b74u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x336b78: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x336b78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x336b7c: 0x7a620030  lq          $v0, 0x30($s3)
    ctx->pc = 0x336b7cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x336b80: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x336b80u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x336b84: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x336b84u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x336b88: 0x7a620040  lq          $v0, 0x40($s3)
    ctx->pc = 0x336b88u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x336b8c: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x336b8cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x336b90: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x336b90u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x336b94: 0x7a620050  lq          $v0, 0x50($s3)
    ctx->pc = 0x336b94u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 19), 80)));
    // 0x336b98: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x336b98u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x336b9c: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x336b9cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x336ba0: 0x7cf60000  sq          $s6, 0x0($a3)
    ctx->pc = 0x336ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 22));
    // 0x336ba4: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x336ba4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x336ba8: 0x8e640068  lw          $a0, 0x68($s3)
    ctx->pc = 0x336ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 104)));
    // 0x336bac: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x336bacu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x336bb0: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x336bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x336bb4: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x336bb4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x336bb8: 0x78820010  lq          $v0, 0x10($a0)
    ctx->pc = 0x336bb8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x336bbc: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x336bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x336bc0: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x336bc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x336bc4: 0x78820020  lq          $v0, 0x20($a0)
    ctx->pc = 0x336bc4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x336bc8: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x336bc8u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x336bcc: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x336bccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x336bd0: 0xdc830030  ld          $v1, 0x30($a0)
    ctx->pc = 0x336bd0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x336bd4: 0x9c820038  lwu         $v0, 0x38($a0)
    ctx->pc = 0x336bd4u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x336bd8: 0x70431389  pcpyld      $v0, $v0, $v1
    ctx->pc = 0x336bd8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x336bdc: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x336bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
label_336be0:
    // 0x336be0: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x336be0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x336be4: 0xaf87be20  sw          $a3, -0x41E0($gp)
    ctx->pc = 0x336be4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 7));
    // 0x336be8: 0x3c046c01  lui         $a0, 0x6C01
    ctx->pc = 0x336be8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)27649 << 16));
    // 0x336bec: 0x348403fa  ori         $a0, $a0, 0x3FA
    ctx->pc = 0x336becu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1018);
    // 0x336bf0: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x336bf0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x336bf4: 0x34840100  ori         $a0, $a0, 0x100
    ctx->pc = 0x336bf4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
    // 0x336bf8: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x336bf8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x336bfc: 0x34840404  ori         $a0, $a0, 0x404
    ctx->pc = 0x336bfcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1028);
    // 0x336c00: 0x70972389  pcpyld      $a0, $a0, $s7
    ctx->pc = 0x336c00u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 23)));
    // 0x336c04: 0x7ce40000  sq          $a0, 0x0($a3)
    ctx->pc = 0x336c04u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 4));
    // 0x336c08: 0x24e20010  addiu       $v0, $a3, 0x10
    ctx->pc = 0x336c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x336c0c: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x336c0cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x336c10: 0x92830047  lbu         $v1, 0x47($s4)
    ctx->pc = 0x336c10u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 71)));
    // 0x336c14: 0x8f82bec4  lw          $v0, -0x413C($gp)
    ctx->pc = 0x336c14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950596)));
    // 0x336c18: 0x386300ff  xori        $v1, $v1, 0xFF
    ctx->pc = 0x336c18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)255);
    // 0x336c1c: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x336c1cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x336c20: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x336c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x336c24: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x336C24u;
    {
        const bool branch_taken_0x336c24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x336C28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336C24u;
        // 0x336c28: 0xaf83bec8  sw          $v1, -0x4138($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950600), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336c24) {
            ctx->pc = 0x336C40u;
            goto label_336c40;
        }
    }
    ctx->pc = 0x336C2Cu;
    // 0x336c2c: 0xdf82ae80  ld          $v0, -0x5180($gp)
    ctx->pc = 0x336c2cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946432)));
    // 0x336c30: 0x24060040  addiu       $a2, $zero, 0x40
    ctx->pc = 0x336c30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x336c34: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x336C34u;
    {
        const bool branch_taken_0x336c34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x336C38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336C34u;
        // 0x336c38: 0x461025  or          $v0, $v0, $a2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336c34) {
            ctx->pc = 0x336C4Cu;
            goto label_336c4c;
        }
    }
    ctx->pc = 0x336C3Cu;
    // 0x336c3c: 0x0  nop
    ctx->pc = 0x336c3cu;
    // NOP
label_336c40:
    // 0x336c40: 0xdf82ae80  ld          $v0, -0x5180($gp)
    ctx->pc = 0x336c40u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946432)));
    // 0x336c44: 0x2403ffbf  addiu       $v1, $zero, -0x41
    ctx->pc = 0x336c44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x336c48: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x336c48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_336c4c:
    // 0x336c4c: 0xff82ae80  sd          $v0, -0x5180($gp)
    ctx->pc = 0x336c4cu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946432), GPR_U64(ctx, 2));
    // 0x336c50: 0x92830029  lbu         $v1, 0x29($s4)
    ctx->pc = 0x336c50u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 41)));
    // 0x336c54: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x336c54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
    // 0x336c58: 0x8f82ae80  lw          $v0, -0x5180($gp)
    ctx->pc = 0x336c58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946432)));
    // 0x336c5c: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x336c5cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x336c60: 0xdca4d5d0  ld          $a0, -0x2A30($a1)
    ctx->pc = 0x336c60u;
    SET_GPR_U64(ctx, 4, FAST_READ64(0x5DD5D0u));
    // 0x336c64: 0x24c6d5d0  addiu       $a2, $a2, -0x2A30
    ctx->pc = 0x336c64u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956496));
    // 0x336c68: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x336c68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x336c6c: 0xdcc50008  ld          $a1, 0x8($a2)
    ctx->pc = 0x336c6cu;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x5DD5D8u));
    // 0x336c70: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x336c70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x336c74: 0x3c03fc00  lui         $v1, 0xFC00
    ctx->pc = 0x336c74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64512 << 16));
    // 0x336c78: 0x34637fff  ori         $v1, $v1, 0x7FFF
    ctx->pc = 0x336c78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32767);
    // 0x336c7c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x336c7cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x336c80: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x336c80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x336c84: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x336c84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x336c88: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x336c88u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x336c8c: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x336c8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x336c90: 0x213fc  dsll32      $v0, $v0, 15
    ctx->pc = 0x336c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 15));
    // 0x336c94: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x336c94u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x336c98: 0x70a42389  pcpyld      $a0, $a1, $a0
    ctx->pc = 0x336c98u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x336c9c: 0x7cc40000  sq          $a0, 0x0($a2)
    ctx->pc = 0x336c9cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 4));
    // 0x336ca0: 0x8f82be20  lw          $v0, -0x41E0($gp)
    ctx->pc = 0x336ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x336ca4: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x336ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x336ca8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x336ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x336cac: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x336cacu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x336cb0: 0x8e83002c  lw          $v1, 0x2C($s4)
    ctx->pc = 0x336cb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 44)));
    // 0x336cb4: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x336cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x336cb8: 0xc0dff98  jal         func_37FE60
    ctx->pc = 0x336CB8u;
    SET_GPR_U32(ctx, 31, 0x336CC0u);
    ctx->pc = 0x336CBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x336CB8u;
    // 0x336cbc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37FE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37FE60u, 0x336CB8u, 0x336CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x336CC0u;
label_336cc0:
    // 0x336cc0: 0x88440003  lwl         $a0, 0x3($v0)
    ctx->pc = 0x336cc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x336cc4: 0x98440000  lwr         $a0, 0x0($v0)
    ctx->pc = 0x336cc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x336cc8: 0xaa840047  swl         $a0, 0x47($s4)
    ctx->pc = 0x336cc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 71); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x336ccc: 0xba840044  swr         $a0, 0x44($s4)
    ctx->pc = 0x336cccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 20), 68); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x336cd0: 0x8f86be20  lw          $a2, -0x41E0($gp)
    ctx->pc = 0x336cd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x336cd4: 0x7ba40090  lq          $a0, 0x90($sp)
    ctx->pc = 0x336cd4u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x336cd8: 0x7cc40000  sq          $a0, 0x0($a2)
    ctx->pc = 0x336cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 4));
    // 0x336cdc: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x336cdcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x336ce0: 0xaf86be20  sw          $a2, -0x41E0($gp)
    ctx->pc = 0x336ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 6));
    // 0x336ce4: 0xdf82ae80  ld          $v0, -0x5180($gp)
    ctx->pc = 0x336ce4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946432)));
    // 0x336ce8: 0xc7848054  lwc1        $f4, -0x7FAC($gp)
    ctx->pc = 0x336ce8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x336cec: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x336cecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x336cf0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x336CF0u;
    {
        const bool branch_taken_0x336cf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x336CF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336CF0u;
        // 0x336cf4: 0x92820044  lbu         $v0, 0x44($s4) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336cf0) {
            ctx->pc = 0x336D00u;
            goto label_336d00;
        }
    }
    ctx->pc = 0x336CF8u;
    // 0x336cf8: 0xc7848434  lwc1        $f4, -0x7BCC($gp)
    ctx->pc = 0x336cf8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x336cfc: 0x0  nop
    ctx->pc = 0x336cfcu;
    // NOP
label_336d00:
    // 0x336d00: 0x92830045  lbu         $v1, 0x45($s4)
    ctx->pc = 0x336d00u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 69)));
    // 0x336d04: 0x92850046  lbu         $a1, 0x46($s4)
    ctx->pc = 0x336d04u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 70)));
    // 0x336d08: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x336d08u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x336d0c: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x336d0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x336d10: 0x92840047  lbu         $a0, 0x47($s4)
    ctx->pc = 0x336d10u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 71)));
    // 0x336d14: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x336d14u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x336d18: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x336d18u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x336d1c: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x336d1cu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x336d20: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x336d20u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x336d24: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x336d24u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x336d28: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x336d28u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x336d2c: 0x46150142  mul.s       $f5, $f0, $f21
    ctx->pc = 0x336d2cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x336d30: 0x46041182  mul.s       $f6, $f2, $f4
    ctx->pc = 0x336d30u;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x336d34: 0x44022800  mfc1        $v0, $f5
    ctx->pc = 0x336d34u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x336d38: 0x44033000  mfc1        $v1, $f6
    ctx->pc = 0x336d38u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x336d3c: 0x70021789  pexew       $v0, $v0
    ctx->pc = 0x336d3cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 2)));
    // 0x336d40: 0x70031f89  pexew       $v1, $v1
    ctx->pc = 0x336d40u;
    SET_GPR_VEC(ctx, 3, PS2_PEXEW(GPR_VEC(ctx, 3)));
    // 0x336d44: 0x46040942  mul.s       $f5, $f1, $f4
    ctx->pc = 0x336d44u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x336d48: 0x46041982  mul.s       $f6, $f3, $f4
    ctx->pc = 0x336d48u;
    ctx->f[6] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x336d4c: 0x44022800  mfc1        $v0, $f5
    ctx->pc = 0x336d4cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x336d50: 0x44033000  mfc1        $v1, $f6
    ctx->pc = 0x336d50u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x336d54: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x336d54u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x336d58: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x336d58u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x336d5c: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x336d5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x336d60: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x336d60u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x336d64: 0x8fa20064  lw          $v0, 0x64($sp)
    ctx->pc = 0x336d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x336d68: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x336D68u;
    {
        const bool branch_taken_0x336d68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x336D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336D68u;
        // 0x336d6c: 0x7ba300a0  lq          $v1, 0xA0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336d68) {
            ctx->pc = 0x336DC8u;
            goto label_336dc8;
        }
    }
    ctx->pc = 0x336D70u;
    // 0x336d70: 0x24c20020  addiu       $v0, $a2, 0x20
    ctx->pc = 0x336d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x336d74: 0x7cc30010  sq          $v1, 0x10($a2)
    ctx->pc = 0x336d74u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 3));
    // 0x336d78: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x336d78u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x336d7c: 0x8fc3003c  lw          $v1, 0x3C($fp)
    ctx->pc = 0x336d7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 60)));
    // 0x336d80: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x336d80u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x336d84: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x336d84u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x336d88: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x336d88u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x336d8c: 0xc7c0001c  lwc1        $f0, 0x1C($fp)
    ctx->pc = 0x336d8cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 30), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x336d90: 0x46140902  mul.s       $f4, $f1, $f20
    ctx->pc = 0x336d90u;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x336d94: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x336d94u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x336d98: 0x44032000  mfc1        $v1, $f4
    ctx->pc = 0x336d98u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x336d9c: 0x70021789  pexew       $v0, $v0
    ctx->pc = 0x336d9cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 2)));
    // 0x336da0: 0x70031f89  pexew       $v1, $v1
    ctx->pc = 0x336da0u;
    SET_GPR_VEC(ctx, 3, PS2_PEXEW(GPR_VEC(ctx, 3)));
    // 0x336da4: 0x46141942  mul.s       $f5, $f3, $f20
    ctx->pc = 0x336da4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[3], ctx->f[20]);
    // 0x336da8: 0x46141102  mul.s       $f4, $f2, $f20
    ctx->pc = 0x336da8u;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x336dac: 0x44022800  mfc1        $v0, $f5
    ctx->pc = 0x336dacu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x336db0: 0x44032000  mfc1        $v1, $f4
    ctx->pc = 0x336db0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x336db4: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x336db4u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x336db8: 0x7cc20020  sq          $v0, 0x20($a2)
    ctx->pc = 0x336db8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 2));
    // 0x336dbc: 0x24c30030  addiu       $v1, $a2, 0x30
    ctx->pc = 0x336dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    // 0x336dc0: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x336dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x336dc4: 0x0  nop
    ctx->pc = 0x336dc4u;
    // NOP
label_336dc8:
    // 0x336dc8: 0x92820028  lbu         $v0, 0x28($s4)
    ctx->pc = 0x336dc8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 40)));
    // 0x336dcc: 0x3c046c03  lui         $a0, 0x6C03
    ctx->pc = 0x336dccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)27651 << 16));
    // 0x336dd0: 0x348403fd  ori         $a0, $a0, 0x3FD
    ctx->pc = 0x336dd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1021);
    // 0x336dd4: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x336dd4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x336dd8: 0x34840100  ori         $a0, $a0, 0x100
    ctx->pc = 0x336dd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
    // 0x336ddc: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x336ddcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x336de0: 0x34840404  ori         $a0, $a0, 0x404
    ctx->pc = 0x336de0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1028);
    // 0x336de4: 0x70972389  pcpyld      $a0, $a0, $s7
    ctx->pc = 0x336de4u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 23)));
    // 0x336de8: 0x30450007  andi        $a1, $v0, 0x7
    ctx->pc = 0x336de8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x336dec: 0x8f83be20  lw          $v1, -0x41E0($gp)
    ctx->pc = 0x336decu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x336df0: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x336df0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x336df4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x336df4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x336df8: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x336df8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x336dfc: 0x8f82aee0  lw          $v0, -0x5120($gp)
    ctx->pc = 0x336dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946528)));
    // 0x336e00: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x336E00u;
    {
        const bool branch_taken_0x336e00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x336E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336E00u;
        // 0x336e04: 0x30a20004  andi        $v0, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x336e00) {
            ctx->pc = 0x336E10u;
            goto label_336e10;
        }
    }
    ctx->pc = 0x336E08u;
    // 0x336e08: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x336E08u;
    {
        const bool branch_taken_0x336e08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x336e08) {
            ctx->pc = 0x336E0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x336E08u;
            // 0x336e0c: 0x34a50008  ori         $a1, $a1, 0x8 (Delay Slot)
            SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x336E28u;
            goto label_336e28;
        }
    }
    ctx->pc = 0x336E10u;
label_336e10:
    // 0x336e10: 0x8f82aee4  lw          $v0, -0x511C($gp)
    ctx->pc = 0x336e10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946532)));
    // 0x336e14: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x336E14u;
    {
        const bool branch_taken_0x336e14 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x336E18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336E14u;
        // 0x336e18: 0x30a20004  andi        $v0, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x336e14) {
            ctx->pc = 0x336E50u;
            goto label_336e50;
        }
    }
    ctx->pc = 0x336E1Cu;
    // 0x336e1c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x336E1Cu;
    {
        const bool branch_taken_0x336e1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x336E20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336E1Cu;
        // 0x336e20: 0x3c04005e  lui         $a0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336e1c) {
            ctx->pc = 0x336E58u;
            goto label_336e58;
        }
    }
    ctx->pc = 0x336E24u;
    // 0x336e24: 0x34a50008  ori         $a1, $a1, 0x8
    ctx->pc = 0x336e24u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8);
label_336e28:
    // 0x336e28: 0x8f82be20  lw          $v0, -0x41E0($gp)
    ctx->pc = 0x336e28u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x336e2c: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x336e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x336e30: 0x2484d670  addiu       $a0, $a0, -0x2990
    ctx->pc = 0x336e30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956656));
    // 0x336e34: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x336e34u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x5DD670u));
    // 0x336e38: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x336e38u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x336e3c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x336e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x336e40: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x336e40u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x336e44: 0x3c06005e  lui         $a2, 0x5E
    ctx->pc = 0x336e44u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)94 << 16));
    // 0x336e48: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x336E48u;
    {
        const bool branch_taken_0x336e48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x336E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336E48u;
        // 0x336e4c: 0x24c6d680  addiu       $a2, $a2, -0x2980 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956672));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336e48) {
            ctx->pc = 0x336E78u;
            goto label_336e78;
        }
    }
    ctx->pc = 0x336E50u;
label_336e50:
    // 0x336e50: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x336e50u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x336e54: 0x0  nop
    ctx->pc = 0x336e54u;
    // NOP
label_336e58:
    // 0x336e58: 0x8f82be20  lw          $v0, -0x41E0($gp)
    ctx->pc = 0x336e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x336e5c: 0x2484d650  addiu       $a0, $a0, -0x29B0
    ctx->pc = 0x336e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956624));
    // 0x336e60: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x336e60u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x336e64: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x336e64u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x336e68: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x336e68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x336e6c: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x336e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x336e70: 0x3c06005e  lui         $a2, 0x5E
    ctx->pc = 0x336e70u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)94 << 16));
    // 0x336e74: 0x24c6d660  addiu       $a2, $a2, -0x29A0
    ctx->pc = 0x336e74u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956640));
label_336e78:
    // 0x336e78: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x336e78u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x336e7c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x336e7cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x336e80: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x336e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x336e84: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x336e84u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x336e88: 0x8f82becc  lw          $v0, -0x4134($gp)
    ctx->pc = 0x336e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950604)));
    // 0x336e8c: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x336e8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x336e90: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x336E90u;
    {
        const bool branch_taken_0x336e90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x336E94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336E90u;
        // 0x336e94: 0xaf80aed8  sw          $zero, -0x5128($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294946520), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336e90) {
            ctx->pc = 0x336EA0u;
            goto label_336ea0;
        }
    }
    ctx->pc = 0x336E98u;
    // 0x336e98: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x336e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x336e9c: 0xaf84aed8  sw          $a0, -0x5128($gp)
    ctx->pc = 0x336e9cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946520), GPR_U32(ctx, 4));
label_336ea0:
    // 0x336ea0: 0x9f82aedc  lwu         $v0, -0x5124($gp)
    ctx->pc = 0x336ea0u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294946524)));
    // 0x336ea4: 0x5183c  dsll32      $v1, $a1, 0
    ctx->pc = 0x336ea4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
    // 0x336ea8: 0x9f84aed8  lwu         $a0, -0x5128($gp)
    ctx->pc = 0x336ea8u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294946520)));
    // 0x336eac: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x336eacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x336eb0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x336eb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x336eb4: 0x442025  or          $a0, $v0, $a0
    ctx->pc = 0x336eb4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x336eb8: 0x70832389  pcpyld      $a0, $a0, $v1
    ctx->pc = 0x336eb8u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x336ebc: 0x8f83be20  lw          $v1, -0x41E0($gp)
    ctx->pc = 0x336ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x336ec0: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x336ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x336ec4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x336ec4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x336ec8: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x336ec8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x336ecc: 0x8e820040  lw          $v0, 0x40($s4)
    ctx->pc = 0x336eccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 64)));
    // 0x336ed0: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x336ED0u;
    {
        const bool branch_taken_0x336ed0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x336ED4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336ED0u;
        // 0x336ed4: 0x70002ca9  por         $a1, $zero, $zero (Delay Slot)
        SET_GPR_VEC(ctx, 5, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336ed0) {
            ctx->pc = 0x336F50u;
            goto label_336f50;
        }
    }
    ctx->pc = 0x336ED8u;
    // 0x336ed8: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x336ed8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x336edc: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x336edcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x336ee0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x336ee0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x336ee4: 0x70571389  pcpyld      $v0, $v0, $s7
    ctx->pc = 0x336ee4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 23)));
    // 0x336ee8: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x336ee8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x336eec: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x336eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x336ef0: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x336ef0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x336ef4: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x336ef4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x336ef8: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x336ef8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x336efc: 0x34848003  ori         $a0, $a0, 0x8003
    ctx->pc = 0x336efcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32771);
    // 0x336f00: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x336f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x336f04: 0x70441389  pcpyld      $v0, $v0, $a0
    ctx->pc = 0x336f04u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x336f08: 0x7c620010  sq          $v0, 0x10($v1)
    ctx->pc = 0x336f08u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 2));
    // 0x336f0c: 0x24620020  addiu       $v0, $v1, 0x20
    ctx->pc = 0x336f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x336f10: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x336f10u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x336f14: 0xdf84ae48  ld          $a0, -0x51B8($gp)
    ctx->pc = 0x336f14u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 28), 4294946376)));
    // 0x336f18: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x336f18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x336f1c: 0x70441389  pcpyld      $v0, $v0, $a0
    ctx->pc = 0x336f1cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x336f20: 0x7c620020  sq          $v0, 0x20($v1)
    ctx->pc = 0x336f20u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), GPR_VEC(ctx, 2));
    // 0x336f24: 0x24620030  addiu       $v0, $v1, 0x30
    ctx->pc = 0x336f24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x336f28: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x336f28u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x336f2c: 0xdf84ae68  ld          $a0, -0x5198($gp)
    ctx->pc = 0x336f2cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 28), 4294946408)));
    // 0x336f30: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x336f30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x336f34: 0x70441389  pcpyld      $v0, $v0, $a0
    ctx->pc = 0x336f34u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x336f38: 0x7c620030  sq          $v0, 0x30($v1)
    ctx->pc = 0x336f38u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), GPR_VEC(ctx, 2));
    // 0x336f3c: 0x24620040  addiu       $v0, $v1, 0x40
    ctx->pc = 0x336f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x336f40: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x336f40u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x336f44: 0xdf84ae60  ld          $a0, -0x51A0($gp)
    ctx->pc = 0x336f44u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 28), 4294946400)));
    // 0x336f48: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x336F48u;
    {
        const bool branch_taken_0x336f48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x336F4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336F48u;
        // 0x336f4c: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336f48) {
            ctx->pc = 0x336FB0u;
            goto label_336fb0;
        }
    }
    ctx->pc = 0x336F50u;
label_336f50:
    // 0x336f50: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x336f50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x336f54: 0x7c650000  sq          $a1, 0x0($v1)
    ctx->pc = 0x336f54u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 5));
    // 0x336f58: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x336f58u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x336f5c: 0x7c650010  sq          $a1, 0x10($v1)
    ctx->pc = 0x336f5cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 5));
    // 0x336f60: 0x24620020  addiu       $v0, $v1, 0x20
    ctx->pc = 0x336f60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x336f64: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x336f64u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x336f68: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x336f68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x336f6c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x336f6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x336f70: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x336f70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x336f74: 0x70571389  pcpyld      $v0, $v0, $s7
    ctx->pc = 0x336f74u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 23)));
    // 0x336f78: 0x7c620020  sq          $v0, 0x20($v1)
    ctx->pc = 0x336f78u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), GPR_VEC(ctx, 2));
    // 0x336f7c: 0x24620030  addiu       $v0, $v1, 0x30
    ctx->pc = 0x336f7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x336f80: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x336f80u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x336f84: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x336f84u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x336f88: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x336f88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x336f8c: 0x34848001  ori         $a0, $a0, 0x8001
    ctx->pc = 0x336f8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32769);
    // 0x336f90: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x336f90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x336f94: 0x70441389  pcpyld      $v0, $v0, $a0
    ctx->pc = 0x336f94u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x336f98: 0x7c620030  sq          $v0, 0x30($v1)
    ctx->pc = 0x336f98u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), GPR_VEC(ctx, 2));
    // 0x336f9c: 0x24620040  addiu       $v0, $v1, 0x40
    ctx->pc = 0x336f9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x336fa0: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x336fa0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x336fa4: 0xdf84ae48  ld          $a0, -0x51B8($gp)
    ctx->pc = 0x336fa4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 28), 4294946376)));
    // 0x336fa8: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x336fa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x336fac: 0x0  nop
    ctx->pc = 0x336facu;
    // NOP
label_336fb0:
    // 0x336fb0: 0x70441389  pcpyld      $v0, $v0, $a0
    ctx->pc = 0x336fb0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x336fb4: 0x7c620040  sq          $v0, 0x40($v1)
    ctx->pc = 0x336fb4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 64), GPR_VEC(ctx, 2));
    // 0x336fb8: 0x24620050  addiu       $v0, $v1, 0x50
    ctx->pc = 0x336fb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x336fbc: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x336fbcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x336fc0: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x336fc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x336fc4: 0x10c00016  beqz        $a2, . + 4 + (0x16 << 2)
    ctx->pc = 0x336FC4u;
    {
        const bool branch_taken_0x336fc4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x336FC8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x336FC4u;
        // 0x336fc8: 0x8fa30080  lw          $v1, 0x80($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336fc4) {
            ctx->pc = 0x337020u;
            goto label_337020;
        }
    }
    ctx->pc = 0x336FCCu;
    // 0x336fcc: 0x3c043000  lui         $a0, 0x3000
    ctx->pc = 0x336fccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12288 << 16));
    // 0x336fd0: 0x8fa600b0  lw          $a2, 0xB0($sp)
    ctx->pc = 0x336fd0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x336fd4: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x336fd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x336fd8: 0x8fa500c0  lw          $a1, 0xC0($sp)
    ctx->pc = 0x336fd8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x336fdc: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x336fdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x336fe0: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x336fe0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x336fe4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x336fe4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x336fe8: 0x6203c  dsll32      $a0, $a2, 0
    ctx->pc = 0x336fe8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 0));
    // 0x336fec: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x336fecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x336ff0: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x336ff0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x336ff4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x336ff4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x336ff8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x336ff8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x336ffc: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x336ffcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x337000: 0x34630404  ori         $v1, $v1, 0x404
    ctx->pc = 0x337000u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1028);
    // 0x337004: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x337004u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x337008: 0x70441389  pcpyld      $v0, $v0, $a0
    ctx->pc = 0x337008u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x33700c: 0x8f83be20  lw          $v1, -0x41E0($gp)
    ctx->pc = 0x33700cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x337010: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x337010u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x337014: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x337014u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x337018: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x337018u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x33701c: 0x0  nop
    ctx->pc = 0x33701cu;
    // NOP
label_337020:
    // 0x337020: 0x8fa40064  lw          $a0, 0x64($sp)
    ctx->pc = 0x337020u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x337024: 0x10800017  beqz        $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x337024u;
    {
        const bool branch_taken_0x337024 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x337028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337024u;
        // 0x337028: 0x3c050062  lui         $a1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337024) {
            ctx->pc = 0x337084u;
            goto label_337084;
        }
    }
    ctx->pc = 0x33702Cu;
    // 0x33702c: 0x24a5c4c0  addiu       $a1, $a1, -0x3B40
    ctx->pc = 0x33702cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952128));
    // 0x337030: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x337030u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x337034: 0x90430090  lbu         $v1, 0x90($v0)
    ctx->pc = 0x337034u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x337038: 0xa283002b  sb          $v1, 0x2B($s4)
    ctx->pc = 0x337038u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 43), (uint8_t)GPR_U32(ctx, 3));
    // 0x33703c: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x33703cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x337040: 0x8f85aed4  lw          $a1, -0x512C($gp)
    ctx->pc = 0x337040u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946516)));
    // 0x337044: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x337044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x337048: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x337048u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x33704c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x33704cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x337050: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x337050u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x337054: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x337054u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x337058: 0x10a40009  beq         $a1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x337058u;
    {
        const bool branch_taken_0x337058 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x33705Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337058u;
        // 0x33705c: 0x4103c  dsll32      $v0, $a0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337058) {
            ctx->pc = 0x337080u;
            goto label_337080;
        }
    }
    ctx->pc = 0x337060u;
    // 0x337060: 0x3c065000  lui         $a2, 0x5000
    ctx->pc = 0x337060u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20480 << 16));
    // 0x337064: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x337064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x337068: 0x72e21389  pcpyld      $v0, $s7, $v0
    ctx->pc = 0x337068u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 23), GPR_VEC(ctx, 2)));
    // 0x33706c: 0x8f83be20  lw          $v1, -0x41E0($gp)
    ctx->pc = 0x33706cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x337070: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x337070u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x337074: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x337074u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x337078: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x337078u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x33707c: 0xaf84aed4  sw          $a0, -0x512C($gp)
    ctx->pc = 0x33707cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946516), GPR_U32(ctx, 4));
label_337080:
    // 0x337080: 0xafa00064  sw          $zero, 0x64($sp)
    ctx->pc = 0x337080u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 0));
label_337084:
    // 0x337084: 0x8e820030  lw          $v0, 0x30($s4)
    ctx->pc = 0x337084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x337088: 0x8e840004  lw          $a0, 0x4($s4)
    ctx->pc = 0x337088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4)));
    // 0x33708c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x33708cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x337090: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x337090u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x337094: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x337094u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x337098: 0x24a60018  addiu       $a2, $a1, 0x18
    ctx->pc = 0x337098u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
    // 0x33709c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x33709cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3370a0: 0x9cc40008  lwu         $a0, 0x8($a2)
    ctx->pc = 0x3370a0u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x3370a4: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3370a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3370a8: 0x3c020300  lui         $v0, 0x300
    ctx->pc = 0x3370a8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)768 << 16));
    // 0x3370ac: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3370acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3370b0: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x3370b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x3370b4: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x3370b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x3370b8: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x3370b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x3370bc: 0x70641b89  pcpyld      $v1, $v1, $a0
    ctx->pc = 0x3370bcu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x3370c0: 0x8f82be20  lw          $v0, -0x41E0($gp)
    ctx->pc = 0x3370c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x3370c4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x3370c4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x3370c8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x3370c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x3370cc: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x3370ccu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x3370d0: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x3370d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_3370d4:
    // 0x3370d4: 0x42000039  di
    ctx->pc = 0x3370d4u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x3370d8: 0x40f  sync.p
    ctx->pc = 0x3370d8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3370dc: 0x40036000  mfc0        $v1, Status
    ctx->pc = 0x3370dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_status);
    // 0x3370e0: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x3370e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x3370e4: 0x0  nop
    ctx->pc = 0x3370e4u;
    // NOP
    // 0x3370e8: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3370E8u;
    {
        const bool branch_taken_0x3370e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3370e8) {
            ctx->pc = 0x3370D4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3370d4;
        }
    }
    ctx->pc = 0x3370F0u;
    // 0x3370f0: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x3370f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x3370f4: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3370f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3370f8: 0xaca20018  sw          $v0, 0x18($a1)
    ctx->pc = 0x3370f8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 2));
    // 0x3370fc: 0x42000038  ei
    ctx->pc = 0x3370fcu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x337100: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x337100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x337104: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x337104u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x337108: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x337108u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33710c: 0x14450004  bne         $v0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x33710Cu;
    {
        const bool branch_taken_0x33710c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x337110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33710Cu;
        // 0x337110: 0xacc20004  sw          $v0, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33710c) {
            ctx->pc = 0x337120u;
            goto label_337120;
        }
    }
    ctx->pc = 0x337114u;
    // 0x337114: 0xc10a762  jal         func_429D88
    ctx->pc = 0x337114u;
    SET_GPR_U32(ctx, 31, 0x33711Cu);
    ctx->pc = 0x337118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337114u;
    // 0x337118: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x429D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x429D88u, 0x337114u, 0x33711Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33711Cu;
label_33711c:
    // 0x33711c: 0x0  nop
    ctx->pc = 0x33711cu;
    // NOP
label_337120:
    // 0x337120: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x337120u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x337124: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x337124u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x337128: 0x8fa400c4  lw          $a0, 0xC4($sp)
    ctx->pc = 0x337128u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x33712c: 0x8fa500c8  lw          $a1, 0xC8($sp)
    ctx->pc = 0x33712cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x337130: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x337130u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x337134: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x337134u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x337138: 0x24840070  addiu       $a0, $a0, 0x70
    ctx->pc = 0x337138u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    // 0x33713c: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x33713cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x337140: 0xafa30004  sw          $v1, 0x4($sp)
    ctx->pc = 0x337140u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 3));
    // 0x337144: 0xafa400c4  sw          $a0, 0xC4($sp)
    ctx->pc = 0x337144u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 4));
    // 0x337148: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x337148u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x33714c: 0x1440fda6  bnez        $v0, . + 4 + (-0x25A << 2)
    ctx->pc = 0x33714Cu;
    {
        const bool branch_taken_0x33714c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x337150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33714Cu;
        // 0x337150: 0xafa500c8  sw          $a1, 0xC8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 200), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33714c) {
            ctx->pc = 0x3367E8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3367e8;
        }
    }
    ctx->pc = 0x337154u;
label_337154:
    // 0x337154: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x337154u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_337158:
    // 0x337158: 0x7bb00180  lq          $s0, 0x180($sp)
    ctx->pc = 0x337158u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x33715c: 0x7bb10170  lq          $s1, 0x170($sp)
    ctx->pc = 0x33715cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x337160: 0x7bb20160  lq          $s2, 0x160($sp)
    ctx->pc = 0x337160u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x337164: 0x7bb30150  lq          $s3, 0x150($sp)
    ctx->pc = 0x337164u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x337168: 0x7bb40140  lq          $s4, 0x140($sp)
    ctx->pc = 0x337168u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x33716c: 0x7bb50130  lq          $s5, 0x130($sp)
    ctx->pc = 0x33716cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x337170: 0x7bb60120  lq          $s6, 0x120($sp)
    ctx->pc = 0x337170u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x337174: 0x7bb70110  lq          $s7, 0x110($sp)
    ctx->pc = 0x337174u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x337178: 0x7bbe0100  lq          $fp, 0x100($sp)
    ctx->pc = 0x337178u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x33717c: 0xdfbf00f0  ld          $ra, 0xF0($sp)
    ctx->pc = 0x33717cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x337180: 0xc7b50198  lwc1        $f21, 0x198($sp)
    ctx->pc = 0x337180u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 408)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x337184: 0xc7b40190  lwc1        $f20, 0x190($sp)
    ctx->pc = 0x337184u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 400)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x337188: 0x3e00008  jr          $ra
    ctx->pc = 0x337188u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33718Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337188u;
        // 0x33718c: 0x27bd01a0  addiu       $sp, $sp, 0x1A0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 416));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x337188u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x337190u;
    // 0x337190: 0x27bdfde0  addiu       $sp, $sp, -0x220
    ctx->pc = 0x337190u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966752));
    // 0x337194: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x337194u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x337198: 0x7fb201e0  sq          $s2, 0x1E0($sp)
    ctx->pc = 0x337198u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 480), GPR_VEC(ctx, 18));
    // 0x33719c: 0x244bc4c0  addiu       $t3, $v0, -0x3B40
    ctx->pc = 0x33719cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952128));
    // 0x3371a0: 0x7fb301d0  sq          $s3, 0x1D0($sp)
    ctx->pc = 0x3371a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 19));
    // 0x3371a4: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x3371a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3371a8: 0x7fb00200  sq          $s0, 0x200($sp)
    ctx->pc = 0x3371a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 512), GPR_VEC(ctx, 16));
    // 0x3371ac: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x3371acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3371b0: 0x7fb101f0  sq          $s1, 0x1F0($sp)
    ctx->pc = 0x3371b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 496), GPR_VEC(ctx, 17));
    // 0x3371b4: 0x3c060200  lui         $a2, 0x200
    ctx->pc = 0x3371b4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)512 << 16));
    // 0x3371b8: 0x7fb401c0  sq          $s4, 0x1C0($sp)
    ctx->pc = 0x3371b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 20));
    // 0x3371bc: 0x7fb501b0  sq          $s5, 0x1B0($sp)
    ctx->pc = 0x3371bcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 21));
    // 0x3371c0: 0x7fb601a0  sq          $s6, 0x1A0($sp)
    ctx->pc = 0x3371c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 416), GPR_VEC(ctx, 22));
    // 0x3371c4: 0x7fb70190  sq          $s7, 0x190($sp)
    ctx->pc = 0x3371c4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 23));
    // 0x3371c8: 0x7fbe0180  sq          $fp, 0x180($sp)
    ctx->pc = 0x3371c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 30));
    // 0x3371cc: 0xffbf0170  sd          $ra, 0x170($sp)
    ctx->pc = 0x3371ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 368), GPR_U64(ctx, 31));
    // 0x3371d0: 0xe7b50218  swc1        $f21, 0x218($sp)
    ctx->pc = 0x3371d0u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 536), bits); }
    // 0x3371d4: 0xe7b40210  swc1        $f20, 0x210($sp)
    ctx->pc = 0x3371d4u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 528), bits); }
    // 0x3371d8: 0x8e630008  lw          $v1, 0x8($s3)
    ctx->pc = 0x3371d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x3371dc: 0xafa30028  sw          $v1, 0x28($sp)
    ctx->pc = 0x3371dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 40), GPR_U32(ctx, 3));
    // 0x3371e0: 0x8e63002c  lw          $v1, 0x2C($s3)
    ctx->pc = 0x3371e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x3371e4: 0x8fa40028  lw          $a0, 0x28($sp)
    ctx->pc = 0x3371e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x3371e8: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x3371e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x3371ec: 0x8c850018  lw          $a1, 0x18($a0)
    ctx->pc = 0x3371ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x3371f0: 0xafa3002c  sw          $v1, 0x2C($sp)
    ctx->pc = 0x3371f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 44), GPR_U32(ctx, 3));
    // 0x3371f4: 0x8d620004  lw          $v0, 0x4($t3)
    ctx->pc = 0x3371f4u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x61C4C4u));
    // 0x3371f8: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x3371f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x3371fc: 0x8f82a634  lw          $v0, -0x59CC($gp)
    ctx->pc = 0x3371fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944308)));
    // 0x337200: 0x8d64000c  lw          $a0, 0xC($t3)
    ctx->pc = 0x337200u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x61C4CCu));
    // 0x337204: 0x8ca30008  lw          $v1, 0x8($a1)
    ctx->pc = 0x337204u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x337208: 0x8fa5002c  lw          $a1, 0x2C($sp)
    ctx->pc = 0x337208u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x33720c: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x33720cu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x337210: 0xafa4003c  sw          $a0, 0x3C($sp)
    ctx->pc = 0x337210u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 60), GPR_U32(ctx, 4));
    // 0x337214: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x337214u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x337218: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x337218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
    // 0x33721c: 0x8fa6002c  lw          $a2, 0x2C($sp)
    ctx->pc = 0x33721cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x337220: 0x8c510000  lw          $s1, 0x0($v0)
    ctx->pc = 0x337220u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x337224: 0x8f85a8f8  lw          $a1, -0x5708($gp)
    ctx->pc = 0x337224u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945016)));
    // 0x337228: 0x8d620008  lw          $v0, 0x8($t3)
    ctx->pc = 0x337228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 8)));
    // 0x33722c: 0xc54021  addu        $t0, $a2, $a1
    ctx->pc = 0x33722cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x337230: 0x146005f0  bnez        $v1, . + 4 + (0x5F0 << 2)
    ctx->pc = 0x337230u;
    {
        const bool branch_taken_0x337230 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x337234u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337230u;
        // 0x337234: 0xafa20038  sw          $v0, 0x38($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337230) {
            ctx->pc = 0x3389F4u;
            goto label_3389f4;
        }
    }
    ctx->pc = 0x337238u;
    // 0x337238: 0xdf86ae48  ld          $a2, -0x51B8($gp)
    ctx->pc = 0x337238u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 28), 4294946376)));
    // 0x33723c: 0x3c020007  lui         $v0, 0x7
    ctx->pc = 0x33723cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)7 << 16));
    // 0x337240: 0xde230038  ld          $v1, 0x38($s1)
    ctx->pc = 0x337240u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x337244: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x337244u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337248: 0xde290028  ld          $t1, 0x28($s1)
    ctx->pc = 0x337248u;
    SET_GPR_U64(ctx, 9, READ64(ADD32(GPR_U32(ctx, 17), 40)));
    // 0x33724c: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x33724cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x337250: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x337250u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x337254: 0xffa00010  sd          $zero, 0x10($sp)
    ctx->pc = 0x337254u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 0));
    // 0x337258: 0x3c026c06  lui         $v0, 0x6C06
    ctx->pc = 0x337258u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27654 << 16));
    // 0x33725c: 0x344203d9  ori         $v0, $v0, 0x3D9
    ctx->pc = 0x33725cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)985);
    // 0x337260: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x337260u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x337264: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x337264u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x337268: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x337268u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x33726c: 0x34420404  ori         $v0, $v0, 0x404
    ctx->pc = 0x33726cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x337270: 0x70561b89  pcpyld      $v1, $v0, $s6
    ctx->pc = 0x337270u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 22)));
    // 0x337274: 0x7fa30040  sq          $v1, 0x40($sp)
    ctx->pc = 0x337274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 3));
    // 0x337278: 0x3c036c04  lui         $v1, 0x6C04
    ctx->pc = 0x337278u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27652 << 16));
    // 0x33727c: 0x346303df  ori         $v1, $v1, 0x3DF
    ctx->pc = 0x33727cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)991);
    // 0x337280: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x337280u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x337284: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x337284u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x337288: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x337288u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x33728c: 0x34630404  ori         $v1, $v1, 0x404
    ctx->pc = 0x33728cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1028);
    // 0x337290: 0x7076bb89  pcpyld      $s7, $v1, $s6
    ctx->pc = 0x337290u;
    SET_GPR_VEC(ctx, 23, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 22)));
    // 0x337294: 0x3c026c0a  lui         $v0, 0x6C0A
    ctx->pc = 0x337294u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27658 << 16));
    // 0x337298: 0x344203c9  ori         $v0, $v0, 0x3C9
    ctx->pc = 0x337298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)969);
    // 0x33729c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x33729cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3372a0: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x3372a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x3372a4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3372a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3372a8: 0x34420404  ori         $v0, $v0, 0x404
    ctx->pc = 0x3372a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x3372ac: 0x70562389  pcpyld      $a0, $v0, $s6
    ctx->pc = 0x3372acu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 22)));
    // 0x3372b0: 0x7fa40050  sq          $a0, 0x50($sp)
    ctx->pc = 0x3372b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 4));
    // 0x3372b4: 0x92640029  lbu         $a0, 0x29($s3)
    ctx->pc = 0x3372b4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 41)));
    // 0x3372b8: 0x24030258  addiu       $v1, $zero, 0x258
    ctx->pc = 0x3372b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    // 0x3372bc: 0x3c053000  lui         $a1, 0x3000
    ctx->pc = 0x3372bcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)12288 << 16));
    // 0x3372c0: 0x92620028  lbu         $v0, 0x28($s3)
    ctx->pc = 0x3372c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x3372c4: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3372c4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3372c8: 0x24030043  addiu       $v1, $zero, 0x43
    ctx->pc = 0x3372c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x3372cc: 0x34a54000  ori         $a1, $a1, 0x4000
    ctx->pc = 0x3372ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16384);
    // 0x3372d0: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3372d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x3372d4: 0x24070412  addiu       $a3, $zero, 0x412
    ctx->pc = 0x3372d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1042));
    // 0x3372d8: 0x21178  dsll        $v0, $v0, 5
    ctx->pc = 0x3372d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 5);
    // 0x3372dc: 0x8d080000  lw          $t0, 0x0($t0)
    ctx->pc = 0x3372dcu;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x3372e0: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x3372e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x3372e4: 0x240a000e  addiu       $t2, $zero, 0xE
    ctx->pc = 0x3372e4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x3372e8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3372e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3372ec: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x3372ecu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x3372f0: 0x70692389  pcpyld      $a0, $v1, $t1
    ctx->pc = 0x3372f0u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 9)));
    // 0x3372f4: 0x213c0  sll         $v0, $v0, 15
    ctx->pc = 0x3372f4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 15));
    // 0x3372f8: 0x24030048  addiu       $v1, $zero, 0x48
    ctx->pc = 0x3372f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x3372fc: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x3372fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x337300: 0x7fa40090  sq          $a0, 0x90($sp)
    ctx->pc = 0x337300u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 4));
    // 0x337304: 0x70662b89  pcpyld      $a1, $v1, $a2
    ctx->pc = 0x337304u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 6)));
    // 0x337308: 0x2483c  dsll32      $t1, $v0, 0
    ctx->pc = 0x337308u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 2) << (32 + 0));
    // 0x33730c: 0x70e93389  pcpyld      $a2, $a3, $t1
    ctx->pc = 0x33730cu;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 9)));
    // 0x337310: 0x7fa500a0  sq          $a1, 0xA0($sp)
    ctx->pc = 0x337310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 5));
    // 0x337314: 0x3c091000  lui         $t1, 0x1000
    ctx->pc = 0x337314u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4096 << 16));
    // 0x337318: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x337318u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x33731c: 0x35290001  ori         $t1, $t1, 0x1
    ctx->pc = 0x33731cu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)1);
    // 0x337320: 0x2403004f  addiu       $v1, $zero, 0x4F
    ctx->pc = 0x337320u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x337324: 0x71492b89  pcpyld      $a1, $t2, $t1
    ctx->pc = 0x337324u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 10), GPR_VEC(ctx, 9)));
    // 0x337328: 0x7fa60060  sq          $a2, 0x60($sp)
    ctx->pc = 0x337328u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 6));
    // 0x33732c: 0xdf82ae38  ld          $v0, -0x51C8($gp)
    ctx->pc = 0x33732cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946360)));
    // 0x337330: 0x3c091000  lui         $t1, 0x1000
    ctx->pc = 0x337330u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4096 << 16));
    // 0x337334: 0x9483c  dsll32      $t1, $t1, 0
    ctx->pc = 0x337334u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) << (32 + 0));
    // 0x337338: 0x35298005  ori         $t1, $t1, 0x8005
    ctx->pc = 0x337338u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)32773);
    // 0x33733c: 0x70622389  pcpyld      $a0, $v1, $v0
    ctx->pc = 0x33733cu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x337340: 0x71493389  pcpyld      $a2, $t2, $t1
    ctx->pc = 0x337340u;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 10), GPR_VEC(ctx, 9)));
    // 0x337344: 0x7fa400b0  sq          $a0, 0xB0($sp)
    ctx->pc = 0x337344u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 4));
    // 0x337348: 0x7fa50070  sq          $a1, 0x70($sp)
    ctx->pc = 0x337348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 5));
    // 0x33734c: 0x150002da  bnez        $t0, . + 4 + (0x2DA << 2)
    ctx->pc = 0x33734Cu;
    {
        const bool branch_taken_0x33734c = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x337350u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33734Cu;
        // 0x337350: 0x7fa60080  sq          $a2, 0x80($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33734c) {
            ctx->pc = 0x337EB8u;
            goto label_337eb8;
        }
    }
    ctx->pc = 0x337354u;
    // 0x337354: 0x8e640040  lw          $a0, 0x40($s3)
    ctx->pc = 0x337354u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x337358: 0x1080000b  beqz        $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x337358u;
    {
        const bool branch_taken_0x337358 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x33735Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337358u;
        // 0x33735c: 0xaf80bec4  sw          $zero, -0x413C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950596), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337358) {
            ctx->pc = 0x337388u;
            goto label_337388;
        }
    }
    ctx->pc = 0x337360u;
    // 0x337360: 0xc110e98  jal         func_443A60
    ctx->pc = 0x337360u;
    SET_GPR_U32(ctx, 31, 0x337368u);
    ctx->pc = 0x337364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337360u;
    // 0x337364: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x443A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443A60u, 0x337360u, 0x337368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337368u;
label_337368:
    // 0x337368: 0x8e640040  lw          $a0, 0x40($s3)
    ctx->pc = 0x337368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x33736c: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x33736cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x337370: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x337370u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x337374: 0x90620023  lbu         $v0, 0x23($v1)
    ctx->pc = 0x337374u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 35)));
    // 0x337378: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x337378u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x33737c: 0x10450002  beq         $v0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x33737Cu;
    {
        const bool branch_taken_0x33737c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x337380u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33737Cu;
        // 0x337380: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33737c) {
            ctx->pc = 0x337388u;
            goto label_337388;
        }
    }
    ctx->pc = 0x337384u;
    // 0x337384: 0xaf82bec4  sw          $v0, -0x413C($gp)
    ctx->pc = 0x337384u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950596), GPR_U32(ctx, 2));
label_337388:
    // 0x337388: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x337388u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x33738c: 0x50800008  beql        $a0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x33738Cu;
    {
        const bool branch_taken_0x33738c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x33738c) {
            ctx->pc = 0x337390u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33738Cu;
            // 0x337390: 0x8e640040  lw          $a0, 0x40($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3373B0u;
            goto label_3373b0;
        }
    }
    ctx->pc = 0x337394u;
    // 0x337394: 0xc110e98  jal         func_443A60
    ctx->pc = 0x337394u;
    SET_GPR_U32(ctx, 31, 0x33739Cu);
    ctx->pc = 0x337398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337394u;
    // 0x337398: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x443A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443A60u, 0x337394u, 0x33739Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33739Cu;
label_33739c:
    // 0x33739c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x33739cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3373a0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3373a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3373a4: 0xc110b7e  jal         func_442DF8
    ctx->pc = 0x3373A4u;
    SET_GPR_U32(ctx, 31, 0x3373ACu);
    ctx->pc = 0x3373A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3373A4u;
    // 0x3373a8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x442DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x442DF8u, 0x3373A4u, 0x3373ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3373ACu;
label_3373ac:
    // 0x3373ac: 0x8e640040  lw          $a0, 0x40($s3)
    ctx->pc = 0x3373acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
label_3373b0:
    // 0x3373b0: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3373B0u;
    {
        const bool branch_taken_0x3373b0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x3373b0) {
            ctx->pc = 0x3373B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3373B0u;
            // 0x3373b4: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3373C8u;
            goto label_3373c8;
        }
    }
    ctx->pc = 0x3373B8u;
    // 0x3373b8: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x3373b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3373bc: 0xc110b7e  jal         func_442DF8
    ctx->pc = 0x3373BCu;
    SET_GPR_U32(ctx, 31, 0x3373C4u);
    ctx->pc = 0x3373C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3373BCu;
    // 0x3373c0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x442DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x442DF8u, 0x3373BCu, 0x3373C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3373C4u;
label_3373c4:
    // 0x3373c4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3373c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3373c8:
    // 0x3373c8: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x3373C8u;
    {
        const bool branch_taken_0x3373c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3373c8) {
            ctx->pc = 0x3373CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3373C8u;
            // 0x3373cc: 0x8e620040  lw          $v0, 0x40($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3373F4u;
            goto label_3373f4;
        }
    }
    ctx->pc = 0x3373D0u;
    // 0x3373d0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3373d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3373d4: 0x8f82beb8  lw          $v0, -0x4148($gp)
    ctx->pc = 0x3373d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950584)));
    // 0x3373d8: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x3373d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3373dc: 0x8c430058  lw          $v1, 0x58($v0)
    ctx->pc = 0x3373dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x3373e0: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3373E0u;
    {
        const bool branch_taken_0x3373e0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3373e0) {
            ctx->pc = 0x3373E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3373E0u;
            // 0x3373e4: 0x8e620040  lw          $v0, 0x40($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3373F4u;
            goto label_3373f4;
        }
    }
    ctx->pc = 0x3373E8u;
    // 0x3373e8: 0xc110b7e  jal         func_442DF8
    ctx->pc = 0x3373E8u;
    SET_GPR_U32(ctx, 31, 0x3373F0u);
    ctx->pc = 0x3373ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3373E8u;
    // 0x3373ec: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x442DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x442DF8u, 0x3373E8u, 0x3373F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3373F0u;
label_3373f0:
    // 0x3373f0: 0x8e620040  lw          $v0, 0x40($s3)
    ctx->pc = 0x3373f0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
label_3373f4:
    // 0x3373f4: 0x5040002d  beql        $v0, $zero, . + 4 + (0x2D << 2)
    ctx->pc = 0x3373F4u;
    {
        const bool branch_taken_0x3373f4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3373f4) {
            ctx->pc = 0x3373F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3373F4u;
            // 0x3373f8: 0xdf82ae80  ld          $v0, -0x5180($gp) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946432)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3374ACu;
            goto label_3374ac;
        }
    }
    ctx->pc = 0x3373FCu;
    // 0x3373fc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3373fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x337400: 0x8f82beb8  lw          $v0, -0x4148($gp)
    ctx->pc = 0x337400u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950584)));
    // 0x337404: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x337404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x337408: 0x8c430058  lw          $v1, 0x58($v0)
    ctx->pc = 0x337408u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x33740c: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x33740Cu;
    {
        const bool branch_taken_0x33740c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33740c) {
            ctx->pc = 0x337410u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33740Cu;
            // 0x337410: 0x8e670040  lw          $a3, 0x40($s3) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x337420u;
            goto label_337420;
        }
    }
    ctx->pc = 0x337414u;
    // 0x337414: 0xc110b7e  jal         func_442DF8
    ctx->pc = 0x337414u;
    SET_GPR_U32(ctx, 31, 0x33741Cu);
    ctx->pc = 0x337418u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337414u;
    // 0x337418: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x442DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x442DF8u, 0x337414u, 0x33741Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33741Cu;
label_33741c:
    // 0x33741c: 0x8e670040  lw          $a3, 0x40($s3)
    ctx->pc = 0x33741cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
label_337420:
    // 0x337420: 0x10e00022  beqz        $a3, . + 4 + (0x22 << 2)
    ctx->pc = 0x337420u;
    {
        const bool branch_taken_0x337420 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x337424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337420u;
        // 0x337424: 0xdf82ae80  ld          $v0, -0x5180($gp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337420) {
            ctx->pc = 0x3374ACu;
            goto label_3374ac;
        }
    }
    ctx->pc = 0x337428u;
    // 0x337428: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x337428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x33742c: 0x8ce70000  lw          $a3, 0x0($a3)
    ctx->pc = 0x33742cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x337430: 0x37a50004  ori         $a1, $sp, 0x4
    ctx->pc = 0x337430u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)4);
    // 0x337434: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x337434u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x337438: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x337438u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33743c: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x33743cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337440: 0xaf87bec0  sw          $a3, -0x4140($gp)
    ctx->pc = 0x337440u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950592), GPR_U32(ctx, 7));
    // 0x337444: 0xc110f4c  jal         func_443D30
    ctx->pc = 0x337444u;
    SET_GPR_U32(ctx, 31, 0x33744Cu);
    ctx->pc = 0x337448u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337444u;
    // 0x337448: 0xff82ae80  sd          $v0, -0x5180($gp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946432), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x443D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443D30u, 0x337444u, 0x33744Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33744Cu;
label_33744c:
    // 0x33744c: 0x8e630040  lw          $v1, 0x40($s3)
    ctx->pc = 0x33744cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x337450: 0x2785ae68  addiu       $a1, $gp, -0x5198
    ctx->pc = 0x337450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294946408));
    // 0x337454: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x337454u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x337458: 0xc110f54  jal         func_443D50
    ctx->pc = 0x337458u;
    SET_GPR_U32(ctx, 31, 0x337460u);
    ctx->pc = 0x33745Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337458u;
    // 0x33745c: 0x90660050  lbu         $a2, 0x50($v1) (Delay Slot)
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x443D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443D50u, 0x337458u, 0x337460u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337460u;
label_337460:
    // 0x337460: 0x8e630040  lw          $v1, 0x40($s3)
    ctx->pc = 0x337460u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x337464: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x337464u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x337468: 0xff80ae60  sd          $zero, -0x51A0($gp)
    ctx->pc = 0x337468u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946400), GPR_U64(ctx, 0));
    // 0x33746c: 0x8c630050  lw          $v1, 0x50($v1)
    ctx->pc = 0x33746cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x337470: 0x30620f00  andi        $v0, $v1, 0xF00
    ctx->pc = 0x337470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3840);
    // 0x337474: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x337474u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x337478: 0x14440004  bne         $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x337478u;
    {
        const bool branch_taken_0x337478 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x33747Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337478u;
        // 0x33747c: 0x3062f000  andi        $v0, $v1, 0xF000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)61440);
        ctx->in_delay_slot = false;
        if (branch_taken_0x337478) {
            ctx->pc = 0x33748Cu;
            goto label_33748c;
        }
    }
    ctx->pc = 0x337480u;
    // 0x337480: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x337480u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x337484: 0xff82ae60  sd          $v0, -0x51A0($gp)
    ctx->pc = 0x337484u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946400), GPR_U64(ctx, 2));
    // 0x337488: 0x3062f000  andi        $v0, $v1, 0xF000
    ctx->pc = 0x337488u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)61440);
label_33748c:
    // 0x33748c: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x33748cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x337490: 0x1444000b  bne         $v0, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x337490u;
    {
        const bool branch_taken_0x337490 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x337494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337490u;
        // 0x337494: 0xdf82ae48  ld          $v0, -0x51B8($gp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946376)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337490) {
            ctx->pc = 0x3374C0u;
            goto label_3374c0;
        }
    }
    ctx->pc = 0x337498u;
    // 0x337498: 0xdf82ae60  ld          $v0, -0x51A0($gp)
    ctx->pc = 0x337498u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946400)));
    // 0x33749c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x33749cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3374a0: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3374a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3374a4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3374A4u;
    {
        const bool branch_taken_0x3374a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3374A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3374A4u;
        // 0x3374a8: 0xff82ae60  sd          $v0, -0x51A0($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294946400), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3374a4) {
            ctx->pc = 0x3374BCu;
            goto label_3374bc;
        }
    }
    ctx->pc = 0x3374ACu;
label_3374ac:
    // 0x3374ac: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x3374acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x3374b0: 0xaf80bec0  sw          $zero, -0x4140($gp)
    ctx->pc = 0x3374b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950592), GPR_U32(ctx, 0));
    // 0x3374b4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3374b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x3374b8: 0xff82ae80  sd          $v0, -0x5180($gp)
    ctx->pc = 0x3374b8u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946432), GPR_U64(ctx, 2));
label_3374bc:
    // 0x3374bc: 0xdf82ae48  ld          $v0, -0x51B8($gp)
    ctx->pc = 0x3374bcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946376)));
label_3374c0:
    // 0x3374c0: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x3374c0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3374c4: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3374c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3374c8: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x3374c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x3374cc: 0x10800017  beqz        $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x3374CCu;
    {
        const bool branch_taken_0x3374cc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3374D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3374CCu;
        // 0x3374d0: 0xff82ae48  sd          $v0, -0x51B8($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294946376), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3374cc) {
            ctx->pc = 0x33752Cu;
            goto label_33752c;
        }
    }
    ctx->pc = 0x3374D4u;
    // 0x3374d4: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x3374d4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3374d8: 0x37a5000c  ori         $a1, $sp, 0xC
    ctx->pc = 0x3374d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)12);
    // 0x3374dc: 0x37a60008  ori         $a2, $sp, 0x8
    ctx->pc = 0x3374dcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 29) | (uint64_t)(uint16_t)8);
    // 0x3374e0: 0xc110f4c  jal         func_443D30
    ctx->pc = 0x3374E0u;
    SET_GPR_U32(ctx, 31, 0x3374E8u);
    ctx->pc = 0x3374E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3374E0u;
    // 0x3374e4: 0x200b02d  daddu       $s6, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x443D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443D30u, 0x3374E0u, 0x3374E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3374E8u;
label_3374e8:
    // 0x3374e8: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3374e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3374ec: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x3374ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x3374f0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x3374f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3374f4: 0xc110f54  jal         func_443D50
    ctx->pc = 0x3374F4u;
    SET_GPR_U32(ctx, 31, 0x3374FCu);
    ctx->pc = 0x3374F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3374F4u;
    // 0x3374f8: 0x90660050  lbu         $a2, 0x50($v1) (Delay Slot)
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x443D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443D50u, 0x3374F4u, 0x3374FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3374FCu;
label_3374fc:
    // 0x3374fc: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x3374fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x337500: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x337500u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x337504: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x337504u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x337508: 0x30620f00  andi        $v0, $v1, 0xF00
    ctx->pc = 0x337508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3840);
    // 0x33750c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x33750cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x337510: 0x3063f000  andi        $v1, $v1, 0xF000
    ctx->pc = 0x337510u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)61440);
    // 0x337514: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x337514u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x337518: 0x31b02  srl         $v1, $v1, 12
    ctx->pc = 0x337518u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 12));
    // 0x33751c: 0x14650003  bne         $v1, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x33751Cu;
    {
        const bool branch_taken_0x33751c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x337520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33751Cu;
        // 0x337520: 0x2b00b  movn        $s6, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33751c) {
            ctx->pc = 0x33752Cu;
            goto label_33752c;
        }
    }
    ctx->pc = 0x337524u;
    // 0x337524: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x337524u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x337528: 0x2c2b025  or          $s6, $s6, $v0
    ctx->pc = 0x337528u;
    SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | GPR_U64(ctx, 2));
label_33752c:
    // 0x33752c: 0x8e630040  lw          $v1, 0x40($s3)
    ctx->pc = 0x33752cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x337530: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x337530u;
    {
        const bool branch_taken_0x337530 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x337534u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337530u;
        // 0x337534: 0x8fa2003c  lw          $v0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337530) {
            ctx->pc = 0x33757Cu;
            goto label_33757c;
        }
    }
    ctx->pc = 0x337538u;
    // 0x337538: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x337538u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33753c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x33753cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x337540: 0x28420009  slti        $v0, $v0, 0x9
    ctx->pc = 0x337540u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x337544: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x337544u;
    {
        const bool branch_taken_0x337544 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x337548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337544u;
        // 0x337548: 0x8fa2003c  lw          $v0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337544) {
            ctx->pc = 0x33757Cu;
            goto label_33757c;
        }
    }
    ctx->pc = 0x33754Cu;
    // 0x33754c: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x33754cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x337550: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x337550u;
    {
        const bool branch_taken_0x337550 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x337550) {
            ctx->pc = 0x337554u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x337550u;
            // 0x337554: 0x8fa2003c  lw          $v0, 0x3C($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x33757Cu;
            goto label_33757c;
        }
    }
    ctx->pc = 0x337558u;
    // 0x337558: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x337558u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33755c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x33755cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x337560: 0x28420009  slti        $v0, $v0, 0x9
    ctx->pc = 0x337560u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x337564: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x337564u;
    {
        const bool branch_taken_0x337564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x337568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337564u;
        // 0x337568: 0x8fa2003c  lw          $v0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337564) {
            ctx->pc = 0x33757Cu;
            goto label_33757c;
        }
    }
    ctx->pc = 0x33756Cu;
    // 0x33756c: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x33756cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x337570: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x337570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x337574: 0xaf82bec0  sw          $v0, -0x4140($gp)
    ctx->pc = 0x337574u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950592), GPR_U32(ctx, 2));
    // 0x337578: 0x8fa2003c  lw          $v0, 0x3C($sp)
    ctx->pc = 0x337578u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_33757c:
    // 0x33757c: 0x24030012  addiu       $v1, $zero, 0x12
    ctx->pc = 0x33757cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x337580: 0x24110010  addiu       $s1, $zero, 0x10
    ctx->pc = 0x337580u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x337584: 0x8fb50038  lw          $s5, 0x38($sp)
    ctx->pc = 0x337584u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x337588: 0x62880b  movn        $s1, $v1, $v0
    ctx->pc = 0x337588u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
    // 0x33758c: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x33758cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x337590: 0x2ea40015  sltiu       $a0, $s5, 0x15
    ctx->pc = 0x337590u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)21) ? 1 : 0);
    // 0x337594: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x337594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x337598: 0x24700001  addiu       $s0, $v1, 0x1
    ctx->pc = 0x337598u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x33759c: 0x44a80a  movz        $s5, $v0, $a0
    ctx->pc = 0x33759cu;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 2));
    // 0x3375a0: 0x2302821  addu        $a1, $s1, $s0
    ctx->pc = 0x3375a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x3375a4: 0x8e630030  lw          $v1, 0x30($s3)
    ctx->pc = 0x3375a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x3375a8: 0xb51018  mult        $v0, $a1, $s5
    ctx->pc = 0x3375a8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x3375ac: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x3375acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3375b0: 0x552821  addu        $a1, $v0, $s5
    ctx->pc = 0x3375b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x3375b4: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x3375b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x3375b8: 0x24a50018  addiu       $a1, $a1, 0x18
    ctx->pc = 0x3375b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
    // 0x3375bc: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x3375bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x3375c0: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x3375c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x3375c4: 0x751823  subu        $v1, $v1, $s5
    ctx->pc = 0x3375c4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x3375c8: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x3375c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x3375cc: 0xc10a322  jal         func_428C88
    ctx->pc = 0x3375CCu;
    SET_GPR_U32(ctx, 31, 0x3375D4u);
    ctx->pc = 0x3375D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3375CCu;
    // 0x3375d0: 0xafa30038  sw          $v1, 0x38($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x428C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x428C88u, 0x3375CCu, 0x3375D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3375D4u;
label_3375d4:
    // 0x3375d4: 0x8f83be20  lw          $v1, -0x41E0($gp)
    ctx->pc = 0x3375d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x3375d8: 0x3c091000  lui         $t1, 0x1000
    ctx->pc = 0x3375d8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)4096 << 16));
    // 0x3375dc: 0x35290016  ori         $t1, $t1, 0x16
    ctx->pc = 0x3375dcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)22);
    // 0x3375e0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x3375e0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3375e4: 0x70a91389  pcpyld      $v0, $a1, $t1
    ctx->pc = 0x3375e4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 9)));
    // 0x3375e8: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x3375e8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x3375ec: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x3375ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3375f0: 0x7ba40050  lq          $a0, 0x50($sp)
    ctx->pc = 0x3375f0u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3375f4: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x3375f4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x3375f8: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x3375f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3375fc: 0x7ba60060  lq          $a2, 0x60($sp)
    ctx->pc = 0x3375fcu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x337600: 0x7c660000  sq          $a2, 0x0($v1)
    ctx->pc = 0x337600u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 6));
    // 0x337604: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x337604u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x337608: 0x7ba20070  lq          $v0, 0x70($sp)
    ctx->pc = 0x337608u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x33760c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x33760cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x337610: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x337610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x337614: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x337614u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x337618: 0xdfa20000  ld          $v0, 0x0($sp)
    ctx->pc = 0x337618u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33761c: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x33761cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x337620: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x337620u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x337624: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x337624u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x337628: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x337628u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x33762c: 0xdfa20008  ld          $v0, 0x8($sp)
    ctx->pc = 0x33762cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x337630: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x337630u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x337634: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x337634u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x337638: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x337638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x33763c: 0x7ba40080  lq          $a0, 0x80($sp)
    ctx->pc = 0x33763cu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x337640: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x337640u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x337644: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x337644u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x337648: 0x7ba60090  lq          $a2, 0x90($sp)
    ctx->pc = 0x337648u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x33764c: 0x7c660000  sq          $a2, 0x0($v1)
    ctx->pc = 0x33764cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 6));
    // 0x337650: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x337650u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x337654: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x337654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x337658: 0x70561389  pcpyld      $v0, $v0, $s6
    ctx->pc = 0x337658u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 22)));
    // 0x33765c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x33765cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x337660: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x337660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x337664: 0x7ba200a0  lq          $v0, 0xA0($sp)
    ctx->pc = 0x337664u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x337668: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x337668u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x33766c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x33766cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x337670: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x337670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x337674: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x337674u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x337678: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x337678u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x33767c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x33767cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x337680: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x337680u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x337684: 0x7ba400b0  lq          $a0, 0xB0($sp)
    ctx->pc = 0x337684u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x337688: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x337688u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x33768c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x33768cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x337690: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x337690u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x337694: 0x3c046c01  lui         $a0, 0x6C01
    ctx->pc = 0x337694u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)27649 << 16));
    // 0x337698: 0x348403fa  ori         $a0, $a0, 0x3FA
    ctx->pc = 0x337698u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1018);
    // 0x33769c: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x33769cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x3376a0: 0x34840100  ori         $a0, $a0, 0x100
    ctx->pc = 0x3376a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
    // 0x3376a4: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x3376a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x3376a8: 0x34840404  ori         $a0, $a0, 0x404
    ctx->pc = 0x3376a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1028);
    // 0x3376ac: 0x70852389  pcpyld      $a0, $a0, $a1
    ctx->pc = 0x3376acu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x3376b0: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x3376b0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x3376b4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x3376b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3376b8: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x3376b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x3376bc: 0x92620047  lbu         $v0, 0x47($s3)
    ctx->pc = 0x3376bcu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 71)));
    // 0x3376c0: 0x8f83bec4  lw          $v1, -0x413C($gp)
    ctx->pc = 0x3376c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950596)));
    // 0x3376c4: 0x384200ff  xori        $v0, $v0, 0xFF
    ctx->pc = 0x3376c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)255);
    // 0x3376c8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3376c8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3376cc: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x3376ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3376d0: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x3376D0u;
    {
        const bool branch_taken_0x3376d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3376D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3376D0u;
        // 0x3376d4: 0xaf82bec8  sw          $v0, -0x4138($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950600), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3376d0) {
            ctx->pc = 0x3376E8u;
            goto label_3376e8;
        }
    }
    ctx->pc = 0x3376D8u;
    // 0x3376d8: 0xdf82ae80  ld          $v0, -0x5180($gp)
    ctx->pc = 0x3376d8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946432)));
    // 0x3376dc: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x3376dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x3376e0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3376E0u;
    {
        const bool branch_taken_0x3376e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3376E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3376E0u;
        // 0x3376e4: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3376e0) {
            ctx->pc = 0x3376F4u;
            goto label_3376f4;
        }
    }
    ctx->pc = 0x3376E8u;
label_3376e8:
    // 0x3376e8: 0xdf82ae80  ld          $v0, -0x5180($gp)
    ctx->pc = 0x3376e8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946432)));
    // 0x3376ec: 0x2403ffbf  addiu       $v1, $zero, -0x41
    ctx->pc = 0x3376ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x3376f0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3376f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3376f4:
    // 0x3376f4: 0xff82ae80  sd          $v0, -0x5180($gp)
    ctx->pc = 0x3376f4u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946432), GPR_U64(ctx, 2));
    // 0x3376f8: 0x92660029  lbu         $a2, 0x29($s3)
    ctx->pc = 0x3376f8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 41)));
    // 0x3376fc: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x3376fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x337700: 0x8f82ae80  lw          $v0, -0x5180($gp)
    ctx->pc = 0x337700u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946432)));
    // 0x337704: 0x3c07fc00  lui         $a3, 0xFC00
    ctx->pc = 0x337704u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64512 << 16));
    // 0x337708: 0x34e77fff  ori         $a3, $a3, 0x7FFF
    ctx->pc = 0x337708u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32767);
    // 0x33770c: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x33770cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x337710: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x337710u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x337714: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x337714u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x337718: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x337718u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x33771c: 0xdc64d5d0  ld          $a0, -0x2A30($v1)
    ctx->pc = 0x33771cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 4294956496)));
    // 0x337720: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x337720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x337724: 0x2463d5d0  addiu       $v1, $v1, -0x2A30
    ctx->pc = 0x337724u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956496));
    // 0x337728: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x337728u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x33772c: 0x872024  and         $a0, $a0, $a3
    ctx->pc = 0x33772cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x337730: 0x213fc  dsll32      $v0, $v0, 15
    ctx->pc = 0x337730u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 15));
    // 0x337734: 0xdc650008  ld          $a1, 0x8($v1)
    ctx->pc = 0x337734u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x337738: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x337738u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x33773c: 0x70a42389  pcpyld      $a0, $a1, $a0
    ctx->pc = 0x33773cu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x337740: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x337740u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x337744: 0x8f86be20  lw          $a2, -0x41E0($gp)
    ctx->pc = 0x337744u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x337748: 0x7cc40000  sq          $a0, 0x0($a2)
    ctx->pc = 0x337748u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 4));
    // 0x33774c: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x33774cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x337750: 0xaf86be20  sw          $a2, -0x41E0($gp)
    ctx->pc = 0x337750u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 6));
    // 0x337754: 0x3c026c01  lui         $v0, 0x6C01
    ctx->pc = 0x337754u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27649 << 16));
    // 0x337758: 0x344203fb  ori         $v0, $v0, 0x3FB
    ctx->pc = 0x337758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1019);
    // 0x33775c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x33775cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x337760: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x337760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x337764: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x337764u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x337768: 0x34420404  ori         $v0, $v0, 0x404
    ctx->pc = 0x337768u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x33776c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x33776cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337770: 0x70471389  pcpyld      $v0, $v0, $a3
    ctx->pc = 0x337770u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x337774: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x337774u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x337778: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x337778u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x33777c: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x33777cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x337780: 0xdf82ae80  ld          $v0, -0x5180($gp)
    ctx->pc = 0x337780u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946432)));
    // 0x337784: 0xc7858054  lwc1        $f5, -0x7FAC($gp)
    ctx->pc = 0x337784u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x337788: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x337788u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x33778c: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x33778Cu;
    {
        const bool branch_taken_0x33778c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x337790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33778Cu;
        // 0x337790: 0x92620044  lbu         $v0, 0x44($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33778c) {
            ctx->pc = 0x337798u;
            goto label_337798;
        }
    }
    ctx->pc = 0x337794u;
    // 0x337794: 0xc7858434  lwc1        $f5, -0x7BCC($gp)
    ctx->pc = 0x337794u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_337798:
    // 0x337798: 0x92630045  lbu         $v1, 0x45($s3)
    ctx->pc = 0x337798u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 69)));
    // 0x33779c: 0x92640046  lbu         $a0, 0x46($s3)
    ctx->pc = 0x33779cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 70)));
    // 0x3377a0: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x3377a0u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x3377a4: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x3377a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x3377a8: 0x92650047  lbu         $a1, 0x47($s3)
    ctx->pc = 0x3377a8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 71)));
    // 0x3377ac: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3377acu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3377b0: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x3377b0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x3377b4: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x3377b4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3377b8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x3377b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3377bc: 0xc7818434  lwc1        $f1, -0x7BCC($gp)
    ctx->pc = 0x3377bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3377c0: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3377c0u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3377c4: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3377c4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3377c8: 0x46010182  mul.s       $f6, $f0, $f1
    ctx->pc = 0x3377c8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3377cc: 0x460519c2  mul.s       $f7, $f3, $f5
    ctx->pc = 0x3377ccu;
    ctx->f[7] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x3377d0: 0x44023000  mfc1        $v0, $f6
    ctx->pc = 0x3377d0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3377d4: 0x44033800  mfc1        $v1, $f7
    ctx->pc = 0x3377d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3377d8: 0x70021789  pexew       $v0, $v0
    ctx->pc = 0x3377d8u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 2)));
    // 0x3377dc: 0x70031f89  pexew       $v1, $v1
    ctx->pc = 0x3377dcu;
    SET_GPR_VEC(ctx, 3, PS2_PEXEW(GPR_VEC(ctx, 3)));
    // 0x3377e0: 0x46051182  mul.s       $f6, $f2, $f5
    ctx->pc = 0x3377e0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x3377e4: 0x460521c2  mul.s       $f7, $f4, $f5
    ctx->pc = 0x3377e4u;
    ctx->f[7] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x3377e8: 0x44023000  mfc1        $v0, $f6
    ctx->pc = 0x3377e8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3377ec: 0x44033800  mfc1        $v1, $f7
    ctx->pc = 0x3377ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3377f0: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x3377f0u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x3377f4: 0x7cc20010  sq          $v0, 0x10($a2)
    ctx->pc = 0x3377f4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 2));
    // 0x3377f8: 0x24c30020  addiu       $v1, $a2, 0x20
    ctx->pc = 0x3377f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x3377fc: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x3377fcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x337800: 0x3c026c01  lui         $v0, 0x6C01
    ctx->pc = 0x337800u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27649 << 16));
    // 0x337804: 0x344203fc  ori         $v0, $v0, 0x3FC
    ctx->pc = 0x337804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1020);
    // 0x337808: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x337808u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x33780c: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x33780cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x337810: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x337810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x337814: 0x34420404  ori         $v0, $v0, 0x404
    ctx->pc = 0x337814u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x337818: 0x70471389  pcpyld      $v0, $v0, $a3
    ctx->pc = 0x337818u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x33781c: 0x7cc20020  sq          $v0, 0x20($a2)
    ctx->pc = 0x33781cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 2));
    // 0x337820: 0x24c30030  addiu       $v1, $a2, 0x30
    ctx->pc = 0x337820u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    // 0x337824: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x337824u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x337828: 0x8e62003c  lw          $v0, 0x3C($s3)
    ctx->pc = 0x337828u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
    // 0x33782c: 0xc7848240  lwc1        $f4, -0x7DC0($gp)
    ctx->pc = 0x33782cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x337830: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x337830u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x337834: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x337834u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x337838: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x337838u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33783c: 0xc660001c  lwc1        $f0, 0x1C($s3)
    ctx->pc = 0x33783cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x337840: 0x46040942  mul.s       $f5, $f1, $f4
    ctx->pc = 0x337840u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x337844: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x337844u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x337848: 0x44032800  mfc1        $v1, $f5
    ctx->pc = 0x337848u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x33784c: 0x70021789  pexew       $v0, $v0
    ctx->pc = 0x33784cu;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 2)));
    // 0x337850: 0x70031f89  pexew       $v1, $v1
    ctx->pc = 0x337850u;
    SET_GPR_VEC(ctx, 3, PS2_PEXEW(GPR_VEC(ctx, 3)));
    // 0x337854: 0x46041982  mul.s       $f6, $f3, $f4
    ctx->pc = 0x337854u;
    ctx->f[6] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x337858: 0x46041142  mul.s       $f5, $f2, $f4
    ctx->pc = 0x337858u;
    ctx->f[5] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x33785c: 0x44023000  mfc1        $v0, $f6
    ctx->pc = 0x33785cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x337860: 0x44032800  mfc1        $v1, $f5
    ctx->pc = 0x337860u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x337864: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x337864u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x337868: 0x7cc20030  sq          $v0, 0x30($a2)
    ctx->pc = 0x337868u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), GPR_VEC(ctx, 2));
    // 0x33786c: 0x24c30040  addiu       $v1, $a2, 0x40
    ctx->pc = 0x33786cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x337870: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x337870u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x337874: 0x8e620040  lw          $v0, 0x40($s3)
    ctx->pc = 0x337874u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x337878: 0x5040001f  beql        $v0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x337878u;
    {
        const bool branch_taken_0x337878 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x337878) {
            ctx->pc = 0x33787Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x337878u;
            // 0x33787c: 0x700014a9  por         $v0, $zero, $zero (Delay Slot)
            SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3378F8u;
            goto label_3378f8;
        }
    }
    ctx->pc = 0x337880u;
    // 0x337880: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x337880u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x337884: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x337884u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x337888: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x337888u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x33788c: 0x70471389  pcpyld      $v0, $v0, $a3
    ctx->pc = 0x33788cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x337890: 0x7cc20040  sq          $v0, 0x40($a2)
    ctx->pc = 0x337890u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 64), GPR_VEC(ctx, 2));
    // 0x337894: 0x24c20050  addiu       $v0, $a2, 0x50
    ctx->pc = 0x337894u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
    // 0x337898: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x337898u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x33789c: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x33789cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x3378a0: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3378a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3378a4: 0x34638003  ori         $v1, $v1, 0x8003
    ctx->pc = 0x3378a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32771);
    // 0x3378a8: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x3378a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x3378ac: 0x70431389  pcpyld      $v0, $v0, $v1
    ctx->pc = 0x3378acu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x3378b0: 0x7cc20050  sq          $v0, 0x50($a2)
    ctx->pc = 0x3378b0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 80), GPR_VEC(ctx, 2));
    // 0x3378b4: 0x24c20060  addiu       $v0, $a2, 0x60
    ctx->pc = 0x3378b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 96));
    // 0x3378b8: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x3378b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x3378bc: 0xdf83ae48  ld          $v1, -0x51B8($gp)
    ctx->pc = 0x3378bcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294946376)));
    // 0x3378c0: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x3378c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x3378c4: 0x70431389  pcpyld      $v0, $v0, $v1
    ctx->pc = 0x3378c4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x3378c8: 0x7cc20060  sq          $v0, 0x60($a2)
    ctx->pc = 0x3378c8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 96), GPR_VEC(ctx, 2));
    // 0x3378cc: 0x24c20070  addiu       $v0, $a2, 0x70
    ctx->pc = 0x3378ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 112));
    // 0x3378d0: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x3378d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x3378d4: 0xdf83ae68  ld          $v1, -0x5198($gp)
    ctx->pc = 0x3378d4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294946408)));
    // 0x3378d8: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x3378d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x3378dc: 0x70431389  pcpyld      $v0, $v0, $v1
    ctx->pc = 0x3378dcu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x3378e0: 0x7cc20070  sq          $v0, 0x70($a2)
    ctx->pc = 0x3378e0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 112), GPR_VEC(ctx, 2));
    // 0x3378e4: 0x24c20080  addiu       $v0, $a2, 0x80
    ctx->pc = 0x3378e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x3378e8: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x3378e8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x3378ec: 0xdf83ae60  ld          $v1, -0x51A0($gp)
    ctx->pc = 0x3378ecu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294946400)));
    // 0x3378f0: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x3378F0u;
    {
        const bool branch_taken_0x3378f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3378F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3378F0u;
        // 0x3378f4: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3378f0) {
            ctx->pc = 0x337958u;
            goto label_337958;
        }
    }
    ctx->pc = 0x3378F8u;
label_3378f8:
    // 0x3378f8: 0x7cc20040  sq          $v0, 0x40($a2)
    ctx->pc = 0x3378f8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 64), GPR_VEC(ctx, 2));
    // 0x3378fc: 0x24c20050  addiu       $v0, $a2, 0x50
    ctx->pc = 0x3378fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
    // 0x337900: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x337900u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x337904: 0x70001ca9  por         $v1, $zero, $zero
    ctx->pc = 0x337904u;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x337908: 0x7cc30050  sq          $v1, 0x50($a2)
    ctx->pc = 0x337908u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 80), GPR_VEC(ctx, 3));
    // 0x33790c: 0x24c20060  addiu       $v0, $a2, 0x60
    ctx->pc = 0x33790cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 96));
    // 0x337910: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x337910u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x337914: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x337914u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x337918: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x337918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x33791c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x33791cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x337920: 0x70471389  pcpyld      $v0, $v0, $a3
    ctx->pc = 0x337920u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x337924: 0x7cc20060  sq          $v0, 0x60($a2)
    ctx->pc = 0x337924u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 96), GPR_VEC(ctx, 2));
    // 0x337928: 0x24c20070  addiu       $v0, $a2, 0x70
    ctx->pc = 0x337928u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 112));
    // 0x33792c: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x33792cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x337930: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x337930u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x337934: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x337934u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x337938: 0x34638001  ori         $v1, $v1, 0x8001
    ctx->pc = 0x337938u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32769);
    // 0x33793c: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x33793cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x337940: 0x70431389  pcpyld      $v0, $v0, $v1
    ctx->pc = 0x337940u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x337944: 0x7cc20070  sq          $v0, 0x70($a2)
    ctx->pc = 0x337944u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 112), GPR_VEC(ctx, 2));
    // 0x337948: 0x24c20080  addiu       $v0, $a2, 0x80
    ctx->pc = 0x337948u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x33794c: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x33794cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x337950: 0xdf83ae48  ld          $v1, -0x51B8($gp)
    ctx->pc = 0x337950u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294946376)));
    // 0x337954: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x337954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
label_337958:
    // 0x337958: 0x70431389  pcpyld      $v0, $v0, $v1
    ctx->pc = 0x337958u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x33795c: 0x7cc20080  sq          $v0, 0x80($a2)
    ctx->pc = 0x33795cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 128), GPR_VEC(ctx, 2));
    // 0x337960: 0x24c20090  addiu       $v0, $a2, 0x90
    ctx->pc = 0x337960u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 144));
    // 0x337964: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x337964u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x337968: 0x2642c4c0  addiu       $v0, $s2, -0x3B40
    ctx->pc = 0x337968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294952128));
    // 0x33796c: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x33796cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x337970: 0x90650090  lbu         $a1, 0x90($v1)
    ctx->pc = 0x337970u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 144)));
    // 0x337974: 0xa265002b  sb          $a1, 0x2B($s3)
    ctx->pc = 0x337974u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 43), (uint8_t)GPR_U32(ctx, 5));
    // 0x337978: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x337978u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x33797c: 0x8f85aed4  lw          $a1, -0x512C($gp)
    ctx->pc = 0x33797cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946516)));
    // 0x337980: 0x9262002b  lbu         $v0, 0x2B($s3)
    ctx->pc = 0x337980u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 43)));
    // 0x337984: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x337984u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x337988: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x337988u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x33798c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33798cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x337990: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x337990u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x337994: 0x10a6000a  beq         $a1, $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x337994u;
    {
        const bool branch_taken_0x337994 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x337998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337994u;
        // 0x337998: 0x6203c  dsll32      $a0, $a2, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337994) {
            ctx->pc = 0x3379C0u;
            goto label_3379c0;
        }
    }
    ctx->pc = 0x33799Cu;
    // 0x33799c: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x33799cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x3379a0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3379a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3379a4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3379a4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3379a8: 0x70441389  pcpyld      $v0, $v0, $a0
    ctx->pc = 0x3379a8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x3379ac: 0x8f83be20  lw          $v1, -0x41E0($gp)
    ctx->pc = 0x3379acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x3379b0: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x3379b0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x3379b4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x3379b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3379b8: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x3379b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x3379bc: 0xaf86aed4  sw          $a2, -0x512C($gp)
    ctx->pc = 0x3379bcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946516), GPR_U32(ctx, 6));
label_3379c0:
    // 0x3379c0: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x3379c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x3379c4: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x3379c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x3379c8: 0x8fa600c0  lw          $a2, 0xC0($sp)
    ctx->pc = 0x3379c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x3379cc: 0x2244825  or          $t1, $s1, $a0
    ctx->pc = 0x3379ccu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 17) | GPR_U64(ctx, 4));
    // 0x3379d0: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x3379d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x3379d4: 0x3c040300  lui         $a0, 0x300
    ctx->pc = 0x3379d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)768 << 16));
    // 0x3379d8: 0x9cc50008  lwu         $a1, 0x8($a2)
    ctx->pc = 0x3379d8u;
    SET_GPR_ZE32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x3379dc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x3379dcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3379e0: 0x3c060200  lui         $a2, 0x200
    ctx->pc = 0x3379e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)512 << 16));
    // 0x3379e4: 0x7069f389  pcpyld      $fp, $v1, $t1
    ctx->pc = 0x3379e4u;
    SET_GPR_VEC(ctx, 30, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 9)));
    // 0x3379e8: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x3379e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x3379ec: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x3379ecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x3379f0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3379f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3379f4: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x3379f4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x3379f8: 0x445025  or          $t2, $v0, $a0
    ctx->pc = 0x3379f8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x3379fc: 0xa34825  or          $t1, $a1, $v1
    ctx->pc = 0x3379fcu;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x337a00: 0x8fa20034  lw          $v0, 0x34($sp)
    ctx->pc = 0x337a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x337a04: 0x71492389  pcpyld      $a0, $t2, $t1
    ctx->pc = 0x337a04u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 10), GPR_VEC(ctx, 9)));
    // 0x337a08: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x337a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x337a0c: 0x7fa400d0  sq          $a0, 0xD0($sp)
    ctx->pc = 0x337a0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 4));
    // 0x337a10: 0xafa000c4  sw          $zero, 0xC4($sp)
    ctx->pc = 0x337a10u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 0));
    // 0x337a14: 0x10600111  beqz        $v1, . + 4 + (0x111 << 2)
    ctx->pc = 0x337A14u;
    {
        const bool branch_taken_0x337a14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x337A18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337A14u;
        // 0x337a18: 0xafa00030  sw          $zero, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337a14) {
            ctx->pc = 0x337E5Cu;
            goto label_337e5c;
        }
    }
    ctx->pc = 0x337A1Cu;
    // 0x337a1c: 0x2301021  addu        $v0, $s1, $s0
    ctx->pc = 0x337a1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x337a20: 0x3c056c00  lui         $a1, 0x6C00
    ctx->pc = 0x337a20u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27648 << 16));
    // 0x337a24: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x337a24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x337a28: 0x34a50346  ori         $a1, $a1, 0x346
    ctx->pc = 0x337a28u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)838);
    // 0x337a2c: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x337a2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
    // 0x337a30: 0xafa50100  sw          $a1, 0x100($sp)
    ctx->pc = 0x337a30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 5));
    // 0x337a34: 0xafa0015c  sw          $zero, 0x15C($sp)
    ctx->pc = 0x337a34u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 0));
    // 0x337a38: 0xafa00160  sw          $zero, 0x160($sp)
    ctx->pc = 0x337a38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 0));
    // 0x337a3c: 0x0  nop
    ctx->pc = 0x337a3cu;
    // NOP
label_337a40:
    // 0x337a40: 0x8fa6003c  lw          $a2, 0x3C($sp)
    ctx->pc = 0x337a40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x337a44: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x337a44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337a48: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x337A48u;
    {
        const bool branch_taken_0x337a48 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x337A4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337A48u;
        // 0x337a4c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337a48) {
            ctx->pc = 0x337A68u;
            goto label_337a68;
        }
    }
    ctx->pc = 0x337A50u;
    // 0x337a50: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x337a50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x337a54: 0x8fa40160  lw          $a0, 0x160($sp)
    ctx->pc = 0x337a54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x337a58: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x337a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x337a5c: 0x449021  addu        $s2, $v0, $a0
    ctx->pc = 0x337a5cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x337a60: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x337A60u;
    {
        const bool branch_taken_0x337a60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x337A64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337A60u;
        // 0x337a64: 0x8e500000  lw          $s0, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337a60) {
            ctx->pc = 0x337A7Cu;
            goto label_337a7c;
        }
    }
    ctx->pc = 0x337A68u;
label_337a68:
    // 0x337a68: 0x8fa50034  lw          $a1, 0x34($sp)
    ctx->pc = 0x337a68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x337a6c: 0x8fa6015c  lw          $a2, 0x15C($sp)
    ctx->pc = 0x337a6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x337a70: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x337a70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x337a74: 0x468821  addu        $s1, $v0, $a2
    ctx->pc = 0x337a74u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x337a78: 0x8e30006c  lw          $s0, 0x6C($s1)
    ctx->pc = 0x337a78u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 108)));
label_337a7c:
    // 0x337a7c: 0x8e0200f0  lw          $v0, 0xF0($s0)
    ctx->pc = 0x337a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 240)));
    // 0x337a80: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x337a80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x337a84: 0x104000e8  beqz        $v0, . + 4 + (0xE8 << 2)
    ctx->pc = 0x337A84u;
    {
        const bool branch_taken_0x337a84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x337A88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337A84u;
        // 0x337a88: 0x8fa2003c  lw          $v0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337a84) {
            ctx->pc = 0x337E28u;
            goto label_337e28;
        }
    }
    ctx->pc = 0x337A8Cu;
    // 0x337a8c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x337a8cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337a90: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x337A90u;
    {
        const bool branch_taken_0x337a90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x337A94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337A90u;
        // 0x337a94: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337a90) {
            ctx->pc = 0x337AC8u;
            goto label_337ac8;
        }
    }
    ctx->pc = 0x337A98u;
    // 0x337a98: 0x8fa30028  lw          $v1, 0x28($sp)
    ctx->pc = 0x337a98u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x337a9c: 0xc0de61a  jal         func_379868
    ctx->pc = 0x337A9Cu;
    SET_GPR_U32(ctx, 31, 0x337AA4u);
    ctx->pc = 0x337AA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337A9Cu;
    // 0x337aa0: 0x8c640018  lw          $a0, 0x18($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x379868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x379868u, 0x337A9Cu, 0x337AA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337AA4u;
label_337aa4:
    // 0x337aa4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x337aa4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337aa8: 0xc0de646  jal         func_379918
    ctx->pc = 0x337AA8u;
    SET_GPR_U32(ctx, 31, 0x337AB0u);
    ctx->pc = 0x337AACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337AA8u;
    // 0x337aac: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x379918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x379918u, 0x337AA8u, 0x337AB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337AB0u;
label_337ab0:
    // 0x337ab0: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x337ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x337ab4: 0x2b080  sll         $s6, $v0, 2
    ctx->pc = 0x337ab4u;
    SET_GPR_S32(ctx, 22, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x337ab8: 0x92420004  lbu         $v0, 0x4($s2)
    ctx->pc = 0x337ab8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x337abc: 0x8c63010c  lw          $v1, 0x10C($v1)
    ctx->pc = 0x337abcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
    // 0x337ac0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x337AC0u;
    {
        const bool branch_taken_0x337ac0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x337AC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337AC0u;
        // 0x337ac4: 0xafa300f0  sw          $v1, 0xF0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337ac0) {
            ctx->pc = 0x337ACCu;
            goto label_337acc;
        }
    }
    ctx->pc = 0x337AC8u;
label_337ac8:
    // 0x337ac8: 0x92220060  lbu         $v0, 0x60($s1)
    ctx->pc = 0x337ac8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 96)));
label_337acc:
    // 0x337acc: 0xa2620028  sb          $v0, 0x28($s3)
    ctx->pc = 0x337accu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 40), (uint8_t)GPR_U32(ctx, 2));
    // 0x337ad0: 0x8fa400c4  lw          $a0, 0xC4($sp)
    ctx->pc = 0x337ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x337ad4: 0x54950010  bnel        $a0, $s5, . + 4 + (0x10 << 2)
    ctx->pc = 0x337AD4u;
    {
        const bool branch_taken_0x337ad4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 21));
        if (branch_taken_0x337ad4) {
            ctx->pc = 0x337AD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x337AD4u;
            // 0x337ad8: 0x8f87be20  lw          $a3, -0x41E0($gp) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x337B18u;
            goto label_337b18;
        }
    }
    ctx->pc = 0x337ADCu;
    // 0x337adc: 0x8fb50038  lw          $s5, 0x38($sp)
    ctx->pc = 0x337adcu;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x337ae0: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x337ae0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x337ae4: 0x8fa30038  lw          $v1, 0x38($sp)
    ctx->pc = 0x337ae4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x337ae8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x337ae8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337aec: 0x2ea20015  sltiu       $v0, $s5, 0x15
    ctx->pc = 0x337aecu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 21) < (uint64_t)(int64_t)(int32_t)21) ? 1 : 0);
    // 0x337af0: 0xafa000c4  sw          $zero, 0xC4($sp)
    ctx->pc = 0x337af0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 0));
    // 0x337af4: 0xa2a80a  movz        $s5, $a1, $v0
    ctx->pc = 0x337af4u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 21, GPR_VEC(ctx, 5));
    // 0x337af8: 0x8fa200e0  lw          $v0, 0xE0($sp)
    ctx->pc = 0x337af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x337afc: 0x751823  subu        $v1, $v1, $s5
    ctx->pc = 0x337afcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 21)));
    // 0x337b00: 0x2a20018  mult        $zero, $s5, $v0
    ctx->pc = 0x337b00u;
    { int64_t result = (int64_t)GPR_S32(ctx, 21) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x337b04: 0x2812  mflo        $a1
    ctx->pc = 0x337b04u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x337b08: 0xc10a322  jal         func_428C88
    ctx->pc = 0x337B08u;
    SET_GPR_U32(ctx, 31, 0x337B10u);
    ctx->pc = 0x337B0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337B08u;
    // 0x337b0c: 0xafa30038  sw          $v1, 0x38($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x428C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x428C88u, 0x337B08u, 0x337B10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337B10u;
label_337b10:
    // 0x337b10: 0x8f87be20  lw          $a3, -0x41E0($gp)
    ctx->pc = 0x337b10u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x337b14: 0x0  nop
    ctx->pc = 0x337b14u;
    // NOP
label_337b18:
    // 0x337b18: 0x7cfe0000  sq          $fp, 0x0($a3)
    ctx->pc = 0x337b18u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 30));
    // 0x337b1c: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x337b1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x337b20: 0x7ba40040  lq          $a0, 0x40($sp)
    ctx->pc = 0x337b20u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x337b24: 0x7ce40000  sq          $a0, 0x0($a3)
    ctx->pc = 0x337b24u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 4));
    // 0x337b28: 0x8fa5003c  lw          $a1, 0x3C($sp)
    ctx->pc = 0x337b28u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x337b2c: 0x10a0003c  beqz        $a1, . + 4 + (0x3C << 2)
    ctx->pc = 0x337B2Cu;
    {
        const bool branch_taken_0x337b2c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x337B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337B2Cu;
        // 0x337b30: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337b2c) {
            ctx->pc = 0x337C20u;
            goto label_337c20;
        }
    }
    ctx->pc = 0x337B34u;
    // 0x337b34: 0x7a020000  lq          $v0, 0x0($s0)
    ctx->pc = 0x337b34u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x337b38: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x337b38u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x337b3c: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x337b3cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x337b40: 0x7a020010  lq          $v0, 0x10($s0)
    ctx->pc = 0x337b40u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x337b44: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x337b44u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x337b48: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x337b48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x337b4c: 0x7a020020  lq          $v0, 0x20($s0)
    ctx->pc = 0x337b4cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x337b50: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x337b50u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x337b54: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x337b54u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x337b58: 0x7a020030  lq          $v0, 0x30($s0)
    ctx->pc = 0x337b58u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x337b5c: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x337b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x337b60: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x337b60u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x337b64: 0x7a020040  lq          $v0, 0x40($s0)
    ctx->pc = 0x337b64u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x337b68: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x337b68u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x337b6c: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x337b6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x337b70: 0x7a020050  lq          $v0, 0x50($s0)
    ctx->pc = 0x337b70u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x337b74: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x337b74u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x337b78: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x337b78u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x337b7c: 0x7cf70000  sq          $s7, 0x0($a3)
    ctx->pc = 0x337b7cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 23));
    // 0x337b80: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x337b80u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x337b84: 0x8e030108  lw          $v1, 0x108($s0)
    ctx->pc = 0x337b84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 264)));
    // 0x337b88: 0x24640050  addiu       $a0, $v1, 0x50
    ctx->pc = 0x337b88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x337b8c: 0x78620050  lq          $v0, 0x50($v1)
    ctx->pc = 0x337b8cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x337b90: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x337b90u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x337b94: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x337b94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x337b98: 0x78820010  lq          $v0, 0x10($a0)
    ctx->pc = 0x337b98u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x337b9c: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x337b9cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x337ba0: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x337ba0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x337ba4: 0x78820020  lq          $v0, 0x20($a0)
    ctx->pc = 0x337ba4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x337ba8: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x337ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x337bac: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x337bacu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x337bb0: 0xdc830030  ld          $v1, 0x30($a0)
    ctx->pc = 0x337bb0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x337bb4: 0x9c820038  lwu         $v0, 0x38($a0)
    ctx->pc = 0x337bb4u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x337bb8: 0x70431389  pcpyld      $v0, $v0, $v1
    ctx->pc = 0x337bb8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x337bbc: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x337bbcu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x337bc0: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x337bc0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x337bc4: 0x2685001c  addiu       $a1, $s4, 0x1C
    ctx->pc = 0x337bc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 28));
    // 0x337bc8: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x337bc8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x337bcc: 0x34c60001  ori         $a2, $a2, 0x1
    ctx->pc = 0x337bccu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1);
    // 0x337bd0: 0x3c026c01  lui         $v0, 0x6C01
    ctx->pc = 0x337bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27649 << 16));
    // 0x337bd4: 0x34420345  ori         $v0, $v0, 0x345
    ctx->pc = 0x337bd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)837);
    // 0x337bd8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x337bd8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x337bdc: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x337bdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x337be0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x337be0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x337be4: 0x34420404  ori         $v0, $v0, 0x404
    ctx->pc = 0x337be4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x337be8: 0x70461389  pcpyld      $v0, $v0, $a2
    ctx->pc = 0x337be8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x337bec: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x337becu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x337bf0: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x337bf0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x337bf4: 0x9ca60004  lwu         $a2, 0x4($a1)
    ctx->pc = 0x337bf4u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x337bf8: 0x9ca2000c  lwu         $v0, 0xC($a1)
    ctx->pc = 0x337bf8u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x337bfc: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x337bfcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x337c00: 0x9e83001c  lwu         $v1, 0x1C($s4)
    ctx->pc = 0x337c00u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x337c04: 0x9ca40008  lwu         $a0, 0x8($a1)
    ctx->pc = 0x337c04u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x337c08: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x337c08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x337c0c: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x337c0cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x337c10: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x337c10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x337c14: 0x70461389  pcpyld      $v0, $v0, $a2
    ctx->pc = 0x337c14u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x337c18: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x337C18u;
    {
        const bool branch_taken_0x337c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x337C1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337C18u;
        // 0x337c1c: 0x7ce20000  sq          $v0, 0x0($a3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337c18) {
            ctx->pc = 0x337CA8u;
            goto label_337ca8;
        }
    }
    ctx->pc = 0x337C20u;
label_337c20:
    // 0x337c20: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x337c20u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x337c24: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x337c24u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x337c28: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x337c28u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x337c2c: 0x7a220010  lq          $v0, 0x10($s1)
    ctx->pc = 0x337c2cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x337c30: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x337c30u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x337c34: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x337c34u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x337c38: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x337c38u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x337c3c: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x337c3cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x337c40: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x337c40u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x337c44: 0x7a220030  lq          $v0, 0x30($s1)
    ctx->pc = 0x337c44u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x337c48: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x337c48u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x337c4c: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x337c4cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x337c50: 0x7a220040  lq          $v0, 0x40($s1)
    ctx->pc = 0x337c50u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x337c54: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x337c54u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x337c58: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x337c58u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x337c5c: 0x7a220050  lq          $v0, 0x50($s1)
    ctx->pc = 0x337c5cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x337c60: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x337c60u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x337c64: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x337c64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x337c68: 0x7cf70000  sq          $s7, 0x0($a3)
    ctx->pc = 0x337c68u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 23));
    // 0x337c6c: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x337c6cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x337c70: 0x8e240068  lw          $a0, 0x68($s1)
    ctx->pc = 0x337c70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 104)));
    // 0x337c74: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x337c74u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x337c78: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x337c78u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x337c7c: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x337c7cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x337c80: 0x78820010  lq          $v0, 0x10($a0)
    ctx->pc = 0x337c80u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x337c84: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x337c84u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x337c88: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x337c88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x337c8c: 0x78820020  lq          $v0, 0x20($a0)
    ctx->pc = 0x337c8cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x337c90: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x337c90u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x337c94: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x337c94u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x337c98: 0xdc830030  ld          $v1, 0x30($a0)
    ctx->pc = 0x337c98u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x337c9c: 0x9c820038  lwu         $v0, 0x38($a0)
    ctx->pc = 0x337c9cu;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x337ca0: 0x70431389  pcpyld      $v0, $v0, $v1
    ctx->pc = 0x337ca0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x337ca4: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x337ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
label_337ca8:
    // 0x337ca8: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x337ca8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x337cac: 0xaf87be20  sw          $a3, -0x41E0($gp)
    ctx->pc = 0x337cacu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 7));
    // 0x337cb0: 0x92620028  lbu         $v0, 0x28($s3)
    ctx->pc = 0x337cb0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x337cb4: 0x3c046c03  lui         $a0, 0x6C03
    ctx->pc = 0x337cb4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)27651 << 16));
    // 0x337cb8: 0x348403fd  ori         $a0, $a0, 0x3FD
    ctx->pc = 0x337cb8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1021);
    // 0x337cbc: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x337cbcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x337cc0: 0x34840100  ori         $a0, $a0, 0x100
    ctx->pc = 0x337cc0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
    // 0x337cc4: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x337cc4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x337cc8: 0x34840404  ori         $a0, $a0, 0x404
    ctx->pc = 0x337cc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1028);
    // 0x337ccc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x337cccu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337cd0: 0x30450007  andi        $a1, $v0, 0x7
    ctx->pc = 0x337cd0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x337cd4: 0x70861389  pcpyld      $v0, $a0, $a2
    ctx->pc = 0x337cd4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 6)));
    // 0x337cd8: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x337cd8u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x337cdc: 0x24e20010  addiu       $v0, $a3, 0x10
    ctx->pc = 0x337cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x337ce0: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x337ce0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x337ce4: 0x8f83aee0  lw          $v1, -0x5120($gp)
    ctx->pc = 0x337ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946528)));
    // 0x337ce8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x337CE8u;
    {
        const bool branch_taken_0x337ce8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x337CECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337CE8u;
        // 0x337cec: 0x30a20004  andi        $v0, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x337ce8) {
            ctx->pc = 0x337CF8u;
            goto label_337cf8;
        }
    }
    ctx->pc = 0x337CF0u;
    // 0x337cf0: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x337CF0u;
    {
        const bool branch_taken_0x337cf0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x337cf0) {
            ctx->pc = 0x337CF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x337CF0u;
            // 0x337cf4: 0x34a50008  ori         $a1, $a1, 0x8 (Delay Slot)
            SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x337D10u;
            goto label_337d10;
        }
    }
    ctx->pc = 0x337CF8u;
label_337cf8:
    // 0x337cf8: 0x8f82aee4  lw          $v0, -0x511C($gp)
    ctx->pc = 0x337cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946532)));
    // 0x337cfc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x337CFCu;
    {
        const bool branch_taken_0x337cfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x337D00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337CFCu;
        // 0x337d00: 0x30a20004  andi        $v0, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x337cfc) {
            ctx->pc = 0x337D38u;
            goto label_337d38;
        }
    }
    ctx->pc = 0x337D04u;
    // 0x337d04: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x337D04u;
    {
        const bool branch_taken_0x337d04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x337D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337D04u;
        // 0x337d08: 0x3c04005e  lui         $a0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337d04) {
            ctx->pc = 0x337D40u;
            goto label_337d40;
        }
    }
    ctx->pc = 0x337D0Cu;
    // 0x337d0c: 0x34a50008  ori         $a1, $a1, 0x8
    ctx->pc = 0x337d0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8);
label_337d10:
    // 0x337d10: 0x8f82be20  lw          $v0, -0x41E0($gp)
    ctx->pc = 0x337d10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x337d14: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x337d14u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x337d18: 0x2484d670  addiu       $a0, $a0, -0x2990
    ctx->pc = 0x337d18u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956656));
    // 0x337d1c: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x337d1cu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x5DD670u));
    // 0x337d20: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x337d20u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x337d24: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x337d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x337d28: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x337d28u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x337d2c: 0x3c06005e  lui         $a2, 0x5E
    ctx->pc = 0x337d2cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)94 << 16));
    // 0x337d30: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x337D30u;
    {
        const bool branch_taken_0x337d30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x337D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337D30u;
        // 0x337d34: 0x24c6d680  addiu       $a2, $a2, -0x2980 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956672));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337d30) {
            ctx->pc = 0x337D60u;
            goto label_337d60;
        }
    }
    ctx->pc = 0x337D38u;
label_337d38:
    // 0x337d38: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x337d38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x337d3c: 0x0  nop
    ctx->pc = 0x337d3cu;
    // NOP
label_337d40:
    // 0x337d40: 0x8f82be20  lw          $v0, -0x41E0($gp)
    ctx->pc = 0x337d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x337d44: 0x2484d650  addiu       $a0, $a0, -0x29B0
    ctx->pc = 0x337d44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956624));
    // 0x337d48: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x337d48u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x337d4c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x337d4cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x337d50: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x337d50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x337d54: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x337d54u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x337d58: 0x3c06005e  lui         $a2, 0x5E
    ctx->pc = 0x337d58u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)94 << 16));
    // 0x337d5c: 0x24c6d660  addiu       $a2, $a2, -0x29A0
    ctx->pc = 0x337d5cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956640));
label_337d60:
    // 0x337d60: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x337d60u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x337d64: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x337d64u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x337d68: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x337d68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x337d6c: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x337d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x337d70: 0x8f82becc  lw          $v0, -0x4134($gp)
    ctx->pc = 0x337d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950604)));
    // 0x337d74: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x337d74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x337d78: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x337D78u;
    {
        const bool branch_taken_0x337d78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x337D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337D78u;
        // 0x337d7c: 0xaf80aed8  sw          $zero, -0x5128($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294946520), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337d78) {
            ctx->pc = 0x337D88u;
            goto label_337d88;
        }
    }
    ctx->pc = 0x337D80u;
    // 0x337d80: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x337d80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x337d84: 0xaf84aed8  sw          $a0, -0x5128($gp)
    ctx->pc = 0x337d84u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946520), GPR_U32(ctx, 4));
label_337d88:
    // 0x337d88: 0x9f82aedc  lwu         $v0, -0x5124($gp)
    ctx->pc = 0x337d88u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294946524)));
    // 0x337d8c: 0x5183c  dsll32      $v1, $a1, 0
    ctx->pc = 0x337d8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
    // 0x337d90: 0x9f84aed8  lwu         $a0, -0x5128($gp)
    ctx->pc = 0x337d90u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294946520)));
    // 0x337d94: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x337d94u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x337d98: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x337d98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x337d9c: 0x442025  or          $a0, $v0, $a0
    ctx->pc = 0x337d9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x337da0: 0x70831389  pcpyld      $v0, $a0, $v1
    ctx->pc = 0x337da0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x337da4: 0x8f85be20  lw          $a1, -0x41E0($gp)
    ctx->pc = 0x337da4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x337da8: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x337da8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x337dac: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x337dacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x337db0: 0xaf85be20  sw          $a1, -0x41E0($gp)
    ctx->pc = 0x337db0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 5));
    // 0x337db4: 0x8fa6003c  lw          $a2, 0x3C($sp)
    ctx->pc = 0x337db4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x337db8: 0x10c00013  beqz        $a2, . + 4 + (0x13 << 2)
    ctx->pc = 0x337DB8u;
    {
        const bool branch_taken_0x337db8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x337DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337DB8u;
        // 0x337dbc: 0x8fa60100  lw          $a2, 0x100($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337db8) {
            ctx->pc = 0x337E08u;
            goto label_337e08;
        }
    }
    ctx->pc = 0x337DC0u;
    // 0x337dc0: 0x32c200ff  andi        $v0, $s6, 0xFF
    ctx->pc = 0x337dc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 22) & (uint64_t)(uint16_t)255);
    // 0x337dc4: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x337dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x337dc8: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x337dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x337dcc: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x337dccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x337dd0: 0x2c32025  or          $a0, $s6, $v1
    ctx->pc = 0x337dd0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) | GPR_U64(ctx, 3));
    // 0x337dd4: 0x8fa600f0  lw          $a2, 0xF0($sp)
    ctx->pc = 0x337dd4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x337dd8: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x337dd8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x337ddc: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x337ddcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x337de0: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x337de0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x337de4: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x337de4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
    // 0x337de8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x337de8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x337dec: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x337decu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x337df0: 0x34840404  ori         $a0, $a0, 0x404
    ctx->pc = 0x337df0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1028);
    // 0x337df4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x337df4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x337df8: 0x70431389  pcpyld      $v0, $v0, $v1
    ctx->pc = 0x337df8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x337dfc: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x337dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x337e00: 0x24a30010  addiu       $v1, $a1, 0x10
    ctx->pc = 0x337e00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x337e04: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x337e04u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_337e08:
    // 0x337e08: 0x8f82be20  lw          $v0, -0x41E0($gp)
    ctx->pc = 0x337e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x337e0c: 0x7ba500d0  lq          $a1, 0xD0($sp)
    ctx->pc = 0x337e0cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x337e10: 0x7c450000  sq          $a1, 0x0($v0)
    ctx->pc = 0x337e10u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 5));
    // 0x337e14: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x337e14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x337e18: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x337e18u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x337e1c: 0x8fa600c4  lw          $a2, 0xC4($sp)
    ctx->pc = 0x337e1cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 196)));
    // 0x337e20: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x337e20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x337e24: 0xafa600c4  sw          $a2, 0xC4($sp)
    ctx->pc = 0x337e24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 6));
label_337e28:
    // 0x337e28: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x337e28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x337e2c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x337e2cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x337e30: 0x8fa5015c  lw          $a1, 0x15C($sp)
    ctx->pc = 0x337e30u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 348)));
    // 0x337e34: 0x8fa60160  lw          $a2, 0x160($sp)
    ctx->pc = 0x337e34u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x337e38: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x337e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x337e3c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x337e3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x337e40: 0x24a50070  addiu       $a1, $a1, 0x70
    ctx->pc = 0x337e40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
    // 0x337e44: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x337e44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x337e48: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x337e48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x337e4c: 0xafa5015c  sw          $a1, 0x15C($sp)
    ctx->pc = 0x337e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 348), GPR_U32(ctx, 5));
    // 0x337e50: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x337e50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x337e54: 0x1440fefa  bnez        $v0, . + 4 + (-0x106 << 2)
    ctx->pc = 0x337E54u;
    {
        const bool branch_taken_0x337e54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x337E58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337E54u;
        // 0x337e58: 0xafa60160  sw          $a2, 0x160($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 352), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337e54) {
            ctx->pc = 0x337A40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_337a40;
        }
    }
    ctx->pc = 0x337E5Cu;
label_337e5c:
    // 0x337e5c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x337e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_337e60:
    // 0x337e60: 0x42000039  di
    ctx->pc = 0x337e60u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x337e64: 0x40f  sync.p
    ctx->pc = 0x337e64u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x337e68: 0x40036000  mfc0        $v1, Status
    ctx->pc = 0x337e68u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_status);
    // 0x337e6c: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x337e6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x337e70: 0x0  nop
    ctx->pc = 0x337e70u;
    // NOP
    // 0x337e74: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x337E74u;
    {
        const bool branch_taken_0x337e74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x337e74) {
            ctx->pc = 0x337E60u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_337e60;
        }
    }
    ctx->pc = 0x337E7Cu;
    // 0x337e7c: 0x8fa400c0  lw          $a0, 0xC0($sp)
    ctx->pc = 0x337e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x337e80: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x337e80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x337e84: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x337e84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x337e88: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x337e88u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x337e8c: 0x42000038  ei
    ctx->pc = 0x337e8cu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x337e90: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x337e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x337e94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x337e94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x337e98: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x337e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x337e9c: 0x144302d5  bne         $v0, $v1, . + 4 + (0x2D5 << 2)
    ctx->pc = 0x337E9Cu;
    {
        const bool branch_taken_0x337e9c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x337EA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337E9Cu;
        // 0x337ea0: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337e9c) {
            ctx->pc = 0x3389F4u;
            goto label_3389f4;
        }
    }
    ctx->pc = 0x337EA4u;
    // 0x337ea4: 0xc10a762  jal         func_429D88
    ctx->pc = 0x337EA4u;
    SET_GPR_U32(ctx, 31, 0x337EACu);
    ctx->pc = 0x337EA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337EA4u;
    // 0x337ea8: 0x8fa400c0  lw          $a0, 0xC0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x429D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x429D88u, 0x337EA4u, 0x337EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337EACu;
label_337eac:
    // 0x337eac: 0x100002d2  b           . + 4 + (0x2D2 << 2)
    ctx->pc = 0x337EACu;
    {
        const bool branch_taken_0x337eac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x337EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337EACu;
        // 0x337eb0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337eac) {
            ctx->pc = 0x3389F8u;
            goto label_3389f8;
        }
    }
    ctx->pc = 0x337EB4u;
    // 0x337eb4: 0x0  nop
    ctx->pc = 0x337eb4u;
    // NOP
label_337eb8:
    // 0x337eb8: 0x8fa50034  lw          $a1, 0x34($sp)
    ctx->pc = 0x337eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x337ebc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x337ebcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x337ec0: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x337ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x337ec4: 0xafa60104  sw          $a2, 0x104($sp)
    ctx->pc = 0x337ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 6));
    // 0x337ec8: 0x104002ca  beqz        $v0, . + 4 + (0x2CA << 2)
    ctx->pc = 0x337EC8u;
    {
        const bool branch_taken_0x337ec8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x337ECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337EC8u;
        // 0x337ecc: 0xafa00030  sw          $zero, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337ec8) {
            ctx->pc = 0x3389F4u;
            goto label_3389f4;
        }
    }
    ctx->pc = 0x337ED0u;
    // 0x337ed0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x337ed0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x337ed4: 0xf02d  daddu       $fp, $zero, $zero
    ctx->pc = 0x337ed4u;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337ed8: 0xafa20114  sw          $v0, 0x114($sp)
    ctx->pc = 0x337ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 2));
    // 0x337edc: 0x3c056c00  lui         $a1, 0x6C00
    ctx->pc = 0x337edcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)27648 << 16));
    // 0x337ee0: 0x3c026c01  lui         $v0, 0x6C01
    ctx->pc = 0x337ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27649 << 16));
    // 0x337ee4: 0x344203fb  ori         $v0, $v0, 0x3FB
    ctx->pc = 0x337ee4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1019);
    // 0x337ee8: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x337ee8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x337eec: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x337eecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x337ef0: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x337ef0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x337ef4: 0x34420404  ori         $v0, $v0, 0x404
    ctx->pc = 0x337ef4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x337ef8: 0x27a60018  addiu       $a2, $sp, 0x18
    ctx->pc = 0x337ef8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 24));
    // 0x337efc: 0x705e1b89  pcpyld      $v1, $v0, $fp
    ctx->pc = 0x337efcu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 30)));
    // 0x337f00: 0x34a50346  ori         $a1, $a1, 0x346
    ctx->pc = 0x337f00u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)838);
    // 0x337f04: 0x7fa30120  sq          $v1, 0x120($sp)
    ctx->pc = 0x337f04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 3));
    // 0x337f08: 0x27a20020  addiu       $v0, $sp, 0x20
    ctx->pc = 0x337f08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x337f0c: 0x3c036c01  lui         $v1, 0x6C01
    ctx->pc = 0x337f0cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27649 << 16));
    // 0x337f10: 0x346303fc  ori         $v1, $v1, 0x3FC
    ctx->pc = 0x337f10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1020);
    // 0x337f14: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x337f14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x337f18: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x337f18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x337f1c: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x337f1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x337f20: 0x34630404  ori         $v1, $v1, 0x404
    ctx->pc = 0x337f20u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1028);
    // 0x337f24: 0xc7958434  lwc1        $f21, -0x7BCC($gp)
    ctx->pc = 0x337f24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x337f28: 0x707e2389  pcpyld      $a0, $v1, $fp
    ctx->pc = 0x337f28u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 30)));
    // 0x337f2c: 0xc7948240  lwc1        $f20, -0x7DC0($gp)
    ctx->pc = 0x337f2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x337f30: 0x8fa30114  lw          $v1, 0x114($sp)
    ctx->pc = 0x337f30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
    // 0x337f34: 0x7fa40130  sq          $a0, 0x130($sp)
    ctx->pc = 0x337f34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 4));
    // 0x337f38: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x337f38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x337f3c: 0xafa6010c  sw          $a2, 0x10C($sp)
    ctx->pc = 0x337f3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 268), GPR_U32(ctx, 6));
    // 0x337f40: 0xafa20110  sw          $v0, 0x110($sp)
    ctx->pc = 0x337f40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
    // 0x337f44: 0xafa30114  sw          $v1, 0x114($sp)
    ctx->pc = 0x337f44u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 3));
    // 0x337f48: 0xafb30118  sw          $s3, 0x118($sp)
    ctx->pc = 0x337f48u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 280), GPR_U32(ctx, 19));
    // 0x337f4c: 0xafa50150  sw          $a1, 0x150($sp)
    ctx->pc = 0x337f4cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 336), GPR_U32(ctx, 5));
    // 0x337f50: 0xafa00154  sw          $zero, 0x154($sp)
    ctx->pc = 0x337f50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 0));
    // 0x337f54: 0xafa00158  sw          $zero, 0x158($sp)
    ctx->pc = 0x337f54u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 0));
label_337f58:
    // 0x337f58: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x337f58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x337f5c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x337f5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337f60: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x337F60u;
    {
        const bool branch_taken_0x337f60 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x337F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337F60u;
        // 0x337f64: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337f60) {
            ctx->pc = 0x337F80u;
            goto label_337f80;
        }
    }
    ctx->pc = 0x337F68u;
    // 0x337f68: 0x8fa50034  lw          $a1, 0x34($sp)
    ctx->pc = 0x337f68u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x337f6c: 0x8fa60158  lw          $a2, 0x158($sp)
    ctx->pc = 0x337f6cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x337f70: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x337f70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x337f74: 0x468021  addu        $s0, $v0, $a2
    ctx->pc = 0x337f74u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x337f78: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x337F78u;
    {
        const bool branch_taken_0x337f78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x337F7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337F78u;
        // 0x337f7c: 0x8e120000  lw          $s2, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337f78) {
            ctx->pc = 0x337F94u;
            goto label_337f94;
        }
    }
    ctx->pc = 0x337F80u;
label_337f80:
    // 0x337f80: 0x8fa30034  lw          $v1, 0x34($sp)
    ctx->pc = 0x337f80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x337f84: 0x8fa40154  lw          $a0, 0x154($sp)
    ctx->pc = 0x337f84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x337f88: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x337f88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x337f8c: 0x44a021  addu        $s4, $v0, $a0
    ctx->pc = 0x337f8cu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x337f90: 0x8e92006c  lw          $s2, 0x6C($s4)
    ctx->pc = 0x337f90u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 108)));
label_337f94:
    // 0x337f94: 0x8e4200f0  lw          $v0, 0xF0($s2)
    ctx->pc = 0x337f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 240)));
    // 0x337f98: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x337f98u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x337f9c: 0x10400288  beqz        $v0, . + 4 + (0x288 << 2)
    ctx->pc = 0x337F9Cu;
    {
        const bool branch_taken_0x337f9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x337FA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337F9Cu;
        // 0x337fa0: 0x8fa5003c  lw          $a1, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337f9c) {
            ctx->pc = 0x3389C0u;
            goto label_3389c0;
        }
    }
    ctx->pc = 0x337FA4u;
    // 0x337fa4: 0xa82d  daddu       $s5, $zero, $zero
    ctx->pc = 0x337fa4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337fa8: 0x10a0000e  beqz        $a1, . + 4 + (0xE << 2)
    ctx->pc = 0x337FA8u;
    {
        const bool branch_taken_0x337fa8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x337FACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337FA8u;
        // 0x337fac: 0xafa00108  sw          $zero, 0x108($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337fa8) {
            ctx->pc = 0x337FE4u;
            goto label_337fe4;
        }
    }
    ctx->pc = 0x337FB0u;
    // 0x337fb0: 0x8fa60028  lw          $a2, 0x28($sp)
    ctx->pc = 0x337fb0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x337fb4: 0xc0de61a  jal         func_379868
    ctx->pc = 0x337FB4u;
    SET_GPR_U32(ctx, 31, 0x337FBCu);
    ctx->pc = 0x337FB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337FB4u;
    // 0x337fb8: 0x8cc40018  lw          $a0, 0x18($a2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x379868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x379868u, 0x337FB4u, 0x337FBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337FBCu;
label_337fbc:
    // 0x337fbc: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x337fbcu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x337fc0: 0xc0de646  jal         func_379918
    ctx->pc = 0x337FC0u;
    SET_GPR_U32(ctx, 31, 0x337FC8u);
    ctx->pc = 0x337FC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337FC0u;
    // 0x337fc4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x379918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x379918u, 0x337FC0u, 0x337FC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x337FC8u;
label_337fc8:
    // 0x337fc8: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x337fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x337fcc: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x337fccu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x337fd0: 0xafa20108  sw          $v0, 0x108($sp)
    ctx->pc = 0x337fd0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 264), GPR_U32(ctx, 2));
    // 0x337fd4: 0x92020004  lbu         $v0, 0x4($s0)
    ctx->pc = 0x337fd4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x337fd8: 0x8c63010c  lw          $v1, 0x10C($v1)
    ctx->pc = 0x337fd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
    // 0x337fdc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x337FDCu;
    {
        const bool branch_taken_0x337fdc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x337FE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337FDCu;
        // 0x337fe0: 0xafa30140  sw          $v1, 0x140($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337fdc) {
            ctx->pc = 0x337FE8u;
            goto label_337fe8;
        }
    }
    ctx->pc = 0x337FE4u;
label_337fe4:
    // 0x337fe4: 0x92820060  lbu         $v0, 0x60($s4)
    ctx->pc = 0x337fe4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 20), 96)));
label_337fe8:
    // 0x337fe8: 0xa2620028  sb          $v0, 0x28($s3)
    ctx->pc = 0x337fe8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 40), (uint8_t)GPR_U32(ctx, 2));
    // 0x337fec: 0x8e4200d8  lw          $v0, 0xD8($s2)
    ctx->pc = 0x337fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 216)));
    // 0x337ff0: 0x1040007d  beqz        $v0, . + 4 + (0x7D << 2)
    ctx->pc = 0x337FF0u;
    {
        const bool branch_taken_0x337ff0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x337FF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x337FF0u;
        // 0x337ff4: 0x8fa4002c  lw          $a0, 0x2C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x337ff0) {
            ctx->pc = 0x3381E8u;
            goto label_3381e8;
        }
    }
    ctx->pc = 0x337FF8u;
    // 0x337ff8: 0xc0dfea2  jal         func_37FA88
    ctx->pc = 0x337FF8u;
    SET_GPR_U32(ctx, 31, 0x338000u);
    ctx->pc = 0x337FFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x337FF8u;
    // 0x337ffc: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37FA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37FA88u, 0x337FF8u, 0x338000u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338000u;
label_338000:
    // 0x338000: 0x8fa4002c  lw          $a0, 0x2C($sp)
    ctx->pc = 0x338000u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 44)));
    // 0x338004: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x338004u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338008: 0xc0dff22  jal         func_37FC88
    ctx->pc = 0x338008u;
    SET_GPR_U32(ctx, 31, 0x338010u);
    ctx->pc = 0x33800Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338008u;
    // 0x33800c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37FC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37FC88u, 0x338008u, 0x338010u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338010u;
label_338010:
    // 0x338010: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x338010u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338014: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x338014u;
    {
        const bool branch_taken_0x338014 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x338018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338014u;
        // 0x338018: 0xaf80bec4  sw          $zero, -0x413C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950596), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338014) {
            ctx->pc = 0x338040u;
            goto label_338040;
        }
    }
    ctx->pc = 0x33801Cu;
    // 0x33801c: 0xc110e98  jal         func_443A60
    ctx->pc = 0x33801Cu;
    SET_GPR_U32(ctx, 31, 0x338024u);
    ctx->pc = 0x338020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33801Cu;
    // 0x338020: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x443A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443A60u, 0x33801Cu, 0x338024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338024u;
label_338024:
    // 0x338024: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x338024u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x338028: 0x90620023  lbu         $v0, 0x23($v1)
    ctx->pc = 0x338028u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 35)));
    // 0x33802c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x33802cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x338030: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x338030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x338034: 0x10430002  beq         $v0, $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x338034u;
    {
        const bool branch_taken_0x338034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x338038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338034u;
        // 0x338038: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338034) {
            ctx->pc = 0x338040u;
            goto label_338040;
        }
    }
    ctx->pc = 0x33803Cu;
    // 0x33803c: 0xaf84bec4  sw          $a0, -0x413C($gp)
    ctx->pc = 0x33803cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950596), GPR_U32(ctx, 4));
label_338040:
    // 0x338040: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
    ctx->pc = 0x338040u;
    {
        const bool branch_taken_0x338040 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x338040) {
            ctx->pc = 0x33805Cu;
            goto label_33805c;
        }
    }
    ctx->pc = 0x338048u;
    // 0x338048: 0xc110e98  jal         func_443A60
    ctx->pc = 0x338048u;
    SET_GPR_U32(ctx, 31, 0x338050u);
    ctx->pc = 0x33804Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338048u;
    // 0x33804c: 0x8e240000  lw          $a0, 0x0($s1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x443A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443A60u, 0x338048u, 0x338050u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338050u;
label_338050:
    // 0x338050: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x338050u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x338054: 0xc110b7e  jal         func_442DF8
    ctx->pc = 0x338054u;
    SET_GPR_U32(ctx, 31, 0x33805Cu);
    ctx->pc = 0x338058u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338054u;
    // 0x338058: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x442DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x442DF8u, 0x338054u, 0x33805Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33805Cu;
label_33805c:
    // 0x33805c: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x33805Cu;
    {
        const bool branch_taken_0x33805c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x33805c) {
            ctx->pc = 0x338070u;
            goto label_338070;
        }
    }
    ctx->pc = 0x338064u;
    // 0x338064: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x338064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x338068: 0xc110b7e  jal         func_442DF8
    ctx->pc = 0x338068u;
    SET_GPR_U32(ctx, 31, 0x338070u);
    ctx->pc = 0x33806Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338068u;
    // 0x33806c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x442DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x442DF8u, 0x338068u, 0x338070u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338070u;
label_338070:
    // 0x338070: 0x12200008  beqz        $s1, . + 4 + (0x8 << 2)
    ctx->pc = 0x338070u;
    {
        const bool branch_taken_0x338070 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x338074u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338070u;
        // 0x338074: 0x8f82beb8  lw          $v0, -0x4148($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950584)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338070) {
            ctx->pc = 0x338094u;
            goto label_338094;
        }
    }
    ctx->pc = 0x338078u;
    // 0x338078: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x338078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x33807c: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x33807cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x338080: 0x8c430058  lw          $v1, 0x58($v0)
    ctx->pc = 0x338080u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x338084: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x338084u;
    {
        const bool branch_taken_0x338084 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x338084) {
            ctx->pc = 0x338094u;
            goto label_338094;
        }
    }
    ctx->pc = 0x33808Cu;
    // 0x33808c: 0xc110b7e  jal         func_442DF8
    ctx->pc = 0x33808Cu;
    SET_GPR_U32(ctx, 31, 0x338094u);
    ctx->pc = 0x338090u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33808Cu;
    // 0x338090: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x442DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x442DF8u, 0x33808Cu, 0x338094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338094u;
label_338094:
    // 0x338094: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x338094u;
    {
        const bool branch_taken_0x338094 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x338098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338094u;
        // 0x338098: 0x8f82beb8  lw          $v0, -0x4148($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950584)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338094) {
            ctx->pc = 0x338134u;
            goto label_338134;
        }
    }
    ctx->pc = 0x33809Cu;
    // 0x33809c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x33809cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3380a0: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x3380a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x3380a4: 0x8c430058  lw          $v1, 0x58($v0)
    ctx->pc = 0x3380a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x3380a8: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3380A8u;
    {
        const bool branch_taken_0x3380a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3380ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3380A8u;
        // 0x3380ac: 0xdf82ae80  ld          $v0, -0x5180($gp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3380a8) {
            ctx->pc = 0x3380BCu;
            goto label_3380bc;
        }
    }
    ctx->pc = 0x3380B0u;
    // 0x3380b0: 0xc110b7e  jal         func_442DF8
    ctx->pc = 0x3380B0u;
    SET_GPR_U32(ctx, 31, 0x3380B8u);
    ctx->pc = 0x3380B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3380B0u;
    // 0x3380b4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x442DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x442DF8u, 0x3380B0u, 0x3380B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3380B8u;
label_3380b8:
    // 0x3380b8: 0xdf82ae80  ld          $v0, -0x5180($gp)
    ctx->pc = 0x3380b8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946432)));
label_3380bc:
    // 0x3380bc: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x3380bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3380c0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3380c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3380c4: 0x8fa6010c  lw          $a2, 0x10C($sp)
    ctx->pc = 0x3380c4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 268)));
    // 0x3380c8: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x3380c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x3380cc: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x3380ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3380d0: 0xaf83bec0  sw          $v1, -0x4140($gp)
    ctx->pc = 0x3380d0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950592), GPR_U32(ctx, 3));
    // 0x3380d4: 0x24c50004  addiu       $a1, $a2, 0x4
    ctx->pc = 0x3380d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x3380d8: 0xc110f4c  jal         func_443D30
    ctx->pc = 0x3380D8u;
    SET_GPR_U32(ctx, 31, 0x3380E0u);
    ctx->pc = 0x3380DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3380D8u;
    // 0x3380dc: 0xff82ae80  sd          $v0, -0x5180($gp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946432), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x443D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443D30u, 0x3380D8u, 0x3380E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3380E0u;
label_3380e0:
    // 0x3380e0: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x3380e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3380e4: 0x2785ae68  addiu       $a1, $gp, -0x5198
    ctx->pc = 0x3380e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294946408));
    // 0x3380e8: 0xc110f54  jal         func_443D50
    ctx->pc = 0x3380E8u;
    SET_GPR_U32(ctx, 31, 0x3380F0u);
    ctx->pc = 0x3380ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3380E8u;
    // 0x3380ec: 0x92060050  lbu         $a2, 0x50($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x443D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443D50u, 0x3380E8u, 0x3380F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3380F0u;
label_3380f0:
    // 0x3380f0: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x3380f0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x3380f4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x3380f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3380f8: 0x30620f00  andi        $v0, $v1, 0xF00
    ctx->pc = 0x3380f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3840);
    // 0x3380fc: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x3380fcu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x338100: 0x14440003  bne         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x338100u;
    {
        const bool branch_taken_0x338100 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x338104u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338100u;
        // 0x338104: 0xff80ae60  sd          $zero, -0x51A0($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294946400), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338100) {
            ctx->pc = 0x338110u;
            goto label_338110;
        }
    }
    ctx->pc = 0x338108u;
    // 0x338108: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x338108u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33810c: 0xff85ae60  sd          $a1, -0x51A0($gp)
    ctx->pc = 0x33810cu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946400), GPR_U64(ctx, 5));
label_338110:
    // 0x338110: 0x3062f000  andi        $v0, $v1, 0xF000
    ctx->pc = 0x338110u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)61440);
    // 0x338114: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x338114u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x338118: 0x1444000c  bne         $v0, $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x338118u;
    {
        const bool branch_taken_0x338118 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x33811Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338118u;
        // 0x33811c: 0xdf82ae48  ld          $v0, -0x51B8($gp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946376)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338118) {
            ctx->pc = 0x33814Cu;
            goto label_33814c;
        }
    }
    ctx->pc = 0x338120u;
    // 0x338120: 0xdf82ae60  ld          $v0, -0x51A0($gp)
    ctx->pc = 0x338120u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946400)));
    // 0x338124: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x338124u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x338128: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x338128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x33812c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x33812Cu;
    {
        const bool branch_taken_0x33812c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x338130u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33812Cu;
        // 0x338130: 0xff82ae60  sd          $v0, -0x51A0($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294946400), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33812c) {
            ctx->pc = 0x338148u;
            goto label_338148;
        }
    }
    ctx->pc = 0x338134u;
label_338134:
    // 0x338134: 0xdf82ae80  ld          $v0, -0x5180($gp)
    ctx->pc = 0x338134u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946432)));
    // 0x338138: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x338138u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x33813c: 0xaf80bec0  sw          $zero, -0x4140($gp)
    ctx->pc = 0x33813cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950592), GPR_U32(ctx, 0));
    // 0x338140: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x338140u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x338144: 0xff82ae80  sd          $v0, -0x5180($gp)
    ctx->pc = 0x338144u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946432), GPR_U64(ctx, 2));
label_338148:
    // 0x338148: 0xdf82ae48  ld          $v0, -0x51B8($gp)
    ctx->pc = 0x338148u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946376)));
label_33814c:
    // 0x33814c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x33814cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x338150: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x338150u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x338154: 0x12200015  beqz        $s1, . + 4 + (0x15 << 2)
    ctx->pc = 0x338154u;
    {
        const bool branch_taken_0x338154 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x338158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338154u;
        // 0x338158: 0xff82ae48  sd          $v0, -0x51B8($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294946376), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338154) {
            ctx->pc = 0x3381ACu;
            goto label_3381ac;
        }
    }
    ctx->pc = 0x33815Cu;
    // 0x33815c: 0x8fa60110  lw          $a2, 0x110($sp)
    ctx->pc = 0x33815cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x338160: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x338160u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x338164: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x338164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x338168: 0xc110f4c  jal         func_443D30
    ctx->pc = 0x338168u;
    SET_GPR_U32(ctx, 31, 0x338170u);
    ctx->pc = 0x33816Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338168u;
    // 0x33816c: 0x24c50004  addiu       $a1, $a2, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x443D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443D30u, 0x338168u, 0x338170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338170u;
label_338170:
    // 0x338170: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x338170u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x338174: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x338174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x338178: 0xc110f54  jal         func_443D50
    ctx->pc = 0x338178u;
    SET_GPR_U32(ctx, 31, 0x338180u);
    ctx->pc = 0x33817Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338178u;
    // 0x33817c: 0x92260050  lbu         $a2, 0x50($s1) (Delay Slot)
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x443D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443D50u, 0x338178u, 0x338180u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338180u;
label_338180:
    // 0x338180: 0x8e230050  lw          $v1, 0x50($s1)
    ctx->pc = 0x338180u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x338184: 0x30620f00  andi        $v0, $v1, 0xF00
    ctx->pc = 0x338184u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3840);
    // 0x338188: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x338188u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x33818c: 0x3063f000  andi        $v1, $v1, 0xF000
    ctx->pc = 0x33818cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)61440);
    // 0x338190: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x338190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x338194: 0x31b02  srl         $v1, $v1, 12
    ctx->pc = 0x338194u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 12));
    // 0x338198: 0x2b00b  movn        $s6, $zero, $v0
    ctx->pc = 0x338198u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 0));
    // 0x33819c: 0x38630003  xori        $v1, $v1, 0x3
    ctx->pc = 0x33819cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)3);
    // 0x3381a0: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x3381a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3381a4: 0x2c22025  or          $a0, $s6, $v0
    ctx->pc = 0x3381a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 22) | GPR_U64(ctx, 2));
    // 0x3381a8: 0x83b00a  movz        $s6, $a0, $v1
    ctx->pc = 0x3381a8u;
    if (GPR_U64(ctx, 3) == 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 4));
label_3381ac:
    // 0x3381ac: 0x1200000f  beqz        $s0, . + 4 + (0xF << 2)
    ctx->pc = 0x3381ACu;
    {
        const bool branch_taken_0x3381ac = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3381B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3381ACu;
        // 0x3381b0: 0x8fa4003c  lw          $a0, 0x3C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3381ac) {
            ctx->pc = 0x3381ECu;
            goto label_3381ec;
        }
    }
    ctx->pc = 0x3381B4u;
    // 0x3381b4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3381b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3381b8: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x3381b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x3381bc: 0x28420009  slti        $v0, $v0, 0x9
    ctx->pc = 0x3381bcu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x3381c0: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x3381C0u;
    {
        const bool branch_taken_0x3381c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3381C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3381C0u;
        // 0x3381c4: 0x24100024  addiu       $s0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3381c0) {
            ctx->pc = 0x3381F0u;
            goto label_3381f0;
        }
    }
    ctx->pc = 0x3381C8u;
    // 0x3381c8: 0x12200009  beqz        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x3381C8u;
    {
        const bool branch_taken_0x3381c8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x3381c8) {
            ctx->pc = 0x3381F0u;
            goto label_3381f0;
        }
    }
    ctx->pc = 0x3381D0u;
    // 0x3381d0: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x3381d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x3381d4: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x3381d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x3381d8: 0x28420009  slti        $v0, $v0, 0x9
    ctx->pc = 0x3381d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x3381dc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3381DCu;
    {
        const bool branch_taken_0x3381dc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3381E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3381DCu;
        // 0x3381e0: 0x8fa30114  lw          $v1, 0x114($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 276)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3381dc) {
            ctx->pc = 0x3381F0u;
            goto label_3381f0;
        }
    }
    ctx->pc = 0x3381E4u;
    // 0x3381e4: 0xaf83bec0  sw          $v1, -0x4140($gp)
    ctx->pc = 0x3381e4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950592), GPR_U32(ctx, 3));
label_3381e8:
    // 0x3381e8: 0x8fa4003c  lw          $a0, 0x3C($sp)
    ctx->pc = 0x3381e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
label_3381ec:
    // 0x3381ec: 0x24100024  addiu       $s0, $zero, 0x24
    ctx->pc = 0x3381ecu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
label_3381f0:
    // 0x3381f0: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3381F0u;
    {
        const bool branch_taken_0x3381f0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3381F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3381F0u;
        // 0x3381f4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3381f0) {
            ctx->pc = 0x338200u;
            goto label_338200;
        }
    }
    ctx->pc = 0x3381F8u;
    // 0x3381f8: 0x24100026  addiu       $s0, $zero, 0x26
    ctx->pc = 0x3381f8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
    // 0x3381fc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3381fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_338200:
    // 0x338200: 0x8fa60104  lw          $a2, 0x104($sp)
    ctx->pc = 0x338200u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x338204: 0x50c00004  beql        $a2, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x338204u;
    {
        const bool branch_taken_0x338204 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x338204) {
            ctx->pc = 0x338208u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x338204u;
            // 0x338208: 0xb02821  addu        $a1, $a1, $s0 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x338218u;
            goto label_338218;
        }
    }
    ctx->pc = 0x33820Cu;
    // 0x33820c: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x33820cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x338210: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x338210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x338214: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x338214u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
label_338218:
    // 0x338218: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x338218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33821c: 0xc10a322  jal         func_428C88
    ctx->pc = 0x33821Cu;
    SET_GPR_U32(ctx, 31, 0x338224u);
    ctx->pc = 0x338220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33821Cu;
    // 0x338220: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x428C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x428C88u, 0x33821Cu, 0x338224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338224u;
label_338224:
    // 0x338224: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x338224u;
    {
        const bool branch_taken_0x338224 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x338228u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338224u;
        // 0x338228: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338224) {
            ctx->pc = 0x338250u;
            goto label_338250;
        }
    }
    ctx->pc = 0x33822Cu;
    // 0x33822c: 0x2031025  or          $v0, $s0, $v1
    ctx->pc = 0x33822cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x338230: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x338230u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x338234: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x338234u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x338238: 0x73c21389  pcpyld      $v0, $fp, $v0
    ctx->pc = 0x338238u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 30), GPR_VEC(ctx, 2)));
    // 0x33823c: 0x8f83be20  lw          $v1, -0x41E0($gp)
    ctx->pc = 0x33823cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x338240: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x338240u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x338244: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x338244u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x338248: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x338248u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x33824c: 0x0  nop
    ctx->pc = 0x33824cu;
    // NOP
label_338250:
    // 0x338250: 0x8f87be20  lw          $a3, -0x41E0($gp)
    ctx->pc = 0x338250u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x338254: 0x7ba40050  lq          $a0, 0x50($sp)
    ctx->pc = 0x338254u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x338258: 0x7ce40000  sq          $a0, 0x0($a3)
    ctx->pc = 0x338258u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 4));
    // 0x33825c: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x33825cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x338260: 0x7ba50060  lq          $a1, 0x60($sp)
    ctx->pc = 0x338260u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x338264: 0x7ce50000  sq          $a1, 0x0($a3)
    ctx->pc = 0x338264u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 5));
    // 0x338268: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x338268u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x33826c: 0x7ba60070  lq          $a2, 0x70($sp)
    ctx->pc = 0x33826cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x338270: 0x7ce60000  sq          $a2, 0x0($a3)
    ctx->pc = 0x338270u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 6));
    // 0x338274: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x338274u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x338278: 0xdfa20018  ld          $v0, 0x18($sp)
    ctx->pc = 0x338278u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x33827c: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x33827cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x338280: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x338280u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x338284: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x338284u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x338288: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x338288u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x33828c: 0xdfa20020  ld          $v0, 0x20($sp)
    ctx->pc = 0x33828cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x338290: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x338290u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x338294: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x338294u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x338298: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x338298u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x33829c: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x33829cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x3382a0: 0x7ba50080  lq          $a1, 0x80($sp)
    ctx->pc = 0x3382a0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3382a4: 0x7ce50000  sq          $a1, 0x0($a3)
    ctx->pc = 0x3382a4u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 5));
    // 0x3382a8: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x3382a8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x3382ac: 0x7ba60090  lq          $a2, 0x90($sp)
    ctx->pc = 0x3382acu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3382b0: 0x7ce60000  sq          $a2, 0x0($a3)
    ctx->pc = 0x3382b0u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 6));
    // 0x3382b4: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x3382b4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x3382b8: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x3382b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x3382bc: 0x70761389  pcpyld      $v0, $v1, $s6
    ctx->pc = 0x3382bcu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 22)));
    // 0x3382c0: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x3382c0u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x3382c4: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x3382c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x3382c8: 0x7ba400a0  lq          $a0, 0xA0($sp)
    ctx->pc = 0x3382c8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3382cc: 0x7ce40000  sq          $a0, 0x0($a3)
    ctx->pc = 0x3382ccu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 4));
    // 0x3382d0: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x3382d0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x3382d4: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x3382d4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3382d8: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x3382d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x3382dc: 0x70a21389  pcpyld      $v0, $a1, $v0
    ctx->pc = 0x3382dcu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 2)));
    // 0x3382e0: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x3382e0u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x3382e4: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x3382e4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x3382e8: 0x7ba600b0  lq          $a2, 0xB0($sp)
    ctx->pc = 0x3382e8u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x3382ec: 0x7ce60000  sq          $a2, 0x0($a3)
    ctx->pc = 0x3382ecu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 6));
    // 0x3382f0: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x3382f0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x3382f4: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x3382f4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3382f8: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x3382f8u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x3382fc: 0x8fa3003c  lw          $v1, 0x3C($sp)
    ctx->pc = 0x3382fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x338300: 0x1060003d  beqz        $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x338300u;
    {
        const bool branch_taken_0x338300 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x338304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338300u;
        // 0x338304: 0x24e70010  addiu       $a3, $a3, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338300) {
            ctx->pc = 0x3383F8u;
            goto label_3383f8;
        }
    }
    ctx->pc = 0x338308u;
    // 0x338308: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x338308u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x33830c: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x33830cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x338310: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x338310u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x338314: 0x7a420010  lq          $v0, 0x10($s2)
    ctx->pc = 0x338314u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x338318: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x338318u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x33831c: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x33831cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x338320: 0x7a420020  lq          $v0, 0x20($s2)
    ctx->pc = 0x338320u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x338324: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x338324u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x338328: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x338328u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x33832c: 0x7a420030  lq          $v0, 0x30($s2)
    ctx->pc = 0x33832cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x338330: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x338330u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x338334: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x338334u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x338338: 0x7a420040  lq          $v0, 0x40($s2)
    ctx->pc = 0x338338u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x33833c: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x33833cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x338340: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x338340u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x338344: 0x7a420050  lq          $v0, 0x50($s2)
    ctx->pc = 0x338344u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x338348: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x338348u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x33834c: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x33834cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x338350: 0x7cf70000  sq          $s7, 0x0($a3)
    ctx->pc = 0x338350u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 23));
    // 0x338354: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x338354u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x338358: 0x8e430108  lw          $v1, 0x108($s2)
    ctx->pc = 0x338358u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 264)));
    // 0x33835c: 0x24640050  addiu       $a0, $v1, 0x50
    ctx->pc = 0x33835cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x338360: 0x78620050  lq          $v0, 0x50($v1)
    ctx->pc = 0x338360u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x338364: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x338364u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x338368: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x338368u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x33836c: 0x78820010  lq          $v0, 0x10($a0)
    ctx->pc = 0x33836cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x338370: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x338370u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x338374: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x338374u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x338378: 0x78820020  lq          $v0, 0x20($a0)
    ctx->pc = 0x338378u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x33837c: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x33837cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x338380: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x338380u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x338384: 0xdc830030  ld          $v1, 0x30($a0)
    ctx->pc = 0x338384u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x338388: 0x9c820038  lwu         $v0, 0x38($a0)
    ctx->pc = 0x338388u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x33838c: 0x70431389  pcpyld      $v0, $v0, $v1
    ctx->pc = 0x33838cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x338390: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x338390u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x338394: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x338394u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x338398: 0x26a5001c  addiu       $a1, $s5, 0x1C
    ctx->pc = 0x338398u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 28));
    // 0x33839c: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x33839cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x3383a0: 0x34c60001  ori         $a2, $a2, 0x1
    ctx->pc = 0x3383a0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1);
    // 0x3383a4: 0x3c026c01  lui         $v0, 0x6C01
    ctx->pc = 0x3383a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27649 << 16));
    // 0x3383a8: 0x34420345  ori         $v0, $v0, 0x345
    ctx->pc = 0x3383a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)837);
    // 0x3383ac: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3383acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3383b0: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x3383b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x3383b4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x3383b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x3383b8: 0x34420404  ori         $v0, $v0, 0x404
    ctx->pc = 0x3383b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x3383bc: 0x70461389  pcpyld      $v0, $v0, $a2
    ctx->pc = 0x3383bcu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x3383c0: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x3383c0u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x3383c4: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x3383c4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x3383c8: 0x9ca60004  lwu         $a2, 0x4($a1)
    ctx->pc = 0x3383c8u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x3383cc: 0x9ca2000c  lwu         $v0, 0xC($a1)
    ctx->pc = 0x3383ccu;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x3383d0: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x3383d0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x3383d4: 0x9ea3001c  lwu         $v1, 0x1C($s5)
    ctx->pc = 0x3383d4u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 21), 28)));
    // 0x3383d8: 0x9ca40008  lwu         $a0, 0x8($a1)
    ctx->pc = 0x3383d8u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x3383dc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3383dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3383e0: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x3383e0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x3383e4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x3383e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x3383e8: 0x70461389  pcpyld      $v0, $v0, $a2
    ctx->pc = 0x3383e8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x3383ec: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x3383ECu;
    {
        const bool branch_taken_0x3383ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3383F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3383ECu;
        // 0x3383f0: 0x7ce20000  sq          $v0, 0x0($a3) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3383ec) {
            ctx->pc = 0x338480u;
            goto label_338480;
        }
    }
    ctx->pc = 0x3383F4u;
    // 0x3383f4: 0x0  nop
    ctx->pc = 0x3383f4u;
    // NOP
label_3383f8:
    // 0x3383f8: 0x7a820000  lq          $v0, 0x0($s4)
    ctx->pc = 0x3383f8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x3383fc: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x3383fcu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x338400: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x338400u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x338404: 0x7a820010  lq          $v0, 0x10($s4)
    ctx->pc = 0x338404u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 16)));
    // 0x338408: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x338408u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x33840c: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x33840cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x338410: 0x7a820020  lq          $v0, 0x20($s4)
    ctx->pc = 0x338410u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 32)));
    // 0x338414: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x338414u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x338418: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x338418u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x33841c: 0x7a820030  lq          $v0, 0x30($s4)
    ctx->pc = 0x33841cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 48)));
    // 0x338420: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x338420u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x338424: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x338424u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x338428: 0x7a820040  lq          $v0, 0x40($s4)
    ctx->pc = 0x338428u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 64)));
    // 0x33842c: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x33842cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x338430: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x338430u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x338434: 0x7a820050  lq          $v0, 0x50($s4)
    ctx->pc = 0x338434u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 20), 80)));
    // 0x338438: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x338438u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x33843c: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x33843cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x338440: 0x7cf70000  sq          $s7, 0x0($a3)
    ctx->pc = 0x338440u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 23));
    // 0x338444: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x338444u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x338448: 0x8e840068  lw          $a0, 0x68($s4)
    ctx->pc = 0x338448u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 104)));
    // 0x33844c: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x33844cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x338450: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x338450u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x338454: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x338454u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x338458: 0x78820010  lq          $v0, 0x10($a0)
    ctx->pc = 0x338458u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x33845c: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x33845cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x338460: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x338460u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x338464: 0x78820020  lq          $v0, 0x20($a0)
    ctx->pc = 0x338464u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x338468: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x338468u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
    // 0x33846c: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x33846cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x338470: 0xdc830030  ld          $v1, 0x30($a0)
    ctx->pc = 0x338470u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x338474: 0x9c820038  lwu         $v0, 0x38($a0)
    ctx->pc = 0x338474u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x338478: 0x70431389  pcpyld      $v0, $v0, $v1
    ctx->pc = 0x338478u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x33847c: 0x7ce20000  sq          $v0, 0x0($a3)
    ctx->pc = 0x33847cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 2));
label_338480:
    // 0x338480: 0x24e70010  addiu       $a3, $a3, 0x10
    ctx->pc = 0x338480u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x338484: 0xaf87be20  sw          $a3, -0x41E0($gp)
    ctx->pc = 0x338484u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 7));
    // 0x338488: 0x3c046c01  lui         $a0, 0x6C01
    ctx->pc = 0x338488u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)27649 << 16));
    // 0x33848c: 0x348403fa  ori         $a0, $a0, 0x3FA
    ctx->pc = 0x33848cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1018);
    // 0x338490: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x338490u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x338494: 0x34840100  ori         $a0, $a0, 0x100
    ctx->pc = 0x338494u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
    // 0x338498: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x338498u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x33849c: 0x34840404  ori         $a0, $a0, 0x404
    ctx->pc = 0x33849cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1028);
    // 0x3384a0: 0x709e2389  pcpyld      $a0, $a0, $fp
    ctx->pc = 0x3384a0u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 30)));
    // 0x3384a4: 0x7ce40000  sq          $a0, 0x0($a3)
    ctx->pc = 0x3384a4u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 0), GPR_VEC(ctx, 4));
    // 0x3384a8: 0x24e20010  addiu       $v0, $a3, 0x10
    ctx->pc = 0x3384a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 16));
    // 0x3384ac: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x3384acu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x3384b0: 0x92630047  lbu         $v1, 0x47($s3)
    ctx->pc = 0x3384b0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 71)));
    // 0x3384b4: 0x8f82bec4  lw          $v0, -0x413C($gp)
    ctx->pc = 0x3384b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950596)));
    // 0x3384b8: 0x386300ff  xori        $v1, $v1, 0xFF
    ctx->pc = 0x3384b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)255);
    // 0x3384bc: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x3384bcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3384c0: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x3384c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3384c4: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3384C4u;
    {
        const bool branch_taken_0x3384c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3384C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3384C4u;
        // 0x3384c8: 0xaf83bec8  sw          $v1, -0x4138($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950600), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3384c4) {
            ctx->pc = 0x3384E0u;
            goto label_3384e0;
        }
    }
    ctx->pc = 0x3384CCu;
    // 0x3384cc: 0xdf82ae80  ld          $v0, -0x5180($gp)
    ctx->pc = 0x3384ccu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946432)));
    // 0x3384d0: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x3384d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x3384d4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3384D4u;
    {
        const bool branch_taken_0x3384d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3384D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3384D4u;
        // 0x3384d8: 0x441025  or          $v0, $v0, $a0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3384d4) {
            ctx->pc = 0x3384ECu;
            goto label_3384ec;
        }
    }
    ctx->pc = 0x3384DCu;
    // 0x3384dc: 0x0  nop
    ctx->pc = 0x3384dcu;
    // NOP
label_3384e0:
    // 0x3384e0: 0xdf82ae80  ld          $v0, -0x5180($gp)
    ctx->pc = 0x3384e0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946432)));
    // 0x3384e4: 0x2405ffbf  addiu       $a1, $zero, -0x41
    ctx->pc = 0x3384e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x3384e8: 0x451024  and         $v0, $v0, $a1
    ctx->pc = 0x3384e8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 5));
label_3384ec:
    // 0x3384ec: 0xff82ae80  sd          $v0, -0x5180($gp)
    ctx->pc = 0x3384ecu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946432), GPR_U64(ctx, 2));
    // 0x3384f0: 0x92630029  lbu         $v1, 0x29($s3)
    ctx->pc = 0x3384f0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 41)));
    // 0x3384f4: 0x3c06005e  lui         $a2, 0x5E
    ctx->pc = 0x3384f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)94 << 16));
    // 0x3384f8: 0x8f82ae80  lw          $v0, -0x5180($gp)
    ctx->pc = 0x3384f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946432)));
    // 0x3384fc: 0xdcc4d5d0  ld          $a0, -0x2A30($a2)
    ctx->pc = 0x3384fcu;
    SET_GPR_U64(ctx, 4, FAST_READ64(0x5DD5D0u));
    // 0x338500: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x338500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x338504: 0xc0182d  daddu       $v1, $a2, $zero
    ctx->pc = 0x338504u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338508: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x338508u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x33850c: 0x3c06fc00  lui         $a2, 0xFC00
    ctx->pc = 0x33850cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)64512 << 16));
    // 0x338510: 0x34c67fff  ori         $a2, $a2, 0x7FFF
    ctx->pc = 0x338510u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32767);
    // 0x338514: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x338514u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x338518: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x338518u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x33851c: 0x63438  dsll        $a2, $a2, 16
    ctx->pc = 0x33851cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 16);
    // 0x338520: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x338520u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
    // 0x338524: 0x2463d5d0  addiu       $v1, $v1, -0x2A30
    ctx->pc = 0x338524u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956496));
    // 0x338528: 0x862024  and         $a0, $a0, $a2
    ctx->pc = 0x338528u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 6));
    // 0x33852c: 0x213fc  dsll32      $v0, $v0, 15
    ctx->pc = 0x33852cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 15));
    // 0x338530: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x338530u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x338534: 0xdc650008  ld          $a1, 0x8($v1)
    ctx->pc = 0x338534u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x338538: 0x70a42389  pcpyld      $a0, $a1, $a0
    ctx->pc = 0x338538u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x33853c: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x33853cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x338540: 0x8f82be20  lw          $v0, -0x41E0($gp)
    ctx->pc = 0x338540u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x338544: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x338544u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x338548: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x338548u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x33854c: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x33854cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x338550: 0x8e63002c  lw          $v1, 0x2C($s3)
    ctx->pc = 0x338550u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x338554: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x338554u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x338558: 0xc0dff98  jal         func_37FE60
    ctx->pc = 0x338558u;
    SET_GPR_U32(ctx, 31, 0x338560u);
    ctx->pc = 0x33855Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338558u;
    // 0x33855c: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37FE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37FE60u, 0x338558u, 0x338560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338560u;
label_338560:
    // 0x338560: 0x88430003  lwl         $v1, 0x3($v0)
    ctx->pc = 0x338560u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x338564: 0x98430000  lwr         $v1, 0x0($v0)
    ctx->pc = 0x338564u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x338568: 0xaa630047  swl         $v1, 0x47($s3)
    ctx->pc = 0x338568u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 71); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x33856c: 0xba630044  swr         $v1, 0x44($s3)
    ctx->pc = 0x33856cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 68); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x338570: 0x8f86be20  lw          $a2, -0x41E0($gp)
    ctx->pc = 0x338570u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x338574: 0x7ba20120  lq          $v0, 0x120($sp)
    ctx->pc = 0x338574u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x338578: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x338578u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x33857c: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x33857cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x338580: 0xaf86be20  sw          $a2, -0x41E0($gp)
    ctx->pc = 0x338580u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 6));
    // 0x338584: 0xdf82ae80  ld          $v0, -0x5180($gp)
    ctx->pc = 0x338584u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946432)));
    // 0x338588: 0xc7848054  lwc1        $f4, -0x7FAC($gp)
    ctx->pc = 0x338588u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x33858c: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x33858cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x338590: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x338590u;
    {
        const bool branch_taken_0x338590 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x338594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338590u;
        // 0x338594: 0x92620044  lbu         $v0, 0x44($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338590) {
            ctx->pc = 0x3385A0u;
            goto label_3385a0;
        }
    }
    ctx->pc = 0x338598u;
    // 0x338598: 0xc7848434  lwc1        $f4, -0x7BCC($gp)
    ctx->pc = 0x338598u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x33859c: 0x0  nop
    ctx->pc = 0x33859cu;
    // NOP
label_3385a0:
    // 0x3385a0: 0x92630045  lbu         $v1, 0x45($s3)
    ctx->pc = 0x3385a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 69)));
    // 0x3385a4: 0x92650046  lbu         $a1, 0x46($s3)
    ctx->pc = 0x3385a4u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 70)));
    // 0x3385a8: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x3385a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3385ac: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x3385acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x3385b0: 0x92640047  lbu         $a0, 0x47($s3)
    ctx->pc = 0x3385b0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 71)));
    // 0x3385b4: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x3385b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3385b8: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x3385b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3385bc: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x3385bcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x3385c0: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x3385c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x3385c4: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x3385c4u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3385c8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3385c8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3385cc: 0x46150142  mul.s       $f5, $f0, $f21
    ctx->pc = 0x3385ccu;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x3385d0: 0x46041182  mul.s       $f6, $f2, $f4
    ctx->pc = 0x3385d0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x3385d4: 0x44022800  mfc1        $v0, $f5
    ctx->pc = 0x3385d4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3385d8: 0x44033000  mfc1        $v1, $f6
    ctx->pc = 0x3385d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3385dc: 0x70021789  pexew       $v0, $v0
    ctx->pc = 0x3385dcu;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 2)));
    // 0x3385e0: 0x70031f89  pexew       $v1, $v1
    ctx->pc = 0x3385e0u;
    SET_GPR_VEC(ctx, 3, PS2_PEXEW(GPR_VEC(ctx, 3)));
    // 0x3385e4: 0x46040942  mul.s       $f5, $f1, $f4
    ctx->pc = 0x3385e4u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x3385e8: 0x46041982  mul.s       $f6, $f3, $f4
    ctx->pc = 0x3385e8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x3385ec: 0x44022800  mfc1        $v0, $f5
    ctx->pc = 0x3385ecu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3385f0: 0x44033000  mfc1        $v1, $f6
    ctx->pc = 0x3385f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3385f4: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x3385f4u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x3385f8: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x3385f8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x3385fc: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x3385fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x338600: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x338600u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x338604: 0x8fa20104  lw          $v0, 0x104($sp)
    ctx->pc = 0x338604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x338608: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x338608u;
    {
        const bool branch_taken_0x338608 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33860Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338608u;
        // 0x33860c: 0x7ba30130  lq          $v1, 0x130($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 304)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338608) {
            ctx->pc = 0x338668u;
            goto label_338668;
        }
    }
    ctx->pc = 0x338610u;
    // 0x338610: 0x24c20020  addiu       $v0, $a2, 0x20
    ctx->pc = 0x338610u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x338614: 0x7cc30010  sq          $v1, 0x10($a2)
    ctx->pc = 0x338614u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 3));
    // 0x338618: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x338618u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x33861c: 0x8fa40118  lw          $a0, 0x118($sp)
    ctx->pc = 0x33861cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 280)));
    // 0x338620: 0x8c83003c  lw          $v1, 0x3C($a0)
    ctx->pc = 0x338620u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x338624: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x338624u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x338628: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x338628u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33862c: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x33862cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x338630: 0xc480001c  lwc1        $f0, 0x1C($a0)
    ctx->pc = 0x338630u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x338634: 0x46140902  mul.s       $f4, $f1, $f20
    ctx->pc = 0x338634u;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x338638: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x338638u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x33863c: 0x44032000  mfc1        $v1, $f4
    ctx->pc = 0x33863cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x338640: 0x70021789  pexew       $v0, $v0
    ctx->pc = 0x338640u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 2)));
    // 0x338644: 0x70031f89  pexew       $v1, $v1
    ctx->pc = 0x338644u;
    SET_GPR_VEC(ctx, 3, PS2_PEXEW(GPR_VEC(ctx, 3)));
    // 0x338648: 0x46141942  mul.s       $f5, $f3, $f20
    ctx->pc = 0x338648u;
    ctx->f[5] = FPU_MUL_S(ctx->f[3], ctx->f[20]);
    // 0x33864c: 0x46141102  mul.s       $f4, $f2, $f20
    ctx->pc = 0x33864cu;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x338650: 0x44022800  mfc1        $v0, $f5
    ctx->pc = 0x338650u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x338654: 0x44032000  mfc1        $v1, $f4
    ctx->pc = 0x338654u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x338658: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x338658u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x33865c: 0x7cc20020  sq          $v0, 0x20($a2)
    ctx->pc = 0x33865cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 2));
    // 0x338660: 0x24c30030  addiu       $v1, $a2, 0x30
    ctx->pc = 0x338660u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    // 0x338664: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x338664u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_338668:
    // 0x338668: 0x92620028  lbu         $v0, 0x28($s3)
    ctx->pc = 0x338668u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x33866c: 0x3c046c03  lui         $a0, 0x6C03
    ctx->pc = 0x33866cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)27651 << 16));
    // 0x338670: 0x348403fd  ori         $a0, $a0, 0x3FD
    ctx->pc = 0x338670u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1021);
    // 0x338674: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x338674u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x338678: 0x34840100  ori         $a0, $a0, 0x100
    ctx->pc = 0x338678u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
    // 0x33867c: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x33867cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x338680: 0x34840404  ori         $a0, $a0, 0x404
    ctx->pc = 0x338680u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1028);
    // 0x338684: 0x709e2389  pcpyld      $a0, $a0, $fp
    ctx->pc = 0x338684u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 30)));
    // 0x338688: 0x30450007  andi        $a1, $v0, 0x7
    ctx->pc = 0x338688u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x33868c: 0x8f83be20  lw          $v1, -0x41E0($gp)
    ctx->pc = 0x33868cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x338690: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x338690u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x338694: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x338694u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x338698: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x338698u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x33869c: 0x8f82aee0  lw          $v0, -0x5120($gp)
    ctx->pc = 0x33869cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946528)));
    // 0x3386a0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3386A0u;
    {
        const bool branch_taken_0x3386a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3386A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3386A0u;
        // 0x3386a4: 0x30a20004  andi        $v0, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3386a0) {
            ctx->pc = 0x3386B0u;
            goto label_3386b0;
        }
    }
    ctx->pc = 0x3386A8u;
    // 0x3386a8: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x3386A8u;
    {
        const bool branch_taken_0x3386a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3386a8) {
            ctx->pc = 0x3386ACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3386A8u;
            // 0x3386ac: 0x34a50008  ori         $a1, $a1, 0x8 (Delay Slot)
            SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x3386C8u;
            goto label_3386c8;
        }
    }
    ctx->pc = 0x3386B0u;
label_3386b0:
    // 0x3386b0: 0x8f82aee4  lw          $v0, -0x511C($gp)
    ctx->pc = 0x3386b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946532)));
    // 0x3386b4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3386B4u;
    {
        const bool branch_taken_0x3386b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3386B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3386B4u;
        // 0x3386b8: 0x30a20004  andi        $v0, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3386b4) {
            ctx->pc = 0x3386F0u;
            goto label_3386f0;
        }
    }
    ctx->pc = 0x3386BCu;
    // 0x3386bc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3386BCu;
    {
        const bool branch_taken_0x3386bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3386C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3386BCu;
        // 0x3386c0: 0x3c06005e  lui         $a2, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3386bc) {
            ctx->pc = 0x3386F8u;
            goto label_3386f8;
        }
    }
    ctx->pc = 0x3386C4u;
    // 0x3386c4: 0x34a50008  ori         $a1, $a1, 0x8
    ctx->pc = 0x3386c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8);
label_3386c8:
    // 0x3386c8: 0x8f82be20  lw          $v0, -0x41E0($gp)
    ctx->pc = 0x3386c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x3386cc: 0x3c06005e  lui         $a2, 0x5E
    ctx->pc = 0x3386ccu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)94 << 16));
    // 0x3386d0: 0x24c6d670  addiu       $a2, $a2, -0x2990
    ctx->pc = 0x3386d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956656));
    // 0x3386d4: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x3386d4u;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x5DD670u));
    // 0x3386d8: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x3386d8u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x3386dc: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x3386dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x3386e0: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x3386e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x3386e4: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x3386e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x3386e8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x3386E8u;
    {
        const bool branch_taken_0x3386e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3386ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3386E8u;
        // 0x3386ec: 0x2484d680  addiu       $a0, $a0, -0x2980 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956672));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3386e8) {
            ctx->pc = 0x338718u;
            goto label_338718;
        }
    }
    ctx->pc = 0x3386F0u;
label_3386f0:
    // 0x3386f0: 0x3c06005e  lui         $a2, 0x5E
    ctx->pc = 0x3386f0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)94 << 16));
    // 0x3386f4: 0x0  nop
    ctx->pc = 0x3386f4u;
    // NOP
label_3386f8:
    // 0x3386f8: 0x8f82be20  lw          $v0, -0x41E0($gp)
    ctx->pc = 0x3386f8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x3386fc: 0x24c6d650  addiu       $a2, $a2, -0x29B0
    ctx->pc = 0x3386fcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956624));
    // 0x338700: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x338700u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x338704: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x338704u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x338708: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x338708u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x33870c: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x33870cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x338710: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x338710u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x338714: 0x2484d660  addiu       $a0, $a0, -0x29A0
    ctx->pc = 0x338714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956640));
label_338718:
    // 0x338718: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x338718u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33871c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x33871cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x338720: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x338720u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x338724: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x338724u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x338728: 0x8f82becc  lw          $v0, -0x4134($gp)
    ctx->pc = 0x338728u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950604)));
    // 0x33872c: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x33872cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x338730: 0x14460003  bne         $v0, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x338730u;
    {
        const bool branch_taken_0x338730 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x338734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338730u;
        // 0x338734: 0xaf80aed8  sw          $zero, -0x5128($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294946520), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338730) {
            ctx->pc = 0x338740u;
            goto label_338740;
        }
    }
    ctx->pc = 0x338738u;
    // 0x338738: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x338738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x33873c: 0xaf82aed8  sw          $v0, -0x5128($gp)
    ctx->pc = 0x33873cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946520), GPR_U32(ctx, 2));
label_338740:
    // 0x338740: 0x9f82aedc  lwu         $v0, -0x5124($gp)
    ctx->pc = 0x338740u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294946524)));
    // 0x338744: 0x5183c  dsll32      $v1, $a1, 0
    ctx->pc = 0x338744u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
    // 0x338748: 0x9f84aed8  lwu         $a0, -0x5128($gp)
    ctx->pc = 0x338748u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294946520)));
    // 0x33874c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x33874cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x338750: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x338750u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x338754: 0x442025  or          $a0, $v0, $a0
    ctx->pc = 0x338754u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x338758: 0x70832389  pcpyld      $a0, $a0, $v1
    ctx->pc = 0x338758u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x33875c: 0x8f83be20  lw          $v1, -0x41E0($gp)
    ctx->pc = 0x33875cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x338760: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x338760u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x338764: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x338764u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x338768: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x338768u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x33876c: 0x8e620040  lw          $v0, 0x40($s3)
    ctx->pc = 0x33876cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x338770: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x338770u;
    {
        const bool branch_taken_0x338770 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x338774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338770u;
        // 0x338774: 0x700024a9  por         $a0, $zero, $zero (Delay Slot)
        SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338770) {
            ctx->pc = 0x3387F0u;
            goto label_3387f0;
        }
    }
    ctx->pc = 0x338778u;
    // 0x338778: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x338778u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x33877c: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x33877cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x338780: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x338780u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x338784: 0x705e1389  pcpyld      $v0, $v0, $fp
    ctx->pc = 0x338784u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 30)));
    // 0x338788: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x338788u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x33878c: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x33878cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x338790: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x338790u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x338794: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x338794u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x338798: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x338798u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x33879c: 0x34848003  ori         $a0, $a0, 0x8003
    ctx->pc = 0x33879cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32771);
    // 0x3387a0: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x3387a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x3387a4: 0x70441389  pcpyld      $v0, $v0, $a0
    ctx->pc = 0x3387a4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x3387a8: 0x7c620010  sq          $v0, 0x10($v1)
    ctx->pc = 0x3387a8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 2));
    // 0x3387ac: 0x24620020  addiu       $v0, $v1, 0x20
    ctx->pc = 0x3387acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x3387b0: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x3387b0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x3387b4: 0xdf84ae48  ld          $a0, -0x51B8($gp)
    ctx->pc = 0x3387b4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 28), 4294946376)));
    // 0x3387b8: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x3387b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x3387bc: 0x70441389  pcpyld      $v0, $v0, $a0
    ctx->pc = 0x3387bcu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x3387c0: 0x7c620020  sq          $v0, 0x20($v1)
    ctx->pc = 0x3387c0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), GPR_VEC(ctx, 2));
    // 0x3387c4: 0x24620030  addiu       $v0, $v1, 0x30
    ctx->pc = 0x3387c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x3387c8: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x3387c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x3387cc: 0xdf84ae68  ld          $a0, -0x5198($gp)
    ctx->pc = 0x3387ccu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 28), 4294946408)));
    // 0x3387d0: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x3387d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x3387d4: 0x70441389  pcpyld      $v0, $v0, $a0
    ctx->pc = 0x3387d4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x3387d8: 0x7c620030  sq          $v0, 0x30($v1)
    ctx->pc = 0x3387d8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), GPR_VEC(ctx, 2));
    // 0x3387dc: 0x24620040  addiu       $v0, $v1, 0x40
    ctx->pc = 0x3387dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x3387e0: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x3387e0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x3387e4: 0xdf84ae60  ld          $a0, -0x51A0($gp)
    ctx->pc = 0x3387e4u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 28), 4294946400)));
    // 0x3387e8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x3387E8u;
    {
        const bool branch_taken_0x3387e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3387ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3387E8u;
        // 0x3387ec: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3387e8) {
            ctx->pc = 0x338850u;
            goto label_338850;
        }
    }
    ctx->pc = 0x3387F0u;
label_3387f0:
    // 0x3387f0: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x3387f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3387f4: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x3387f4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x3387f8: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x3387f8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x3387fc: 0x7c640010  sq          $a0, 0x10($v1)
    ctx->pc = 0x3387fcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 4));
    // 0x338800: 0x24620020  addiu       $v0, $v1, 0x20
    ctx->pc = 0x338800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x338804: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x338804u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x338808: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x338808u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x33880c: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x33880cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x338810: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x338810u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x338814: 0x705e1389  pcpyld      $v0, $v0, $fp
    ctx->pc = 0x338814u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 30)));
    // 0x338818: 0x7c620020  sq          $v0, 0x20($v1)
    ctx->pc = 0x338818u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), GPR_VEC(ctx, 2));
    // 0x33881c: 0x24620030  addiu       $v0, $v1, 0x30
    ctx->pc = 0x33881cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x338820: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x338820u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x338824: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x338824u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x338828: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x338828u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x33882c: 0x34848001  ori         $a0, $a0, 0x8001
    ctx->pc = 0x33882cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32769);
    // 0x338830: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x338830u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x338834: 0x70441389  pcpyld      $v0, $v0, $a0
    ctx->pc = 0x338834u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x338838: 0x7c620030  sq          $v0, 0x30($v1)
    ctx->pc = 0x338838u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), GPR_VEC(ctx, 2));
    // 0x33883c: 0x24620040  addiu       $v0, $v1, 0x40
    ctx->pc = 0x33883cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x338840: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x338840u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x338844: 0xdf84ae48  ld          $a0, -0x51B8($gp)
    ctx->pc = 0x338844u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 28), 4294946376)));
    // 0x338848: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x338848u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x33884c: 0x0  nop
    ctx->pc = 0x33884cu;
    // NOP
label_338850:
    // 0x338850: 0x70441389  pcpyld      $v0, $v0, $a0
    ctx->pc = 0x338850u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x338854: 0x7c620040  sq          $v0, 0x40($v1)
    ctx->pc = 0x338854u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 64), GPR_VEC(ctx, 2));
    // 0x338858: 0x24620050  addiu       $v0, $v1, 0x50
    ctx->pc = 0x338858u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x33885c: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x33885cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x338860: 0x8fa5003c  lw          $a1, 0x3C($sp)
    ctx->pc = 0x338860u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 60)));
    // 0x338864: 0x10a00016  beqz        $a1, . + 4 + (0x16 << 2)
    ctx->pc = 0x338864u;
    {
        const bool branch_taken_0x338864 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x338868u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338864u;
        // 0x338868: 0x8fa60108  lw          $a2, 0x108($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 264)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338864) {
            ctx->pc = 0x3388C0u;
            goto label_3388c0;
        }
    }
    ctx->pc = 0x33886Cu;
    // 0x33886c: 0x3c043000  lui         $a0, 0x3000
    ctx->pc = 0x33886cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12288 << 16));
    // 0x338870: 0x8fa50150  lw          $a1, 0x150($sp)
    ctx->pc = 0x338870u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x338874: 0xc41825  or          $v1, $a2, $a0
    ctx->pc = 0x338874u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x338878: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x338878u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x33887c: 0x8fa60140  lw          $a2, 0x140($sp)
    ctx->pc = 0x33887cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x338880: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x338880u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x338884: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x338884u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x338888: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x338888u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x33888c: 0x6203c  dsll32      $a0, $a2, 0
    ctx->pc = 0x33888cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 0));
    // 0x338890: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x338890u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x338894: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x338894u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x338898: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x338898u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x33889c: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x33889cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x3388a0: 0x34630404  ori         $v1, $v1, 0x404
    ctx->pc = 0x3388a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1028);
    // 0x3388a4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x3388a4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3388a8: 0x70441389  pcpyld      $v0, $v0, $a0
    ctx->pc = 0x3388a8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x3388ac: 0x8f83be20  lw          $v1, -0x41E0($gp)
    ctx->pc = 0x3388acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x3388b0: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x3388b0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x3388b4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x3388b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3388b8: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x3388b8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x3388bc: 0x0  nop
    ctx->pc = 0x3388bcu;
    // NOP
label_3388c0:
    // 0x3388c0: 0x8fa40104  lw          $a0, 0x104($sp)
    ctx->pc = 0x3388c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 260)));
    // 0x3388c4: 0x10800017  beqz        $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x3388C4u;
    {
        const bool branch_taken_0x3388c4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3388C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3388C4u;
        // 0x3388c8: 0x3c050062  lui         $a1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3388c4) {
            ctx->pc = 0x338924u;
            goto label_338924;
        }
    }
    ctx->pc = 0x3388CCu;
    // 0x3388cc: 0x24a5c4c0  addiu       $a1, $a1, -0x3B40
    ctx->pc = 0x3388ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952128));
    // 0x3388d0: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x3388d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x3388d4: 0x90430090  lbu         $v1, 0x90($v0)
    ctx->pc = 0x3388d4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x3388d8: 0xa263002b  sb          $v1, 0x2B($s3)
    ctx->pc = 0x3388d8u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 43), (uint8_t)GPR_U32(ctx, 3));
    // 0x3388dc: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x3388dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x3388e0: 0x8f85aed4  lw          $a1, -0x512C($gp)
    ctx->pc = 0x3388e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946516)));
    // 0x3388e4: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x3388e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3388e8: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x3388e8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x3388ec: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3388ecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3388f0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x3388f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x3388f4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3388f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3388f8: 0x10a40009  beq         $a1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x3388F8u;
    {
        const bool branch_taken_0x3388f8 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x3388FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3388F8u;
        // 0x3388fc: 0x4103c  dsll32      $v0, $a0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3388f8) {
            ctx->pc = 0x338920u;
            goto label_338920;
        }
    }
    ctx->pc = 0x338900u;
    // 0x338900: 0x3c065000  lui         $a2, 0x5000
    ctx->pc = 0x338900u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20480 << 16));
    // 0x338904: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x338904u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x338908: 0x73c21389  pcpyld      $v0, $fp, $v0
    ctx->pc = 0x338908u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 30), GPR_VEC(ctx, 2)));
    // 0x33890c: 0x8f83be20  lw          $v1, -0x41E0($gp)
    ctx->pc = 0x33890cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x338910: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x338910u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x338914: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x338914u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x338918: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x338918u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x33891c: 0xaf84aed4  sw          $a0, -0x512C($gp)
    ctx->pc = 0x33891cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946516), GPR_U32(ctx, 4));
label_338920:
    // 0x338920: 0xafa00104  sw          $zero, 0x104($sp)
    ctx->pc = 0x338920u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 0));
label_338924:
    // 0x338924: 0x8e620030  lw          $v0, 0x30($s3)
    ctx->pc = 0x338924u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x338928: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x338928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x33892c: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x33892cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x338930: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x338930u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x338934: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x338934u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x338938: 0x24a60018  addiu       $a2, $a1, 0x18
    ctx->pc = 0x338938u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
    // 0x33893c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x33893cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x338940: 0x9cc40008  lwu         $a0, 0x8($a2)
    ctx->pc = 0x338940u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x338944: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x338944u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x338948: 0x3c020300  lui         $v0, 0x300
    ctx->pc = 0x338948u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)768 << 16));
    // 0x33894c: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x33894cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x338950: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x338950u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x338954: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x338954u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x338958: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x338958u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x33895c: 0x70641b89  pcpyld      $v1, $v1, $a0
    ctx->pc = 0x33895cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x338960: 0x8f82be20  lw          $v0, -0x41E0($gp)
    ctx->pc = 0x338960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x338964: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x338964u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x338968: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x338968u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x33896c: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x33896cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x338970: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x338970u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_338974:
    // 0x338974: 0x42000039  di
    ctx->pc = 0x338974u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x338978: 0x40f  sync.p
    ctx->pc = 0x338978u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x33897c: 0x40036000  mfc0        $v1, Status
    ctx->pc = 0x33897cu;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_status);
    // 0x338980: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x338980u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x338984: 0x0  nop
    ctx->pc = 0x338984u;
    // NOP
    // 0x338988: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x338988u;
    {
        const bool branch_taken_0x338988 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x338988) {
            ctx->pc = 0x338974u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_338974;
        }
    }
    ctx->pc = 0x338990u;
    // 0x338990: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x338990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x338994: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x338994u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x338998: 0xaca20018  sw          $v0, 0x18($a1)
    ctx->pc = 0x338998u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 2));
    // 0x33899c: 0x42000038  ei
    ctx->pc = 0x33899cu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x3389a0: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x3389a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x3389a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3389a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3389a8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3389a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3389ac: 0x14450004  bne         $v0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x3389ACu;
    {
        const bool branch_taken_0x3389ac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x3389B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3389ACu;
        // 0x3389b0: 0xacc20004  sw          $v0, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3389ac) {
            ctx->pc = 0x3389C0u;
            goto label_3389c0;
        }
    }
    ctx->pc = 0x3389B4u;
    // 0x3389b4: 0xc10a762  jal         func_429D88
    ctx->pc = 0x3389B4u;
    SET_GPR_U32(ctx, 31, 0x3389BCu);
    ctx->pc = 0x3389B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3389B4u;
    // 0x3389b8: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x429D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x429D88u, 0x3389B4u, 0x3389BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3389BCu;
label_3389bc:
    // 0x3389bc: 0x0  nop
    ctx->pc = 0x3389bcu;
    // NOP
label_3389c0:
    // 0x3389c0: 0x8fa60034  lw          $a2, 0x34($sp)
    ctx->pc = 0x3389c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 52)));
    // 0x3389c4: 0x8fa30030  lw          $v1, 0x30($sp)
    ctx->pc = 0x3389c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3389c8: 0x8fa40154  lw          $a0, 0x154($sp)
    ctx->pc = 0x3389c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 340)));
    // 0x3389cc: 0x8fa50158  lw          $a1, 0x158($sp)
    ctx->pc = 0x3389ccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 344)));
    // 0x3389d0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3389d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3389d4: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x3389d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3389d8: 0x24840070  addiu       $a0, $a0, 0x70
    ctx->pc = 0x3389d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    // 0x3389dc: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x3389dcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x3389e0: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x3389e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
    // 0x3389e4: 0xafa40154  sw          $a0, 0x154($sp)
    ctx->pc = 0x3389e4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 340), GPR_U32(ctx, 4));
    // 0x3389e8: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x3389e8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3389ec: 0x1440fd5a  bnez        $v0, . + 4 + (-0x2A6 << 2)
    ctx->pc = 0x3389ECu;
    {
        const bool branch_taken_0x3389ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3389F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3389ECu;
        // 0x3389f0: 0xafa50158  sw          $a1, 0x158($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 344), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3389ec) {
            ctx->pc = 0x337F58u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_337f58;
        }
    }
    ctx->pc = 0x3389F4u;
label_3389f4:
    // 0x3389f4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3389f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_3389f8:
    // 0x3389f8: 0x7bb00200  lq          $s0, 0x200($sp)
    ctx->pc = 0x3389f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 512)));
    // 0x3389fc: 0x7bb101f0  lq          $s1, 0x1F0($sp)
    ctx->pc = 0x3389fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x338a00: 0x7bb201e0  lq          $s2, 0x1E0($sp)
    ctx->pc = 0x338a00u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x338a04: 0x7bb301d0  lq          $s3, 0x1D0($sp)
    ctx->pc = 0x338a04u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x338a08: 0x7bb401c0  lq          $s4, 0x1C0($sp)
    ctx->pc = 0x338a08u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x338a0c: 0x7bb501b0  lq          $s5, 0x1B0($sp)
    ctx->pc = 0x338a0cu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x338a10: 0x7bb601a0  lq          $s6, 0x1A0($sp)
    ctx->pc = 0x338a10u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x338a14: 0x7bb70190  lq          $s7, 0x190($sp)
    ctx->pc = 0x338a14u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x338a18: 0x7bbe0180  lq          $fp, 0x180($sp)
    ctx->pc = 0x338a18u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x338a1c: 0xdfbf0170  ld          $ra, 0x170($sp)
    ctx->pc = 0x338a1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x338a20: 0xc7b50218  lwc1        $f21, 0x218($sp)
    ctx->pc = 0x338a20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 536)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x338a24: 0xc7b40210  lwc1        $f20, 0x210($sp)
    ctx->pc = 0x338a24u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 528)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x338a28: 0x3e00008  jr          $ra
    ctx->pc = 0x338A28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x338A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338A28u;
        // 0x338a2c: 0x27bd0220  addiu       $sp, $sp, 0x220 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 544));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x338A28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x338A30u;
    // 0x338a30: 0x27bdfcb0  addiu       $sp, $sp, -0x350
    ctx->pc = 0x338a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966448));
    // 0x338a34: 0x3c070200  lui         $a3, 0x200
    ctx->pc = 0x338a34u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)512 << 16));
    // 0x338a38: 0x7fb20310  sq          $s2, 0x310($sp)
    ctx->pc = 0x338a38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 784), GPR_VEC(ctx, 18));
    // 0x338a3c: 0x7fb30300  sq          $s3, 0x300($sp)
    ctx->pc = 0x338a3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 768), GPR_VEC(ctx, 19));
    // 0x338a40: 0x7fb00330  sq          $s0, 0x330($sp)
    ctx->pc = 0x338a40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 816), GPR_VEC(ctx, 16));
    // 0x338a44: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x338a44u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338a48: 0x7fb10320  sq          $s1, 0x320($sp)
    ctx->pc = 0x338a48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 800), GPR_VEC(ctx, 17));
    // 0x338a4c: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x338a4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
    // 0x338a50: 0x7fb402f0  sq          $s4, 0x2F0($sp)
    ctx->pc = 0x338a50u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 752), GPR_VEC(ctx, 20));
    // 0x338a54: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x338a54u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338a58: 0x7fb502e0  sq          $s5, 0x2E0($sp)
    ctx->pc = 0x338a58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 736), GPR_VEC(ctx, 21));
    // 0x338a5c: 0x2484c4c0  addiu       $a0, $a0, -0x3B40
    ctx->pc = 0x338a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952128));
    // 0x338a60: 0x7fb602d0  sq          $s6, 0x2D0($sp)
    ctx->pc = 0x338a60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 720), GPR_VEC(ctx, 22));
    // 0x338a64: 0x7fb702c0  sq          $s7, 0x2C0($sp)
    ctx->pc = 0x338a64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 704), GPR_VEC(ctx, 23));
    // 0x338a68: 0x7fbe02b0  sq          $fp, 0x2B0($sp)
    ctx->pc = 0x338a68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 688), GPR_VEC(ctx, 30));
    // 0x338a6c: 0xffbf02a0  sd          $ra, 0x2A0($sp)
    ctx->pc = 0x338a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 672), GPR_U64(ctx, 31));
    // 0x338a70: 0xe7b50348  swc1        $f21, 0x348($sp)
    ctx->pc = 0x338a70u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 840), bits); }
    // 0x338a74: 0xe7b40340  swc1        $f20, 0x340($sp)
    ctx->pc = 0x338a74u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 832), bits); }
    // 0x338a78: 0x8e620008  lw          $v0, 0x8($s3)
    ctx->pc = 0x338a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 8)));
    // 0x338a7c: 0xafa200e8  sw          $v0, 0xE8($sp)
    ctx->pc = 0x338a7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 232), GPR_U32(ctx, 2));
    // 0x338a80: 0x8e63002c  lw          $v1, 0x2C($s3)
    ctx->pc = 0x338a80u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x338a84: 0x8c460018  lw          $a2, 0x18($v0)
    ctx->pc = 0x338a84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
    // 0x338a88: 0x8c630008  lw          $v1, 0x8($v1)
    ctx->pc = 0x338a88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x338a8c: 0x8f82a634  lw          $v0, -0x59CC($gp)
    ctx->pc = 0x338a8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944308)));
    // 0x338a90: 0xafa300ec  sw          $v1, 0xEC($sp)
    ctx->pc = 0x338a90u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 236), GPR_U32(ctx, 3));
    // 0x338a94: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x338a94u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61C4C4u));
    // 0x338a98: 0xafa300f4  sw          $v1, 0xF4($sp)
    ctx->pc = 0x338a98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 3));
    // 0x338a9c: 0x8fa300ec  lw          $v1, 0xEC($sp)
    ctx->pc = 0x338a9cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x338aa0: 0x8c85000c  lw          $a1, 0xC($a0)
    ctx->pc = 0x338aa0u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x61C4CCu));
    // 0x338aa4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x338aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x338aa8: 0x8cc30008  lw          $v1, 0x8($a2)
    ctx->pc = 0x338aa8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x338aac: 0x5282b  sltu        $a1, $zero, $a1
    ctx->pc = 0x338aacu;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
    // 0x338ab0: 0xafa500fc  sw          $a1, 0xFC($sp)
    ctx->pc = 0x338ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 252), GPR_U32(ctx, 5));
    // 0x338ab4: 0x8f86a8f8  lw          $a2, -0x5708($gp)
    ctx->pc = 0x338ab4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294945016)));
    // 0x338ab8: 0x671824  and         $v1, $v1, $a3
    ctx->pc = 0x338ab8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 7));
    // 0x338abc: 0x8fa500ec  lw          $a1, 0xEC($sp)
    ctx->pc = 0x338abcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
    // 0x338ac0: 0x8c840008  lw          $a0, 0x8($a0)
    ctx->pc = 0x338ac0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
    // 0x338ac4: 0x8c550000  lw          $s5, 0x0($v0)
    ctx->pc = 0x338ac4u;
    SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x338ac8: 0xa65821  addu        $t3, $a1, $a2
    ctx->pc = 0x338ac8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x338acc: 0x14600708  bnez        $v1, . + 4 + (0x708 << 2)
    ctx->pc = 0x338ACCu;
    {
        const bool branch_taken_0x338acc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x338AD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338ACCu;
        // 0x338ad0: 0xafa400f8  sw          $a0, 0xF8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338acc) {
            ctx->pc = 0x33A6F0u;
            goto label_33a6f0;
        }
    }
    ctx->pc = 0x338AD4u;
    // 0x338ad4: 0xdf82ae48  ld          $v0, -0x51B8($gp)
    ctx->pc = 0x338ad4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946376)));
    // 0x338ad8: 0x3c030007  lui         $v1, 0x7
    ctx->pc = 0x338ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)7 << 16));
    // 0x338adc: 0xdea40038  ld          $a0, 0x38($s5)
    ctx->pc = 0x338adcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 21), 56)));
    // 0x338ae0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x338ae0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338ae4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x338ae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x338ae8: 0xdeac0028  ld          $t4, 0x28($s5)
    ctx->pc = 0x338ae8u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 21), 40)));
    // 0x338aec: 0xdeaa0030  ld          $t2, 0x30($s5)
    ctx->pc = 0x338aecu;
    SET_GPR_U64(ctx, 10, READ64(ADD32(GPR_U32(ctx, 21), 48)));
    // 0x338af0: 0x446825  or          $t5, $v0, $a0
    ctx->pc = 0x338af0u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x338af4: 0x8ea30000  lw          $v1, 0x0($s5)
    ctx->pc = 0x338af4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 0)));
    // 0x338af8: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x338AF8u;
    {
        const bool branch_taken_0x338af8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x338AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338AF8u;
        // 0x338afc: 0xffa000d0  sd          $zero, 0xD0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338af8) {
            ctx->pc = 0x338B0Cu;
            goto label_338b0c;
        }
    }
    ctx->pc = 0x338B00u;
    // 0x338b00: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x338b00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x338b04: 0x8c43e880  lw          $v1, -0x1780($v0)
    ctx->pc = 0x338b04u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x61E880u));
    // 0x338b08: 0x8c630004  lw          $v1, 0x4($v1)
    ctx->pc = 0x338b08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_338b0c:
    // 0x338b0c: 0x24630050  addiu       $v1, $v1, 0x50
    ctx->pc = 0x338b0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x338b10: 0x8c64000c  lw          $a0, 0xC($v1)
    ctx->pc = 0x338b10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x338b14: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x338b14u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_338b18:
    // 0x338b18: 0x42000039  di
    ctx->pc = 0x338b18u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x338b1c: 0x40f  sync.p
    ctx->pc = 0x338b1cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x338b20: 0x40066000  mfc0        $a2, Status
    ctx->pc = 0x338b20u;
    SET_GPR_S32(ctx, 6, (int32_t)ctx->cop0_status);
    // 0x338b24: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x338b24u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x338b28: 0x0  nop
    ctx->pc = 0x338b28u;
    // NOP
    // 0x338b2c: 0x14c0fffa  bnez        $a2, . + 4 + (-0x6 << 2)
    ctx->pc = 0x338B2Cu;
    {
        const bool branch_taken_0x338b2c = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x338b2c) {
            ctx->pc = 0x338B18u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_338b18;
        }
    }
    ctx->pc = 0x338B34u;
    // 0x338b34: 0xd8610000  lqc2        $vf1, 0x0($v1)
    ctx->pc = 0x338b34u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x338b38: 0xd8620010  lqc2        $vf2, 0x10($v1)
    ctx->pc = 0x338b38u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x338b3c: 0xd8630020  lqc2        $vf3, 0x20($v1)
    ctx->pc = 0x338b3cu;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x338b40: 0xd8640030  lqc2        $vf4, 0x30($v1)
    ctx->pc = 0x338b40u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 3), 48)));
    // 0x338b44: 0x4bc312fe  vopmula.xyz $ACC, $vf2, $vf3
    ctx->pc = 0x338b44u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x338b48: 0x4bc2196e  vopmsub.xyz $vf5, $vf3, $vf2
    ctx->pc = 0x338b48u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x338b4c: 0x4bc007c3  vaddw.xyz   $vf31, $vf0, $vf0w
    ctx->pc = 0x338b4cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[31] = _mm_blendv_ps(ctx->vu0_vf[31], res, _mm_castsi128_ps(mask)); }
    // 0x338b50: 0x4bc11afe  vopmula.xyz $ACC, $vf3, $vf1
    ctx->pc = 0x338b50u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x338b54: 0x4bc309ae  vopmsub.xyz $vf6, $vf1, $vf3
    ctx->pc = 0x338b54u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x338b58: 0x4be12a2a  vmul.xyzw   $vf8, $vf5, $vf1
    ctx->pc = 0x338b58u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], ctx->vu0_vf[1]); __m128i mask = _mm_set_epi32(-1, -1, -1, -1); ctx->vu0_vf[8] = PS2_VBLEND(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x338b5c: 0x4bc20afe  vopmula.xyz $ACC, $vf1, $vf2
    ctx->pc = 0x338b5cu;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,1,0,2)); __m128 res = PS2_VMUL(fs_yzx, ft_zxy); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x338b60: 0x4bc111ee  vopmsub.xyz $vf7, $vf2, $vf1
    ctx->pc = 0x338b60u;
    { __m128 fs_yzx = _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(3,0,2,1)); __m128 ft_zxy = _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(3,1,0,2)); __m128 mul_res = PS2_VMUL(fs_yzx, ft_zxy); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x338b64: 0x4b050040  vaddx.x     $vf1, $vf0, $vf5x
    ctx->pc = 0x338b64u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x338b68: 0x4b08403d  vadday.x    $ACC, $vf8, $vf8y
    ctx->pc = 0x338b68u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x338b6c: 0x4b08fa0a  vmaddz.x    $vf8, $vf31, $vf8z
    ctx->pc = 0x338b6cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[8] = _mm_blendv_ps(ctx->vu0_vf[8], res, _mm_castsi128_ps(mask)); }
    // 0x338b70: 0x4a860040  vaddx.y     $vf1, $vf0, $vf6x
    ctx->pc = 0x338b70u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x338b74: 0x4a470040  vaddx.z     $vf1, $vf0, $vf7x
    ctx->pc = 0x338b74u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(0,0,0,0))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x338b78: 0x4b050081  vaddy.x     $vf2, $vf0, $vf5y
    ctx->pc = 0x338b78u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x338b7c: 0x4a6803bc  vdiv        $Q, $vf0w, $vf8x
    ctx->pc = 0x338b7cu;
    { float fs = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,3))); float ft = _mm_cvtss_f32(_mm_shuffle_ps(ctx->vu0_vf[8], ctx->vu0_vf[8], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_q = (ft != 0.0f) ? (fs / ft) : 0.0f; }
    // 0x338b80: 0x4a860081  vaddy.y     $vf2, $vf0, $vf6y
    ctx->pc = 0x338b80u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x338b84: 0x4a470081  vaddy.z     $vf2, $vf0, $vf7y
    ctx->pc = 0x338b84u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(1,1,1,1))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x338b88: 0x4b0500c2  vaddz.x     $vf3, $vf0, $vf5z
    ctx->pc = 0x338b88u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[5], ctx->vu0_vf[5], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x338b8c: 0x4a8600c2  vaddz.y     $vf3, $vf0, $vf6z
    ctx->pc = 0x338b8cu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[6], ctx->vu0_vf[6], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x338b90: 0x4a4700c2  vaddz.z     $vf3, $vf0, $vf7z
    ctx->pc = 0x338b90u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[7], ctx->vu0_vf[7], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x338b94: 0x4bc001bc  vmulax.xyz  $ACC, $vf0, $vf0x
    ctx->pc = 0x338b94u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[0], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x338b98: 0x4bc0295c  vmulq.xyz   $vf5, $vf5, $Q
    ctx->pc = 0x338b98u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[5] = _mm_blendv_ps(ctx->vu0_vf[5], res, _mm_castsi128_ps(mask)); }
    // 0x338b9c: 0x4bc0319c  vmulq.xyz   $vf6, $vf6, $Q
    ctx->pc = 0x338b9cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[6], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[6] = _mm_blendv_ps(ctx->vu0_vf[6], res, _mm_castsi128_ps(mask)); }
    // 0x338ba0: 0x4bc039dc  vmulq.xyz   $vf7, $vf7, $Q
    ctx->pc = 0x338ba0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[7], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[7] = _mm_blendv_ps(ctx->vu0_vf[7], res, _mm_castsi128_ps(mask)); }
    // 0x338ba4: 0x4bc5226d  vmsub.xyz   $vf9, $vf4, $vf5
    ctx->pc = 0x338ba4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[5]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x338ba8: 0x4bc622ad  vmsub.xyz   $vf10, $vf4, $vf6
    ctx->pc = 0x338ba8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[6]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x338bac: 0x4bc722ed  vmsub.xyz   $vf11, $vf4, $vf7
    ctx->pc = 0x338bacu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[4], ctx->vu0_vf[7]); __m128 res = PS2_VSUB(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x338bb0: 0x4bc0085c  vmulq.xyz   $vf1, $vf1, $Q
    ctx->pc = 0x338bb0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[1], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[1] = _mm_blendv_ps(ctx->vu0_vf[1], res, _mm_castsi128_ps(mask)); }
    // 0x338bb4: 0x4bc0109c  vmulq.xyz   $vf2, $vf2, $Q
    ctx->pc = 0x338bb4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[2], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[2] = _mm_blendv_ps(ctx->vu0_vf[2], res, _mm_castsi128_ps(mask)); }
    // 0x338bb8: 0x4bc018dc  vmulq.xyz   $vf3, $vf3, $Q
    ctx->pc = 0x338bb8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[3], _mm_set1_ps(ctx->vu0_q)); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[3] = _mm_blendv_ps(ctx->vu0_vf[3], res, _mm_castsi128_ps(mask)); }
    // 0x338bbc: 0x4b09483d  vadday.x    $ACC, $vf9, $vf9y
    ctx->pc = 0x338bbcu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[9], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, 0, -1))); }
    // 0x338bc0: 0x4b09f90a  vmaddz.x    $vf4, $vf31, $vf9z
    ctx->pc = 0x338bc0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[9], ctx->vu0_vf[9], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, 0, -1); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x338bc4: 0x4a8a503c  vaddax.y    $ACC, $vf10, $vf10x
    ctx->pc = 0x338bc4u;
    { __m128 res = PS2_VADD(ctx->vu0_vf[10], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, 0, -1, 0))); }
    // 0x338bc8: 0x4a8af90a  vmaddz.y    $vf4, $vf31, $vf10z
    ctx->pc = 0x338bc8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[10], ctx->vu0_vf[10], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, 0, -1, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x338bcc: 0x4a4b583d  vadday.z    $ACC, $vf11, $vf11y
    ctx->pc = 0x338bccu;
    { __m128 res = PS2_VADD(ctx->vu0_vf[11], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(1,1,1,1))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, 0, 0))); }
    // 0x338bd0: 0x4a4bf908  vmaddx.z    $vf4, $vf31, $vf11x
    ctx->pc = 0x338bd0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[31], _mm_shuffle_ps(ctx->vu0_vf[11], ctx->vu0_vf[11], _MM_SHUFFLE(0,0,0,0))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, 0, 0); ctx->vu0_vf[4] = _mm_blendv_ps(ctx->vu0_vf[4], res, _mm_castsi128_ps(mask)); }
    // 0x338bd4: 0xfba10000  sqc2        $vf1, 0x0($sp)
    ctx->pc = 0x338bd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), _mm_castps_si128(ctx->vu0_vf[1]));
    // 0x338bd8: 0xfba20010  sqc2        $vf2, 0x10($sp)
    ctx->pc = 0x338bd8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), _mm_castps_si128(ctx->vu0_vf[2]));
    // 0x338bdc: 0xfba30020  sqc2        $vf3, 0x20($sp)
    ctx->pc = 0x338bdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), _mm_castps_si128(ctx->vu0_vf[3]));
    // 0x338be0: 0xfba40030  sqc2        $vf4, 0x30($sp)
    ctx->pc = 0x338be0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), _mm_castps_si128(ctx->vu0_vf[4]));
    // 0x338be4: 0x42000038  ei
    ctx->pc = 0x338be4u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x338be8: 0xafa4000c  sw          $a0, 0xC($sp)
    ctx->pc = 0x338be8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 4));
    // 0x338bec: 0x3c036c06  lui         $v1, 0x6C06
    ctx->pc = 0x338becu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27654 << 16));
    // 0x338bf0: 0x346303d9  ori         $v1, $v1, 0x3D9
    ctx->pc = 0x338bf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)985);
    // 0x338bf4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x338bf4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x338bf8: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x338bf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x338bfc: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x338bfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x338c00: 0x34630404  ori         $v1, $v1, 0x404
    ctx->pc = 0x338c00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1028);
    // 0x338c04: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x338c04u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338c08: 0x70691389  pcpyld      $v0, $v1, $t1
    ctx->pc = 0x338c08u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 9)));
    // 0x338c0c: 0x7fa20100  sq          $v0, 0x100($sp)
    ctx->pc = 0x338c0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 256), GPR_VEC(ctx, 2));
    // 0x338c10: 0x3c026c04  lui         $v0, 0x6C04
    ctx->pc = 0x338c10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27652 << 16));
    // 0x338c14: 0x344203df  ori         $v0, $v0, 0x3DF
    ctx->pc = 0x338c14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)991);
    // 0x338c18: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x338c18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x338c1c: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x338c1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x338c20: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x338c20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x338c24: 0x34420404  ori         $v0, $v0, 0x404
    ctx->pc = 0x338c24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x338c28: 0x7049f389  pcpyld      $fp, $v0, $t1
    ctx->pc = 0x338c28u;
    SET_GPR_VEC(ctx, 30, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 9)));
    // 0x338c2c: 0x92640029  lbu         $a0, 0x29($s3)
    ctx->pc = 0x338c2cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 41)));
    // 0x338c30: 0x24030258  addiu       $v1, $zero, 0x258
    ctx->pc = 0x338c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 600));
    // 0x338c34: 0x3c082000  lui         $t0, 0x2000
    ctx->pc = 0x338c34u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)8192 << 16));
    // 0x338c38: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x338c38u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x338c3c: 0x35080001  ori         $t0, $t0, 0x1
    ctx->pc = 0x338c3cu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)1);
    // 0x338c40: 0x92620028  lbu         $v0, 0x28($s3)
    ctx->pc = 0x338c40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x338c44: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x338c44u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x338c48: 0x240300ee  addiu       $v1, $zero, 0xEE
    ctx->pc = 0x338c48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 238));
    // 0x338c4c: 0x3c053000  lui         $a1, 0x3000
    ctx->pc = 0x338c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)12288 << 16));
    // 0x338c50: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x338c50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x338c54: 0x70683389  pcpyld      $a2, $v1, $t0
    ctx->pc = 0x338c54u;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 8)));
    // 0x338c58: 0x21178  dsll        $v0, $v0, 5
    ctx->pc = 0x338c58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 5);
    // 0x338c5c: 0x7fa60110  sq          $a2, 0x110($sp)
    ctx->pc = 0x338c5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 272), GPR_VEC(ctx, 6));
    // 0x338c60: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x338c60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x338c64: 0x3c06005c  lui         $a2, 0x5C
    ctx->pc = 0x338c64u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)92 << 16));
    // 0x338c68: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x338c68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x338c6c: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x338c6cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x338c70: 0x34a54000  ori         $a1, $a1, 0x4000
    ctx->pc = 0x338c70u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)16384);
    // 0x338c74: 0x213c0  sll         $v0, $v0, 15
    ctx->pc = 0x338c74u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 15));
    // 0x338c78: 0x24c39370  addiu       $v1, $a2, -0x6C90
    ctx->pc = 0x338c78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294939504));
    // 0x338c7c: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x338c7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x338c80: 0xdc670008  ld          $a3, 0x8($v1)
    ctx->pc = 0x338c80u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x338c84: 0x24040412  addiu       $a0, $zero, 0x412
    ctx->pc = 0x338c84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1042));
    // 0x338c88: 0x2403c  dsll32      $t0, $v0, 0
    ctx->pc = 0x338c88u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 2) << (32 + 0));
    // 0x338c8c: 0x8d650000  lw          $a1, 0x0($t3)
    ctx->pc = 0x338c8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x338c90: 0x70881389  pcpyld      $v0, $a0, $t0
    ctx->pc = 0x338c90u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 8)));
    // 0x338c94: 0x2403003d  addiu       $v1, $zero, 0x3D
    ctx->pc = 0x338c94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x338c98: 0x7fa20180  sq          $v0, 0x180($sp)
    ctx->pc = 0x338c98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 384), GPR_VEC(ctx, 2));
    // 0x338c9c: 0x706a2389  pcpyld      $a0, $v1, $t2
    ctx->pc = 0x338c9cu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 10)));
    // 0x338ca0: 0xdf82ae58  ld          $v0, -0x51A8($gp)
    ctx->pc = 0x338ca0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946392)));
    // 0x338ca4: 0x7fa40140  sq          $a0, 0x140($sp)
    ctx->pc = 0x338ca4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 320), GPR_VEC(ctx, 4));
    // 0x338ca8: 0x70622389  pcpyld      $a0, $v1, $v0
    ctx->pc = 0x338ca8u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x338cac: 0xdcc89370  ld          $t0, -0x6C90($a2)
    ctx->pc = 0x338cacu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 6), 4294939504)));
    // 0x338cb0: 0x70e83389  pcpyld      $a2, $a3, $t0
    ctx->pc = 0x338cb0u;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x338cb4: 0x24020043  addiu       $v0, $zero, 0x43
    ctx->pc = 0x338cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 67));
    // 0x338cb8: 0x704c1b89  pcpyld      $v1, $v0, $t4
    ctx->pc = 0x338cb8u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 12)));
    // 0x338cbc: 0x7fa60190  sq          $a2, 0x190($sp)
    ctx->pc = 0x338cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 400), GPR_VEC(ctx, 6));
    // 0x338cc0: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x338cc0u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
    // 0x338cc4: 0x8403c  dsll32      $t0, $t0, 0
    ctx->pc = 0x338cc4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) << (32 + 0));
    // 0x338cc8: 0x35088005  ori         $t0, $t0, 0x8005
    ctx->pc = 0x338cc8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)32773);
    // 0x338ccc: 0x2407000e  addiu       $a3, $zero, 0xE
    ctx->pc = 0x338cccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x338cd0: 0x70e83389  pcpyld      $a2, $a3, $t0
    ctx->pc = 0x338cd0u;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x338cd4: 0x7fa30150  sq          $v1, 0x150($sp)
    ctx->pc = 0x338cd4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 336), GPR_VEC(ctx, 3));
    // 0x338cd8: 0x24030048  addiu       $v1, $zero, 0x48
    ctx->pc = 0x338cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 72));
    // 0x338cdc: 0x7fa40130  sq          $a0, 0x130($sp)
    ctx->pc = 0x338cdcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 304), GPR_VEC(ctx, 4));
    // 0x338ce0: 0x7fa60120  sq          $a2, 0x120($sp)
    ctx->pc = 0x338ce0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 288), GPR_VEC(ctx, 6));
    // 0x338ce4: 0x2404004f  addiu       $a0, $zero, 0x4F
    ctx->pc = 0x338ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 79));
    // 0x338ce8: 0x706d3389  pcpyld      $a2, $v1, $t5
    ctx->pc = 0x338ce8u;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 13)));
    // 0x338cec: 0xdf82ae38  ld          $v0, -0x51C8($gp)
    ctx->pc = 0x338cecu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946360)));
    // 0x338cf0: 0x70821b89  pcpyld      $v1, $a0, $v0
    ctx->pc = 0x338cf0u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x338cf4: 0x7fa60160  sq          $a2, 0x160($sp)
    ctx->pc = 0x338cf4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 352), GPR_VEC(ctx, 6));
    // 0x338cf8: 0x14a0033f  bnez        $a1, . + 4 + (0x33F << 2)
    ctx->pc = 0x338CF8u;
    {
        const bool branch_taken_0x338cf8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x338CFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338CF8u;
        // 0x338cfc: 0x7fa30170  sq          $v1, 0x170($sp) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 29), 368), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338cf8) {
            ctx->pc = 0x3399F8u;
            goto label_3399f8;
        }
    }
    ctx->pc = 0x338D00u;
    // 0x338d00: 0xffa000c0  sd          $zero, 0xC0($sp)
    ctx->pc = 0x338d00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 0));
    // 0x338d04: 0xffa000c8  sd          $zero, 0xC8($sp)
    ctx->pc = 0x338d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 0));
    // 0x338d08: 0xaf80bec4  sw          $zero, -0x413C($gp)
    ctx->pc = 0x338d08u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950596), GPR_U32(ctx, 0));
    // 0x338d0c: 0x8e640040  lw          $a0, 0x40($s3)
    ctx->pc = 0x338d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x338d10: 0x5080000c  beql        $a0, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x338D10u;
    {
        const bool branch_taken_0x338d10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x338d10) {
            ctx->pc = 0x338D14u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x338D10u;
            // 0x338d14: 0x8ea40004  lw          $a0, 0x4($s5) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x338D44u;
            goto label_338d44;
        }
    }
    ctx->pc = 0x338D18u;
    // 0x338d18: 0xc110e98  jal         func_443A60
    ctx->pc = 0x338D18u;
    SET_GPR_U32(ctx, 31, 0x338D20u);
    ctx->pc = 0x338D1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338D18u;
    // 0x338d1c: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x443A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443A60u, 0x338D18u, 0x338D20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338D20u;
label_338d20:
    // 0x338d20: 0x8e640040  lw          $a0, 0x40($s3)
    ctx->pc = 0x338d20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x338d24: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x338d24u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x338d28: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x338d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x338d2c: 0x90620023  lbu         $v0, 0x23($v1)
    ctx->pc = 0x338d2cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 35)));
    // 0x338d30: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x338d30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x338d34: 0x10450002  beq         $v0, $a1, . + 4 + (0x2 << 2)
    ctx->pc = 0x338D34u;
    {
        const bool branch_taken_0x338d34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x338D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338D34u;
        // 0x338d38: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338d34) {
            ctx->pc = 0x338D40u;
            goto label_338d40;
        }
    }
    ctx->pc = 0x338D3Cu;
    // 0x338d3c: 0xaf82bec4  sw          $v0, -0x413C($gp)
    ctx->pc = 0x338d3cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950596), GPR_U32(ctx, 2));
label_338d40:
    // 0x338d40: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x338d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_338d44:
    // 0x338d44: 0x50800008  beql        $a0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x338D44u;
    {
        const bool branch_taken_0x338d44 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x338d44) {
            ctx->pc = 0x338D48u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x338D44u;
            // 0x338d48: 0x8e640040  lw          $a0, 0x40($s3) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x338D68u;
            goto label_338d68;
        }
    }
    ctx->pc = 0x338D4Cu;
    // 0x338d4c: 0xc110e98  jal         func_443A60
    ctx->pc = 0x338D4Cu;
    SET_GPR_U32(ctx, 31, 0x338D54u);
    ctx->pc = 0x338D50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338D4Cu;
    // 0x338d50: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x443A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443A60u, 0x338D4Cu, 0x338D54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338D54u;
label_338d54:
    // 0x338d54: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x338d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x338d58: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x338d58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x338d5c: 0xc110b7e  jal         func_442DF8
    ctx->pc = 0x338D5Cu;
    SET_GPR_U32(ctx, 31, 0x338D64u);
    ctx->pc = 0x338D60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338D5Cu;
    // 0x338d60: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x442DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x442DF8u, 0x338D5Cu, 0x338D64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338D64u;
label_338d64:
    // 0x338d64: 0x8e640040  lw          $a0, 0x40($s3)
    ctx->pc = 0x338d64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
label_338d68:
    // 0x338d68: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x338D68u;
    {
        const bool branch_taken_0x338d68 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x338d68) {
            ctx->pc = 0x338D6Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x338D68u;
            // 0x338d6c: 0x8ea20004  lw          $v0, 0x4($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x338D80u;
            goto label_338d80;
        }
    }
    ctx->pc = 0x338D70u;
    // 0x338d70: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x338d70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x338d74: 0xc110b7e  jal         func_442DF8
    ctx->pc = 0x338D74u;
    SET_GPR_U32(ctx, 31, 0x338D7Cu);
    ctx->pc = 0x338D78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338D74u;
    // 0x338d78: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x442DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x442DF8u, 0x338D74u, 0x338D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338D7Cu;
label_338d7c:
    // 0x338d7c: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x338d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_338d80:
    // 0x338d80: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x338D80u;
    {
        const bool branch_taken_0x338d80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x338d80) {
            ctx->pc = 0x338D84u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x338D80u;
            // 0x338d84: 0x8e620040  lw          $v0, 0x40($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x338DACu;
            goto label_338dac;
        }
    }
    ctx->pc = 0x338D88u;
    // 0x338d88: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x338d88u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x338d8c: 0x8f82beb8  lw          $v0, -0x4148($gp)
    ctx->pc = 0x338d8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950584)));
    // 0x338d90: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x338d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x338d94: 0x8c430058  lw          $v1, 0x58($v0)
    ctx->pc = 0x338d94u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x338d98: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x338D98u;
    {
        const bool branch_taken_0x338d98 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x338d98) {
            ctx->pc = 0x338D9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x338D98u;
            // 0x338d9c: 0x8e620040  lw          $v0, 0x40($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x338DACu;
            goto label_338dac;
        }
    }
    ctx->pc = 0x338DA0u;
    // 0x338da0: 0xc110b7e  jal         func_442DF8
    ctx->pc = 0x338DA0u;
    SET_GPR_U32(ctx, 31, 0x338DA8u);
    ctx->pc = 0x338DA4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338DA0u;
    // 0x338da4: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x442DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x442DF8u, 0x338DA0u, 0x338DA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338DA8u;
label_338da8:
    // 0x338da8: 0x8e620040  lw          $v0, 0x40($s3)
    ctx->pc = 0x338da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
label_338dac:
    // 0x338dac: 0x5040002d  beql        $v0, $zero, . + 4 + (0x2D << 2)
    ctx->pc = 0x338DACu;
    {
        const bool branch_taken_0x338dac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x338dac) {
            ctx->pc = 0x338DB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x338DACu;
            // 0x338db0: 0xdf82ae80  ld          $v0, -0x5180($gp) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946432)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x338E64u;
            goto label_338e64;
        }
    }
    ctx->pc = 0x338DB4u;
    // 0x338db4: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x338db4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x338db8: 0x8f82beb8  lw          $v0, -0x4148($gp)
    ctx->pc = 0x338db8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950584)));
    // 0x338dbc: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x338dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x338dc0: 0x8c430058  lw          $v1, 0x58($v0)
    ctx->pc = 0x338dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x338dc4: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x338DC4u;
    {
        const bool branch_taken_0x338dc4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x338dc4) {
            ctx->pc = 0x338DC8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x338DC4u;
            // 0x338dc8: 0x8e670040  lw          $a3, 0x40($s3) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x338DD8u;
            goto label_338dd8;
        }
    }
    ctx->pc = 0x338DCCu;
    // 0x338dcc: 0xc110b7e  jal         func_442DF8
    ctx->pc = 0x338DCCu;
    SET_GPR_U32(ctx, 31, 0x338DD4u);
    ctx->pc = 0x338DD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338DCCu;
    // 0x338dd0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x442DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x442DF8u, 0x338DCCu, 0x338DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338DD4u;
label_338dd4:
    // 0x338dd4: 0x8e670040  lw          $a3, 0x40($s3)
    ctx->pc = 0x338dd4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
label_338dd8:
    // 0x338dd8: 0x10e00022  beqz        $a3, . + 4 + (0x22 << 2)
    ctx->pc = 0x338DD8u;
    {
        const bool branch_taken_0x338dd8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x338DDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338DD8u;
        // 0x338ddc: 0xdf82ae80  ld          $v0, -0x5180($gp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338dd8) {
            ctx->pc = 0x338E64u;
            goto label_338e64;
        }
    }
    ctx->pc = 0x338DE0u;
    // 0x338de0: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x338de0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x338de4: 0x8ce70000  lw          $a3, 0x0($a3)
    ctx->pc = 0x338de4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x338de8: 0x27a500c4  addiu       $a1, $sp, 0xC4
    ctx->pc = 0x338de8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 196));
    // 0x338dec: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x338decu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x338df0: 0x27a600c0  addiu       $a2, $sp, 0xC0
    ctx->pc = 0x338df0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x338df4: 0xe0202d  daddu       $a0, $a3, $zero
    ctx->pc = 0x338df4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338df8: 0xaf87bec0  sw          $a3, -0x4140($gp)
    ctx->pc = 0x338df8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950592), GPR_U32(ctx, 7));
    // 0x338dfc: 0xc110f4c  jal         func_443D30
    ctx->pc = 0x338DFCu;
    SET_GPR_U32(ctx, 31, 0x338E04u);
    ctx->pc = 0x338E00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338DFCu;
    // 0x338e00: 0xff82ae80  sd          $v0, -0x5180($gp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946432), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x443D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443D30u, 0x338DFCu, 0x338E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338E04u;
label_338e04:
    // 0x338e04: 0x8e630040  lw          $v1, 0x40($s3)
    ctx->pc = 0x338e04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x338e08: 0x2785ae68  addiu       $a1, $gp, -0x5198
    ctx->pc = 0x338e08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294946408));
    // 0x338e0c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x338e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x338e10: 0xc110f54  jal         func_443D50
    ctx->pc = 0x338E10u;
    SET_GPR_U32(ctx, 31, 0x338E18u);
    ctx->pc = 0x338E14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338E10u;
    // 0x338e14: 0x90660050  lbu         $a2, 0x50($v1) (Delay Slot)
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x443D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443D50u, 0x338E10u, 0x338E18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338E18u;
label_338e18:
    // 0x338e18: 0x8e630040  lw          $v1, 0x40($s3)
    ctx->pc = 0x338e18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x338e1c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x338e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x338e20: 0xff80ae60  sd          $zero, -0x51A0($gp)
    ctx->pc = 0x338e20u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946400), GPR_U64(ctx, 0));
    // 0x338e24: 0x8c630050  lw          $v1, 0x50($v1)
    ctx->pc = 0x338e24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x338e28: 0x30620f00  andi        $v0, $v1, 0xF00
    ctx->pc = 0x338e28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3840);
    // 0x338e2c: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x338e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x338e30: 0x14440004  bne         $v0, $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x338E30u;
    {
        const bool branch_taken_0x338e30 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x338E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338E30u;
        // 0x338e34: 0x3062f000  andi        $v0, $v1, 0xF000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)61440);
        ctx->in_delay_slot = false;
        if (branch_taken_0x338e30) {
            ctx->pc = 0x338E44u;
            goto label_338e44;
        }
    }
    ctx->pc = 0x338E38u;
    // 0x338e38: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x338e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x338e3c: 0xff82ae60  sd          $v0, -0x51A0($gp)
    ctx->pc = 0x338e3cu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946400), GPR_U64(ctx, 2));
    // 0x338e40: 0x3062f000  andi        $v0, $v1, 0xF000
    ctx->pc = 0x338e40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)61440);
label_338e44:
    // 0x338e44: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x338e44u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x338e48: 0x1444000b  bne         $v0, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x338E48u;
    {
        const bool branch_taken_0x338e48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x338E4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338E48u;
        // 0x338e4c: 0xdf82ae48  ld          $v0, -0x51B8($gp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946376)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338e48) {
            ctx->pc = 0x338E78u;
            goto label_338e78;
        }
    }
    ctx->pc = 0x338E50u;
    // 0x338e50: 0xdf82ae60  ld          $v0, -0x51A0($gp)
    ctx->pc = 0x338e50u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946400)));
    // 0x338e54: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x338e54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x338e58: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x338e58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x338e5c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x338E5Cu;
    {
        const bool branch_taken_0x338e5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x338E60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338E5Cu;
        // 0x338e60: 0xff82ae60  sd          $v0, -0x51A0($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294946400), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338e5c) {
            ctx->pc = 0x338E74u;
            goto label_338e74;
        }
    }
    ctx->pc = 0x338E64u;
label_338e64:
    // 0x338e64: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x338e64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x338e68: 0xaf80bec0  sw          $zero, -0x4140($gp)
    ctx->pc = 0x338e68u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950592), GPR_U32(ctx, 0));
    // 0x338e6c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x338e6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x338e70: 0xff82ae80  sd          $v0, -0x5180($gp)
    ctx->pc = 0x338e70u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946432), GPR_U64(ctx, 2));
label_338e74:
    // 0x338e74: 0xdf82ae48  ld          $v0, -0x51B8($gp)
    ctx->pc = 0x338e74u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946376)));
label_338e78:
    // 0x338e78: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x338e78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x338e7c: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x338e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x338e80: 0x501025  or          $v0, $v0, $s0
    ctx->pc = 0x338e80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 16));
    // 0x338e84: 0x10800017  beqz        $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x338E84u;
    {
        const bool branch_taken_0x338e84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x338E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338E84u;
        // 0x338e88: 0xff82ae48  sd          $v0, -0x51B8($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294946376), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338e84) {
            ctx->pc = 0x338EE4u;
            goto label_338ee4;
        }
    }
    ctx->pc = 0x338E8Cu;
    // 0x338e8c: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x338e8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x338e90: 0x27a500cc  addiu       $a1, $sp, 0xCC
    ctx->pc = 0x338e90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 204));
    // 0x338e94: 0x27a600c8  addiu       $a2, $sp, 0xC8
    ctx->pc = 0x338e94u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x338e98: 0xc110f4c  jal         func_443D30
    ctx->pc = 0x338E98u;
    SET_GPR_U32(ctx, 31, 0x338EA0u);
    ctx->pc = 0x338E9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338E98u;
    // 0x338e9c: 0x200a02d  daddu       $s4, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x443D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443D30u, 0x338E98u, 0x338EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338EA0u;
label_338ea0:
    // 0x338ea0: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x338ea0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x338ea4: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x338ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x338ea8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x338ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x338eac: 0xc110f54  jal         func_443D50
    ctx->pc = 0x338EACu;
    SET_GPR_U32(ctx, 31, 0x338EB4u);
    ctx->pc = 0x338EB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338EACu;
    // 0x338eb0: 0x90660050  lbu         $a2, 0x50($v1) (Delay Slot)
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x443D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443D50u, 0x338EACu, 0x338EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338EB4u;
label_338eb4:
    // 0x338eb4: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x338eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x338eb8: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x338eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x338ebc: 0x8c830050  lw          $v1, 0x50($a0)
    ctx->pc = 0x338ebcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x338ec0: 0x30620f00  andi        $v0, $v1, 0xF00
    ctx->pc = 0x338ec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3840);
    // 0x338ec4: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x338ec4u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x338ec8: 0x3063f000  andi        $v1, $v1, 0xF000
    ctx->pc = 0x338ec8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)61440);
    // 0x338ecc: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x338eccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x338ed0: 0x31b02  srl         $v1, $v1, 12
    ctx->pc = 0x338ed0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 12));
    // 0x338ed4: 0x14650003  bne         $v1, $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x338ED4u;
    {
        const bool branch_taken_0x338ed4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 5));
        ctx->pc = 0x338ED8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338ED4u;
        // 0x338ed8: 0x2a00b  movn        $s4, $zero, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338ed4) {
            ctx->pc = 0x338EE4u;
            goto label_338ee4;
        }
    }
    ctx->pc = 0x338EDCu;
    // 0x338edc: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x338edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x338ee0: 0x282a025  or          $s4, $s4, $v0
    ctx->pc = 0x338ee0u;
    SET_GPR_U64(ctx, 20, GPR_U64(ctx, 20) | GPR_U64(ctx, 2));
label_338ee4:
    // 0x338ee4: 0x8e630040  lw          $v1, 0x40($s3)
    ctx->pc = 0x338ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x338ee8: 0x10600012  beqz        $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x338EE8u;
    {
        const bool branch_taken_0x338ee8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x338EECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338EE8u;
        // 0x338eec: 0x8fb600f8  lw          $s6, 0xF8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338ee8) {
            ctx->pc = 0x338F34u;
            goto label_338f34;
        }
    }
    ctx->pc = 0x338EF0u;
    // 0x338ef0: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x338ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x338ef4: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x338ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x338ef8: 0x28420009  slti        $v0, $v0, 0x9
    ctx->pc = 0x338ef8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x338efc: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x338EFCu;
    {
        const bool branch_taken_0x338efc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x338F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338EFCu;
        // 0x338f00: 0x24030015  addiu       $v1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338efc) {
            ctx->pc = 0x338F38u;
            goto label_338f38;
        }
    }
    ctx->pc = 0x338F04u;
    // 0x338f04: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x338f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x338f08: 0x5060000b  beql        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x338F08u;
    {
        const bool branch_taken_0x338f08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x338f08) {
            ctx->pc = 0x338F0Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x338F08u;
            // 0x338f0c: 0x24030015  addiu       $v1, $zero, 0x15 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
            ctx->in_delay_slot = false;
            ctx->pc = 0x338F38u;
            goto label_338f38;
        }
    }
    ctx->pc = 0x338F10u;
    // 0x338f10: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x338f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x338f14: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x338f14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x338f18: 0x28420009  slti        $v0, $v0, 0x9
    ctx->pc = 0x338f18u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x338f1c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x338F1Cu;
    {
        const bool branch_taken_0x338f1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x338F20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x338F1Cu;
        // 0x338f20: 0x24030015  addiu       $v1, $zero, 0x15 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x338f1c) {
            ctx->pc = 0x338F38u;
            goto label_338f38;
        }
    }
    ctx->pc = 0x338F24u;
    // 0x338f24: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x338f24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x338f28: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x338f28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x338f2c: 0xaf82bec0  sw          $v0, -0x4140($gp)
    ctx->pc = 0x338f2cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950592), GPR_U32(ctx, 2));
    // 0x338f30: 0x8fb600f8  lw          $s6, 0xF8($sp)
    ctx->pc = 0x338f30u;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
label_338f34:
    // 0x338f34: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x338f34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_338f38:
    // 0x338f38: 0x8fa500fc  lw          $a1, 0xFC($sp)
    ctx->pc = 0x338f38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x338f3c: 0x24110013  addiu       $s1, $zero, 0x13
    ctx->pc = 0x338f3cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
    // 0x338f40: 0x2ec40012  sltiu       $a0, $s6, 0x12
    ctx->pc = 0x338f40u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)(int64_t)(int32_t)18) ? 1 : 0);
    // 0x338f44: 0x24020011  addiu       $v0, $zero, 0x11
    ctx->pc = 0x338f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x338f48: 0x65880b  movn        $s1, $v1, $a1
    ctx->pc = 0x338f48u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 17, GPR_VEC(ctx, 3));
    // 0x338f4c: 0x24b00001  addiu       $s0, $a1, 0x1
    ctx->pc = 0x338f4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x338f50: 0x44b00a  movz        $s6, $v0, $a0
    ctx->pc = 0x338f50u;
    if (GPR_U64(ctx, 4) == 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 2));
    // 0x338f54: 0x2302821  addu        $a1, $s1, $s0
    ctx->pc = 0x338f54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x338f58: 0xb61018  mult        $v0, $a1, $s6
    ctx->pc = 0x338f58u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 22); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x338f5c: 0x8e630030  lw          $v1, 0x30($s3)
    ctx->pc = 0x338f5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x338f60: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x338f60u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338f64: 0x562821  addu        $a1, $v0, $s6
    ctx->pc = 0x338f64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 22)));
    // 0x338f68: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x338f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x338f6c: 0x24a5001d  addiu       $a1, $a1, 0x1D
    ctx->pc = 0x338f6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 29));
    // 0x338f70: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x338f70u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x338f74: 0x24420018  addiu       $v0, $v0, 0x18
    ctx->pc = 0x338f74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 24));
    // 0x338f78: 0x761823  subu        $v1, $v1, $s6
    ctx->pc = 0x338f78u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x338f7c: 0xafa201a0  sw          $v0, 0x1A0($sp)
    ctx->pc = 0x338f7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 416), GPR_U32(ctx, 2));
    // 0x338f80: 0xc10a322  jal         func_428C88
    ctx->pc = 0x338F80u;
    SET_GPR_U32(ctx, 31, 0x338F88u);
    ctx->pc = 0x338F84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x338F80u;
    // 0x338f84: 0xafa300f8  sw          $v1, 0xF8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x428C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x428C88u, 0x338F80u, 0x338F88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x338F88u;
label_338f88:
    // 0x338f88: 0x8f83be20  lw          $v1, -0x41E0($gp)
    ctx->pc = 0x338f88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x338f8c: 0x3c081000  lui         $t0, 0x1000
    ctx->pc = 0x338f8cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)4096 << 16));
    // 0x338f90: 0x3508001b  ori         $t0, $t0, 0x1B
    ctx->pc = 0x338f90u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | (uint64_t)(uint16_t)27);
    // 0x338f94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x338f94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x338f98: 0x70a81389  pcpyld      $v0, $a1, $t0
    ctx->pc = 0x338f98u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 8)));
    // 0x338f9c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x338f9cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x338fa0: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x338fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x338fa4: 0x3c026c0f  lui         $v0, 0x6C0F
    ctx->pc = 0x338fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27663 << 16));
    // 0x338fa8: 0x344203c4  ori         $v0, $v0, 0x3C4
    ctx->pc = 0x338fa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)964);
    // 0x338fac: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x338facu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x338fb0: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x338fb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x338fb4: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x338fb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x338fb8: 0x34420404  ori         $v0, $v0, 0x404
    ctx->pc = 0x338fb8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x338fbc: 0x70451389  pcpyld      $v0, $v0, $a1
    ctx->pc = 0x338fbcu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 5)));
    // 0x338fc0: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x338fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x338fc4: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x338fc4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x338fc8: 0x7ba40110  lq          $a0, 0x110($sp)
    ctx->pc = 0x338fc8u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x338fcc: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x338fccu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x338fd0: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x338fd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x338fd4: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x338fd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x338fd8: 0xdfa200c8  ld          $v0, 0xC8($sp)
    ctx->pc = 0x338fd8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 200)));
    // 0x338fdc: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x338fdcu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x338fe0: 0x7ba60140  lq          $a2, 0x140($sp)
    ctx->pc = 0x338fe0u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x338fe4: 0x7c660000  sq          $a2, 0x0($v1)
    ctx->pc = 0x338fe4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 6));
    // 0x338fe8: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x338fe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x338fec: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x338fecu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x338ff0: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x338ff0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x338ff4: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x338ff4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x338ff8: 0xdfa200c0  ld          $v0, 0xC0($sp)
    ctx->pc = 0x338ff8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x338ffc: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x338ffcu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x339000: 0x7ba40130  lq          $a0, 0x130($sp)
    ctx->pc = 0x339000u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x339004: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x339004u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x339008: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x339008u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x33900c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x33900cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x339010: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x339010u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x339014: 0x7ba60180  lq          $a2, 0x180($sp)
    ctx->pc = 0x339014u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x339018: 0x7c660000  sq          $a2, 0x0($v1)
    ctx->pc = 0x339018u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 6));
    // 0x33901c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x33901cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x339020: 0x70a51389  pcpyld      $v0, $a1, $a1
    ctx->pc = 0x339020u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 5)));
    // 0x339024: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x339024u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x339028: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x339028u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x33902c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x33902cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x339030: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x339030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x339034: 0x7ba20190  lq          $v0, 0x190($sp)
    ctx->pc = 0x339034u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x339038: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x339038u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x33903c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x33903cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x339040: 0x7ba40120  lq          $a0, 0x120($sp)
    ctx->pc = 0x339040u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x339044: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x339044u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x339048: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x339048u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x33904c: 0x7ba60150  lq          $a2, 0x150($sp)
    ctx->pc = 0x33904cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x339050: 0x7c660000  sq          $a2, 0x0($v1)
    ctx->pc = 0x339050u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 6));
    // 0x339054: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x339054u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x339058: 0x24020009  addiu       $v0, $zero, 0x9
    ctx->pc = 0x339058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x33905c: 0x70541389  pcpyld      $v0, $v0, $s4
    ctx->pc = 0x33905cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 20)));
    // 0x339060: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x339060u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x339064: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x339064u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x339068: 0x7ba20160  lq          $v0, 0x160($sp)
    ctx->pc = 0x339068u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x33906c: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x33906cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x339070: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x339070u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x339074: 0x24040015  addiu       $a0, $zero, 0x15
    ctx->pc = 0x339074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x339078: 0xdfa200d0  ld          $v0, 0xD0($sp)
    ctx->pc = 0x339078u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x33907c: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x33907cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x339080: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x339080u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x339084: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x339084u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x339088: 0x7ba40170  lq          $a0, 0x170($sp)
    ctx->pc = 0x339088u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x33908c: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x33908cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x339090: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x339090u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x339094: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x339094u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x339098: 0x3c046c01  lui         $a0, 0x6C01
    ctx->pc = 0x339098u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)27649 << 16));
    // 0x33909c: 0x348403fa  ori         $a0, $a0, 0x3FA
    ctx->pc = 0x33909cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1018);
    // 0x3390a0: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x3390a0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x3390a4: 0x34840100  ori         $a0, $a0, 0x100
    ctx->pc = 0x3390a4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
    // 0x3390a8: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x3390a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x3390ac: 0x34840404  ori         $a0, $a0, 0x404
    ctx->pc = 0x3390acu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1028);
    // 0x3390b0: 0x70852389  pcpyld      $a0, $a0, $a1
    ctx->pc = 0x3390b0u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x3390b4: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x3390b4u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x3390b8: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x3390b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3390bc: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x3390bcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x3390c0: 0x92620047  lbu         $v0, 0x47($s3)
    ctx->pc = 0x3390c0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 71)));
    // 0x3390c4: 0x8f83bec4  lw          $v1, -0x413C($gp)
    ctx->pc = 0x3390c4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950596)));
    // 0x3390c8: 0x384200ff  xori        $v0, $v0, 0xFF
    ctx->pc = 0x3390c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)255);
    // 0x3390cc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x3390ccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3390d0: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x3390d0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x3390d4: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x3390D4u;
    {
        const bool branch_taken_0x3390d4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3390D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3390D4u;
        // 0x3390d8: 0xaf82bec8  sw          $v0, -0x4138($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950600), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3390d4) {
            ctx->pc = 0x3390F0u;
            goto label_3390f0;
        }
    }
    ctx->pc = 0x3390DCu;
    // 0x3390dc: 0xdf82ae80  ld          $v0, -0x5180($gp)
    ctx->pc = 0x3390dcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946432)));
    // 0x3390e0: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x3390e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x3390e4: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x3390E4u;
    {
        const bool branch_taken_0x3390e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3390E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3390E4u;
        // 0x3390e8: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3390e4) {
            ctx->pc = 0x3390FCu;
            goto label_3390fc;
        }
    }
    ctx->pc = 0x3390ECu;
    // 0x3390ec: 0x0  nop
    ctx->pc = 0x3390ecu;
    // NOP
label_3390f0:
    // 0x3390f0: 0xdf82ae80  ld          $v0, -0x5180($gp)
    ctx->pc = 0x3390f0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946432)));
    // 0x3390f4: 0x2403ffbf  addiu       $v1, $zero, -0x41
    ctx->pc = 0x3390f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x3390f8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x3390f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_3390fc:
    // 0x3390fc: 0xff82ae80  sd          $v0, -0x5180($gp)
    ctx->pc = 0x3390fcu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946432), GPR_U64(ctx, 2));
    // 0x339100: 0x92660029  lbu         $a2, 0x29($s3)
    ctx->pc = 0x339100u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 41)));
    // 0x339104: 0x3c03005e  lui         $v1, 0x5E
    ctx->pc = 0x339104u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)94 << 16));
    // 0x339108: 0x8f82ae80  lw          $v0, -0x5180($gp)
    ctx->pc = 0x339108u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946432)));
    // 0x33910c: 0x3c07fc00  lui         $a3, 0xFC00
    ctx->pc = 0x33910cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64512 << 16));
    // 0x339110: 0x34e77fff  ori         $a3, $a3, 0x7FFF
    ctx->pc = 0x339110u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)32767);
    // 0x339114: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x339114u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x339118: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x339118u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x33911c: 0x73c38  dsll        $a3, $a3, 16
    ctx->pc = 0x33911cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 16);
    // 0x339120: 0x34e7ffff  ori         $a3, $a3, 0xFFFF
    ctx->pc = 0x339120u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)65535);
    // 0x339124: 0xdc64d5d0  ld          $a0, -0x2A30($v1)
    ctx->pc = 0x339124u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 4294956496)));
    // 0x339128: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x339128u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x33912c: 0x2463d5d0  addiu       $v1, $v1, -0x2A30
    ctx->pc = 0x33912cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294956496));
    // 0x339130: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x339130u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x339134: 0x872024  and         $a0, $a0, $a3
    ctx->pc = 0x339134u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 7));
    // 0x339138: 0x213fc  dsll32      $v0, $v0, 15
    ctx->pc = 0x339138u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 15));
    // 0x33913c: 0xdc650008  ld          $a1, 0x8($v1)
    ctx->pc = 0x33913cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x339140: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x339140u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x339144: 0x70a42389  pcpyld      $a0, $a1, $a0
    ctx->pc = 0x339144u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x339148: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x339148u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x33914c: 0x8f86be20  lw          $a2, -0x41E0($gp)
    ctx->pc = 0x33914cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x339150: 0x7cc40000  sq          $a0, 0x0($a2)
    ctx->pc = 0x339150u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 4));
    // 0x339154: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x339154u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x339158: 0xaf86be20  sw          $a2, -0x41E0($gp)
    ctx->pc = 0x339158u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 6));
    // 0x33915c: 0x3c026c01  lui         $v0, 0x6C01
    ctx->pc = 0x33915cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27649 << 16));
    // 0x339160: 0x344203fb  ori         $v0, $v0, 0x3FB
    ctx->pc = 0x339160u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1019);
    // 0x339164: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x339164u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x339168: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x339168u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x33916c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x33916cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x339170: 0x34420404  ori         $v0, $v0, 0x404
    ctx->pc = 0x339170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x339174: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x339174u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339178: 0x70471389  pcpyld      $v0, $v0, $a3
    ctx->pc = 0x339178u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x33917c: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x33917cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x339180: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x339180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x339184: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x339184u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x339188: 0xdf82ae80  ld          $v0, -0x5180($gp)
    ctx->pc = 0x339188u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946432)));
    // 0x33918c: 0xc7858054  lwc1        $f5, -0x7FAC($gp)
    ctx->pc = 0x33918cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
    // 0x339190: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x339190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x339194: 0x10400002  beqz        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x339194u;
    {
        const bool branch_taken_0x339194 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x339198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339194u;
        // 0x339198: 0x92620044  lbu         $v0, 0x44($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339194) {
            ctx->pc = 0x3391A0u;
            goto label_3391a0;
        }
    }
    ctx->pc = 0x33919Cu;
    // 0x33919c: 0xc7858434  lwc1        $f5, -0x7BCC($gp)
    ctx->pc = 0x33919cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[5] = f; }
label_3391a0:
    // 0x3391a0: 0x92630045  lbu         $v1, 0x45($s3)
    ctx->pc = 0x3391a0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 69)));
    // 0x3391a4: 0x92640046  lbu         $a0, 0x46($s3)
    ctx->pc = 0x3391a4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 70)));
    // 0x3391a8: 0x44822000  mtc1        $v0, $f4
    ctx->pc = 0x3391a8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[4], &bits, sizeof(bits)); }
    // 0x3391ac: 0x46802120  cvt.s.w     $f4, $f4
    ctx->pc = 0x3391acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[4], sizeof(tmp)); ctx->f[4] = FPU_CVT_S_W(tmp); }
    // 0x3391b0: 0x92650047  lbu         $a1, 0x47($s3)
    ctx->pc = 0x3391b0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 71)));
    // 0x3391b4: 0x44831800  mtc1        $v1, $f3
    ctx->pc = 0x3391b4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x3391b8: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x3391b8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x3391bc: 0x44841000  mtc1        $a0, $f2
    ctx->pc = 0x3391bcu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x3391c0: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x3391c0u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x3391c4: 0xc7818434  lwc1        $f1, -0x7BCC($gp)
    ctx->pc = 0x3391c4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x3391c8: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x3391c8u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x3391cc: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x3391ccu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x3391d0: 0x46010182  mul.s       $f6, $f0, $f1
    ctx->pc = 0x3391d0u;
    ctx->f[6] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x3391d4: 0x460519c2  mul.s       $f7, $f3, $f5
    ctx->pc = 0x3391d4u;
    ctx->f[7] = FPU_MUL_S(ctx->f[3], ctx->f[5]);
    // 0x3391d8: 0x44023000  mfc1        $v0, $f6
    ctx->pc = 0x3391d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3391dc: 0x44033800  mfc1        $v1, $f7
    ctx->pc = 0x3391dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3391e0: 0x70021789  pexew       $v0, $v0
    ctx->pc = 0x3391e0u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 2)));
    // 0x3391e4: 0x70031f89  pexew       $v1, $v1
    ctx->pc = 0x3391e4u;
    SET_GPR_VEC(ctx, 3, PS2_PEXEW(GPR_VEC(ctx, 3)));
    // 0x3391e8: 0x46051182  mul.s       $f6, $f2, $f5
    ctx->pc = 0x3391e8u;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[5]);
    // 0x3391ec: 0x460521c2  mul.s       $f7, $f4, $f5
    ctx->pc = 0x3391ecu;
    ctx->f[7] = FPU_MUL_S(ctx->f[4], ctx->f[5]);
    // 0x3391f0: 0x44023000  mfc1        $v0, $f6
    ctx->pc = 0x3391f0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x3391f4: 0x44033800  mfc1        $v1, $f7
    ctx->pc = 0x3391f4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[7], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x3391f8: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x3391f8u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x3391fc: 0x7cc20010  sq          $v0, 0x10($a2)
    ctx->pc = 0x3391fcu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 2));
    // 0x339200: 0x24c30020  addiu       $v1, $a2, 0x20
    ctx->pc = 0x339200u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x339204: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x339204u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x339208: 0x3c026c01  lui         $v0, 0x6C01
    ctx->pc = 0x339208u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27649 << 16));
    // 0x33920c: 0x344203fc  ori         $v0, $v0, 0x3FC
    ctx->pc = 0x33920cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1020);
    // 0x339210: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x339210u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x339214: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x339214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x339218: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x339218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x33921c: 0x34420404  ori         $v0, $v0, 0x404
    ctx->pc = 0x33921cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x339220: 0x70471389  pcpyld      $v0, $v0, $a3
    ctx->pc = 0x339220u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x339224: 0x7cc20020  sq          $v0, 0x20($a2)
    ctx->pc = 0x339224u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 2));
    // 0x339228: 0x24c30030  addiu       $v1, $a2, 0x30
    ctx->pc = 0x339228u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    // 0x33922c: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x33922cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x339230: 0x8e62003c  lw          $v0, 0x3C($s3)
    ctx->pc = 0x339230u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 60)));
    // 0x339234: 0xc7848240  lwc1        $f4, -0x7DC0($gp)
    ctx->pc = 0x339234u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x339238: 0xc4430008  lwc1        $f3, 0x8($v0)
    ctx->pc = 0x339238u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33923c: 0xc4420000  lwc1        $f2, 0x0($v0)
    ctx->pc = 0x33923cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x339240: 0xc4410004  lwc1        $f1, 0x4($v0)
    ctx->pc = 0x339240u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x339244: 0xc660001c  lwc1        $f0, 0x1C($s3)
    ctx->pc = 0x339244u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 19), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x339248: 0x46040942  mul.s       $f5, $f1, $f4
    ctx->pc = 0x339248u;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x33924c: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x33924cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x339250: 0x44032800  mfc1        $v1, $f5
    ctx->pc = 0x339250u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x339254: 0x70021789  pexew       $v0, $v0
    ctx->pc = 0x339254u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 2)));
    // 0x339258: 0x70031f89  pexew       $v1, $v1
    ctx->pc = 0x339258u;
    SET_GPR_VEC(ctx, 3, PS2_PEXEW(GPR_VEC(ctx, 3)));
    // 0x33925c: 0x46041982  mul.s       $f6, $f3, $f4
    ctx->pc = 0x33925cu;
    ctx->f[6] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x339260: 0x46041142  mul.s       $f5, $f2, $f4
    ctx->pc = 0x339260u;
    ctx->f[5] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x339264: 0x44023000  mfc1        $v0, $f6
    ctx->pc = 0x339264u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x339268: 0x44032800  mfc1        $v1, $f5
    ctx->pc = 0x339268u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x33926c: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x33926cu;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x339270: 0x7cc20030  sq          $v0, 0x30($a2)
    ctx->pc = 0x339270u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 48), GPR_VEC(ctx, 2));
    // 0x339274: 0x24c30040  addiu       $v1, $a2, 0x40
    ctx->pc = 0x339274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 64));
    // 0x339278: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x339278u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x33927c: 0x8e620040  lw          $v0, 0x40($s3)
    ctx->pc = 0x33927cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x339280: 0x5040001f  beql        $v0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x339280u;
    {
        const bool branch_taken_0x339280 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x339280) {
            ctx->pc = 0x339284u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x339280u;
            // 0x339284: 0x700014a9  por         $v0, $zero, $zero (Delay Slot)
            SET_GPR_VEC(ctx, 2, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x339300u;
            goto label_339300;
        }
    }
    ctx->pc = 0x339288u;
    // 0x339288: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x339288u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x33928c: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x33928cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x339290: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x339290u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x339294: 0x70471389  pcpyld      $v0, $v0, $a3
    ctx->pc = 0x339294u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x339298: 0x7cc20040  sq          $v0, 0x40($a2)
    ctx->pc = 0x339298u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 64), GPR_VEC(ctx, 2));
    // 0x33929c: 0x24c20050  addiu       $v0, $a2, 0x50
    ctx->pc = 0x33929cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
    // 0x3392a0: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x3392a0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x3392a4: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x3392a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x3392a8: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x3392a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x3392ac: 0x34638003  ori         $v1, $v1, 0x8003
    ctx->pc = 0x3392acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32771);
    // 0x3392b0: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x3392b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x3392b4: 0x70431389  pcpyld      $v0, $v0, $v1
    ctx->pc = 0x3392b4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x3392b8: 0x7cc20050  sq          $v0, 0x50($a2)
    ctx->pc = 0x3392b8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 80), GPR_VEC(ctx, 2));
    // 0x3392bc: 0x24c20060  addiu       $v0, $a2, 0x60
    ctx->pc = 0x3392bcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 96));
    // 0x3392c0: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x3392c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x3392c4: 0xdf83ae48  ld          $v1, -0x51B8($gp)
    ctx->pc = 0x3392c4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294946376)));
    // 0x3392c8: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x3392c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x3392cc: 0x70431389  pcpyld      $v0, $v0, $v1
    ctx->pc = 0x3392ccu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x3392d0: 0x7cc20060  sq          $v0, 0x60($a2)
    ctx->pc = 0x3392d0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 96), GPR_VEC(ctx, 2));
    // 0x3392d4: 0x24c20070  addiu       $v0, $a2, 0x70
    ctx->pc = 0x3392d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 112));
    // 0x3392d8: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x3392d8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x3392dc: 0xdf83ae68  ld          $v1, -0x5198($gp)
    ctx->pc = 0x3392dcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294946408)));
    // 0x3392e0: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x3392e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x3392e4: 0x70431389  pcpyld      $v0, $v0, $v1
    ctx->pc = 0x3392e4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x3392e8: 0x7cc20070  sq          $v0, 0x70($a2)
    ctx->pc = 0x3392e8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 112), GPR_VEC(ctx, 2));
    // 0x3392ec: 0x24c20080  addiu       $v0, $a2, 0x80
    ctx->pc = 0x3392ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x3392f0: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x3392f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x3392f4: 0xdf83ae60  ld          $v1, -0x51A0($gp)
    ctx->pc = 0x3392f4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294946400)));
    // 0x3392f8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x3392F8u;
    {
        const bool branch_taken_0x3392f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3392FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3392F8u;
        // 0x3392fc: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3392f8) {
            ctx->pc = 0x339360u;
            goto label_339360;
        }
    }
    ctx->pc = 0x339300u;
label_339300:
    // 0x339300: 0x7cc20040  sq          $v0, 0x40($a2)
    ctx->pc = 0x339300u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 64), GPR_VEC(ctx, 2));
    // 0x339304: 0x24c20050  addiu       $v0, $a2, 0x50
    ctx->pc = 0x339304u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 80));
    // 0x339308: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x339308u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x33930c: 0x70001ca9  por         $v1, $zero, $zero
    ctx->pc = 0x33930cu;
    SET_GPR_VEC(ctx, 3, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
    // 0x339310: 0x7cc30050  sq          $v1, 0x50($a2)
    ctx->pc = 0x339310u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 80), GPR_VEC(ctx, 3));
    // 0x339314: 0x24c20060  addiu       $v0, $a2, 0x60
    ctx->pc = 0x339314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 96));
    // 0x339318: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x339318u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x33931c: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x33931cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x339320: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x339320u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x339324: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x339324u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x339328: 0x70471389  pcpyld      $v0, $v0, $a3
    ctx->pc = 0x339328u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 7)));
    // 0x33932c: 0x7cc20060  sq          $v0, 0x60($a2)
    ctx->pc = 0x33932cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 96), GPR_VEC(ctx, 2));
    // 0x339330: 0x24c20070  addiu       $v0, $a2, 0x70
    ctx->pc = 0x339330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 112));
    // 0x339334: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x339334u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x339338: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x339338u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x33933c: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x33933cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x339340: 0x34638001  ori         $v1, $v1, 0x8001
    ctx->pc = 0x339340u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32769);
    // 0x339344: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x339344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x339348: 0x70431389  pcpyld      $v0, $v0, $v1
    ctx->pc = 0x339348u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x33934c: 0x7cc20070  sq          $v0, 0x70($a2)
    ctx->pc = 0x33934cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 112), GPR_VEC(ctx, 2));
    // 0x339350: 0x24c20080  addiu       $v0, $a2, 0x80
    ctx->pc = 0x339350u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 128));
    // 0x339354: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x339354u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x339358: 0xdf83ae48  ld          $v1, -0x51B8($gp)
    ctx->pc = 0x339358u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294946376)));
    // 0x33935c: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x33935cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
label_339360:
    // 0x339360: 0x70431389  pcpyld      $v0, $v0, $v1
    ctx->pc = 0x339360u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x339364: 0x7cc20080  sq          $v0, 0x80($a2)
    ctx->pc = 0x339364u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 128), GPR_VEC(ctx, 2));
    // 0x339368: 0x24c20090  addiu       $v0, $a2, 0x90
    ctx->pc = 0x339368u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 144));
    // 0x33936c: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x33936cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x339370: 0x2642c4c0  addiu       $v0, $s2, -0x3B40
    ctx->pc = 0x339370u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 18), 4294952128));
    // 0x339374: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x339374u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x339378: 0x90650090  lbu         $a1, 0x90($v1)
    ctx->pc = 0x339378u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 144)));
    // 0x33937c: 0xa265002b  sb          $a1, 0x2B($s3)
    ctx->pc = 0x33937cu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 43), (uint8_t)GPR_U32(ctx, 5));
    // 0x339380: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x339380u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x339384: 0x8f85aed4  lw          $a1, -0x512C($gp)
    ctx->pc = 0x339384u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946516)));
    // 0x339388: 0x9262002b  lbu         $v0, 0x2B($s3)
    ctx->pc = 0x339388u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 43)));
    // 0x33938c: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x33938cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x339390: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x339390u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x339394: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x339394u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x339398: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x339398u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33939c: 0x10a6000a  beq         $a1, $a2, . + 4 + (0xA << 2)
    ctx->pc = 0x33939Cu;
    {
        const bool branch_taken_0x33939c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 6));
        ctx->pc = 0x3393A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33939Cu;
        // 0x3393a0: 0x6203c  dsll32      $a0, $a2, 0 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33939c) {
            ctx->pc = 0x3393C8u;
            goto label_3393c8;
        }
    }
    ctx->pc = 0x3393A4u;
    // 0x3393a4: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x3393a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x3393a8: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x3393a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x3393ac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x3393acu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3393b0: 0x70441389  pcpyld      $v0, $v0, $a0
    ctx->pc = 0x3393b0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x3393b4: 0x8f83be20  lw          $v1, -0x41E0($gp)
    ctx->pc = 0x3393b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x3393b8: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x3393b8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x3393bc: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x3393bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x3393c0: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x3393c0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x3393c4: 0xaf86aed4  sw          $a2, -0x512C($gp)
    ctx->pc = 0x3393c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946516), GPR_U32(ctx, 6));
label_3393c8:
    // 0x3393c8: 0x8fa601a0  lw          $a2, 0x1A0($sp)
    ctx->pc = 0x3393c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x3393cc: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x3393ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x3393d0: 0x8e630004  lw          $v1, 0x4($s3)
    ctx->pc = 0x3393d0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x3393d4: 0x2244025  or          $t0, $s1, $a0
    ctx->pc = 0x3393d4u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 17) | GPR_U64(ctx, 4));
    // 0x3393d8: 0x9cc50008  lwu         $a1, 0x8($a2)
    ctx->pc = 0x3393d8u;
    SET_GPR_ZE32(ctx, 5, READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x3393dc: 0x3c070200  lui         $a3, 0x200
    ctx->pc = 0x3393dcu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)512 << 16));
    // 0x3393e0: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x3393e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x3393e4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x3393e4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3393e8: 0x70c81b89  pcpyld      $v1, $a2, $t0
    ctx->pc = 0x3393e8u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 8)));
    // 0x3393ec: 0x3c040300  lui         $a0, 0x300
    ctx->pc = 0x3393ecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)768 << 16));
    // 0x3393f0: 0x471025  or          $v0, $v0, $a3
    ctx->pc = 0x3393f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 7));
    // 0x3393f4: 0x7fa301b0  sq          $v1, 0x1B0($sp)
    ctx->pc = 0x3393f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 432), GPR_VEC(ctx, 3));
    // 0x3393f8: 0x5283c  dsll32      $a1, $a1, 0
    ctx->pc = 0x3393f8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 0));
    // 0x3393fc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3393fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x339400: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x339400u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x339404: 0x443825  or          $a3, $v0, $a0
    ctx->pc = 0x339404u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x339408: 0xa34025  or          $t0, $a1, $v1
    ctx->pc = 0x339408u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 5) | GPR_U64(ctx, 3));
    // 0x33940c: 0x70e82389  pcpyld      $a0, $a3, $t0
    ctx->pc = 0x33940cu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x339410: 0x7fa401c0  sq          $a0, 0x1C0($sp)
    ctx->pc = 0x339410u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 448), GPR_VEC(ctx, 4));
    // 0x339414: 0x3c026c02  lui         $v0, 0x6C02
    ctx->pc = 0x339414u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27650 << 16));
    // 0x339418: 0x344203ca  ori         $v0, $v0, 0x3CA
    ctx->pc = 0x339418u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)970);
    // 0x33941c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x33941cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x339420: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x339420u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x339424: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x339424u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x339428: 0x34420404  ori         $v0, $v0, 0x404
    ctx->pc = 0x339428u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x33942c: 0x70462b89  pcpyld      $a1, $v0, $a2
    ctx->pc = 0x33942cu;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x339430: 0x7fa501d0  sq          $a1, 0x1D0($sp)
    ctx->pc = 0x339430u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 464), GPR_VEC(ctx, 5));
    // 0x339434: 0xafa001a4  sw          $zero, 0x1A4($sp)
    ctx->pc = 0x339434u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 420), GPR_U32(ctx, 0));
    // 0x339438: 0x8fa600f4  lw          $a2, 0xF4($sp)
    ctx->pc = 0x339438u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x33943c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x33943cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x339440: 0x10400156  beqz        $v0, . + 4 + (0x156 << 2)
    ctx->pc = 0x339440u;
    {
        const bool branch_taken_0x339440 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x339444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339440u;
        // 0x339444: 0xafa000f0  sw          $zero, 0xF0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339440) {
            ctx->pc = 0x33999Cu;
            goto label_33999c;
        }
    }
    ctx->pc = 0x339448u;
    // 0x339448: 0x2301021  addu        $v0, $s1, $s0
    ctx->pc = 0x339448u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x33944c: 0x3c036c00  lui         $v1, 0x6C00
    ctx->pc = 0x33944cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27648 << 16));
    // 0x339450: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x339450u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x339454: 0x34630346  ori         $v1, $v1, 0x346
    ctx->pc = 0x339454u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)838);
    // 0x339458: 0xafa201e0  sw          $v0, 0x1E0($sp)
    ctx->pc = 0x339458u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 480), GPR_U32(ctx, 2));
    // 0x33945c: 0x27b70040  addiu       $s7, $sp, 0x40
    ctx->pc = 0x33945cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x339460: 0xafa30200  sw          $v1, 0x200($sp)
    ctx->pc = 0x339460u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 512), GPR_U32(ctx, 3));
    // 0x339464: 0xafa0027c  sw          $zero, 0x27C($sp)
    ctx->pc = 0x339464u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 636), GPR_U32(ctx, 0));
    // 0x339468: 0xafa00280  sw          $zero, 0x280($sp)
    ctx->pc = 0x339468u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 640), GPR_U32(ctx, 0));
    // 0x33946c: 0x0  nop
    ctx->pc = 0x33946cu;
    // NOP
label_339470:
    // 0x339470: 0x8fa400fc  lw          $a0, 0xFC($sp)
    ctx->pc = 0x339470u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x339474: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x339474u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339478: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x339478u;
    {
        const bool branch_taken_0x339478 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x33947Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339478u;
        // 0x33947c: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339478) {
            ctx->pc = 0x339498u;
            goto label_339498;
        }
    }
    ctx->pc = 0x339480u;
    // 0x339480: 0x8fa500f4  lw          $a1, 0xF4($sp)
    ctx->pc = 0x339480u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x339484: 0x8fa60280  lw          $a2, 0x280($sp)
    ctx->pc = 0x339484u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x339488: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x339488u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x33948c: 0x468021  addu        $s0, $v0, $a2
    ctx->pc = 0x33948cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x339490: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x339490u;
    {
        const bool branch_taken_0x339490 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x339494u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339490u;
        // 0x339494: 0x8e110000  lw          $s1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339490) {
            ctx->pc = 0x3394ACu;
            goto label_3394ac;
        }
    }
    ctx->pc = 0x339498u;
label_339498:
    // 0x339498: 0x8fa300f4  lw          $v1, 0xF4($sp)
    ctx->pc = 0x339498u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x33949c: 0x8fa4027c  lw          $a0, 0x27C($sp)
    ctx->pc = 0x33949cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 636)));
    // 0x3394a0: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x3394a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x3394a4: 0x449021  addu        $s2, $v0, $a0
    ctx->pc = 0x3394a4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x3394a8: 0x8e51006c  lw          $s1, 0x6C($s2)
    ctx->pc = 0x3394a8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
label_3394ac:
    // 0x3394ac: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x3394acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x3394b0: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x3394b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x3394b4: 0x1040012c  beqz        $v0, . + 4 + (0x12C << 2)
    ctx->pc = 0x3394B4u;
    {
        const bool branch_taken_0x3394b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3394B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3394B4u;
        // 0x3394b8: 0x8fa500fc  lw          $a1, 0xFC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3394b4) {
            ctx->pc = 0x339968u;
            goto label_339968;
        }
    }
    ctx->pc = 0x3394BCu;
    // 0x3394bc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x3394bcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3394c0: 0x10a0000d  beqz        $a1, . + 4 + (0xD << 2)
    ctx->pc = 0x3394C0u;
    {
        const bool branch_taken_0x3394c0 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x3394C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3394C0u;
        // 0x3394c4: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3394c0) {
            ctx->pc = 0x3394F8u;
            goto label_3394f8;
        }
    }
    ctx->pc = 0x3394C8u;
    // 0x3394c8: 0x8fa600e8  lw          $a2, 0xE8($sp)
    ctx->pc = 0x3394c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x3394cc: 0xc0de61a  jal         func_379868
    ctx->pc = 0x3394CCu;
    SET_GPR_U32(ctx, 31, 0x3394D4u);
    ctx->pc = 0x3394D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3394CCu;
    // 0x3394d0: 0x8cc40018  lw          $a0, 0x18($a2) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x379868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x379868u, 0x3394CCu, 0x3394D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3394D4u;
label_3394d4:
    // 0x3394d4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x3394d4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3394d8: 0xc0de646  jal         func_379918
    ctx->pc = 0x3394D8u;
    SET_GPR_U32(ctx, 31, 0x3394E0u);
    ctx->pc = 0x3394DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3394D8u;
    // 0x3394dc: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x379918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x379918u, 0x3394D8u, 0x3394E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3394E0u;
label_3394e0:
    // 0x3394e0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x3394e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x3394e4: 0x24880  sll         $t1, $v0, 2
    ctx->pc = 0x3394e4u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3394e8: 0x92020004  lbu         $v0, 0x4($s0)
    ctx->pc = 0x3394e8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x3394ec: 0x8c63010c  lw          $v1, 0x10C($v1)
    ctx->pc = 0x3394ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
    // 0x3394f0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x3394F0u;
    {
        const bool branch_taken_0x3394f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3394F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3394F0u;
        // 0x3394f4: 0xafa301f0  sw          $v1, 0x1F0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 496), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3394f0) {
            ctx->pc = 0x3394FCu;
            goto label_3394fc;
        }
    }
    ctx->pc = 0x3394F8u;
label_3394f8:
    // 0x3394f8: 0x92420060  lbu         $v0, 0x60($s2)
    ctx->pc = 0x3394f8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 96)));
label_3394fc:
    // 0x3394fc: 0xa2620028  sb          $v0, 0x28($s3)
    ctx->pc = 0x3394fcu;
    WRITE8(ADD32(GPR_U32(ctx, 19), 40), (uint8_t)GPR_U32(ctx, 2));
    // 0x339500: 0x8fa201a4  lw          $v0, 0x1A4($sp)
    ctx->pc = 0x339500u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 420)));
    // 0x339504: 0x14560012  bne         $v0, $s6, . + 4 + (0x12 << 2)
    ctx->pc = 0x339504u;
    {
        const bool branch_taken_0x339504 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 22));
        ctx->pc = 0x339508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339504u;
        // 0x339508: 0x8f90be20  lw          $s0, -0x41E0($gp) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339504) {
            ctx->pc = 0x339550u;
            goto label_339550;
        }
    }
    ctx->pc = 0x33950Cu;
    // 0x33950c: 0x8fb600f8  lw          $s6, 0xF8($sp)
    ctx->pc = 0x33950cu;
    SET_GPR_S32(ctx, 22, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x339510: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x339510u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x339514: 0x7fa90290  sq          $t1, 0x290($sp)
    ctx->pc = 0x339514u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 656), GPR_VEC(ctx, 9));
    // 0x339518: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x339518u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33951c: 0x2ec20012  sltiu       $v0, $s6, 0x12
    ctx->pc = 0x33951cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 22) < (uint64_t)(int64_t)(int32_t)18) ? 1 : 0);
    // 0x339520: 0xafa001a4  sw          $zero, 0x1A4($sp)
    ctx->pc = 0x339520u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 420), GPR_U32(ctx, 0));
    // 0x339524: 0x62b00a  movz        $s6, $v1, $v0
    ctx->pc = 0x339524u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 22, GPR_VEC(ctx, 3));
    // 0x339528: 0x8fa201e0  lw          $v0, 0x1E0($sp)
    ctx->pc = 0x339528u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 480)));
    // 0x33952c: 0x8fa300f8  lw          $v1, 0xF8($sp)
    ctx->pc = 0x33952cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 248)));
    // 0x339530: 0x2c20018  mult        $zero, $s6, $v0
    ctx->pc = 0x339530u;
    { int64_t result = (int64_t)GPR_S32(ctx, 22) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x339534: 0x761823  subu        $v1, $v1, $s6
    ctx->pc = 0x339534u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 22)));
    // 0x339538: 0x2812  mflo        $a1
    ctx->pc = 0x339538u;
    SET_GPR_U64(ctx, 5, ctx->lo);
    // 0x33953c: 0xc10a322  jal         func_428C88
    ctx->pc = 0x33953Cu;
    SET_GPR_U32(ctx, 31, 0x339544u);
    ctx->pc = 0x339540u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33953Cu;
    // 0x339540: 0xafa300f8  sw          $v1, 0xF8($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 248), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x428C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x428C88u, 0x33953Cu, 0x339544u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339544u;
label_339544:
    // 0x339544: 0x7ba90290  lq          $t1, 0x290($sp)
    ctx->pc = 0x339544u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x339548: 0x8f90be20  lw          $s0, -0x41E0($gp)
    ctx->pc = 0x339548u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x33954c: 0x0  nop
    ctx->pc = 0x33954cu;
    // NOP
label_339550:
    // 0x339550: 0x7ba401b0  lq          $a0, 0x1B0($sp)
    ctx->pc = 0x339550u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 432)));
    // 0x339554: 0x7e040000  sq          $a0, 0x0($s0)
    ctx->pc = 0x339554u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 4));
    // 0x339558: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x339558u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x33955c: 0x7ba501d0  lq          $a1, 0x1D0($sp)
    ctx->pc = 0x33955cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 464)));
    // 0x339560: 0x7e050000  sq          $a1, 0x0($s0)
    ctx->pc = 0x339560u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 5));
    // 0x339564: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x339564u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x339568: 0x3c060001  lui         $a2, 0x1
    ctx->pc = 0x339568u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)1 << 16));
label_33956c:
    // 0x33956c: 0x42000039  di
    ctx->pc = 0x33956cu;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x339570: 0x40f  sync.p
    ctx->pc = 0x339570u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x339574: 0x40036000  mfc0        $v1, Status
    ctx->pc = 0x339574u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_status);
    // 0x339578: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x339578u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x33957c: 0x0  nop
    ctx->pc = 0x33957cu;
    // NOP
    // 0x339580: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x339580u;
    {
        const bool branch_taken_0x339580 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x339580) {
            ctx->pc = 0x33956Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33956c;
        }
    }
    ctx->pc = 0x339588u;
    // 0x339588: 0x8e220108  lw          $v0, 0x108($s1)
    ctx->pc = 0x339588u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 264)));
    // 0x33958c: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x33958cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x339590: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x339590u;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x339594: 0xd8420010  lqc2        $vf2, 0x10($v0)
    ctx->pc = 0x339594u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x339598: 0xd8430020  lqc2        $vf3, 0x20($v0)
    ctx->pc = 0x339598u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x33959c: 0xd8440030  lqc2        $vf4, 0x30($v0)
    ctx->pc = 0x33959cu;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x3395a0: 0x9c44000c  lwu         $a0, 0xC($v0)
    ctx->pc = 0x3395a0u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x3395a4: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x3395a4u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3395a8: 0xdba60010  lqc2        $vf6, 0x10($sp)
    ctx->pc = 0x3395a8u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3395ac: 0xdba70020  lqc2        $vf7, 0x20($sp)
    ctx->pc = 0x3395acu;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3395b0: 0xdba80030  lqc2        $vf8, 0x30($sp)
    ctx->pc = 0x3395b0u;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3395b4: 0x9fa3000c  lwu         $v1, 0xC($sp)
    ctx->pc = 0x3395b4u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x3395b8: 0x4bc129bc  vmulax.xyz  $ACC, $vf5, $vf1x
    ctx->pc = 0x3395b8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x3395bc: 0x4bc130bd  vmadday.xyz $ACC, $vf6, $vf1y
    ctx->pc = 0x3395bcu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x3395c0: 0x4bc13a4a  vmaddz.xyz  $vf9, $vf7, $vf1z
    ctx->pc = 0x3395c0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x3395c4: 0x4bc229bc  vmulax.xyz  $ACC, $vf5, $vf2x
    ctx->pc = 0x3395c4u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x3395c8: 0x4bc230bd  vmadday.xyz $ACC, $vf6, $vf2y
    ctx->pc = 0x3395c8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x3395cc: 0x4bc23a8a  vmaddz.xyz  $vf10, $vf7, $vf2z
    ctx->pc = 0x3395ccu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x3395d0: 0x4bc329bc  vmulax.xyz  $ACC, $vf5, $vf3x
    ctx->pc = 0x3395d0u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x3395d4: 0x4bc330bd  vmadday.xyz $ACC, $vf6, $vf3y
    ctx->pc = 0x3395d4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x3395d8: 0x4bc33aca  vmaddz.xyz  $vf11, $vf7, $vf3z
    ctx->pc = 0x3395d8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x3395dc: 0x4bc429bc  vmulax.xyz  $ACC, $vf5, $vf4x
    ctx->pc = 0x3395dcu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x3395e0: 0x4bc430bd  vmadday.xyz $ACC, $vf6, $vf4y
    ctx->pc = 0x3395e0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x3395e4: 0x4bc438be  vmaddaz.xyz $ACC, $vf7, $vf4z
    ctx->pc = 0x3395e4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x3395e8: 0x4bc0430b  vmaddw.xyz  $vf12, $vf8, $vf0w
    ctx->pc = 0x3395e8u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x3395ec: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x3395ecu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x3395f0: 0xfae90000  sqc2        $vf9, 0x0($s7)
    ctx->pc = 0x3395f0u;
    WRITE128(ADD32(GPR_U32(ctx, 23), 0), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x3395f4: 0xfaea0010  sqc2        $vf10, 0x10($s7)
    ctx->pc = 0x3395f4u;
    WRITE128(ADD32(GPR_U32(ctx, 23), 16), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x3395f8: 0xfaeb0020  sqc2        $vf11, 0x20($s7)
    ctx->pc = 0x3395f8u;
    WRITE128(ADD32(GPR_U32(ctx, 23), 32), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x3395fc: 0xfaec0030  sqc2        $vf12, 0x30($s7)
    ctx->pc = 0x3395fcu;
    WRITE128(ADD32(GPR_U32(ctx, 23), 48), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x339600: 0xaee3000c  sw          $v1, 0xC($s7)
    ctx->pc = 0x339600u;
    WRITE32(ADD32(GPR_U32(ctx, 23), 12), GPR_U32(ctx, 3));
    // 0x339604: 0x42000038  ei
    ctx->pc = 0x339604u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x339608: 0x8fa2004c  lw          $v0, 0x4C($sp)
    ctx->pc = 0x339608u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x33960c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x33960cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x339610: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x339610u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x339614: 0x10450006  beq         $v0, $a1, . + 4 + (0x6 << 2)
    ctx->pc = 0x339614u;
    {
        const bool branch_taken_0x339614 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 5));
        ctx->pc = 0x339618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339614u;
        // 0x339618: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339614) {
            ctx->pc = 0x339630u;
            goto label_339630;
        }
    }
    ctx->pc = 0x33961Cu;
    // 0x33961c: 0x7fa90290  sq          $t1, 0x290($sp)
    ctx->pc = 0x33961cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 656), GPR_VEC(ctx, 9));
    // 0x339620: 0xc103e64  jal         func_40F990
    ctx->pc = 0x339620u;
    SET_GPR_U32(ctx, 31, 0x339628u);
    ctx->pc = 0x339624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339620u;
    // 0x339624: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40F990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F990u, 0x339620u, 0x339628u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339628u;
label_339628:
    // 0x339628: 0x7ba90290  lq          $t1, 0x290($sp)
    ctx->pc = 0x339628u;
    SET_GPR_VEC(ctx, 9, READ128(ADD32(GPR_U32(ctx, 29), 656)));
    // 0x33962c: 0x0  nop
    ctx->pc = 0x33962cu;
    // NOP
label_339630:
    // 0x339630: 0x7ba20040  lq          $v0, 0x40($sp)
    ctx->pc = 0x339630u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x339634: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x339634u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x339638: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x339638u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x33963c: 0xdfa80050  ld          $t0, 0x50($sp)
    ctx->pc = 0x33963cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x339640: 0x9ea70008  lwu         $a3, 0x8($s5)
    ctx->pc = 0x339640u;
    SET_GPR_ZE32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x339644: 0x9fa30058  lwu         $v1, 0x58($sp)
    ctx->pc = 0x339644u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 88)));
    // 0x339648: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x339648u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
    // 0x33964c: 0x433825  or          $a3, $v0, $v1
    ctx->pc = 0x33964cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x339650: 0x70e81389  pcpyld      $v0, $a3, $t0
    ctx->pc = 0x339650u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x339654: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x339654u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x339658: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x339658u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x33965c: 0x7ba60100  lq          $a2, 0x100($sp)
    ctx->pc = 0x33965cu;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x339660: 0x7e060000  sq          $a2, 0x0($s0)
    ctx->pc = 0x339660u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 6));
    // 0x339664: 0x8fa200fc  lw          $v0, 0xFC($sp)
    ctx->pc = 0x339664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x339668: 0x1040003d  beqz        $v0, . + 4 + (0x3D << 2)
    ctx->pc = 0x339668u;
    {
        const bool branch_taken_0x339668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33966Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339668u;
        // 0x33966c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339668) {
            ctx->pc = 0x339760u;
            goto label_339760;
        }
    }
    ctx->pc = 0x339670u;
    // 0x339670: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x339670u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x339674: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x339674u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x339678: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x339678u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x33967c: 0x7a220010  lq          $v0, 0x10($s1)
    ctx->pc = 0x33967cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x339680: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x339680u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x339684: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x339684u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x339688: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x339688u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x33968c: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x33968cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x339690: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x339690u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x339694: 0x7a220030  lq          $v0, 0x30($s1)
    ctx->pc = 0x339694u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x339698: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x339698u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x33969c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x33969cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x3396a0: 0x7a220040  lq          $v0, 0x40($s1)
    ctx->pc = 0x3396a0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x3396a4: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x3396a4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x3396a8: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x3396a8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x3396ac: 0x7a220050  lq          $v0, 0x50($s1)
    ctx->pc = 0x3396acu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x3396b0: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x3396b0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x3396b4: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x3396b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x3396b8: 0x7e1e0000  sq          $fp, 0x0($s0)
    ctx->pc = 0x3396b8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 30));
    // 0x3396bc: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x3396bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x3396c0: 0x8e230108  lw          $v1, 0x108($s1)
    ctx->pc = 0x3396c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 264)));
    // 0x3396c4: 0x24640050  addiu       $a0, $v1, 0x50
    ctx->pc = 0x3396c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x3396c8: 0x78620050  lq          $v0, 0x50($v1)
    ctx->pc = 0x3396c8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x3396cc: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x3396ccu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x3396d0: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x3396d0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x3396d4: 0x78820010  lq          $v0, 0x10($a0)
    ctx->pc = 0x3396d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3396d8: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x3396d8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x3396dc: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x3396dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x3396e0: 0x78820020  lq          $v0, 0x20($a0)
    ctx->pc = 0x3396e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x3396e4: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x3396e4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x3396e8: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x3396e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x3396ec: 0xdc830030  ld          $v1, 0x30($a0)
    ctx->pc = 0x3396ecu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x3396f0: 0x9c820038  lwu         $v0, 0x38($a0)
    ctx->pc = 0x3396f0u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x3396f4: 0x70431389  pcpyld      $v0, $v0, $v1
    ctx->pc = 0x3396f4u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x3396f8: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x3396f8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x3396fc: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x3396fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x339700: 0x2685001c  addiu       $a1, $s4, 0x1C
    ctx->pc = 0x339700u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 20), 28));
    // 0x339704: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x339704u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x339708: 0x34c60001  ori         $a2, $a2, 0x1
    ctx->pc = 0x339708u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1);
    // 0x33970c: 0x3c026c01  lui         $v0, 0x6C01
    ctx->pc = 0x33970cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27649 << 16));
    // 0x339710: 0x34420345  ori         $v0, $v0, 0x345
    ctx->pc = 0x339710u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)837);
    // 0x339714: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x339714u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x339718: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x339718u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x33971c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x33971cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x339720: 0x34420404  ori         $v0, $v0, 0x404
    ctx->pc = 0x339720u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x339724: 0x70461389  pcpyld      $v0, $v0, $a2
    ctx->pc = 0x339724u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x339728: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x339728u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x33972c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x33972cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x339730: 0x9ca60004  lwu         $a2, 0x4($a1)
    ctx->pc = 0x339730u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x339734: 0x9ca2000c  lwu         $v0, 0xC($a1)
    ctx->pc = 0x339734u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x339738: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x339738u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x33973c: 0x9e83001c  lwu         $v1, 0x1C($s4)
    ctx->pc = 0x33973cu;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 20), 28)));
    // 0x339740: 0x9ca40008  lwu         $a0, 0x8($a1)
    ctx->pc = 0x339740u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x339744: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x339744u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x339748: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x339748u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x33974c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x33974cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x339750: 0x70461389  pcpyld      $v0, $v0, $a2
    ctx->pc = 0x339750u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x339754: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x339754u;
    {
        const bool branch_taken_0x339754 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x339758u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339754u;
        // 0x339758: 0x7e020000  sq          $v0, 0x0($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339754) {
            ctx->pc = 0x3397E8u;
            goto label_3397e8;
        }
    }
    ctx->pc = 0x33975Cu;
    // 0x33975c: 0x0  nop
    ctx->pc = 0x33975cu;
    // NOP
label_339760:
    // 0x339760: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x339760u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x339764: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x339764u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x339768: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x339768u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x33976c: 0x7a420010  lq          $v0, 0x10($s2)
    ctx->pc = 0x33976cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x339770: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x339770u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x339774: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x339774u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x339778: 0x7a420020  lq          $v0, 0x20($s2)
    ctx->pc = 0x339778u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x33977c: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x33977cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x339780: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x339780u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x339784: 0x7a420030  lq          $v0, 0x30($s2)
    ctx->pc = 0x339784u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x339788: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x339788u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x33978c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x33978cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x339790: 0x7a420040  lq          $v0, 0x40($s2)
    ctx->pc = 0x339790u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x339794: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x339794u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x339798: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x339798u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x33979c: 0x7a420050  lq          $v0, 0x50($s2)
    ctx->pc = 0x33979cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x3397a0: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x3397a0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x3397a4: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x3397a4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x3397a8: 0x7e1e0000  sq          $fp, 0x0($s0)
    ctx->pc = 0x3397a8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 30));
    // 0x3397ac: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x3397acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x3397b0: 0x8e440068  lw          $a0, 0x68($s2)
    ctx->pc = 0x3397b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
    // 0x3397b4: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x3397b4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3397b8: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x3397b8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x3397bc: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x3397bcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x3397c0: 0x78820010  lq          $v0, 0x10($a0)
    ctx->pc = 0x3397c0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x3397c4: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x3397c4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x3397c8: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x3397c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x3397cc: 0x78820020  lq          $v0, 0x20($a0)
    ctx->pc = 0x3397ccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x3397d0: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x3397d0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x3397d4: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x3397d4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x3397d8: 0xdc830030  ld          $v1, 0x30($a0)
    ctx->pc = 0x3397d8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x3397dc: 0x9c820038  lwu         $v0, 0x38($a0)
    ctx->pc = 0x3397dcu;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x3397e0: 0x70431389  pcpyld      $v0, $v0, $v1
    ctx->pc = 0x3397e0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x3397e4: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x3397e4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
label_3397e8:
    // 0x3397e8: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x3397e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x3397ec: 0xaf90be20  sw          $s0, -0x41E0($gp)
    ctx->pc = 0x3397ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 16));
    // 0x3397f0: 0x92620028  lbu         $v0, 0x28($s3)
    ctx->pc = 0x3397f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x3397f4: 0x3c046c03  lui         $a0, 0x6C03
    ctx->pc = 0x3397f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)27651 << 16));
    // 0x3397f8: 0x348403fd  ori         $a0, $a0, 0x3FD
    ctx->pc = 0x3397f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1021);
    // 0x3397fc: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x3397fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x339800: 0x34840100  ori         $a0, $a0, 0x100
    ctx->pc = 0x339800u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
    // 0x339804: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x339804u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x339808: 0x34840404  ori         $a0, $a0, 0x404
    ctx->pc = 0x339808u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1028);
    // 0x33980c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x33980cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339810: 0x30450007  andi        $a1, $v0, 0x7
    ctx->pc = 0x339810u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x339814: 0x70831389  pcpyld      $v0, $a0, $v1
    ctx->pc = 0x339814u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x339818: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x339818u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x33981c: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x33981cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x339820: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x339820u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x339824: 0x8f83aee0  lw          $v1, -0x5120($gp)
    ctx->pc = 0x339824u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946528)));
    // 0x339828: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x339828u;
    {
        const bool branch_taken_0x339828 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x33982Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339828u;
        // 0x33982c: 0x30a20004  andi        $v0, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x339828) {
            ctx->pc = 0x339838u;
            goto label_339838;
        }
    }
    ctx->pc = 0x339830u;
    // 0x339830: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x339830u;
    {
        const bool branch_taken_0x339830 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x339830) {
            ctx->pc = 0x339834u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x339830u;
            // 0x339834: 0x34a50008  ori         $a1, $a1, 0x8 (Delay Slot)
            SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x339850u;
            goto label_339850;
        }
    }
    ctx->pc = 0x339838u;
label_339838:
    // 0x339838: 0x8f82aee4  lw          $v0, -0x511C($gp)
    ctx->pc = 0x339838u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946532)));
    // 0x33983c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x33983Cu;
    {
        const bool branch_taken_0x33983c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x339840u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33983Cu;
        // 0x339840: 0x30a20004  andi        $v0, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33983c) {
            ctx->pc = 0x339878u;
            goto label_339878;
        }
    }
    ctx->pc = 0x339844u;
    // 0x339844: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x339844u;
    {
        const bool branch_taken_0x339844 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x339848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339844u;
        // 0x339848: 0x3c04005e  lui         $a0, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339844) {
            ctx->pc = 0x339880u;
            goto label_339880;
        }
    }
    ctx->pc = 0x33984Cu;
    // 0x33984c: 0x34a50008  ori         $a1, $a1, 0x8
    ctx->pc = 0x33984cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8);
label_339850:
    // 0x339850: 0x8f82be20  lw          $v0, -0x41E0($gp)
    ctx->pc = 0x339850u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x339854: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x339854u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x339858: 0x2484d670  addiu       $a0, $a0, -0x2990
    ctx->pc = 0x339858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956656));
    // 0x33985c: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x33985cu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x5DD670u));
    // 0x339860: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x339860u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x339864: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x339864u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x339868: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x339868u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x33986c: 0x3c06005e  lui         $a2, 0x5E
    ctx->pc = 0x33986cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)94 << 16));
    // 0x339870: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x339870u;
    {
        const bool branch_taken_0x339870 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x339874u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339870u;
        // 0x339874: 0x24c6d680  addiu       $a2, $a2, -0x2980 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956672));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339870) {
            ctx->pc = 0x3398A0u;
            goto label_3398a0;
        }
    }
    ctx->pc = 0x339878u;
label_339878:
    // 0x339878: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x339878u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x33987c: 0x0  nop
    ctx->pc = 0x33987cu;
    // NOP
label_339880:
    // 0x339880: 0x8f82be20  lw          $v0, -0x41E0($gp)
    ctx->pc = 0x339880u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x339884: 0x2484d650  addiu       $a0, $a0, -0x29B0
    ctx->pc = 0x339884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956624));
    // 0x339888: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x339888u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33988c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x33988cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x339890: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x339890u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x339894: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x339894u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x339898: 0x3c06005e  lui         $a2, 0x5E
    ctx->pc = 0x339898u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)94 << 16));
    // 0x33989c: 0x24c6d660  addiu       $a2, $a2, -0x29A0
    ctx->pc = 0x33989cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956640));
label_3398a0:
    // 0x3398a0: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x3398a0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3398a4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x3398a4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x3398a8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x3398a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x3398ac: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x3398acu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x3398b0: 0x8f82becc  lw          $v0, -0x4134($gp)
    ctx->pc = 0x3398b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950604)));
    // 0x3398b4: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x3398b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x3398b8: 0x14430003  bne         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3398B8u;
    {
        const bool branch_taken_0x3398b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3398BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3398B8u;
        // 0x3398bc: 0xaf80aed8  sw          $zero, -0x5128($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294946520), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3398b8) {
            ctx->pc = 0x3398C8u;
            goto label_3398c8;
        }
    }
    ctx->pc = 0x3398C0u;
    // 0x3398c0: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x3398c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3398c4: 0xaf84aed8  sw          $a0, -0x5128($gp)
    ctx->pc = 0x3398c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946520), GPR_U32(ctx, 4));
label_3398c8:
    // 0x3398c8: 0x9f82aedc  lwu         $v0, -0x5124($gp)
    ctx->pc = 0x3398c8u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294946524)));
    // 0x3398cc: 0x5183c  dsll32      $v1, $a1, 0
    ctx->pc = 0x3398ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
    // 0x3398d0: 0x9f84aed8  lwu         $a0, -0x5128($gp)
    ctx->pc = 0x3398d0u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294946520)));
    // 0x3398d4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x3398d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x3398d8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x3398d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x3398dc: 0x442025  or          $a0, $v0, $a0
    ctx->pc = 0x3398dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x3398e0: 0x70831389  pcpyld      $v0, $a0, $v1
    ctx->pc = 0x3398e0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x3398e4: 0x8f85be20  lw          $a1, -0x41E0($gp)
    ctx->pc = 0x3398e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x3398e8: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x3398e8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x3398ec: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x3398ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x3398f0: 0xaf85be20  sw          $a1, -0x41E0($gp)
    ctx->pc = 0x3398f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 5));
    // 0x3398f4: 0x8fa600fc  lw          $a2, 0xFC($sp)
    ctx->pc = 0x3398f4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x3398f8: 0x10c00013  beqz        $a2, . + 4 + (0x13 << 2)
    ctx->pc = 0x3398F8u;
    {
        const bool branch_taken_0x3398f8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x3398FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3398F8u;
        // 0x3398fc: 0x8fa60200  lw          $a2, 0x200($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 512)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3398f8) {
            ctx->pc = 0x339948u;
            goto label_339948;
        }
    }
    ctx->pc = 0x339900u;
    // 0x339900: 0x312200ff  andi        $v0, $t1, 0xFF
    ctx->pc = 0x339900u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)255);
    // 0x339904: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x339904u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x339908: 0x3c033000  lui         $v1, 0x3000
    ctx->pc = 0x339908u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)12288 << 16));
    // 0x33990c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x33990cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x339910: 0x1232025  or          $a0, $t1, $v1
    ctx->pc = 0x339910u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 9) | GPR_U64(ctx, 3));
    // 0x339914: 0x8fa601f0  lw          $a2, 0x1F0($sp)
    ctx->pc = 0x339914u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 496)));
    // 0x339918: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x339918u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x33991c: 0x4203e  dsrl32      $a0, $a0, 0
    ctx->pc = 0x33991cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) >> (32 + 0));
    // 0x339920: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x339920u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x339924: 0x6183c  dsll32      $v1, $a2, 0
    ctx->pc = 0x339924u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) << (32 + 0));
    // 0x339928: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x339928u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x33992c: 0x3c040100  lui         $a0, 0x100
    ctx->pc = 0x33992cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)256 << 16));
    // 0x339930: 0x34840404  ori         $a0, $a0, 0x404
    ctx->pc = 0x339930u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1028);
    // 0x339934: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x339934u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x339938: 0x70431389  pcpyld      $v0, $v0, $v1
    ctx->pc = 0x339938u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x33993c: 0x7ca20000  sq          $v0, 0x0($a1)
    ctx->pc = 0x33993cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 2));
    // 0x339940: 0x24a30010  addiu       $v1, $a1, 0x10
    ctx->pc = 0x339940u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x339944: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x339944u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_339948:
    // 0x339948: 0x8f82be20  lw          $v0, -0x41E0($gp)
    ctx->pc = 0x339948u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x33994c: 0x7ba501c0  lq          $a1, 0x1C0($sp)
    ctx->pc = 0x33994cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 448)));
    // 0x339950: 0x7c450000  sq          $a1, 0x0($v0)
    ctx->pc = 0x339950u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 5));
    // 0x339954: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x339954u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x339958: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x339958u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x33995c: 0x8fa601a4  lw          $a2, 0x1A4($sp)
    ctx->pc = 0x33995cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 420)));
    // 0x339960: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x339960u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x339964: 0xafa601a4  sw          $a2, 0x1A4($sp)
    ctx->pc = 0x339964u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 420), GPR_U32(ctx, 6));
label_339968:
    // 0x339968: 0x8fa300f4  lw          $v1, 0xF4($sp)
    ctx->pc = 0x339968u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x33996c: 0x8fa400f0  lw          $a0, 0xF0($sp)
    ctx->pc = 0x33996cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x339970: 0x8fa5027c  lw          $a1, 0x27C($sp)
    ctx->pc = 0x339970u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 636)));
    // 0x339974: 0x8fa60280  lw          $a2, 0x280($sp)
    ctx->pc = 0x339974u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 640)));
    // 0x339978: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x339978u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x33997c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x33997cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x339980: 0x24a50070  addiu       $a1, $a1, 0x70
    ctx->pc = 0x339980u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 112));
    // 0x339984: 0x24c60008  addiu       $a2, $a2, 0x8
    ctx->pc = 0x339984u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8));
    // 0x339988: 0xafa400f0  sw          $a0, 0xF0($sp)
    ctx->pc = 0x339988u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 4));
    // 0x33998c: 0xafa5027c  sw          $a1, 0x27C($sp)
    ctx->pc = 0x33998cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 636), GPR_U32(ctx, 5));
    // 0x339990: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x339990u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x339994: 0x1440feb6  bnez        $v0, . + 4 + (-0x14A << 2)
    ctx->pc = 0x339994u;
    {
        const bool branch_taken_0x339994 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x339998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339994u;
        // 0x339998: 0xafa60280  sw          $a2, 0x280($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 640), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339994) {
            ctx->pc = 0x339470u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_339470;
        }
    }
    ctx->pc = 0x33999Cu;
label_33999c:
    // 0x33999c: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x33999cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_3399a0:
    // 0x3399a0: 0x42000039  di
    ctx->pc = 0x3399a0u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x3399a4: 0x40f  sync.p
    ctx->pc = 0x3399a4u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x3399a8: 0x40036000  mfc0        $v1, Status
    ctx->pc = 0x3399a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_status);
    // 0x3399ac: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3399acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x3399b0: 0x0  nop
    ctx->pc = 0x3399b0u;
    // NOP
    // 0x3399b4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x3399B4u;
    {
        const bool branch_taken_0x3399b4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x3399b4) {
            ctx->pc = 0x3399A0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3399a0;
        }
    }
    ctx->pc = 0x3399BCu;
    // 0x3399bc: 0x8fa401a0  lw          $a0, 0x1A0($sp)
    ctx->pc = 0x3399bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    // 0x3399c0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x3399c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x3399c4: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x3399c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x3399c8: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x3399c8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x3399cc: 0x42000038  ei
    ctx->pc = 0x3399ccu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x3399d0: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x3399d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x3399d4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x3399d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3399d8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3399d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3399dc: 0x14430327  bne         $v0, $v1, . + 4 + (0x327 << 2)
    ctx->pc = 0x3399DCu;
    {
        const bool branch_taken_0x3399dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x3399E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3399DCu;
        // 0x3399e0: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3399dc) {
            ctx->pc = 0x33A67Cu;
            goto label_33a67c;
        }
    }
    ctx->pc = 0x3399E4u;
    // 0x3399e4: 0xc10a762  jal         func_429D88
    ctx->pc = 0x3399E4u;
    SET_GPR_U32(ctx, 31, 0x3399ECu);
    ctx->pc = 0x3399E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3399E4u;
    // 0x3399e8: 0x8fa401a0  lw          $a0, 0x1A0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 416)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x429D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x429D88u, 0x3399E4u, 0x3399ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3399ECu;
label_3399ec:
    // 0x3399ec: 0x10000324  b           . + 4 + (0x324 << 2)
    ctx->pc = 0x3399ECu;
    {
        const bool branch_taken_0x3399ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3399F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3399ECu;
        // 0x3399f0: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3399ec) {
            ctx->pc = 0x33A680u;
            goto label_33a680;
        }
    }
    ctx->pc = 0x3399F4u;
    // 0x3399f4: 0x0  nop
    ctx->pc = 0x3399f4u;
    // NOP
label_3399f8:
    // 0x3399f8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x3399f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3399fc: 0xafa50204  sw          $a1, 0x204($sp)
    ctx->pc = 0x3399fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 516), GPR_U32(ctx, 5));
    // 0x339a00: 0x3c026c0f  lui         $v0, 0x6C0F
    ctx->pc = 0x339a00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27663 << 16));
    // 0x339a04: 0x344203c4  ori         $v0, $v0, 0x3C4
    ctx->pc = 0x339a04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)964);
    // 0x339a08: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x339a08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x339a0c: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x339a0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x339a10: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x339a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x339a14: 0x34420404  ori         $v0, $v0, 0x404
    ctx->pc = 0x339a14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x339a18: 0x70493389  pcpyld      $a2, $v0, $t1
    ctx->pc = 0x339a18u;
    SET_GPR_VEC(ctx, 6, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 9)));
    // 0x339a1c: 0x7fa60210  sq          $a2, 0x210($sp)
    ctx->pc = 0x339a1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 528), GPR_VEC(ctx, 6));
    // 0x339a20: 0x8fa200f4  lw          $v0, 0xF4($sp)
    ctx->pc = 0x339a20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x339a24: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x339a24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x339a28: 0x10600314  beqz        $v1, . + 4 + (0x314 << 2)
    ctx->pc = 0x339A28u;
    {
        const bool branch_taken_0x339a28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x339A2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339A28u;
        // 0x339a2c: 0xafa000f0  sw          $zero, 0xF0($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339a28) {
            ctx->pc = 0x33A67Cu;
            goto label_33a67c;
        }
    }
    ctx->pc = 0x339A30u;
    // 0x339a30: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x339a30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x339a34: 0xb82d  daddu       $s7, $zero, $zero
    ctx->pc = 0x339a34u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339a38: 0x3c026c01  lui         $v0, 0x6C01
    ctx->pc = 0x339a38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27649 << 16));
    // 0x339a3c: 0x344203fb  ori         $v0, $v0, 0x3FB
    ctx->pc = 0x339a3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1019);
    // 0x339a40: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x339a40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x339a44: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x339a44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x339a48: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x339a48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x339a4c: 0x34420404  ori         $v0, $v0, 0x404
    ctx->pc = 0x339a4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x339a50: 0xafa3022c  sw          $v1, 0x22C($sp)
    ctx->pc = 0x339a50u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 556), GPR_U32(ctx, 3));
    // 0x339a54: 0x70572389  pcpyld      $a0, $v0, $s7
    ctx->pc = 0x339a54u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 23)));
    // 0x339a58: 0x3c036c01  lui         $v1, 0x6C01
    ctx->pc = 0x339a58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)27649 << 16));
    // 0x339a5c: 0x346303fc  ori         $v1, $v1, 0x3FC
    ctx->pc = 0x339a5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1020);
    // 0x339a60: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x339a60u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x339a64: 0x34630100  ori         $v1, $v1, 0x100
    ctx->pc = 0x339a64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)256);
    // 0x339a68: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x339a68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x339a6c: 0x34630404  ori         $v1, $v1, 0x404
    ctx->pc = 0x339a6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1028);
    // 0x339a70: 0x7fa40240  sq          $a0, 0x240($sp)
    ctx->pc = 0x339a70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 576), GPR_VEC(ctx, 4));
    // 0x339a74: 0x70772b89  pcpyld      $a1, $v1, $s7
    ctx->pc = 0x339a74u;
    SET_GPR_VEC(ctx, 5, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 23)));
    // 0x339a78: 0x8fa4022c  lw          $a0, 0x22C($sp)
    ctx->pc = 0x339a78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 556)));
    // 0x339a7c: 0x3c066c00  lui         $a2, 0x6C00
    ctx->pc = 0x339a7cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)27648 << 16));
    // 0x339a80: 0x7fa50250  sq          $a1, 0x250($sp)
    ctx->pc = 0x339a80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 592), GPR_VEC(ctx, 5));
    // 0x339a84: 0x27a200d8  addiu       $v0, $sp, 0xD8
    ctx->pc = 0x339a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 216));
    // 0x339a88: 0x27a300e0  addiu       $v1, $sp, 0xE0
    ctx->pc = 0x339a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x339a8c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x339a8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x339a90: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x339a90u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x339a94: 0x34c60346  ori         $a2, $a2, 0x346
    ctx->pc = 0x339a94u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)838);
    // 0x339a98: 0xc7958434  lwc1        $f21, -0x7BCC($gp)
    ctx->pc = 0x339a98u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x339a9c: 0xc7948240  lwc1        $f20, -0x7DC0($gp)
    ctx->pc = 0x339a9cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935104)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x339aa0: 0xafa20224  sw          $v0, 0x224($sp)
    ctx->pc = 0x339aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 548), GPR_U32(ctx, 2));
    // 0x339aa4: 0xafa30228  sw          $v1, 0x228($sp)
    ctx->pc = 0x339aa4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 552), GPR_U32(ctx, 3));
    // 0x339aa8: 0xafa4022c  sw          $a0, 0x22C($sp)
    ctx->pc = 0x339aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 556), GPR_U32(ctx, 4));
    // 0x339aac: 0xafa50230  sw          $a1, 0x230($sp)
    ctx->pc = 0x339aacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 560), GPR_U32(ctx, 5));
    // 0x339ab0: 0xafb30234  sw          $s3, 0x234($sp)
    ctx->pc = 0x339ab0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 564), GPR_U32(ctx, 19));
    // 0x339ab4: 0xafa60270  sw          $a2, 0x270($sp)
    ctx->pc = 0x339ab4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 624), GPR_U32(ctx, 6));
    // 0x339ab8: 0xafa00274  sw          $zero, 0x274($sp)
    ctx->pc = 0x339ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 628), GPR_U32(ctx, 0));
    // 0x339abc: 0xafa00278  sw          $zero, 0x278($sp)
    ctx->pc = 0x339abcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 632), GPR_U32(ctx, 0));
label_339ac0:
    // 0x339ac0: 0x8fa600fc  lw          $a2, 0xFC($sp)
    ctx->pc = 0x339ac0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x339ac4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x339ac4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339ac8: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x339AC8u;
    {
        const bool branch_taken_0x339ac8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x339ACCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339AC8u;
        // 0x339acc: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339ac8) {
            ctx->pc = 0x339AE8u;
            goto label_339ae8;
        }
    }
    ctx->pc = 0x339AD0u;
    // 0x339ad0: 0x8fa300f4  lw          $v1, 0xF4($sp)
    ctx->pc = 0x339ad0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x339ad4: 0x8fa40278  lw          $a0, 0x278($sp)
    ctx->pc = 0x339ad4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 632)));
    // 0x339ad8: 0x8c62000c  lw          $v0, 0xC($v1)
    ctx->pc = 0x339ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x339adc: 0x448021  addu        $s0, $v0, $a0
    ctx->pc = 0x339adcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x339ae0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x339AE0u;
    {
        const bool branch_taken_0x339ae0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x339AE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339AE0u;
        // 0x339ae4: 0x8e110000  lw          $s1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339ae0) {
            ctx->pc = 0x339AFCu;
            goto label_339afc;
        }
    }
    ctx->pc = 0x339AE8u;
label_339ae8:
    // 0x339ae8: 0x8fa500f4  lw          $a1, 0xF4($sp)
    ctx->pc = 0x339ae8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x339aec: 0x8fa60274  lw          $a2, 0x274($sp)
    ctx->pc = 0x339aecu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
    // 0x339af0: 0x8ca2000c  lw          $v0, 0xC($a1)
    ctx->pc = 0x339af0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x339af4: 0x469021  addu        $s2, $v0, $a2
    ctx->pc = 0x339af4u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x339af8: 0x8e51006c  lw          $s1, 0x6C($s2)
    ctx->pc = 0x339af8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 108)));
label_339afc:
    // 0x339afc: 0x8e2200f0  lw          $v0, 0xF0($s1)
    ctx->pc = 0x339afcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 240)));
    // 0x339b00: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x339b00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
    // 0x339b04: 0x104002d0  beqz        $v0, . + 4 + (0x2D0 << 2)
    ctx->pc = 0x339B04u;
    {
        const bool branch_taken_0x339b04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x339B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339B04u;
        // 0x339b08: 0x8fa200fc  lw          $v0, 0xFC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339b04) {
            ctx->pc = 0x33A648u;
            goto label_33a648;
        }
    }
    ctx->pc = 0x339B0Cu;
    // 0x339b0c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x339b0cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339b10: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x339B10u;
    {
        const bool branch_taken_0x339b10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x339B14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339B10u;
        // 0x339b14: 0xafa00220  sw          $zero, 0x220($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 544), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339b10) {
            ctx->pc = 0x339B4Cu;
            goto label_339b4c;
        }
    }
    ctx->pc = 0x339B18u;
    // 0x339b18: 0x8fa300e8  lw          $v1, 0xE8($sp)
    ctx->pc = 0x339b18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 232)));
    // 0x339b1c: 0xc0de61a  jal         func_379868
    ctx->pc = 0x339B1Cu;
    SET_GPR_U32(ctx, 31, 0x339B24u);
    ctx->pc = 0x339B20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339B1Cu;
    // 0x339b20: 0x8c640018  lw          $a0, 0x18($v1) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x379868u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x379868u, 0x339B1Cu, 0x339B24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339B24u;
label_339b24:
    // 0x339b24: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x339b24u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339b28: 0xc0de646  jal         func_379918
    ctx->pc = 0x339B28u;
    SET_GPR_U32(ctx, 31, 0x339B30u);
    ctx->pc = 0x339B2Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339B28u;
    // 0x339b2c: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x379918u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x379918u, 0x339B28u, 0x339B30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339B30u;
label_339b30:
    // 0x339b30: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x339b30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x339b34: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x339b34u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x339b38: 0xafa20220  sw          $v0, 0x220($sp)
    ctx->pc = 0x339b38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 544), GPR_U32(ctx, 2));
    // 0x339b3c: 0x92020004  lbu         $v0, 0x4($s0)
    ctx->pc = 0x339b3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x339b40: 0x8c63010c  lw          $v1, 0x10C($v1)
    ctx->pc = 0x339b40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
    // 0x339b44: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x339B44u;
    {
        const bool branch_taken_0x339b44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x339B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339B44u;
        // 0x339b48: 0xafa30260  sw          $v1, 0x260($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 608), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339b44) {
            ctx->pc = 0x339B50u;
            goto label_339b50;
        }
    }
    ctx->pc = 0x339B4Cu;
label_339b4c:
    // 0x339b4c: 0x92420060  lbu         $v0, 0x60($s2)
    ctx->pc = 0x339b4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 96)));
label_339b50:
    // 0x339b50: 0xa2620028  sb          $v0, 0x28($s3)
    ctx->pc = 0x339b50u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 40), (uint8_t)GPR_U32(ctx, 2));
    // 0x339b54: 0x8e2200d8  lw          $v0, 0xD8($s1)
    ctx->pc = 0x339b54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 216)));
    // 0x339b58: 0x10400081  beqz        $v0, . + 4 + (0x81 << 2)
    ctx->pc = 0x339B58u;
    {
        const bool branch_taken_0x339b58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x339B5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339B58u;
        // 0x339b5c: 0x8fa400ec  lw          $a0, 0xEC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 236)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339b58) {
            ctx->pc = 0x339D60u;
            goto label_339d60;
        }
    }
    ctx->pc = 0x339B60u;
    // 0x339b60: 0xc0dfea2  jal         func_37FA88
    ctx->pc = 0x339B60u;
    SET_GPR_U32(ctx, 31, 0x339B68u);
    ctx->pc = 0x339B64u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339B60u;
    // 0x339b64: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37FA88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37FA88u, 0x339B60u, 0x339B68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339B68u;
label_339b68:
    // 0x339b68: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x339b68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339b6c: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x339B6Cu;
    {
        const bool branch_taken_0x339b6c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x339B70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339B6Cu;
        // 0x339b70: 0xaf80bec4  sw          $zero, -0x413C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950596), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339b6c) {
            ctx->pc = 0x339B98u;
            goto label_339b98;
        }
    }
    ctx->pc = 0x339B74u;
    // 0x339b74: 0xc110e98  jal         func_443A60
    ctx->pc = 0x339B74u;
    SET_GPR_U32(ctx, 31, 0x339B7Cu);
    ctx->pc = 0x339B78u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339B74u;
    // 0x339b78: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x443A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443A60u, 0x339B74u, 0x339B7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339B7Cu;
label_339b7c:
    // 0x339b7c: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x339b7cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x339b80: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x339b80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x339b84: 0x90620023  lbu         $v0, 0x23($v1)
    ctx->pc = 0x339b84u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 35)));
    // 0x339b88: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x339b88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x339b8c: 0x10440002  beq         $v0, $a0, . + 4 + (0x2 << 2)
    ctx->pc = 0x339B8Cu;
    {
        const bool branch_taken_0x339b8c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 4));
        ctx->pc = 0x339B90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339B8Cu;
        // 0x339b90: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339b8c) {
            ctx->pc = 0x339B98u;
            goto label_339b98;
        }
    }
    ctx->pc = 0x339B94u;
    // 0x339b94: 0xaf85bec4  sw          $a1, -0x413C($gp)
    ctx->pc = 0x339b94u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950596), GPR_U32(ctx, 5));
label_339b98:
    // 0x339b98: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x339b98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x339b9c: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x339B9Cu;
    {
        const bool branch_taken_0x339b9c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x339b9c) {
            ctx->pc = 0x339BBCu;
            goto label_339bbc;
        }
    }
    ctx->pc = 0x339BA4u;
    // 0x339ba4: 0xc110e98  jal         func_443A60
    ctx->pc = 0x339BA4u;
    SET_GPR_U32(ctx, 31, 0x339BACu);
    ctx->pc = 0x339BA8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339BA4u;
    // 0x339ba8: 0x8c840000  lw          $a0, 0x0($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x443A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443A60u, 0x339BA4u, 0x339BACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339BACu;
label_339bac:
    // 0x339bac: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x339bacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x339bb0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x339bb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x339bb4: 0xc110b7e  jal         func_442DF8
    ctx->pc = 0x339BB4u;
    SET_GPR_U32(ctx, 31, 0x339BBCu);
    ctx->pc = 0x339BB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339BB4u;
    // 0x339bb8: 0x8c440000  lw          $a0, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x442DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x442DF8u, 0x339BB4u, 0x339BBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339BBCu;
label_339bbc:
    // 0x339bbc: 0x52000005  beql        $s0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x339BBCu;
    {
        const bool branch_taken_0x339bbc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x339bbc) {
            ctx->pc = 0x339BC0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x339BBCu;
            // 0x339bc0: 0x8ea20004  lw          $v0, 0x4($s5) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x339BD4u;
            goto label_339bd4;
        }
    }
    ctx->pc = 0x339BC4u;
    // 0x339bc4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x339bc4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x339bc8: 0xc110b7e  jal         func_442DF8
    ctx->pc = 0x339BC8u;
    SET_GPR_U32(ctx, 31, 0x339BD0u);
    ctx->pc = 0x339BCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339BC8u;
    // 0x339bcc: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x442DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x442DF8u, 0x339BC8u, 0x339BD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339BD0u;
label_339bd0:
    // 0x339bd0: 0x8ea20004  lw          $v0, 0x4($s5)
    ctx->pc = 0x339bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
label_339bd4:
    // 0x339bd4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x339BD4u;
    {
        const bool branch_taken_0x339bd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x339bd4) {
            ctx->pc = 0x339BFCu;
            goto label_339bfc;
        }
    }
    ctx->pc = 0x339BDCu;
    // 0x339bdc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x339bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x339be0: 0x8f82beb8  lw          $v0, -0x4148($gp)
    ctx->pc = 0x339be0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950584)));
    // 0x339be4: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x339be4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x339be8: 0x8c430058  lw          $v1, 0x58($v0)
    ctx->pc = 0x339be8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x339bec: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x339BECu;
    {
        const bool branch_taken_0x339bec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x339bec) {
            ctx->pc = 0x339BFCu;
            goto label_339bfc;
        }
    }
    ctx->pc = 0x339BF4u;
    // 0x339bf4: 0xc110b7e  jal         func_442DF8
    ctx->pc = 0x339BF4u;
    SET_GPR_U32(ctx, 31, 0x339BFCu);
    ctx->pc = 0x339BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339BF4u;
    // 0x339bf8: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x442DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x442DF8u, 0x339BF4u, 0x339BFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339BFCu;
label_339bfc:
    // 0x339bfc: 0x12000027  beqz        $s0, . + 4 + (0x27 << 2)
    ctx->pc = 0x339BFCu;
    {
        const bool branch_taken_0x339bfc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x339C00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339BFCu;
        // 0x339c00: 0x8f82beb8  lw          $v0, -0x4148($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950584)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339bfc) {
            ctx->pc = 0x339C9Cu;
            goto label_339c9c;
        }
    }
    ctx->pc = 0x339C04u;
    // 0x339c04: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x339c04u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x339c08: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x339c08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x339c0c: 0x8c430058  lw          $v1, 0x58($v0)
    ctx->pc = 0x339c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
    // 0x339c10: 0x14600004  bnez        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x339C10u;
    {
        const bool branch_taken_0x339c10 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x339C14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339C10u;
        // 0x339c14: 0xdf82ae80  ld          $v0, -0x5180($gp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946432)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339c10) {
            ctx->pc = 0x339C24u;
            goto label_339c24;
        }
    }
    ctx->pc = 0x339C18u;
    // 0x339c18: 0xc110b7e  jal         func_442DF8
    ctx->pc = 0x339C18u;
    SET_GPR_U32(ctx, 31, 0x339C20u);
    ctx->pc = 0x339C1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339C18u;
    // 0x339c1c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x442DF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x442DF8u, 0x339C18u, 0x339C20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339C20u;
label_339c20:
    // 0x339c20: 0xdf82ae80  ld          $v0, -0x5180($gp)
    ctx->pc = 0x339c20u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946432)));
label_339c24:
    // 0x339c24: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x339c24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x339c28: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x339c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x339c2c: 0x8fa60224  lw          $a2, 0x224($sp)
    ctx->pc = 0x339c2cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 548)));
    // 0x339c30: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x339c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x339c34: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x339c34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339c38: 0xaf83bec0  sw          $v1, -0x4140($gp)
    ctx->pc = 0x339c38u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950592), GPR_U32(ctx, 3));
    // 0x339c3c: 0x24c50004  addiu       $a1, $a2, 0x4
    ctx->pc = 0x339c3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    // 0x339c40: 0xc110f4c  jal         func_443D30
    ctx->pc = 0x339C40u;
    SET_GPR_U32(ctx, 31, 0x339C48u);
    ctx->pc = 0x339C44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339C40u;
    // 0x339c44: 0xff82ae80  sd          $v0, -0x5180($gp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946432), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x443D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443D30u, 0x339C40u, 0x339C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339C48u;
label_339c48:
    // 0x339c48: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x339c48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x339c4c: 0x2785ae68  addiu       $a1, $gp, -0x5198
    ctx->pc = 0x339c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294946408));
    // 0x339c50: 0xc110f54  jal         func_443D50
    ctx->pc = 0x339C50u;
    SET_GPR_U32(ctx, 31, 0x339C58u);
    ctx->pc = 0x339C54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339C50u;
    // 0x339c54: 0x92060050  lbu         $a2, 0x50($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x443D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443D50u, 0x339C50u, 0x339C58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339C58u;
label_339c58:
    // 0x339c58: 0x8e030050  lw          $v1, 0x50($s0)
    ctx->pc = 0x339c58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x339c5c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x339c5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x339c60: 0x30620f00  andi        $v0, $v1, 0xF00
    ctx->pc = 0x339c60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3840);
    // 0x339c64: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x339c64u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x339c68: 0x14440003  bne         $v0, $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x339C68u;
    {
        const bool branch_taken_0x339c68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x339C6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339C68u;
        // 0x339c6c: 0xff80ae60  sd          $zero, -0x51A0($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294946400), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339c68) {
            ctx->pc = 0x339C78u;
            goto label_339c78;
        }
    }
    ctx->pc = 0x339C70u;
    // 0x339c70: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x339c70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x339c74: 0xff85ae60  sd          $a1, -0x51A0($gp)
    ctx->pc = 0x339c74u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946400), GPR_U64(ctx, 5));
label_339c78:
    // 0x339c78: 0x3062f000  andi        $v0, $v1, 0xF000
    ctx->pc = 0x339c78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)61440);
    // 0x339c7c: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x339c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x339c80: 0x1444000c  bne         $v0, $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x339C80u;
    {
        const bool branch_taken_0x339c80 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x339C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339C80u;
        // 0x339c84: 0xdf82ae48  ld          $v0, -0x51B8($gp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946376)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339c80) {
            ctx->pc = 0x339CB4u;
            goto label_339cb4;
        }
    }
    ctx->pc = 0x339C88u;
    // 0x339c88: 0xdf82ae60  ld          $v0, -0x51A0($gp)
    ctx->pc = 0x339c88u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946400)));
    // 0x339c8c: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x339c8cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x339c90: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x339c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x339c94: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x339C94u;
    {
        const bool branch_taken_0x339c94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x339C98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339C94u;
        // 0x339c98: 0xff82ae60  sd          $v0, -0x51A0($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294946400), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339c94) {
            ctx->pc = 0x339CB0u;
            goto label_339cb0;
        }
    }
    ctx->pc = 0x339C9Cu;
label_339c9c:
    // 0x339c9c: 0xdf82ae80  ld          $v0, -0x5180($gp)
    ctx->pc = 0x339c9cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946432)));
    // 0x339ca0: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x339ca0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x339ca4: 0xaf80bec0  sw          $zero, -0x4140($gp)
    ctx->pc = 0x339ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950592), GPR_U32(ctx, 0));
    // 0x339ca8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x339ca8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x339cac: 0xff82ae80  sd          $v0, -0x5180($gp)
    ctx->pc = 0x339cacu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946432), GPR_U64(ctx, 2));
label_339cb0:
    // 0x339cb0: 0xdf82ae48  ld          $v0, -0x51B8($gp)
    ctx->pc = 0x339cb0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946376)));
label_339cb4:
    // 0x339cb4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x339cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x339cb8: 0x8ea40004  lw          $a0, 0x4($s5)
    ctx->pc = 0x339cb8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x339cbc: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x339cbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x339cc0: 0x10800017  beqz        $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x339CC0u;
    {
        const bool branch_taken_0x339cc0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x339CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339CC0u;
        // 0x339cc4: 0xff82ae48  sd          $v0, -0x51B8($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294946376), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339cc0) {
            ctx->pc = 0x339D20u;
            goto label_339d20;
        }
    }
    ctx->pc = 0x339CC8u;
    // 0x339cc8: 0x8fa60228  lw          $a2, 0x228($sp)
    ctx->pc = 0x339cc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 552)));
    // 0x339ccc: 0x24140001  addiu       $s4, $zero, 0x1
    ctx->pc = 0x339cccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x339cd0: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x339cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x339cd4: 0xc110f4c  jal         func_443D30
    ctx->pc = 0x339CD4u;
    SET_GPR_U32(ctx, 31, 0x339CDCu);
    ctx->pc = 0x339CD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339CD4u;
    // 0x339cd8: 0x24c50004  addiu       $a1, $a2, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x443D30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443D30u, 0x339CD4u, 0x339CDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339CDCu;
label_339cdc:
    // 0x339cdc: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x339cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x339ce0: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x339ce0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x339ce4: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x339ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x339ce8: 0xc110f54  jal         func_443D50
    ctx->pc = 0x339CE8u;
    SET_GPR_U32(ctx, 31, 0x339CF0u);
    ctx->pc = 0x339CECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339CE8u;
    // 0x339cec: 0x90660050  lbu         $a2, 0x50($v1) (Delay Slot)
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 80)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x443D50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x443D50u, 0x339CE8u, 0x339CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339CF0u;
label_339cf0:
    // 0x339cf0: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x339cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x339cf4: 0x8c620050  lw          $v0, 0x50($v1)
    ctx->pc = 0x339cf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x339cf8: 0x30440f00  andi        $a0, $v0, 0xF00
    ctx->pc = 0x339cf8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3840);
    // 0x339cfc: 0x42202  srl         $a0, $a0, 8
    ctx->pc = 0x339cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x339d00: 0x3042f000  andi        $v0, $v0, 0xF000
    ctx->pc = 0x339d00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61440);
    // 0x339d04: 0x38840003  xori        $a0, $a0, 0x3
    ctx->pc = 0x339d04u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)3);
    // 0x339d08: 0x21302  srl         $v0, $v0, 12
    ctx->pc = 0x339d08u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 12));
    // 0x339d0c: 0x4a00b  movn        $s4, $zero, $a0
    ctx->pc = 0x339d0cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 0));
    // 0x339d10: 0x38420003  xori        $v0, $v0, 0x3
    ctx->pc = 0x339d10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)3);
    // 0x339d14: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x339d14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x339d18: 0x2841825  or          $v1, $s4, $a0
    ctx->pc = 0x339d18u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 20) | GPR_U64(ctx, 4));
    // 0x339d1c: 0x62a00a  movz        $s4, $v1, $v0
    ctx->pc = 0x339d1cu;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 3));
label_339d20:
    // 0x339d20: 0x12000010  beqz        $s0, . + 4 + (0x10 << 2)
    ctx->pc = 0x339D20u;
    {
        const bool branch_taken_0x339d20 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x339D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339D20u;
        // 0x339d24: 0x8fa600fc  lw          $a2, 0xFC($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339d20) {
            ctx->pc = 0x339D64u;
            goto label_339d64;
        }
    }
    ctx->pc = 0x339D28u;
    // 0x339d28: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x339d28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x339d2c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x339d2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x339d30: 0x28420009  slti        $v0, $v0, 0x9
    ctx->pc = 0x339d30u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x339d34: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x339D34u;
    {
        const bool branch_taken_0x339d34 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x339d34) {
            ctx->pc = 0x339D64u;
            goto label_339d64;
        }
    }
    ctx->pc = 0x339D3Cu;
    // 0x339d3c: 0x8ea30004  lw          $v1, 0x4($s5)
    ctx->pc = 0x339d3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 4)));
    // 0x339d40: 0x10600009  beqz        $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x339D40u;
    {
        const bool branch_taken_0x339d40 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x339D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339D40u;
        // 0x339d44: 0x24100029  addiu       $s0, $zero, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339d40) {
            ctx->pc = 0x339D68u;
            goto label_339d68;
        }
    }
    ctx->pc = 0x339D48u;
    // 0x339d48: 0x8c630000  lw          $v1, 0x0($v1)
    ctx->pc = 0x339d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x339d4c: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x339d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x339d50: 0x28420009  slti        $v0, $v0, 0x9
    ctx->pc = 0x339d50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)9) ? 1 : 0);
    // 0x339d54: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x339D54u;
    {
        const bool branch_taken_0x339d54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x339D58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339D54u;
        // 0x339d58: 0x8fa5022c  lw          $a1, 0x22C($sp) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 556)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339d54) {
            ctx->pc = 0x339D68u;
            goto label_339d68;
        }
    }
    ctx->pc = 0x339D5Cu;
    // 0x339d5c: 0xaf85bec0  sw          $a1, -0x4140($gp)
    ctx->pc = 0x339d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950592), GPR_U32(ctx, 5));
label_339d60:
    // 0x339d60: 0x8fa600fc  lw          $a2, 0xFC($sp)
    ctx->pc = 0x339d60u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
label_339d64:
    // 0x339d64: 0x24100029  addiu       $s0, $zero, 0x29
    ctx->pc = 0x339d64u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
label_339d68:
    // 0x339d68: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x339D68u;
    {
        const bool branch_taken_0x339d68 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x339D6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339D68u;
        // 0x339d6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339d68) {
            ctx->pc = 0x339D78u;
            goto label_339d78;
        }
    }
    ctx->pc = 0x339D70u;
    // 0x339d70: 0x2410002b  addiu       $s0, $zero, 0x2B
    ctx->pc = 0x339d70u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 43));
    // 0x339d74: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x339d74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_339d78:
    // 0x339d78: 0x8fa20204  lw          $v0, 0x204($sp)
    ctx->pc = 0x339d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
    // 0x339d7c: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x339D7Cu;
    {
        const bool branch_taken_0x339d7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x339d7c) {
            ctx->pc = 0x339D80u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x339D7Cu;
            // 0x339d80: 0xb02821  addu        $a1, $a1, $s0 (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x339D90u;
            goto label_339d90;
        }
    }
    ctx->pc = 0x339D84u;
    // 0x339d84: 0x26100002  addiu       $s0, $s0, 0x2
    ctx->pc = 0x339d84u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
    // 0x339d88: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x339d88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x339d8c: 0xb02821  addu        $a1, $a1, $s0
    ctx->pc = 0x339d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 16)));
label_339d90:
    // 0x339d90: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x339d90u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x339d94: 0xc10a322  jal         func_428C88
    ctx->pc = 0x339D94u;
    SET_GPR_U32(ctx, 31, 0x339D9Cu);
    ctx->pc = 0x339D98u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339D94u;
    // 0x339d98: 0x24a50002  addiu       $a1, $a1, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x428C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x428C88u, 0x339D94u, 0x339D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339D9Cu;
label_339d9c:
    // 0x339d9c: 0x1200000a  beqz        $s0, . + 4 + (0xA << 2)
    ctx->pc = 0x339D9Cu;
    {
        const bool branch_taken_0x339d9c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x339DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339D9Cu;
        // 0x339da0: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339d9c) {
            ctx->pc = 0x339DC8u;
            goto label_339dc8;
        }
    }
    ctx->pc = 0x339DA4u;
    // 0x339da4: 0x2031025  or          $v0, $s0, $v1
    ctx->pc = 0x339da4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 3));
    // 0x339da8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x339da8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x339dac: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x339dacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x339db0: 0x72e21389  pcpyld      $v0, $s7, $v0
    ctx->pc = 0x339db0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 23), GPR_VEC(ctx, 2)));
    // 0x339db4: 0x8f83be20  lw          $v1, -0x41E0($gp)
    ctx->pc = 0x339db4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x339db8: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x339db8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x339dbc: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x339dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x339dc0: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x339dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x339dc4: 0x0  nop
    ctx->pc = 0x339dc4u;
    // NOP
label_339dc8:
    // 0x339dc8: 0x8f90be20  lw          $s0, -0x41E0($gp)
    ctx->pc = 0x339dc8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x339dcc: 0x7ba40210  lq          $a0, 0x210($sp)
    ctx->pc = 0x339dccu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 528)));
    // 0x339dd0: 0x7e040000  sq          $a0, 0x0($s0)
    ctx->pc = 0x339dd0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 4));
    // 0x339dd4: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x339dd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x339dd8: 0x7ba50110  lq          $a1, 0x110($sp)
    ctx->pc = 0x339dd8u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 272)));
    // 0x339ddc: 0x7e050000  sq          $a1, 0x0($s0)
    ctx->pc = 0x339ddcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 5));
    // 0x339de0: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x339de0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x339de4: 0xdfa200e0  ld          $v0, 0xE0($sp)
    ctx->pc = 0x339de4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x339de8: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x339de8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x339dec: 0x70c21389  pcpyld      $v0, $a2, $v0
    ctx->pc = 0x339decu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 6), GPR_VEC(ctx, 2)));
    // 0x339df0: 0x7ba30140  lq          $v1, 0x140($sp)
    ctx->pc = 0x339df0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 320)));
    // 0x339df4: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x339df4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
    // 0x339df8: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x339df8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x339dfc: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x339dfcu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x339e00: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x339e00u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x339e04: 0xdfa200d8  ld          $v0, 0xD8($sp)
    ctx->pc = 0x339e04u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 216)));
    // 0x339e08: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x339e08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x339e0c: 0x70821389  pcpyld      $v0, $a0, $v0
    ctx->pc = 0x339e0cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x339e10: 0x7ba50130  lq          $a1, 0x130($sp)
    ctx->pc = 0x339e10u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x339e14: 0x7e050000  sq          $a1, 0x0($s0)
    ctx->pc = 0x339e14u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 5));
    // 0x339e18: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x339e18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x339e1c: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x339e1cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x339e20: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x339e20u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x339e24: 0x7ba60180  lq          $a2, 0x180($sp)
    ctx->pc = 0x339e24u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 384)));
    // 0x339e28: 0x7e060000  sq          $a2, 0x0($s0)
    ctx->pc = 0x339e28u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 6));
    // 0x339e2c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x339e2cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x339e30: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x339e30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_339e34:
    // 0x339e34: 0x42000039  di
    ctx->pc = 0x339e34u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x339e38: 0x40f  sync.p
    ctx->pc = 0x339e38u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x339e3c: 0x40036000  mfc0        $v1, Status
    ctx->pc = 0x339e3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_status);
    // 0x339e40: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x339e40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x339e44: 0x0  nop
    ctx->pc = 0x339e44u;
    // NOP
    // 0x339e48: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x339E48u;
    {
        const bool branch_taken_0x339e48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x339e48) {
            ctx->pc = 0x339E34u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_339e34;
        }
    }
    ctx->pc = 0x339E50u;
    // 0x339e50: 0x8e220108  lw          $v0, 0x108($s1)
    ctx->pc = 0x339e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 264)));
    // 0x339e54: 0x24420050  addiu       $v0, $v0, 0x50
    ctx->pc = 0x339e54u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
    // 0x339e58: 0x8fa50230  lw          $a1, 0x230($sp)
    ctx->pc = 0x339e58u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 560)));
    // 0x339e5c: 0xd8410000  lqc2        $vf1, 0x0($v0)
    ctx->pc = 0x339e5cu;
    ctx->vu0_vf[1] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x339e60: 0xd8420010  lqc2        $vf2, 0x10($v0)
    ctx->pc = 0x339e60u;
    ctx->vu0_vf[2] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x339e64: 0xd8430020  lqc2        $vf3, 0x20($v0)
    ctx->pc = 0x339e64u;
    ctx->vu0_vf[3] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x339e68: 0xd8440030  lqc2        $vf4, 0x30($v0)
    ctx->pc = 0x339e68u;
    ctx->vu0_vf[4] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x339e6c: 0x9c44000c  lwu         $a0, 0xC($v0)
    ctx->pc = 0x339e6cu;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x339e70: 0xdba50000  lqc2        $vf5, 0x0($sp)
    ctx->pc = 0x339e70u;
    ctx->vu0_vf[5] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x339e74: 0xdba60010  lqc2        $vf6, 0x10($sp)
    ctx->pc = 0x339e74u;
    ctx->vu0_vf[6] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x339e78: 0xdba70020  lqc2        $vf7, 0x20($sp)
    ctx->pc = 0x339e78u;
    ctx->vu0_vf[7] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x339e7c: 0xdba80030  lqc2        $vf8, 0x30($sp)
    ctx->pc = 0x339e7cu;
    ctx->vu0_vf[8] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x339e80: 0x9fa3000c  lwu         $v1, 0xC($sp)
    ctx->pc = 0x339e80u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x339e84: 0x4bc129bc  vmulax.xyz  $ACC, $vf5, $vf1x
    ctx->pc = 0x339e84u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x339e88: 0x4bc130bd  vmadday.xyz $ACC, $vf6, $vf1y
    ctx->pc = 0x339e88u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x339e8c: 0x4bc13a4a  vmaddz.xyz  $vf9, $vf7, $vf1z
    ctx->pc = 0x339e8cu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[1], ctx->vu0_vf[1], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[9] = _mm_blendv_ps(ctx->vu0_vf[9], res, _mm_castsi128_ps(mask)); }
    // 0x339e90: 0x4bc229bc  vmulax.xyz  $ACC, $vf5, $vf2x
    ctx->pc = 0x339e90u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x339e94: 0x4bc230bd  vmadday.xyz $ACC, $vf6, $vf2y
    ctx->pc = 0x339e94u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x339e98: 0x4bc23a8a  vmaddz.xyz  $vf10, $vf7, $vf2z
    ctx->pc = 0x339e98u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[2], ctx->vu0_vf[2], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[10] = _mm_blendv_ps(ctx->vu0_vf[10], res, _mm_castsi128_ps(mask)); }
    // 0x339e9c: 0x4bc329bc  vmulax.xyz  $ACC, $vf5, $vf3x
    ctx->pc = 0x339e9cu;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x339ea0: 0x4bc330bd  vmadday.xyz $ACC, $vf6, $vf3y
    ctx->pc = 0x339ea0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x339ea4: 0x4bc33aca  vmaddz.xyz  $vf11, $vf7, $vf3z
    ctx->pc = 0x339ea4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[3], ctx->vu0_vf[3], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[11] = _mm_blendv_ps(ctx->vu0_vf[11], res, _mm_castsi128_ps(mask)); }
    // 0x339ea8: 0x4bc429bc  vmulax.xyz  $ACC, $vf5, $vf4x
    ctx->pc = 0x339ea8u;
    { __m128 res = PS2_VMUL(ctx->vu0_vf[5], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(0,0,0,0))); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x339eac: 0x4bc430bd  vmadday.xyz $ACC, $vf6, $vf4y
    ctx->pc = 0x339eacu;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[6], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(1,1,1,1))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x339eb0: 0x4bc438be  vmaddaz.xyz $ACC, $vf7, $vf4z
    ctx->pc = 0x339eb0u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[7], _mm_shuffle_ps(ctx->vu0_vf[4], ctx->vu0_vf[4], _MM_SHUFFLE(2,2,2,2))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); ctx->vu0_acc = _mm_blendv_ps(ctx->vu0_acc, res, _mm_castsi128_ps(_mm_set_epi32(0, -1, -1, -1))); }
    // 0x339eb4: 0x4bc0430b  vmaddw.xyz  $vf12, $vf8, $vf0w
    ctx->pc = 0x339eb4u;
    { __m128 mul_res = PS2_VMUL(ctx->vu0_vf[8], _mm_shuffle_ps(ctx->vu0_vf[0], ctx->vu0_vf[0], _MM_SHUFFLE(3,3,3,3))); __m128 res = PS2_VADD(ctx->vu0_acc, mul_res); __m128i mask = _mm_set_epi32(0, -1, -1, -1); ctx->vu0_vf[12] = _mm_blendv_ps(ctx->vu0_vf[12], res, _mm_castsi128_ps(mask)); }
    // 0x339eb8: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x339eb8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x339ebc: 0xf8a90000  sqc2        $vf9, 0x0($a1)
    ctx->pc = 0x339ebcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), _mm_castps_si128(ctx->vu0_vf[9]));
    // 0x339ec0: 0xf8aa0010  sqc2        $vf10, 0x10($a1)
    ctx->pc = 0x339ec0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x339ec4: 0xf8ab0020  sqc2        $vf11, 0x20($a1)
    ctx->pc = 0x339ec4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), _mm_castps_si128(ctx->vu0_vf[11]));
    // 0x339ec8: 0xf8ac0030  sqc2        $vf12, 0x30($a1)
    ctx->pc = 0x339ec8u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), _mm_castps_si128(ctx->vu0_vf[12]));
    // 0x339ecc: 0xaca3000c  sw          $v1, 0xC($a1)
    ctx->pc = 0x339eccu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 12), GPR_U32(ctx, 3));
    // 0x339ed0: 0x42000038  ei
    ctx->pc = 0x339ed0u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x339ed4: 0x8fa2008c  lw          $v0, 0x8C($sp)
    ctx->pc = 0x339ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x339ed8: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x339ed8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x339edc: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x339edcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x339ee0: 0x10460003  beq         $v0, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x339EE0u;
    {
        const bool branch_taken_0x339ee0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 6));
        ctx->pc = 0x339EE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339EE0u;
        // 0x339ee4: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339ee0) {
            ctx->pc = 0x339EF0u;
            goto label_339ef0;
        }
    }
    ctx->pc = 0x339EE8u;
    // 0x339ee8: 0xc103e64  jal         func_40F990
    ctx->pc = 0x339EE8u;
    SET_GPR_U32(ctx, 31, 0x339EF0u);
    ctx->pc = 0x339EECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x339EE8u;
    // 0x339eec: 0x80282d  daddu       $a1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40F990u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40F990u, 0x339EE8u, 0x339EF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x339EF0u;
label_339ef0:
    // 0x339ef0: 0x7ba20080  lq          $v0, 0x80($sp)
    ctx->pc = 0x339ef0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x339ef4: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x339ef4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x339ef8: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x339ef8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x339efc: 0xdfa80090  ld          $t0, 0x90($sp)
    ctx->pc = 0x339efcu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x339f00: 0x9ea70008  lwu         $a3, 0x8($s5)
    ctx->pc = 0x339f00u;
    SET_GPR_ZE32(ctx, 7, READ32(ADD32(GPR_U32(ctx, 21), 8)));
    // 0x339f04: 0x9fa30098  lwu         $v1, 0x98($sp)
    ctx->pc = 0x339f04u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x339f08: 0x7103c  dsll32      $v0, $a3, 0
    ctx->pc = 0x339f08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) << (32 + 0));
    // 0x339f0c: 0x433825  or          $a3, $v0, $v1
    ctx->pc = 0x339f0cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x339f10: 0x70e81389  pcpyld      $v0, $a3, $t0
    ctx->pc = 0x339f10u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 7), GPR_VEC(ctx, 8)));
    // 0x339f14: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x339f14u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x339f18: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x339f18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x339f1c: 0x7ba20190  lq          $v0, 0x190($sp)
    ctx->pc = 0x339f1cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 29), 400)));
    // 0x339f20: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x339f20u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x339f24: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x339f24u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x339f28: 0x7ba30120  lq          $v1, 0x120($sp)
    ctx->pc = 0x339f28u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 288)));
    // 0x339f2c: 0x7e030000  sq          $v1, 0x0($s0)
    ctx->pc = 0x339f2cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 3));
    // 0x339f30: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x339f30u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x339f34: 0x7ba40150  lq          $a0, 0x150($sp)
    ctx->pc = 0x339f34u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 336)));
    // 0x339f38: 0x7e040000  sq          $a0, 0x0($s0)
    ctx->pc = 0x339f38u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 4));
    // 0x339f3c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x339f3cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x339f40: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x339f40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x339f44: 0x70b41389  pcpyld      $v0, $a1, $s4
    ctx->pc = 0x339f44u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 20)));
    // 0x339f48: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x339f48u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x339f4c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x339f4cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x339f50: 0x7ba60160  lq          $a2, 0x160($sp)
    ctx->pc = 0x339f50u;
    SET_GPR_VEC(ctx, 6, READ128(ADD32(GPR_U32(ctx, 29), 352)));
    // 0x339f54: 0x7e060000  sq          $a2, 0x0($s0)
    ctx->pc = 0x339f54u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 6));
    // 0x339f58: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x339f58u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x339f5c: 0xdfa200d0  ld          $v0, 0xD0($sp)
    ctx->pc = 0x339f5cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x339f60: 0x24030015  addiu       $v1, $zero, 0x15
    ctx->pc = 0x339f60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
    // 0x339f64: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x339f64u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x339f68: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x339f68u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x339f6c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x339f6cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x339f70: 0x7ba40170  lq          $a0, 0x170($sp)
    ctx->pc = 0x339f70u;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 368)));
    // 0x339f74: 0x7e040000  sq          $a0, 0x0($s0)
    ctx->pc = 0x339f74u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 4));
    // 0x339f78: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x339f78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x339f7c: 0x7ba50100  lq          $a1, 0x100($sp)
    ctx->pc = 0x339f7cu;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 29), 256)));
    // 0x339f80: 0x7e050000  sq          $a1, 0x0($s0)
    ctx->pc = 0x339f80u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 5));
    // 0x339f84: 0x8fa600fc  lw          $a2, 0xFC($sp)
    ctx->pc = 0x339f84u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x339f88: 0x10c0003d  beqz        $a2, . + 4 + (0x3D << 2)
    ctx->pc = 0x339F88u;
    {
        const bool branch_taken_0x339f88 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x339F8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x339F88u;
        // 0x339f8c: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x339f88) {
            ctx->pc = 0x33A080u;
            goto label_33a080;
        }
    }
    ctx->pc = 0x339F90u;
    // 0x339f90: 0x7a220000  lq          $v0, 0x0($s1)
    ctx->pc = 0x339f90u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x339f94: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x339f94u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x339f98: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x339f98u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x339f9c: 0x7a220010  lq          $v0, 0x10($s1)
    ctx->pc = 0x339f9cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x339fa0: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x339fa0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x339fa4: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x339fa4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x339fa8: 0x7a220020  lq          $v0, 0x20($s1)
    ctx->pc = 0x339fa8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x339fac: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x339facu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x339fb0: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x339fb0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x339fb4: 0x7a220030  lq          $v0, 0x30($s1)
    ctx->pc = 0x339fb4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x339fb8: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x339fb8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x339fbc: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x339fbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x339fc0: 0x7a220040  lq          $v0, 0x40($s1)
    ctx->pc = 0x339fc0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x339fc4: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x339fc4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x339fc8: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x339fc8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x339fcc: 0x7a220050  lq          $v0, 0x50($s1)
    ctx->pc = 0x339fccu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 17), 80)));
    // 0x339fd0: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x339fd0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x339fd4: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x339fd4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x339fd8: 0x7e1e0000  sq          $fp, 0x0($s0)
    ctx->pc = 0x339fd8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 30));
    // 0x339fdc: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x339fdcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x339fe0: 0x8e230108  lw          $v1, 0x108($s1)
    ctx->pc = 0x339fe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 264)));
    // 0x339fe4: 0x24640050  addiu       $a0, $v1, 0x50
    ctx->pc = 0x339fe4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x339fe8: 0x78620050  lq          $v0, 0x50($v1)
    ctx->pc = 0x339fe8u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 3), 80)));
    // 0x339fec: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x339fecu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x339ff0: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x339ff0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x339ff4: 0x78820010  lq          $v0, 0x10($a0)
    ctx->pc = 0x339ff4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x339ff8: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x339ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x339ffc: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x339ffcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x33a000: 0x78820020  lq          $v0, 0x20($a0)
    ctx->pc = 0x33a000u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x33a004: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x33a004u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x33a008: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x33a008u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x33a00c: 0xdc830030  ld          $v1, 0x30($a0)
    ctx->pc = 0x33a00cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x33a010: 0x9c820038  lwu         $v0, 0x38($a0)
    ctx->pc = 0x33a010u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x33a014: 0x70431389  pcpyld      $v0, $v0, $v1
    ctx->pc = 0x33a014u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x33a018: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x33a018u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x33a01c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x33a01cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x33a020: 0x26c5001c  addiu       $a1, $s6, 0x1C
    ctx->pc = 0x33a020u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 22), 28));
    // 0x33a024: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x33a024u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x33a028: 0x34c60001  ori         $a2, $a2, 0x1
    ctx->pc = 0x33a028u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)1);
    // 0x33a02c: 0x3c026c01  lui         $v0, 0x6C01
    ctx->pc = 0x33a02cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)27649 << 16));
    // 0x33a030: 0x34420345  ori         $v0, $v0, 0x345
    ctx->pc = 0x33a030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)837);
    // 0x33a034: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x33a034u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x33a038: 0x34420100  ori         $v0, $v0, 0x100
    ctx->pc = 0x33a038u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)256);
    // 0x33a03c: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x33a03cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x33a040: 0x34420404  ori         $v0, $v0, 0x404
    ctx->pc = 0x33a040u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1028);
    // 0x33a044: 0x70461389  pcpyld      $v0, $v0, $a2
    ctx->pc = 0x33a044u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x33a048: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x33a048u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x33a04c: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x33a04cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x33a050: 0x9ca60004  lwu         $a2, 0x4($a1)
    ctx->pc = 0x33a050u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x33a054: 0x9ca2000c  lwu         $v0, 0xC($a1)
    ctx->pc = 0x33a054u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 5), 12)));
    // 0x33a058: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x33a058u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x33a05c: 0x9ec3001c  lwu         $v1, 0x1C($s6)
    ctx->pc = 0x33a05cu;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 22), 28)));
    // 0x33a060: 0x9ca40008  lwu         $a0, 0x8($a1)
    ctx->pc = 0x33a060u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 5), 8)));
    // 0x33a064: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x33a064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x33a068: 0xc33025  or          $a2, $a2, $v1
    ctx->pc = 0x33a068u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 3));
    // 0x33a06c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x33a06cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x33a070: 0x70461389  pcpyld      $v0, $v0, $a2
    ctx->pc = 0x33a070u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x33a074: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x33A074u;
    {
        const bool branch_taken_0x33a074 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A074u;
        // 0x33a078: 0x7e020000  sq          $v0, 0x0($s0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a074) {
            ctx->pc = 0x33A108u;
            goto label_33a108;
        }
    }
    ctx->pc = 0x33A07Cu;
    // 0x33a07c: 0x0  nop
    ctx->pc = 0x33a07cu;
    // NOP
label_33a080:
    // 0x33a080: 0x7a420000  lq          $v0, 0x0($s2)
    ctx->pc = 0x33a080u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x33a084: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x33a084u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x33a088: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x33a088u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x33a08c: 0x7a420010  lq          $v0, 0x10($s2)
    ctx->pc = 0x33a08cu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x33a090: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x33a090u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x33a094: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x33a094u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x33a098: 0x7a420020  lq          $v0, 0x20($s2)
    ctx->pc = 0x33a098u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 32)));
    // 0x33a09c: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x33a09cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x33a0a0: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x33a0a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x33a0a4: 0x7a420030  lq          $v0, 0x30($s2)
    ctx->pc = 0x33a0a4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 48)));
    // 0x33a0a8: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x33a0a8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x33a0ac: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x33a0acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x33a0b0: 0x7a420040  lq          $v0, 0x40($s2)
    ctx->pc = 0x33a0b0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 64)));
    // 0x33a0b4: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x33a0b4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x33a0b8: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x33a0b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x33a0bc: 0x7a420050  lq          $v0, 0x50($s2)
    ctx->pc = 0x33a0bcu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x33a0c0: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x33a0c0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x33a0c4: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x33a0c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x33a0c8: 0x7e1e0000  sq          $fp, 0x0($s0)
    ctx->pc = 0x33a0c8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 30));
    // 0x33a0cc: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x33a0ccu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x33a0d0: 0x8e440068  lw          $a0, 0x68($s2)
    ctx->pc = 0x33a0d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 104)));
    // 0x33a0d4: 0x78820000  lq          $v0, 0x0($a0)
    ctx->pc = 0x33a0d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33a0d8: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x33a0d8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x33a0dc: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x33a0dcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x33a0e0: 0x78820010  lq          $v0, 0x10($a0)
    ctx->pc = 0x33a0e0u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x33a0e4: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x33a0e4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x33a0e8: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x33a0e8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x33a0ec: 0x78820020  lq          $v0, 0x20($a0)
    ctx->pc = 0x33a0ecu;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x33a0f0: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x33a0f0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
    // 0x33a0f4: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x33a0f4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x33a0f8: 0xdc830030  ld          $v1, 0x30($a0)
    ctx->pc = 0x33a0f8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x33a0fc: 0x9c820038  lwu         $v0, 0x38($a0)
    ctx->pc = 0x33a0fcu;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x33a100: 0x70431389  pcpyld      $v0, $v0, $v1
    ctx->pc = 0x33a100u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x33a104: 0x7e020000  sq          $v0, 0x0($s0)
    ctx->pc = 0x33a104u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 2));
label_33a108:
    // 0x33a108: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x33a108u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x33a10c: 0xaf90be20  sw          $s0, -0x41E0($gp)
    ctx->pc = 0x33a10cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 16));
    // 0x33a110: 0x3c046c01  lui         $a0, 0x6C01
    ctx->pc = 0x33a110u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)27649 << 16));
    // 0x33a114: 0x348403fa  ori         $a0, $a0, 0x3FA
    ctx->pc = 0x33a114u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1018);
    // 0x33a118: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x33a118u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x33a11c: 0x34840100  ori         $a0, $a0, 0x100
    ctx->pc = 0x33a11cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
    // 0x33a120: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x33a120u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x33a124: 0x34840404  ori         $a0, $a0, 0x404
    ctx->pc = 0x33a124u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1028);
    // 0x33a128: 0x70972389  pcpyld      $a0, $a0, $s7
    ctx->pc = 0x33a128u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 23)));
    // 0x33a12c: 0x7e040000  sq          $a0, 0x0($s0)
    ctx->pc = 0x33a12cu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 0), GPR_VEC(ctx, 4));
    // 0x33a130: 0x26020010  addiu       $v0, $s0, 0x10
    ctx->pc = 0x33a130u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x33a134: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x33a134u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x33a138: 0x92630047  lbu         $v1, 0x47($s3)
    ctx->pc = 0x33a138u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 71)));
    // 0x33a13c: 0x8f82bec4  lw          $v0, -0x413C($gp)
    ctx->pc = 0x33a13cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950596)));
    // 0x33a140: 0x386300ff  xori        $v1, $v1, 0xFF
    ctx->pc = 0x33a140u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)255);
    // 0x33a144: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x33a144u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x33a148: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x33a148u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x33a14c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x33A14Cu;
    {
        const bool branch_taken_0x33a14c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A14Cu;
        // 0x33a150: 0xaf83bec8  sw          $v1, -0x4138($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950600), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a14c) {
            ctx->pc = 0x33A168u;
            goto label_33a168;
        }
    }
    ctx->pc = 0x33A154u;
    // 0x33a154: 0xdf82ae80  ld          $v0, -0x5180($gp)
    ctx->pc = 0x33a154u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946432)));
    // 0x33a158: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x33a158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x33a15c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x33A15Cu;
    {
        const bool branch_taken_0x33a15c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A15Cu;
        // 0x33a160: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a15c) {
            ctx->pc = 0x33A174u;
            goto label_33a174;
        }
    }
    ctx->pc = 0x33A164u;
    // 0x33a164: 0x0  nop
    ctx->pc = 0x33a164u;
    // NOP
label_33a168:
    // 0x33a168: 0xdf82ae80  ld          $v0, -0x5180($gp)
    ctx->pc = 0x33a168u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946432)));
    // 0x33a16c: 0x2404ffbf  addiu       $a0, $zero, -0x41
    ctx->pc = 0x33a16cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x33a170: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x33a170u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
label_33a174:
    // 0x33a174: 0xff82ae80  sd          $v0, -0x5180($gp)
    ctx->pc = 0x33a174u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946432), GPR_U64(ctx, 2));
    // 0x33a178: 0x92630029  lbu         $v1, 0x29($s3)
    ctx->pc = 0x33a178u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 41)));
    // 0x33a17c: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x33a17cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
    // 0x33a180: 0x8f82ae80  lw          $v0, -0x5180($gp)
    ctx->pc = 0x33a180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946432)));
    // 0x33a184: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x33a184u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a188: 0xdca4d5d0  ld          $a0, -0x2A30($a1)
    ctx->pc = 0x33a188u;
    SET_GPR_U64(ctx, 4, FAST_READ64(0x5DD5D0u));
    // 0x33a18c: 0x24c6d5d0  addiu       $a2, $a2, -0x2A30
    ctx->pc = 0x33a18cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956496));
    // 0x33a190: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x33a190u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x33a194: 0xdcc50008  ld          $a1, 0x8($a2)
    ctx->pc = 0x33a194u;
    SET_GPR_U64(ctx, 5, FAST_READ64(0x5DD5D8u));
    // 0x33a198: 0x304207ff  andi        $v0, $v0, 0x7FF
    ctx->pc = 0x33a198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2047);
    // 0x33a19c: 0x3c03fc00  lui         $v1, 0xFC00
    ctx->pc = 0x33a19cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64512 << 16));
    // 0x33a1a0: 0x34637fff  ori         $v1, $v1, 0x7FFF
    ctx->pc = 0x33a1a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32767);
    // 0x33a1a4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x33a1a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x33a1a8: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x33a1a8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x33a1ac: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x33a1acu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x33a1b0: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x33a1b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x33a1b4: 0x832024  and         $a0, $a0, $v1
    ctx->pc = 0x33a1b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 3));
    // 0x33a1b8: 0x213fc  dsll32      $v0, $v0, 15
    ctx->pc = 0x33a1b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 15));
    // 0x33a1bc: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x33a1bcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x33a1c0: 0x70a42389  pcpyld      $a0, $a1, $a0
    ctx->pc = 0x33a1c0u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 5), GPR_VEC(ctx, 4)));
    // 0x33a1c4: 0x7cc40000  sq          $a0, 0x0($a2)
    ctx->pc = 0x33a1c4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 4));
    // 0x33a1c8: 0x8f82be20  lw          $v0, -0x41E0($gp)
    ctx->pc = 0x33a1c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x33a1cc: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x33a1ccu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x33a1d0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x33a1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x33a1d4: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x33a1d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x33a1d8: 0x8e63002c  lw          $v1, 0x2C($s3)
    ctx->pc = 0x33a1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 44)));
    // 0x33a1dc: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x33a1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x33a1e0: 0xc0dff98  jal         func_37FE60
    ctx->pc = 0x33A1E0u;
    SET_GPR_U32(ctx, 31, 0x33A1E8u);
    ctx->pc = 0x33A1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A1E0u;
    // 0x33a1e4: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x37FE60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x37FE60u, 0x33A1E0u, 0x33A1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A1E8u;
label_33a1e8:
    // 0x33a1e8: 0x88440003  lwl         $a0, 0x3($v0)
    ctx->pc = 0x33a1e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x33a1ec: 0x98440000  lwr         $a0, 0x0($v0)
    ctx->pc = 0x33a1ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 4) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 4) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 4, merged64); }
    // 0x33a1f0: 0xaa640047  swl         $a0, 0x47($s3)
    ctx->pc = 0x33a1f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 71); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x33a1f4: 0xba640044  swr         $a0, 0x44($s3)
    ctx->pc = 0x33a1f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 68); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 4); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x33a1f8: 0x8f86be20  lw          $a2, -0x41E0($gp)
    ctx->pc = 0x33a1f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x33a1fc: 0x7ba40240  lq          $a0, 0x240($sp)
    ctx->pc = 0x33a1fcu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 29), 576)));
    // 0x33a200: 0x7cc40000  sq          $a0, 0x0($a2)
    ctx->pc = 0x33a200u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 4));
    // 0x33a204: 0x24c60010  addiu       $a2, $a2, 0x10
    ctx->pc = 0x33a204u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x33a208: 0xaf86be20  sw          $a2, -0x41E0($gp)
    ctx->pc = 0x33a208u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 6));
    // 0x33a20c: 0xdf82ae80  ld          $v0, -0x5180($gp)
    ctx->pc = 0x33a20cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946432)));
    // 0x33a210: 0xc7848054  lwc1        $f4, -0x7FAC($gp)
    ctx->pc = 0x33a210u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934612)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x33a214: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x33a214u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x33a218: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x33A218u;
    {
        const bool branch_taken_0x33a218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A218u;
        // 0x33a21c: 0x92620044  lbu         $v0, 0x44($s3) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 68)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a218) {
            ctx->pc = 0x33A228u;
            goto label_33a228;
        }
    }
    ctx->pc = 0x33A220u;
    // 0x33a220: 0xc7848434  lwc1        $f4, -0x7BCC($gp)
    ctx->pc = 0x33a220u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935604)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[4] = f; }
    // 0x33a224: 0x0  nop
    ctx->pc = 0x33a224u;
    // NOP
label_33a228:
    // 0x33a228: 0x92630045  lbu         $v1, 0x45($s3)
    ctx->pc = 0x33a228u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 69)));
    // 0x33a22c: 0x92650046  lbu         $a1, 0x46($s3)
    ctx->pc = 0x33a22cu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 70)));
    // 0x33a230: 0x44821800  mtc1        $v0, $f3
    ctx->pc = 0x33a230u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[3], &bits, sizeof(bits)); }
    // 0x33a234: 0x468018e0  cvt.s.w     $f3, $f3
    ctx->pc = 0x33a234u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[3], sizeof(tmp)); ctx->f[3] = FPU_CVT_S_W(tmp); }
    // 0x33a238: 0x92640047  lbu         $a0, 0x47($s3)
    ctx->pc = 0x33a238u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 71)));
    // 0x33a23c: 0x44831000  mtc1        $v1, $f2
    ctx->pc = 0x33a23cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[2], &bits, sizeof(bits)); }
    // 0x33a240: 0x468010a0  cvt.s.w     $f2, $f2
    ctx->pc = 0x33a240u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[2], sizeof(tmp)); ctx->f[2] = FPU_CVT_S_W(tmp); }
    // 0x33a244: 0x44850800  mtc1        $a1, $f1
    ctx->pc = 0x33a244u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x33a248: 0x46800860  cvt.s.w     $f1, $f1
    ctx->pc = 0x33a248u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[1], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x33a24c: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x33a24cu;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x33a250: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x33a250u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x33a254: 0x46150142  mul.s       $f5, $f0, $f21
    ctx->pc = 0x33a254u;
    ctx->f[5] = FPU_MUL_S(ctx->f[0], ctx->f[21]);
    // 0x33a258: 0x46041182  mul.s       $f6, $f2, $f4
    ctx->pc = 0x33a258u;
    ctx->f[6] = FPU_MUL_S(ctx->f[2], ctx->f[4]);
    // 0x33a25c: 0x44022800  mfc1        $v0, $f5
    ctx->pc = 0x33a25cu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x33a260: 0x44033000  mfc1        $v1, $f6
    ctx->pc = 0x33a260u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x33a264: 0x70021789  pexew       $v0, $v0
    ctx->pc = 0x33a264u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 2)));
    // 0x33a268: 0x70031f89  pexew       $v1, $v1
    ctx->pc = 0x33a268u;
    SET_GPR_VEC(ctx, 3, PS2_PEXEW(GPR_VEC(ctx, 3)));
    // 0x33a26c: 0x46040942  mul.s       $f5, $f1, $f4
    ctx->pc = 0x33a26cu;
    ctx->f[5] = FPU_MUL_S(ctx->f[1], ctx->f[4]);
    // 0x33a270: 0x46041982  mul.s       $f6, $f3, $f4
    ctx->pc = 0x33a270u;
    ctx->f[6] = FPU_MUL_S(ctx->f[3], ctx->f[4]);
    // 0x33a274: 0x44022800  mfc1        $v0, $f5
    ctx->pc = 0x33a274u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x33a278: 0x44033000  mfc1        $v1, $f6
    ctx->pc = 0x33a278u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[6], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x33a27c: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x33a27cu;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x33a280: 0x7cc20000  sq          $v0, 0x0($a2)
    ctx->pc = 0x33a280u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 0), GPR_VEC(ctx, 2));
    // 0x33a284: 0x24c30010  addiu       $v1, $a2, 0x10
    ctx->pc = 0x33a284u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x33a288: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x33a288u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x33a28c: 0x8fa20204  lw          $v0, 0x204($sp)
    ctx->pc = 0x33a28cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
    // 0x33a290: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x33A290u;
    {
        const bool branch_taken_0x33a290 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A294u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A290u;
        // 0x33a294: 0x7ba30250  lq          $v1, 0x250($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 29), 592)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a290) {
            ctx->pc = 0x33A2F0u;
            goto label_33a2f0;
        }
    }
    ctx->pc = 0x33A298u;
    // 0x33a298: 0x24c20020  addiu       $v0, $a2, 0x20
    ctx->pc = 0x33a298u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x33a29c: 0x7cc30010  sq          $v1, 0x10($a2)
    ctx->pc = 0x33a29cu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 16), GPR_VEC(ctx, 3));
    // 0x33a2a0: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x33a2a0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x33a2a4: 0x8fa40234  lw          $a0, 0x234($sp)
    ctx->pc = 0x33a2a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 564)));
    // 0x33a2a8: 0x8c83003c  lw          $v1, 0x3C($a0)
    ctx->pc = 0x33a2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 60)));
    // 0x33a2ac: 0xc4630008  lwc1        $f3, 0x8($v1)
    ctx->pc = 0x33a2acu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[3] = f; }
    // 0x33a2b0: 0xc4620000  lwc1        $f2, 0x0($v1)
    ctx->pc = 0x33a2b0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[2] = f; }
    // 0x33a2b4: 0xc4610004  lwc1        $f1, 0x4($v1)
    ctx->pc = 0x33a2b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x33a2b8: 0xc480001c  lwc1        $f0, 0x1C($a0)
    ctx->pc = 0x33a2b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 28)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x33a2bc: 0x46140902  mul.s       $f4, $f1, $f20
    ctx->pc = 0x33a2bcu;
    ctx->f[4] = FPU_MUL_S(ctx->f[1], ctx->f[20]);
    // 0x33a2c0: 0x44020000  mfc1        $v0, $f0
    ctx->pc = 0x33a2c0u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x33a2c4: 0x44032000  mfc1        $v1, $f4
    ctx->pc = 0x33a2c4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x33a2c8: 0x70021789  pexew       $v0, $v0
    ctx->pc = 0x33a2c8u;
    SET_GPR_VEC(ctx, 2, PS2_PEXEW(GPR_VEC(ctx, 2)));
    // 0x33a2cc: 0x70031f89  pexew       $v1, $v1
    ctx->pc = 0x33a2ccu;
    SET_GPR_VEC(ctx, 3, PS2_PEXEW(GPR_VEC(ctx, 3)));
    // 0x33a2d0: 0x46141942  mul.s       $f5, $f3, $f20
    ctx->pc = 0x33a2d0u;
    ctx->f[5] = FPU_MUL_S(ctx->f[3], ctx->f[20]);
    // 0x33a2d4: 0x46141102  mul.s       $f4, $f2, $f20
    ctx->pc = 0x33a2d4u;
    ctx->f[4] = FPU_MUL_S(ctx->f[2], ctx->f[20]);
    // 0x33a2d8: 0x44022800  mfc1        $v0, $f5
    ctx->pc = 0x33a2d8u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[5], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x33a2dc: 0x44032000  mfc1        $v1, $f4
    ctx->pc = 0x33a2dcu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[4], sizeof(bits)); SET_GPR_U32(ctx, 3, bits); }
    // 0x33a2e0: 0x704314c8  ppacw       $v0, $v0, $v1
    ctx->pc = 0x33a2e0u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x33a2e4: 0x7cc20020  sq          $v0, 0x20($a2)
    ctx->pc = 0x33a2e4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 32), GPR_VEC(ctx, 2));
    // 0x33a2e8: 0x24c30030  addiu       $v1, $a2, 0x30
    ctx->pc = 0x33a2e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 48));
    // 0x33a2ec: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x33a2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
label_33a2f0:
    // 0x33a2f0: 0x92620028  lbu         $v0, 0x28($s3)
    ctx->pc = 0x33a2f0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 19), 40)));
    // 0x33a2f4: 0x3c046c03  lui         $a0, 0x6C03
    ctx->pc = 0x33a2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)27651 << 16));
    // 0x33a2f8: 0x348403fd  ori         $a0, $a0, 0x3FD
    ctx->pc = 0x33a2f8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1021);
    // 0x33a2fc: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x33a2fcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x33a300: 0x34840100  ori         $a0, $a0, 0x100
    ctx->pc = 0x33a300u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)256);
    // 0x33a304: 0x42438  dsll        $a0, $a0, 16
    ctx->pc = 0x33a304u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 16);
    // 0x33a308: 0x34840404  ori         $a0, $a0, 0x404
    ctx->pc = 0x33a308u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)1028);
    // 0x33a30c: 0x70972389  pcpyld      $a0, $a0, $s7
    ctx->pc = 0x33a30cu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 23)));
    // 0x33a310: 0x30450007  andi        $a1, $v0, 0x7
    ctx->pc = 0x33a310u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x33a314: 0x8f83be20  lw          $v1, -0x41E0($gp)
    ctx->pc = 0x33a314u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x33a318: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x33a318u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x33a31c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x33a31cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x33a320: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x33a320u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x33a324: 0x8f82aee0  lw          $v0, -0x5120($gp)
    ctx->pc = 0x33a324u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946528)));
    // 0x33a328: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x33A328u;
    {
        const bool branch_taken_0x33a328 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A32Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A328u;
        // 0x33a32c: 0x30a20004  andi        $v0, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a328) {
            ctx->pc = 0x33A338u;
            goto label_33a338;
        }
    }
    ctx->pc = 0x33A330u;
    // 0x33a330: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x33A330u;
    {
        const bool branch_taken_0x33a330 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x33a330) {
            ctx->pc = 0x33A334u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x33A330u;
            // 0x33a334: 0x34a50008  ori         $a1, $a1, 0x8 (Delay Slot)
            SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8);
            ctx->in_delay_slot = false;
            ctx->pc = 0x33A350u;
            goto label_33a350;
        }
    }
    ctx->pc = 0x33A338u;
label_33a338:
    // 0x33a338: 0x8f82aee4  lw          $v0, -0x511C($gp)
    ctx->pc = 0x33a338u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946532)));
    // 0x33a33c: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x33A33Cu;
    {
        const bool branch_taken_0x33a33c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A340u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A33Cu;
        // 0x33a340: 0x30a20004  andi        $v0, $a1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a33c) {
            ctx->pc = 0x33A378u;
            goto label_33a378;
        }
    }
    ctx->pc = 0x33A344u;
    // 0x33a344: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x33A344u;
    {
        const bool branch_taken_0x33a344 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A344u;
        // 0x33a348: 0x3c06005e  lui         $a2, 0x5E (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)94 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a344) {
            ctx->pc = 0x33A380u;
            goto label_33a380;
        }
    }
    ctx->pc = 0x33A34Cu;
    // 0x33a34c: 0x34a50008  ori         $a1, $a1, 0x8
    ctx->pc = 0x33a34cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)8);
label_33a350:
    // 0x33a350: 0x8f82be20  lw          $v0, -0x41E0($gp)
    ctx->pc = 0x33a350u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x33a354: 0x3c06005e  lui         $a2, 0x5E
    ctx->pc = 0x33a354u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)94 << 16));
    // 0x33a358: 0x24c6d670  addiu       $a2, $a2, -0x2990
    ctx->pc = 0x33a358u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956656));
    // 0x33a35c: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x33a35cu;
    SET_GPR_VEC(ctx, 3, FAST_READ128(0x5DD670u));
    // 0x33a360: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x33a360u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x33a364: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x33a364u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x33a368: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x33a368u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x33a36c: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x33a36cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x33a370: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x33A370u;
    {
        const bool branch_taken_0x33a370 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A370u;
        // 0x33a374: 0x2484d680  addiu       $a0, $a0, -0x2980 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956672));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a370) {
            ctx->pc = 0x33A3A0u;
            goto label_33a3a0;
        }
    }
    ctx->pc = 0x33A378u;
label_33a378:
    // 0x33a378: 0x3c06005e  lui         $a2, 0x5E
    ctx->pc = 0x33a378u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)94 << 16));
    // 0x33a37c: 0x0  nop
    ctx->pc = 0x33a37cu;
    // NOP
label_33a380:
    // 0x33a380: 0x8f82be20  lw          $v0, -0x41E0($gp)
    ctx->pc = 0x33a380u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x33a384: 0x24c6d650  addiu       $a2, $a2, -0x29B0
    ctx->pc = 0x33a384u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956624));
    // 0x33a388: 0x78c30000  lq          $v1, 0x0($a2)
    ctx->pc = 0x33a388u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x33a38c: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x33a38cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x33a390: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x33a390u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x33a394: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x33a394u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x33a398: 0x3c04005e  lui         $a0, 0x5E
    ctx->pc = 0x33a398u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)94 << 16));
    // 0x33a39c: 0x2484d660  addiu       $a0, $a0, -0x29A0
    ctx->pc = 0x33a39cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956640));
label_33a3a0:
    // 0x33a3a0: 0x78830000  lq          $v1, 0x0($a0)
    ctx->pc = 0x33a3a0u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33a3a4: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x33a3a4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x33a3a8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x33a3a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x33a3ac: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x33a3acu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x33a3b0: 0x8f82becc  lw          $v0, -0x4134($gp)
    ctx->pc = 0x33a3b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950604)));
    // 0x33a3b4: 0x24060003  addiu       $a2, $zero, 0x3
    ctx->pc = 0x33a3b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x33a3b8: 0x14460003  bne         $v0, $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x33A3B8u;
    {
        const bool branch_taken_0x33a3b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 6));
        ctx->pc = 0x33A3BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A3B8u;
        // 0x33a3bc: 0xaf80aed8  sw          $zero, -0x5128($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294946520), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a3b8) {
            ctx->pc = 0x33A3C8u;
            goto label_33a3c8;
        }
    }
    ctx->pc = 0x33A3C0u;
    // 0x33a3c0: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x33a3c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x33a3c4: 0xaf82aed8  sw          $v0, -0x5128($gp)
    ctx->pc = 0x33a3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946520), GPR_U32(ctx, 2));
label_33a3c8:
    // 0x33a3c8: 0x9f82aedc  lwu         $v0, -0x5124($gp)
    ctx->pc = 0x33a3c8u;
    SET_GPR_ZE32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 28), 4294946524)));
    // 0x33a3cc: 0x5183c  dsll32      $v1, $a1, 0
    ctx->pc = 0x33a3ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) << (32 + 0));
    // 0x33a3d0: 0x9f84aed8  lwu         $a0, -0x5128($gp)
    ctx->pc = 0x33a3d0u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 28), 4294946520)));
    // 0x33a3d4: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x33a3d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x33a3d8: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x33a3d8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x33a3dc: 0x442025  or          $a0, $v0, $a0
    ctx->pc = 0x33a3dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x33a3e0: 0x70832389  pcpyld      $a0, $a0, $v1
    ctx->pc = 0x33a3e0u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x33a3e4: 0x8f83be20  lw          $v1, -0x41E0($gp)
    ctx->pc = 0x33a3e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x33a3e8: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x33a3e8u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x33a3ec: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x33a3ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x33a3f0: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x33a3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x33a3f4: 0x8e620040  lw          $v0, 0x40($s3)
    ctx->pc = 0x33a3f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 64)));
    // 0x33a3f8: 0x1040001f  beqz        $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x33A3F8u;
    {
        const bool branch_taken_0x33a3f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A3FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A3F8u;
        // 0x33a3fc: 0x700024a9  por         $a0, $zero, $zero (Delay Slot)
        SET_GPR_VEC(ctx, 4, PS2_POR(GPR_VEC(ctx, 0), GPR_VEC(ctx, 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a3f8) {
            ctx->pc = 0x33A478u;
            goto label_33a478;
        }
    }
    ctx->pc = 0x33A400u;
    // 0x33a400: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x33a400u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x33a404: 0x34420004  ori         $v0, $v0, 0x4
    ctx->pc = 0x33a404u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)4);
    // 0x33a408: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x33a408u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x33a40c: 0x70571389  pcpyld      $v0, $v0, $s7
    ctx->pc = 0x33a40cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 23)));
    // 0x33a410: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x33a410u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x33a414: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x33a414u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x33a418: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x33a418u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x33a41c: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x33a41cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x33a420: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x33a420u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x33a424: 0x34848003  ori         $a0, $a0, 0x8003
    ctx->pc = 0x33a424u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32771);
    // 0x33a428: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x33a428u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x33a42c: 0x70441389  pcpyld      $v0, $v0, $a0
    ctx->pc = 0x33a42cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x33a430: 0x7c620010  sq          $v0, 0x10($v1)
    ctx->pc = 0x33a430u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 2));
    // 0x33a434: 0x24620020  addiu       $v0, $v1, 0x20
    ctx->pc = 0x33a434u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x33a438: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x33a438u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x33a43c: 0xdf84ae48  ld          $a0, -0x51B8($gp)
    ctx->pc = 0x33a43cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 28), 4294946376)));
    // 0x33a440: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x33a440u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x33a444: 0x70441389  pcpyld      $v0, $v0, $a0
    ctx->pc = 0x33a444u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x33a448: 0x7c620020  sq          $v0, 0x20($v1)
    ctx->pc = 0x33a448u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), GPR_VEC(ctx, 2));
    // 0x33a44c: 0x24620030  addiu       $v0, $v1, 0x30
    ctx->pc = 0x33a44cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x33a450: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x33a450u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x33a454: 0xdf84ae68  ld          $a0, -0x5198($gp)
    ctx->pc = 0x33a454u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 28), 4294946408)));
    // 0x33a458: 0x24020014  addiu       $v0, $zero, 0x14
    ctx->pc = 0x33a458u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x33a45c: 0x70441389  pcpyld      $v0, $v0, $a0
    ctx->pc = 0x33a45cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x33a460: 0x7c620030  sq          $v0, 0x30($v1)
    ctx->pc = 0x33a460u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), GPR_VEC(ctx, 2));
    // 0x33a464: 0x24620040  addiu       $v0, $v1, 0x40
    ctx->pc = 0x33a464u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x33a468: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x33a468u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x33a46c: 0xdf84ae60  ld          $a0, -0x51A0($gp)
    ctx->pc = 0x33a46cu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 28), 4294946400)));
    // 0x33a470: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x33A470u;
    {
        const bool branch_taken_0x33a470 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A474u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A470u;
        // 0x33a474: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a470) {
            ctx->pc = 0x33A4D8u;
            goto label_33a4d8;
        }
    }
    ctx->pc = 0x33A478u;
label_33a478:
    // 0x33a478: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x33a478u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x33a47c: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x33a47cu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x33a480: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x33a480u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x33a484: 0x7c640010  sq          $a0, 0x10($v1)
    ctx->pc = 0x33a484u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 4));
    // 0x33a488: 0x24620020  addiu       $v0, $v1, 0x20
    ctx->pc = 0x33a488u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x33a48c: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x33a48cu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x33a490: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x33a490u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x33a494: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x33a494u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x33a498: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x33a498u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x33a49c: 0x70571389  pcpyld      $v0, $v0, $s7
    ctx->pc = 0x33a49cu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 23)));
    // 0x33a4a0: 0x7c620020  sq          $v0, 0x20($v1)
    ctx->pc = 0x33a4a0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 32), GPR_VEC(ctx, 2));
    // 0x33a4a4: 0x24620030  addiu       $v0, $v1, 0x30
    ctx->pc = 0x33a4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 48));
    // 0x33a4a8: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x33a4a8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x33a4ac: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x33a4acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x33a4b0: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x33a4b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x33a4b4: 0x34848001  ori         $a0, $a0, 0x8001
    ctx->pc = 0x33a4b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)32769);
    // 0x33a4b8: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x33a4b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x33a4bc: 0x70441389  pcpyld      $v0, $v0, $a0
    ctx->pc = 0x33a4bcu;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x33a4c0: 0x7c620030  sq          $v0, 0x30($v1)
    ctx->pc = 0x33a4c0u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 48), GPR_VEC(ctx, 2));
    // 0x33a4c4: 0x24620040  addiu       $v0, $v1, 0x40
    ctx->pc = 0x33a4c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 64));
    // 0x33a4c8: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x33a4c8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x33a4cc: 0xdf84ae48  ld          $a0, -0x51B8($gp)
    ctx->pc = 0x33a4ccu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 28), 4294946376)));
    // 0x33a4d0: 0x24020047  addiu       $v0, $zero, 0x47
    ctx->pc = 0x33a4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x33a4d4: 0x0  nop
    ctx->pc = 0x33a4d4u;
    // NOP
label_33a4d8:
    // 0x33a4d8: 0x70441389  pcpyld      $v0, $v0, $a0
    ctx->pc = 0x33a4d8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x33a4dc: 0x7c620040  sq          $v0, 0x40($v1)
    ctx->pc = 0x33a4dcu;
    WRITE128(ADD32(GPR_U32(ctx, 3), 64), GPR_VEC(ctx, 2));
    // 0x33a4e0: 0x24620050  addiu       $v0, $v1, 0x50
    ctx->pc = 0x33a4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 80));
    // 0x33a4e4: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x33a4e4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x33a4e8: 0x8fa500fc  lw          $a1, 0xFC($sp)
    ctx->pc = 0x33a4e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 252)));
    // 0x33a4ec: 0x10a00016  beqz        $a1, . + 4 + (0x16 << 2)
    ctx->pc = 0x33A4ECu;
    {
        const bool branch_taken_0x33a4ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A4F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A4ECu;
        // 0x33a4f0: 0x8fa60220  lw          $a2, 0x220($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 544)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a4ec) {
            ctx->pc = 0x33A548u;
            goto label_33a548;
        }
    }
    ctx->pc = 0x33A4F4u;
    // 0x33a4f4: 0x3c043000  lui         $a0, 0x3000
    ctx->pc = 0x33a4f4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)12288 << 16));
    // 0x33a4f8: 0x8fa50270  lw          $a1, 0x270($sp)
    ctx->pc = 0x33a4f8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 624)));
    // 0x33a4fc: 0xc41825  or          $v1, $a2, $a0
    ctx->pc = 0x33a4fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x33a500: 0x30c200ff  andi        $v0, $a2, 0xFF
    ctx->pc = 0x33a500u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x33a504: 0x8fa60260  lw          $a2, 0x260($sp)
    ctx->pc = 0x33a504u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 608)));
    // 0x33a508: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x33a508u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x33a50c: 0x3183e  dsrl32      $v1, $v1, 0
    ctx->pc = 0x33a50cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) >> (32 + 0));
    // 0x33a510: 0x21400  sll         $v0, $v0, 16
    ctx->pc = 0x33a510u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 16));
    // 0x33a514: 0x6203c  dsll32      $a0, $a2, 0
    ctx->pc = 0x33a514u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) << (32 + 0));
    // 0x33a518: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x33a518u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x33a51c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x33a51cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x33a520: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x33a520u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x33a524: 0x3c030100  lui         $v1, 0x100
    ctx->pc = 0x33a524u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)256 << 16));
    // 0x33a528: 0x34630404  ori         $v1, $v1, 0x404
    ctx->pc = 0x33a528u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1028);
    // 0x33a52c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x33a52cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x33a530: 0x70441389  pcpyld      $v0, $v0, $a0
    ctx->pc = 0x33a530u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x33a534: 0x8f83be20  lw          $v1, -0x41E0($gp)
    ctx->pc = 0x33a534u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x33a538: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x33a538u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x33a53c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x33a53cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x33a540: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x33a540u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x33a544: 0x0  nop
    ctx->pc = 0x33a544u;
    // NOP
label_33a548:
    // 0x33a548: 0x8fa40204  lw          $a0, 0x204($sp)
    ctx->pc = 0x33a548u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 516)));
    // 0x33a54c: 0x10800017  beqz        $a0, . + 4 + (0x17 << 2)
    ctx->pc = 0x33A54Cu;
    {
        const bool branch_taken_0x33a54c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x33A550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A54Cu;
        // 0x33a550: 0x3c050062  lui         $a1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a54c) {
            ctx->pc = 0x33A5ACu;
            goto label_33a5ac;
        }
    }
    ctx->pc = 0x33A554u;
    // 0x33a554: 0x24a5c4c0  addiu       $a1, $a1, -0x3B40
    ctx->pc = 0x33a554u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294952128));
    // 0x33a558: 0x8ca20010  lw          $v0, 0x10($a1)
    ctx->pc = 0x33a558u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 16)));
    // 0x33a55c: 0x90430090  lbu         $v1, 0x90($v0)
    ctx->pc = 0x33a55cu;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 144)));
    // 0x33a560: 0xa263002b  sb          $v1, 0x2B($s3)
    ctx->pc = 0x33a560u;
    WRITE8(ADD32(GPR_U32(ctx, 19), 43), (uint8_t)GPR_U32(ctx, 3));
    // 0x33a564: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x33a564u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x33a568: 0x8f85aed4  lw          $a1, -0x512C($gp)
    ctx->pc = 0x33a568u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946516)));
    // 0x33a56c: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x33a56cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x33a570: 0x8c830018  lw          $v1, 0x18($a0)
    ctx->pc = 0x33a570u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
    // 0x33a574: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x33a574u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x33a578: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x33a578u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33a57c: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x33a57cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33a580: 0x10a40009  beq         $a1, $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x33A580u;
    {
        const bool branch_taken_0x33a580 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        ctx->pc = 0x33A584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A580u;
        // 0x33a584: 0x4103c  dsll32      $v0, $a0, 0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) << (32 + 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a580) {
            ctx->pc = 0x33A5A8u;
            goto label_33a5a8;
        }
    }
    ctx->pc = 0x33A588u;
    // 0x33a588: 0x3c065000  lui         $a2, 0x5000
    ctx->pc = 0x33a588u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)20480 << 16));
    // 0x33a58c: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x33a58cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x33a590: 0x72e21389  pcpyld      $v0, $s7, $v0
    ctx->pc = 0x33a590u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 23), GPR_VEC(ctx, 2)));
    // 0x33a594: 0x8f83be20  lw          $v1, -0x41E0($gp)
    ctx->pc = 0x33a594u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x33a598: 0x7c620000  sq          $v0, 0x0($v1)
    ctx->pc = 0x33a598u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 2));
    // 0x33a59c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x33a59cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x33a5a0: 0xaf83be20  sw          $v1, -0x41E0($gp)
    ctx->pc = 0x33a5a0u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 3));
    // 0x33a5a4: 0xaf84aed4  sw          $a0, -0x512C($gp)
    ctx->pc = 0x33a5a4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294946516), GPR_U32(ctx, 4));
label_33a5a8:
    // 0x33a5a8: 0xafa00204  sw          $zero, 0x204($sp)
    ctx->pc = 0x33a5a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 516), GPR_U32(ctx, 0));
label_33a5ac:
    // 0x33a5ac: 0x8e620030  lw          $v0, 0x30($s3)
    ctx->pc = 0x33a5acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 48)));
    // 0x33a5b0: 0x8e640004  lw          $a0, 0x4($s3)
    ctx->pc = 0x33a5b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
    // 0x33a5b4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x33a5b4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x33a5b8: 0x8c830014  lw          $v1, 0x14($a0)
    ctx->pc = 0x33a5b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 20)));
    // 0x33a5bc: 0x3c020200  lui         $v0, 0x200
    ctx->pc = 0x33a5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)512 << 16));
    // 0x33a5c0: 0x24a60018  addiu       $a2, $a1, 0x18
    ctx->pc = 0x33a5c0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), 24));
    // 0x33a5c4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x33a5c4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x33a5c8: 0x9cc40008  lwu         $a0, 0x8($a2)
    ctx->pc = 0x33a5c8u;
    SET_GPR_ZE32(ctx, 4, READ32(ADD32(GPR_U32(ctx, 6), 8)));
    // 0x33a5cc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x33a5ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x33a5d0: 0x3c020300  lui         $v0, 0x300
    ctx->pc = 0x33a5d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)768 << 16));
    // 0x33a5d4: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x33a5d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x33a5d8: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x33a5d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x33a5dc: 0x3c025000  lui         $v0, 0x5000
    ctx->pc = 0x33a5dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20480 << 16));
    // 0x33a5e0: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x33a5e0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x33a5e4: 0x70641b89  pcpyld      $v1, $v1, $a0
    ctx->pc = 0x33a5e4u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 4)));
    // 0x33a5e8: 0x8f82be20  lw          $v0, -0x41E0($gp)
    ctx->pc = 0x33a5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x33a5ec: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x33a5ecu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x33a5f0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x33a5f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x33a5f4: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x33a5f4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x33a5f8: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x33a5f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
label_33a5fc:
    // 0x33a5fc: 0x42000039  di
    ctx->pc = 0x33a5fcu;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x33a600: 0x40f  sync.p
    ctx->pc = 0x33a600u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x33a604: 0x40036000  mfc0        $v1, Status
    ctx->pc = 0x33a604u;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_status);
    // 0x33a608: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x33a608u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x33a60c: 0x0  nop
    ctx->pc = 0x33a60cu;
    // NOP
    // 0x33a610: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x33A610u;
    {
        const bool branch_taken_0x33a610 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33a610) {
            ctx->pc = 0x33A5FCu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_33a5fc;
        }
    }
    ctx->pc = 0x33A618u;
    // 0x33a618: 0x8ca20018  lw          $v0, 0x18($a1)
    ctx->pc = 0x33a618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
    // 0x33a61c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x33a61cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33a620: 0xaca20018  sw          $v0, 0x18($a1)
    ctx->pc = 0x33a620u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 24), GPR_U32(ctx, 2));
    // 0x33a624: 0x42000038  ei
    ctx->pc = 0x33a624u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x33a628: 0x8cc20004  lw          $v0, 0x4($a2)
    ctx->pc = 0x33a628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x33a62c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x33a62cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33a630: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x33a630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x33a634: 0x14450004  bne         $v0, $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x33A634u;
    {
        const bool branch_taken_0x33a634 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        ctx->pc = 0x33A638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A634u;
        // 0x33a638: 0xacc20004  sw          $v0, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a634) {
            ctx->pc = 0x33A648u;
            goto label_33a648;
        }
    }
    ctx->pc = 0x33A63Cu;
    // 0x33a63c: 0xc10a762  jal         func_429D88
    ctx->pc = 0x33A63Cu;
    SET_GPR_U32(ctx, 31, 0x33A644u);
    ctx->pc = 0x33A640u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A63Cu;
    // 0x33a640: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x429D88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x429D88u, 0x33A63Cu, 0x33A644u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A644u;
label_33a644:
    // 0x33a644: 0x0  nop
    ctx->pc = 0x33a644u;
    // NOP
label_33a648:
    // 0x33a648: 0x8fa600f4  lw          $a2, 0xF4($sp)
    ctx->pc = 0x33a648u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 244)));
    // 0x33a64c: 0x8fa300f0  lw          $v1, 0xF0($sp)
    ctx->pc = 0x33a64cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x33a650: 0x8fa40274  lw          $a0, 0x274($sp)
    ctx->pc = 0x33a650u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 628)));
    // 0x33a654: 0x8fa50278  lw          $a1, 0x278($sp)
    ctx->pc = 0x33a654u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 632)));
    // 0x33a658: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x33a658u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x33a65c: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x33a65cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x33a660: 0x24840070  addiu       $a0, $a0, 0x70
    ctx->pc = 0x33a660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 112));
    // 0x33a664: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x33a664u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x33a668: 0xafa300f0  sw          $v1, 0xF0($sp)
    ctx->pc = 0x33a668u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 3));
    // 0x33a66c: 0xafa40274  sw          $a0, 0x274($sp)
    ctx->pc = 0x33a66cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 628), GPR_U32(ctx, 4));
    // 0x33a670: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x33a670u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x33a674: 0x1440fd12  bnez        $v0, . + 4 + (-0x2EE << 2)
    ctx->pc = 0x33A674u;
    {
        const bool branch_taken_0x33a674 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x33A678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A674u;
        // 0x33a678: 0xafa50278  sw          $a1, 0x278($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 632), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33a674) {
            ctx->pc = 0x339AC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_339ac0;
        }
    }
    ctx->pc = 0x33A67Cu;
label_33a67c:
    // 0x33a67c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x33a67cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_33a680:
    // 0x33a680: 0xc10a322  jal         func_428C88
    ctx->pc = 0x33A680u;
    SET_GPR_U32(ctx, 31, 0x33A688u);
    ctx->pc = 0x33A684u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x33A680u;
    // 0x33a684: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x428C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x428C88u, 0x33A680u, 0x33A688u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x33A688u;
label_33a688:
    // 0x33a688: 0x3c035000  lui         $v1, 0x5000
    ctx->pc = 0x33a688u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)20480 << 16));
    // 0x33a68c: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x33a68cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33a690: 0x34630002  ori         $v1, $v1, 0x2
    ctx->pc = 0x33a690u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)2);
    // 0x33a694: 0x70621cc8  ppacw       $v1, $v1, $v0
    ctx->pc = 0x33a694u;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x33a698: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x33a698u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x33a69c: 0x34840002  ori         $a0, $a0, 0x2
    ctx->pc = 0x33a69cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)2);
    // 0x33a6a0: 0x704414c8  ppacw       $v0, $v0, $a0
    ctx->pc = 0x33a6a0u;
    SET_GPR_VEC(ctx, 2, PS2_PPACW(GPR_VEC(ctx, 2), GPR_VEC(ctx, 4)));
    // 0x33a6a4: 0x70621cc8  ppacw       $v1, $v1, $v0
    ctx->pc = 0x33a6a4u;
    SET_GPR_VEC(ctx, 3, PS2_PPACW(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x33a6a8: 0x8f84be20  lw          $a0, -0x41E0($gp)
    ctx->pc = 0x33a6a8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x33a6ac: 0x7c830000  sq          $v1, 0x0($a0)
    ctx->pc = 0x33a6acu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 3));
    // 0x33a6b0: 0x24840010  addiu       $a0, $a0, 0x10
    ctx->pc = 0x33a6b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x33a6b4: 0xaf84be20  sw          $a0, -0x41E0($gp)
    ctx->pc = 0x33a6b4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 4));
    // 0x33a6b8: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x33a6b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x33a6bc: 0x3183c  dsll32      $v1, $v1, 0
    ctx->pc = 0x33a6bcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 0));
    // 0x33a6c0: 0x34638001  ori         $v1, $v1, 0x8001
    ctx->pc = 0x33a6c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)32769);
    // 0x33a6c4: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x33a6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x33a6c8: 0x70431389  pcpyld      $v0, $v0, $v1
    ctx->pc = 0x33a6c8u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 3)));
    // 0x33a6cc: 0x7c820000  sq          $v0, 0x0($a0)
    ctx->pc = 0x33a6ccu;
    WRITE128(ADD32(GPR_U32(ctx, 4), 0), GPR_VEC(ctx, 2));
    // 0x33a6d0: 0x24820010  addiu       $v0, $a0, 0x10
    ctx->pc = 0x33a6d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 16));
    // 0x33a6d4: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x33a6d4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x33a6d8: 0x2403003d  addiu       $v1, $zero, 0x3D
    ctx->pc = 0x33a6d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x33a6dc: 0xdf82ae58  ld          $v0, -0x51A8($gp)
    ctx->pc = 0x33a6dcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294946392)));
    // 0x33a6e0: 0x70621389  pcpyld      $v0, $v1, $v0
    ctx->pc = 0x33a6e0u;
    SET_GPR_VEC(ctx, 2, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x33a6e4: 0x7c820010  sq          $v0, 0x10($a0)
    ctx->pc = 0x33a6e4u;
    WRITE128(ADD32(GPR_U32(ctx, 4), 16), GPR_VEC(ctx, 2));
    // 0x33a6e8: 0x24840020  addiu       $a0, $a0, 0x20
    ctx->pc = 0x33a6e8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32));
    // 0x33a6ec: 0xaf84be20  sw          $a0, -0x41E0($gp)
    ctx->pc = 0x33a6ecu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 4));
label_33a6f0:
    // 0x33a6f0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x33a6f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33a6f4: 0x7bb00330  lq          $s0, 0x330($sp)
    ctx->pc = 0x33a6f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 816)));
    // 0x33a6f8: 0x7bb10320  lq          $s1, 0x320($sp)
    ctx->pc = 0x33a6f8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 800)));
    // 0x33a6fc: 0x7bb20310  lq          $s2, 0x310($sp)
    ctx->pc = 0x33a6fcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 784)));
    // 0x33a700: 0x7bb30300  lq          $s3, 0x300($sp)
    ctx->pc = 0x33a700u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 768)));
    // 0x33a704: 0x7bb402f0  lq          $s4, 0x2F0($sp)
    ctx->pc = 0x33a704u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 752)));
    // 0x33a708: 0x7bb502e0  lq          $s5, 0x2E0($sp)
    ctx->pc = 0x33a708u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 736)));
    // 0x33a70c: 0x7bb602d0  lq          $s6, 0x2D0($sp)
    ctx->pc = 0x33a70cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 720)));
    // 0x33a710: 0x7bb702c0  lq          $s7, 0x2C0($sp)
    ctx->pc = 0x33a710u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 704)));
    // 0x33a714: 0x7bbe02b0  lq          $fp, 0x2B0($sp)
    ctx->pc = 0x33a714u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 688)));
    // 0x33a718: 0xdfbf02a0  ld          $ra, 0x2A0($sp)
    ctx->pc = 0x33a718u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 672)));
    // 0x33a71c: 0xc7b50348  lwc1        $f21, 0x348($sp)
    ctx->pc = 0x33a71cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 840)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
    // 0x33a720: 0xc7b40340  lwc1        $f20, 0x340($sp)
    ctx->pc = 0x33a720u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 832)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x33a724: 0x3e00008  jr          $ra
    ctx->pc = 0x33A724u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33A728u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x33A724u;
        // 0x33a728: 0x27bd0350  addiu       $sp, $sp, 0x350 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 848));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x33A724u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x33A72Cu;
    // 0x33a72c: 0x0  nop
    ctx->pc = 0x33a72cu;
    // NOP
    ctx->pc = 0x33a730u;
}
