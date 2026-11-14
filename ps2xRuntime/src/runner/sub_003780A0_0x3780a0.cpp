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

// Function: sub_003780A0
// Address: 0x3780a0 - 0x3781b0
void sub_003780A0_0x3780a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003780A0_0x3780a0");
#endif

    switch (ctx->pc) {
        case 0x3780a0u: goto label_3780a0;
        case 0x3780a4u: goto label_3780a4;
        case 0x3780a8u: goto label_3780a8;
        case 0x3780acu: goto label_3780ac;
        case 0x3780b0u: goto label_3780b0;
        case 0x3780b4u: goto label_3780b4;
        case 0x3780b8u: goto label_3780b8;
        case 0x3780bcu: goto label_3780bc;
        case 0x3780c0u: goto label_3780c0;
        case 0x3780c4u: goto label_3780c4;
        case 0x3780c8u: goto label_3780c8;
        case 0x3780ccu: goto label_3780cc;
        case 0x3780d0u: goto label_3780d0;
        case 0x3780d4u: goto label_3780d4;
        case 0x3780d8u: goto label_3780d8;
        case 0x3780dcu: goto label_3780dc;
        case 0x3780e0u: goto label_3780e0;
        case 0x3780e4u: goto label_3780e4;
        case 0x3780e8u: goto label_3780e8;
        case 0x3780ecu: goto label_3780ec;
        case 0x3780f0u: goto label_3780f0;
        case 0x3780f4u: goto label_3780f4;
        case 0x3780f8u: goto label_3780f8;
        case 0x3780fcu: goto label_3780fc;
        case 0x378100u: goto label_378100;
        case 0x378104u: goto label_378104;
        case 0x378108u: goto label_378108;
        case 0x37810cu: goto label_37810c;
        case 0x378110u: goto label_378110;
        case 0x378114u: goto label_378114;
        case 0x378118u: goto label_378118;
        case 0x37811cu: goto label_37811c;
        case 0x378120u: goto label_378120;
        case 0x378124u: goto label_378124;
        case 0x378128u: goto label_378128;
        case 0x37812cu: goto label_37812c;
        case 0x378130u: goto label_378130;
        case 0x378134u: goto label_378134;
        case 0x378138u: goto label_378138;
        case 0x37813cu: goto label_37813c;
        case 0x378140u: goto label_378140;
        case 0x378144u: goto label_378144;
        case 0x378148u: goto label_378148;
        case 0x37814cu: goto label_37814c;
        case 0x378150u: goto label_378150;
        case 0x378154u: goto label_378154;
        case 0x378158u: goto label_378158;
        case 0x37815cu: goto label_37815c;
        case 0x378160u: goto label_378160;
        case 0x378164u: goto label_378164;
        case 0x378168u: goto label_378168;
        case 0x37816cu: goto label_37816c;
        case 0x378170u: goto label_378170;
        case 0x378174u: goto label_378174;
        case 0x378178u: goto label_378178;
        case 0x37817cu: goto label_37817c;
        case 0x378180u: goto label_378180;
        case 0x378184u: goto label_378184;
        case 0x378188u: goto label_378188;
        case 0x37818cu: goto label_37818c;
        case 0x378190u: goto label_378190;
        case 0x378194u: goto label_378194;
        case 0x378198u: goto label_378198;
        case 0x37819cu: goto label_37819c;
        case 0x3781a0u: goto label_3781a0;
        case 0x3781a4u: goto label_3781a4;
        case 0x3781a8u: goto label_3781a8;
        case 0x3781acu: goto label_3781ac;
        default: break;
    }

    ctx->pc = 0x3780a0u;

label_3780a0:
    // 0x3780a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x3780a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_3780a4:
    // 0x3780a4: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x3780a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_3780a8:
    // 0x3780a8: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x3780a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_3780ac:
    // 0x3780ac: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3780acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_3780b0:
    // 0x3780b0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x3780b0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3780b4:
    // 0x3780b4: 0x8c62e988  lw          $v0, -0x1678($v1)
    ctx->pc = 0x3780b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961544)));
label_3780b8:
    // 0x3780b8: 0x2404005c  addiu       $a0, $zero, 0x5C
    ctx->pc = 0x3780b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
label_3780bc:
    // 0x3780bc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x3780bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_3780c0:
    // 0x3780c0: 0x40f809  jalr        $v0
label_3780c4:
    if (ctx->pc == 0x3780C4u) {
        ctx->pc = 0x3780C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3780C0u;
        // 0x3780c4: 0x34a5012a  ori         $a1, $a1, 0x12A (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)298);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3780C8u;
        goto label_3780c8;
    }
    ctx->pc = 0x3780C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3780C8u);
        ctx->pc = 0x3780C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3780C0u;
        // 0x3780c4: 0x34a5012a  ori         $a1, $a1, 0x12A (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)298);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3780C0u, 0x3780C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3780C8u;
label_3780c8:
    // 0x3780c8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x3780c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3780cc:
    // 0x3780cc: 0x2041025  or          $v0, $s0, $a0
    ctx->pc = 0x3780ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 4));
label_3780d0:
    // 0x3780d0: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x3780d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
label_3780d4:
    // 0x3780d4: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
label_3780d8:
    if (ctx->pc == 0x3780D8u) {
        ctx->pc = 0x3780D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3780D4u;
        // 0x3780d8: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3780DCu;
        goto label_3780dc;
    }
    ctx->pc = 0x3780D4u;
    {
        const bool branch_taken_0x3780d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3780D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3780D4u;
        // 0x3780d8: 0x80182d  daddu       $v1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3780d4) {
            ctx->pc = 0x378134u;
            goto label_378134;
        }
    }
    ctx->pc = 0x3780DCu;
label_3780dc:
    // 0x3780dc: 0x26020040  addiu       $v0, $s0, 0x40
    ctx->pc = 0x3780dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_3780e0:
    // 0x3780e0: 0x6a050007  ldl         $a1, 0x7($s0)
    ctx->pc = 0x3780e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_3780e4:
    // 0x3780e4: 0x6e050000  ldr         $a1, 0x0($s0)
    ctx->pc = 0x3780e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_3780e8:
    // 0x3780e8: 0x6a06000f  ldl         $a2, 0xF($s0)
    ctx->pc = 0x3780e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_3780ec:
    // 0x3780ec: 0x6e060008  ldr         $a2, 0x8($s0)
    ctx->pc = 0x3780ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_3780f0:
    // 0x3780f0: 0x6a070017  ldl         $a3, 0x17($s0)
    ctx->pc = 0x3780f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_3780f4:
    // 0x3780f4: 0x6e070010  ldr         $a3, 0x10($s0)
    ctx->pc = 0x3780f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_3780f8:
    // 0x3780f8: 0x6a08001f  ldl         $t0, 0x1F($s0)
    ctx->pc = 0x3780f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
label_3780fc:
    // 0x3780fc: 0x6e080018  ldr         $t0, 0x18($s0)
    ctx->pc = 0x3780fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
label_378100:
    // 0x378100: 0xb0650007  sdl         $a1, 0x7($v1)
    ctx->pc = 0x378100u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_378104:
    // 0x378104: 0xb4650000  sdr         $a1, 0x0($v1)
    ctx->pc = 0x378104u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_378108:
    // 0x378108: 0xb066000f  sdl         $a2, 0xF($v1)
    ctx->pc = 0x378108u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_37810c:
    // 0x37810c: 0xb4660008  sdr         $a2, 0x8($v1)
    ctx->pc = 0x37810cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_378110:
    // 0x378110: 0xb0670017  sdl         $a3, 0x17($v1)
    ctx->pc = 0x378110u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_378114:
    // 0x378114: 0xb4670010  sdr         $a3, 0x10($v1)
    ctx->pc = 0x378114u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_378118:
    // 0x378118: 0xb068001f  sdl         $t0, 0x1F($v1)
    ctx->pc = 0x378118u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_37811c:
    // 0x37811c: 0xb4680018  sdr         $t0, 0x18($v1)
    ctx->pc = 0x37811cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_378120:
    // 0x378120: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x378120u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_378124:
    // 0x378124: 0x1602ffee  bne         $s0, $v0, . + 4 + (-0x12 << 2)
label_378128:
    if (ctx->pc == 0x378128u) {
        ctx->pc = 0x378128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378124u;
        // 0x378128: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x37812Cu;
        goto label_37812c;
    }
    ctx->pc = 0x378124u;
    {
        const bool branch_taken_0x378124 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x378128u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x378124u;
        // 0x378128: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x378124) {
            ctx->pc = 0x3780E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3780e0;
        }
    }
    ctx->pc = 0x37812Cu;
label_37812c:
    // 0x37812c: 0x1000000d  b           . + 4 + (0xD << 2)
label_378130:
    if (ctx->pc == 0x378130u) {
        ctx->pc = 0x378134u;
        goto label_378134;
    }
    ctx->pc = 0x37812Cu;
    {
        const bool branch_taken_0x37812c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x37812c) {
            ctx->pc = 0x378164u;
            goto label_378164;
        }
    }
    ctx->pc = 0x378134u;
label_378134:
    // 0x378134: 0x26020040  addiu       $v0, $s0, 0x40
    ctx->pc = 0x378134u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 64));
label_378138:
    // 0x378138: 0xde050000  ld          $a1, 0x0($s0)
    ctx->pc = 0x378138u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 16), 0)));
label_37813c:
    // 0x37813c: 0xde060008  ld          $a2, 0x8($s0)
    ctx->pc = 0x37813cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 16), 8)));
label_378140:
    // 0x378140: 0xde070010  ld          $a3, 0x10($s0)
    ctx->pc = 0x378140u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 16), 16)));
label_378144:
    // 0x378144: 0xde080018  ld          $t0, 0x18($s0)
    ctx->pc = 0x378144u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 16), 24)));
label_378148:
    // 0x378148: 0xfc650000  sd          $a1, 0x0($v1)
    ctx->pc = 0x378148u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 5));
label_37814c:
    // 0x37814c: 0xfc660008  sd          $a2, 0x8($v1)
    ctx->pc = 0x37814cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 8), GPR_U64(ctx, 6));
label_378150:
    // 0x378150: 0xfc670010  sd          $a3, 0x10($v1)
    ctx->pc = 0x378150u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 16), GPR_U64(ctx, 7));
label_378154:
    // 0x378154: 0xfc680018  sd          $t0, 0x18($v1)
    ctx->pc = 0x378154u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 24), GPR_U64(ctx, 8));
label_378158:
    // 0x378158: 0x26100020  addiu       $s0, $s0, 0x20
    ctx->pc = 0x378158u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 32));
label_37815c:
    // 0x37815c: 0x1602fff6  bne         $s0, $v0, . + 4 + (-0xA << 2)
label_378160:
    if (ctx->pc == 0x378160u) {
        ctx->pc = 0x378160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37815Cu;
        // 0x378160: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x378164u;
        goto label_378164;
    }
    ctx->pc = 0x37815Cu;
    {
        const bool branch_taken_0x37815c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x378160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x37815Cu;
        // 0x378160: 0x24630020  addiu       $v1, $v1, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x37815c) {
            ctx->pc = 0x378138u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_378138;
        }
    }
    ctx->pc = 0x378164u;
label_378164:
    // 0x378164: 0x6a020007  ldl         $v0, 0x7($s0)
    ctx->pc = 0x378164u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_378168:
    // 0x378168: 0x6e020000  ldr         $v0, 0x0($s0)
    ctx->pc = 0x378168u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_37816c:
    // 0x37816c: 0x6a05000f  ldl         $a1, 0xF($s0)
    ctx->pc = 0x37816cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
label_378170:
    // 0x378170: 0x6e050008  ldr         $a1, 0x8($s0)
    ctx->pc = 0x378170u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
label_378174:
    // 0x378174: 0x6a060017  ldl         $a2, 0x17($s0)
    ctx->pc = 0x378174u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_378178:
    // 0x378178: 0x6e060010  ldr         $a2, 0x10($s0)
    ctx->pc = 0x378178u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_37817c:
    // 0x37817c: 0xb0620007  sdl         $v0, 0x7($v1)
    ctx->pc = 0x37817cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_378180:
    // 0x378180: 0xb4620000  sdr         $v0, 0x0($v1)
    ctx->pc = 0x378180u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_378184:
    // 0x378184: 0xb065000f  sdl         $a1, 0xF($v1)
    ctx->pc = 0x378184u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_378188:
    // 0x378188: 0xb4650008  sdr         $a1, 0x8($v1)
    ctx->pc = 0x378188u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_37818c:
    // 0x37818c: 0xb0660017  sdl         $a2, 0x17($v1)
    ctx->pc = 0x37818cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_378190:
    // 0x378190: 0xb4660010  sdr         $a2, 0x10($v1)
    ctx->pc = 0x378190u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_378194:
    // 0x378194: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x378194u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_378198:
    // 0x378198: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x378198u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_37819c:
    // 0x37819c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x37819cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_3781a0:
    // 0x3781a0: 0xac800058  sw          $zero, 0x58($a0)
    ctx->pc = 0x3781a0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 88), GPR_U32(ctx, 0));
label_3781a4:
    // 0x3781a4: 0x3e00008  jr          $ra
label_3781a8:
    if (ctx->pc == 0x3781A8u) {
        ctx->pc = 0x3781A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3781A4u;
        // 0x3781a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3781ACu;
        goto label_3781ac;
    }
    ctx->pc = 0x3781A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3781A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3781A4u;
        // 0x3781a8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3781A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3781ACu;
label_3781ac:
    // 0x3781ac: 0x0  nop
    ctx->pc = 0x3781acu;
    // NOP
    ctx->pc = 0x3781b0u;
}
