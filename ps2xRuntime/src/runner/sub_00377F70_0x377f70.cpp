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

// Function: sub_00377F70
// Address: 0x377f70 - 0x3780a0
void sub_00377F70_0x377f70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00377F70_0x377f70");
#endif

    switch (ctx->pc) {
        case 0x377f70u: goto label_377f70;
        case 0x377f74u: goto label_377f74;
        case 0x377f78u: goto label_377f78;
        case 0x377f7cu: goto label_377f7c;
        case 0x377f80u: goto label_377f80;
        case 0x377f84u: goto label_377f84;
        case 0x377f88u: goto label_377f88;
        case 0x377f8cu: goto label_377f8c;
        case 0x377f90u: goto label_377f90;
        case 0x377f94u: goto label_377f94;
        case 0x377f98u: goto label_377f98;
        case 0x377f9cu: goto label_377f9c;
        case 0x377fa0u: goto label_377fa0;
        case 0x377fa4u: goto label_377fa4;
        case 0x377fa8u: goto label_377fa8;
        case 0x377facu: goto label_377fac;
        case 0x377fb0u: goto label_377fb0;
        case 0x377fb4u: goto label_377fb4;
        case 0x377fb8u: goto label_377fb8;
        case 0x377fbcu: goto label_377fbc;
        case 0x377fc0u: goto label_377fc0;
        case 0x377fc4u: goto label_377fc4;
        case 0x377fc8u: goto label_377fc8;
        case 0x377fccu: goto label_377fcc;
        case 0x377fd0u: goto label_377fd0;
        case 0x377fd4u: goto label_377fd4;
        case 0x377fd8u: goto label_377fd8;
        case 0x377fdcu: goto label_377fdc;
        case 0x377fe0u: goto label_377fe0;
        case 0x377fe4u: goto label_377fe4;
        case 0x377fe8u: goto label_377fe8;
        case 0x377fecu: goto label_377fec;
        case 0x377ff0u: goto label_377ff0;
        case 0x377ff4u: goto label_377ff4;
        case 0x377ff8u: goto label_377ff8;
        case 0x377ffcu: goto label_377ffc;
        case 0x378000u: goto label_378000;
        case 0x378004u: goto label_378004;
        case 0x378008u: goto label_378008;
        case 0x37800cu: goto label_37800c;
        case 0x378010u: goto label_378010;
        case 0x378014u: goto label_378014;
        case 0x378018u: goto label_378018;
        case 0x37801cu: goto label_37801c;
        case 0x378020u: goto label_378020;
        case 0x378024u: goto label_378024;
        case 0x378028u: goto label_378028;
        case 0x37802cu: goto label_37802c;
        case 0x378030u: goto label_378030;
        case 0x378034u: goto label_378034;
        case 0x378038u: goto label_378038;
        case 0x37803cu: goto label_37803c;
        case 0x378040u: goto label_378040;
        case 0x378044u: goto label_378044;
        case 0x378048u: goto label_378048;
        case 0x37804cu: goto label_37804c;
        case 0x378050u: goto label_378050;
        case 0x378054u: goto label_378054;
        case 0x378058u: goto label_378058;
        case 0x37805cu: goto label_37805c;
        case 0x378060u: goto label_378060;
        case 0x378064u: goto label_378064;
        case 0x378068u: goto label_378068;
        case 0x37806cu: goto label_37806c;
        case 0x378070u: goto label_378070;
        case 0x378074u: goto label_378074;
        case 0x378078u: goto label_378078;
        case 0x37807cu: goto label_37807c;
        case 0x378080u: goto label_378080;
        case 0x378084u: goto label_378084;
        case 0x378088u: goto label_378088;
        case 0x37808cu: goto label_37808c;
        case 0x378090u: goto label_378090;
        case 0x378094u: goto label_378094;
        case 0x378098u: goto label_378098;
        case 0x37809cu: goto label_37809c;
        default: break;
    }

    ctx->pc = 0x377f70u;

label_377f70:
    // 0x377f70: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x377f70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_377f74:
    // 0x377f74: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x377f74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_377f78:
    // 0x377f78: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x377f78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_377f7c:
    // 0x377f7c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x377f7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_377f80:
    // 0x377f80: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x377f80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_377f84:
    // 0x377f84: 0x8c62e988  lw          $v0, -0x1678($v1)
    ctx->pc = 0x377f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961544)));
label_377f88:
    // 0x377f88: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x377f88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_377f8c:
    // 0x377f8c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x377f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_377f90:
    // 0x377f90: 0x2404005c  addiu       $a0, $zero, 0x5C
    ctx->pc = 0x377f90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
label_377f94:
    // 0x377f94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x377f94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_377f98:
    // 0x377f98: 0x40f809  jalr        $v0
label_377f9c:
    if (ctx->pc == 0x377F9Cu) {
        ctx->pc = 0x377F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377F98u;
        // 0x377f9c: 0x34a5012a  ori         $a1, $a1, 0x12A (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)298);
        ctx->in_delay_slot = false;
        ctx->pc = 0x377FA0u;
        goto label_377fa0;
    }
    ctx->pc = 0x377F98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x377FA0u);
        ctx->pc = 0x377F9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377F98u;
        // 0x377f9c: 0x34a5012a  ori         $a1, $a1, 0x12A (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)298);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x377F98u, 0x377FA0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x377FA0u;
label_377fa0:
    // 0x377fa0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x377fa0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_377fa4:
    // 0x377fa4: 0x2041025  or          $v0, $s0, $a0
    ctx->pc = 0x377fa4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 4));
label_377fa8:
    // 0x377fa8: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x377fa8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_377fac:
    // 0x377fac: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_377fb0:
    if (ctx->pc == 0x377FB0u) {
        ctx->pc = 0x377FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377FACu;
        // 0x377fb0: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x377FB4u;
        goto label_377fb4;
    }
    ctx->pc = 0x377FACu;
    {
        const bool branch_taken_0x377fac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x377FB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377FACu;
        // 0x377fb0: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377fac) {
            ctx->pc = 0x37800Cu;
            goto label_37800c;
        }
    }
    ctx->pc = 0x377FB4u;
label_377fb4:
    // 0x377fb4: 0x26020040  addiu       $v0, $s0, 0x40
    ctx->pc = 0x377fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_377fb8:
    // 0x377fb8: 0x6a050007  ldl         $a1, 0x7($s0)
    ctx->pc = 0x377fb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_377fbc:
    // 0x377fbc: 0x6e050000  ldr         $a1, 0x0($s0)
    ctx->pc = 0x377fbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_377fc0:
    // 0x377fc0: 0x6a06000f  ldl         $a2, 0xF($s0)
    ctx->pc = 0x377fc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_377fc4:
    // 0x377fc4: 0x6e060008  ldr         $a2, 0x8($s0)
    ctx->pc = 0x377fc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_377fc8:
    // 0x377fc8: 0x6a070017  ldl         $a3, 0x17($s0)
    ctx->pc = 0x377fc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_377fcc:
    // 0x377fcc: 0x6e070010  ldr         $a3, 0x10($s0)
    ctx->pc = 0x377fccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_377fd0:
    // 0x377fd0: 0x6a08001f  ldl         $t0, 0x1F($s0)
    ctx->pc = 0x377fd0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_377fd4:
    // 0x377fd4: 0x6e080018  ldr         $t0, 0x18($s0)
    ctx->pc = 0x377fd4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_377fd8:
    // 0x377fd8: 0xb0650007  sdl         $a1, 0x7($v1)
    ctx->pc = 0x377fd8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_377fdc:
    // 0x377fdc: 0xb4650000  sdr         $a1, 0x0($v1)
    ctx->pc = 0x377fdcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_377fe0:
    // 0x377fe0: 0xb066000f  sdl         $a2, 0xF($v1)
    ctx->pc = 0x377fe0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_377fe4:
    // 0x377fe4: 0xb4660008  sdr         $a2, 0x8($v1)
    ctx->pc = 0x377fe4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_377fe8:
    // 0x377fe8: 0xb0670017  sdl         $a3, 0x17($v1)
    ctx->pc = 0x377fe8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_377fec:
    // 0x377fec: 0xb4670010  sdr         $a3, 0x10($v1)
    ctx->pc = 0x377fecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_377ff0:
    // 0x377ff0: 0xb068001f  sdl         $t0, 0x1F($v1)
    ctx->pc = 0x377ff0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_377ff4:
    // 0x377ff4: 0xb4680018  sdr         $t0, 0x18($v1)
    ctx->pc = 0x377ff4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_377ff8:
    // 0x377ff8: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x377ff8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_377ffc:
    // 0x377ffc: 0x1602ffee  bne         $s0, $v0, . + 4 + (-0x12 << 2)
label_378000:
    if (ctx->pc == 0x378000u) {
        ctx->pc = 0x378000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377FFCu;
        // 0x378000: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378004u;
        goto label_378004;
    }
    ctx->pc = 0x377FFCu;
    {
        const bool branch_taken_0x377ffc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x378000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x377FFCu;
        // 0x378000: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x377ffc) {
            ctx->pc = 0x377FB8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_377fb8;
        }
    }
    ctx->pc = 0x378004u;
label_378004:
    // 0x378004: 0x1000000d  b           . + 4 + (0xD << 2)
label_378008:
    if (ctx->pc == 0x378008u) {
        ctx->pc = 0x37800Cu;
        goto label_37800c;
    }
    ctx->pc = 0x378004u;
    {
        const bool branch_taken_0x378004 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x378004) {
            ctx->pc = 0x37803Cu;
            goto label_37803c;
        }
    }
    ctx->pc = 0x37800Cu;
label_37800c:
    // 0x37800c: 0x26020040  addiu       $v0, $s0, 0x40
    ctx->pc = 0x37800cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_378010:
    // 0x378010: 0xde050000  ld          $a1, 0x0($s0)
    ctx->pc = 0x378010u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 0)));
label_378014:
    // 0x378014: 0xde060008  ld          $a2, 0x8($s0)
    ctx->pc = 0x378014u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 16), 8)));
label_378018:
    // 0x378018: 0xde070010  ld          $a3, 0x10($s0)
    ctx->pc = 0x378018u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 16), 16)));
label_37801c:
    // 0x37801c: 0xde080018  ld          $t0, 0x18($s0)
    ctx->pc = 0x37801cu;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 16), 24)));
label_378020:
    // 0x378020: 0xfc650000  sd          $a1, 0x0($v1)
    ctx->pc = 0x378020u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 5));
label_378024:
    // 0x378024: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x378024u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
label_378028:
    // 0x378028: 0xfc670010  sd          $a3, 0x10($v1)
    ctx->pc = 0x378028u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 7));
label_37802c:
    // 0x37802c: 0xfc680018  sd          $t0, 0x18($v1)
    ctx->pc = 0x37802cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 8));
label_378030:
    // 0x378030: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x378030u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_378034:
    // 0x378034: 0x1602fff6  bne         $s0, $v0, . + 4 + (-0xA << 2)
label_378038:
    if (ctx->pc == 0x378038u) {
        ctx->pc = 0x378038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378034u;
        // 0x378038: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37803Cu;
        goto label_37803c;
    }
    ctx->pc = 0x378034u;
    {
        const bool branch_taken_0x378034 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x378038u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378034u;
        // 0x378038: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378034) {
            ctx->pc = 0x378010u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_378010;
        }
    }
    ctx->pc = 0x37803Cu;
label_37803c:
    // 0x37803c: 0x6a020007  ldl         $v0, 0x7($s0)
    ctx->pc = 0x37803cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_378040:
    // 0x378040: 0x6e020000  ldr         $v0, 0x0($s0)
    ctx->pc = 0x378040u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_378044:
    // 0x378044: 0x6a05000f  ldl         $a1, 0xF($s0)
    ctx->pc = 0x378044u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_378048:
    // 0x378048: 0x6e050008  ldr         $a1, 0x8($s0)
    ctx->pc = 0x378048u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_37804c:
    // 0x37804c: 0x6a060017  ldl         $a2, 0x17($s0)
    ctx->pc = 0x37804cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_378050:
    // 0x378050: 0x6e060010  ldr         $a2, 0x10($s0)
    ctx->pc = 0x378050u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_378054:
    // 0x378054: 0xb0620007  sdl         $v0, 0x7($v1)
    ctx->pc = 0x378054u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_378058:
    // 0x378058: 0xb4620000  sdr         $v0, 0x0($v1)
    ctx->pc = 0x378058u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_37805c:
    // 0x37805c: 0xb065000f  sdl         $a1, 0xF($v1)
    ctx->pc = 0x37805cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_378060:
    // 0x378060: 0xb4650008  sdr         $a1, 0x8($v1)
    ctx->pc = 0x378060u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_378064:
    // 0x378064: 0xb0660017  sdl         $a2, 0x17($v1)
    ctx->pc = 0x378064u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_378068:
    // 0x378068: 0xb4660010  sdr         $a2, 0x10($v1)
    ctx->pc = 0x378068u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_37806c:
    // 0x37806c: 0xac800058  sw          $zero, 0x58($a0)
    ctx->pc = 0x37806cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 0));
label_378070:
    // 0x378070: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x378070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_378074:
    // 0x378074: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_378078:
    if (ctx->pc == 0x378078u) {
        ctx->pc = 0x378078u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378074u;
        // 0x378078: 0xae240000  sw          $a0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37807Cu;
        goto label_37807c;
    }
    ctx->pc = 0x378074u;
    {
        const bool branch_taken_0x378074 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x378074) {
            ctx->pc = 0x378078u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x378074u;
            // 0x378078: 0xae240000  sw          $a0, 0x0($s1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x37808Cu;
            goto label_37808c;
        }
    }
    ctx->pc = 0x37807Cu;
label_37807c:
    // 0x37807c: 0xac440058  sw          $a0, 0x58($v0)
    ctx->pc = 0x37807cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 4));
label_378080:
    // 0x378080: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x378080u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_378084:
    // 0x378084: 0x8c430058  lw          $v1, 0x58($v0)
    ctx->pc = 0x378084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_378088:
    // 0x378088: 0xae230000  sw          $v1, 0x0($s1)
    ctx->pc = 0x378088u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 3));
label_37808c:
    // 0x37808c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x37808cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_378090:
    // 0x378090: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x378090u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_378094:
    // 0x378094: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x378094u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_378098:
    // 0x378098: 0x3e00008  jr          $ra
label_37809c:
    if (ctx->pc == 0x37809Cu) {
        ctx->pc = 0x37809Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378098u;
        // 0x37809c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3780A0u;
        goto label_fallthrough_0x378098;
    }
    ctx->pc = 0x378098u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x37809Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378098u;
        // 0x37809c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x378098u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x378098:
    ctx->pc = 0x3780A0u;
}
