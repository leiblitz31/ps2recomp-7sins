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

// Function: sub_00312568
// Address: 0x312568 - 0x312818
void sub_00312568_0x312568(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00312568_0x312568");
#endif

    switch (ctx->pc) {
        case 0x312568u: goto label_312568;
        case 0x31256cu: goto label_31256c;
        case 0x312570u: goto label_312570;
        case 0x312574u: goto label_312574;
        case 0x312578u: goto label_312578;
        case 0x31257cu: goto label_31257c;
        case 0x312580u: goto label_312580;
        case 0x312584u: goto label_312584;
        case 0x312588u: goto label_312588;
        case 0x31258cu: goto label_31258c;
        case 0x312590u: goto label_312590;
        case 0x312594u: goto label_312594;
        case 0x312598u: goto label_312598;
        case 0x31259cu: goto label_31259c;
        case 0x3125a0u: goto label_3125a0;
        case 0x3125a4u: goto label_3125a4;
        case 0x3125a8u: goto label_3125a8;
        case 0x3125acu: goto label_3125ac;
        case 0x3125b0u: goto label_3125b0;
        case 0x3125b4u: goto label_3125b4;
        case 0x3125b8u: goto label_3125b8;
        case 0x3125bcu: goto label_3125bc;
        case 0x3125c0u: goto label_3125c0;
        case 0x3125c4u: goto label_3125c4;
        case 0x3125c8u: goto label_3125c8;
        case 0x3125ccu: goto label_3125cc;
        case 0x3125d0u: goto label_3125d0;
        case 0x3125d4u: goto label_3125d4;
        case 0x3125d8u: goto label_3125d8;
        case 0x3125dcu: goto label_3125dc;
        case 0x3125e0u: goto label_3125e0;
        case 0x3125e4u: goto label_3125e4;
        case 0x3125e8u: goto label_3125e8;
        case 0x3125ecu: goto label_3125ec;
        case 0x3125f0u: goto label_3125f0;
        case 0x3125f4u: goto label_3125f4;
        case 0x3125f8u: goto label_3125f8;
        case 0x3125fcu: goto label_3125fc;
        case 0x312600u: goto label_312600;
        case 0x312604u: goto label_312604;
        case 0x312608u: goto label_312608;
        case 0x31260cu: goto label_31260c;
        case 0x312610u: goto label_312610;
        case 0x312614u: goto label_312614;
        case 0x312618u: goto label_312618;
        case 0x31261cu: goto label_31261c;
        case 0x312620u: goto label_312620;
        case 0x312624u: goto label_312624;
        case 0x312628u: goto label_312628;
        case 0x31262cu: goto label_31262c;
        case 0x312630u: goto label_312630;
        case 0x312634u: goto label_312634;
        case 0x312638u: goto label_312638;
        case 0x31263cu: goto label_31263c;
        case 0x312640u: goto label_312640;
        case 0x312644u: goto label_312644;
        case 0x312648u: goto label_312648;
        case 0x31264cu: goto label_31264c;
        case 0x312650u: goto label_312650;
        case 0x312654u: goto label_312654;
        case 0x312658u: goto label_312658;
        case 0x31265cu: goto label_31265c;
        case 0x312660u: goto label_312660;
        case 0x312664u: goto label_312664;
        case 0x312668u: goto label_312668;
        case 0x31266cu: goto label_31266c;
        case 0x312670u: goto label_312670;
        case 0x312674u: goto label_312674;
        case 0x312678u: goto label_312678;
        case 0x31267cu: goto label_31267c;
        case 0x312680u: goto label_312680;
        case 0x312684u: goto label_312684;
        case 0x312688u: goto label_312688;
        case 0x31268cu: goto label_31268c;
        case 0x312690u: goto label_312690;
        case 0x312694u: goto label_312694;
        case 0x312698u: goto label_312698;
        case 0x31269cu: goto label_31269c;
        case 0x3126a0u: goto label_3126a0;
        case 0x3126a4u: goto label_3126a4;
        case 0x3126a8u: goto label_3126a8;
        case 0x3126acu: goto label_3126ac;
        case 0x3126b0u: goto label_3126b0;
        case 0x3126b4u: goto label_3126b4;
        case 0x3126b8u: goto label_3126b8;
        case 0x3126bcu: goto label_3126bc;
        case 0x3126c0u: goto label_3126c0;
        case 0x3126c4u: goto label_3126c4;
        case 0x3126c8u: goto label_3126c8;
        case 0x3126ccu: goto label_3126cc;
        case 0x3126d0u: goto label_3126d0;
        case 0x3126d4u: goto label_3126d4;
        case 0x3126d8u: goto label_3126d8;
        case 0x3126dcu: goto label_3126dc;
        case 0x3126e0u: goto label_3126e0;
        case 0x3126e4u: goto label_3126e4;
        case 0x3126e8u: goto label_3126e8;
        case 0x3126ecu: goto label_3126ec;
        case 0x3126f0u: goto label_3126f0;
        case 0x3126f4u: goto label_3126f4;
        case 0x3126f8u: goto label_3126f8;
        case 0x3126fcu: goto label_3126fc;
        case 0x312700u: goto label_312700;
        case 0x312704u: goto label_312704;
        case 0x312708u: goto label_312708;
        case 0x31270cu: goto label_31270c;
        case 0x312710u: goto label_312710;
        case 0x312714u: goto label_312714;
        case 0x312718u: goto label_312718;
        case 0x31271cu: goto label_31271c;
        case 0x312720u: goto label_312720;
        case 0x312724u: goto label_312724;
        case 0x312728u: goto label_312728;
        case 0x31272cu: goto label_31272c;
        case 0x312730u: goto label_312730;
        case 0x312734u: goto label_312734;
        case 0x312738u: goto label_312738;
        case 0x31273cu: goto label_31273c;
        case 0x312740u: goto label_312740;
        case 0x312744u: goto label_312744;
        case 0x312748u: goto label_312748;
        case 0x31274cu: goto label_31274c;
        case 0x312750u: goto label_312750;
        case 0x312754u: goto label_312754;
        case 0x312758u: goto label_312758;
        case 0x31275cu: goto label_31275c;
        case 0x312760u: goto label_312760;
        case 0x312764u: goto label_312764;
        case 0x312768u: goto label_312768;
        case 0x31276cu: goto label_31276c;
        case 0x312770u: goto label_312770;
        case 0x312774u: goto label_312774;
        case 0x312778u: goto label_312778;
        case 0x31277cu: goto label_31277c;
        case 0x312780u: goto label_312780;
        case 0x312784u: goto label_312784;
        case 0x312788u: goto label_312788;
        case 0x31278cu: goto label_31278c;
        case 0x312790u: goto label_312790;
        case 0x312794u: goto label_312794;
        case 0x312798u: goto label_312798;
        case 0x31279cu: goto label_31279c;
        case 0x3127a0u: goto label_3127a0;
        case 0x3127a4u: goto label_3127a4;
        case 0x3127a8u: goto label_3127a8;
        case 0x3127acu: goto label_3127ac;
        case 0x3127b0u: goto label_3127b0;
        case 0x3127b4u: goto label_3127b4;
        case 0x3127b8u: goto label_3127b8;
        case 0x3127bcu: goto label_3127bc;
        case 0x3127c0u: goto label_3127c0;
        case 0x3127c4u: goto label_3127c4;
        case 0x3127c8u: goto label_3127c8;
        case 0x3127ccu: goto label_3127cc;
        case 0x3127d0u: goto label_3127d0;
        case 0x3127d4u: goto label_3127d4;
        case 0x3127d8u: goto label_3127d8;
        case 0x3127dcu: goto label_3127dc;
        case 0x3127e0u: goto label_3127e0;
        case 0x3127e4u: goto label_3127e4;
        case 0x3127e8u: goto label_3127e8;
        case 0x3127ecu: goto label_3127ec;
        case 0x3127f0u: goto label_3127f0;
        case 0x3127f4u: goto label_3127f4;
        case 0x3127f8u: goto label_3127f8;
        case 0x3127fcu: goto label_3127fc;
        case 0x312800u: goto label_312800;
        case 0x312804u: goto label_312804;
        case 0x312808u: goto label_312808;
        case 0x31280cu: goto label_31280c;
        case 0x312810u: goto label_312810;
        case 0x312814u: goto label_312814;
        default: break;
    }

    ctx->pc = 0x312568u;

label_312568:
    // 0x312568: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x312568u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
label_31256c:
    // 0x31256c: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x31256cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_312570:
    // 0x312570: 0x7fb60090  sq          $s6, 0x90($sp)
    ctx->pc = 0x312570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 22));
label_312574:
    // 0x312574: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x312574u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_312578:
    // 0x312578: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x312578u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_31257c:
    // 0x31257c: 0x7fb000f0  sq          $s0, 0xF0($sp)
    ctx->pc = 0x31257cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 240), GPR_VEC(ctx, 16));
label_312580:
    // 0x312580: 0x7fb100e0  sq          $s1, 0xE0($sp)
    ctx->pc = 0x312580u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 224), GPR_VEC(ctx, 17));
label_312584:
    // 0x312584: 0x7fb200d0  sq          $s2, 0xD0($sp)
    ctx->pc = 0x312584u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 208), GPR_VEC(ctx, 18));
label_312588:
    // 0x312588: 0x7fb300c0  sq          $s3, 0xC0($sp)
    ctx->pc = 0x312588u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 192), GPR_VEC(ctx, 19));
label_31258c:
    // 0x31258c: 0x7fb400b0  sq          $s4, 0xB0($sp)
    ctx->pc = 0x31258cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 20));
label_312590:
    // 0x312590: 0x7fb500a0  sq          $s5, 0xA0($sp)
    ctx->pc = 0x312590u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 21));
label_312594:
    // 0x312594: 0x7fb70080  sq          $s7, 0x80($sp)
    ctx->pc = 0x312594u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 23));
label_312598:
    // 0x312598: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x312598u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_31259c:
    // 0x31259c: 0xc103322  jal         func_40CC88
label_3125a0:
    if (ctx->pc == 0x3125A0u) {
        ctx->pc = 0x3125A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31259Cu;
        // 0x3125a0: 0x27a70060  addiu       $a3, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3125A4u;
        goto label_3125a4;
    }
    ctx->pc = 0x31259Cu;
    SET_GPR_U32(ctx, 31, 0x3125A4u);
    ctx->pc = 0x3125A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31259Cu;
    // 0x3125a0: 0x27a70060  addiu       $a3, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40CC88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40CC88u, 0x31259Cu, 0x3125A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3125A4u;
label_3125a4:
    // 0x3125a4: 0x1040008d  beqz        $v0, . + 4 + (0x8D << 2)
label_3125a8:
    if (ctx->pc == 0x3125A8u) {
        ctx->pc = 0x3125A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3125A4u;
        // 0x3125a8: 0x24100024  addiu       $s0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3125ACu;
        goto label_3125ac;
    }
    ctx->pc = 0x3125A4u;
    {
        const bool branch_taken_0x3125a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3125A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3125A4u;
        // 0x3125a8: 0x24100024  addiu       $s0, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3125a4) {
            ctx->pc = 0x3127DCu;
            goto label_3127dc;
        }
    }
    ctx->pc = 0x3125ACu;
label_3125ac:
    // 0x3125ac: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x3125acu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_3125b0:
    // 0x3125b0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x3125b0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3125b4:
    // 0x3125b4: 0xc10480a  jal         func_412028
label_3125b8:
    if (ctx->pc == 0x3125B8u) {
        ctx->pc = 0x3125B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3125B4u;
        // 0x3125b8: 0x24060024  addiu       $a2, $zero, 0x24 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3125BCu;
        goto label_3125bc;
    }
    ctx->pc = 0x3125B4u;
    SET_GPR_U32(ctx, 31, 0x3125BCu);
    ctx->pc = 0x3125B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3125B4u;
    // 0x3125b8: 0x24060024  addiu       $a2, $zero, 0x24 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 36));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412028u, 0x3125B4u, 0x3125BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3125BCu;
label_3125bc:
    // 0x3125bc: 0x1450008a  bne         $v0, $s0, . + 4 + (0x8A << 2)
label_3125c0:
    if (ctx->pc == 0x3125C0u) {
        ctx->pc = 0x3125C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3125BCu;
        // 0x3125c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3125C4u;
        goto label_3125c4;
    }
    ctx->pc = 0x3125BCu;
    {
        const bool branch_taken_0x3125bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x3125C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3125BCu;
        // 0x3125c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3125bc) {
            ctx->pc = 0x3127E8u;
            goto label_3127e8;
        }
    }
    ctx->pc = 0x3125C4u;
label_3125c4:
    // 0x3125c4: 0x6ba2000b  ldl         $v0, 0xB($sp)
    ctx->pc = 0x3125c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_3125c8:
    // 0x3125c8: 0x6fa20004  ldr         $v0, 0x4($sp)
    ctx->pc = 0x3125c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_3125cc:
    // 0x3125cc: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x3125ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
label_3125d0:
    // 0x3125d0: 0xb3a20043  sdl         $v0, 0x43($sp)
    ctx->pc = 0x3125d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 67); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3125d4:
    // 0x3125d4: 0xb7a2003c  sdr         $v0, 0x3C($sp)
    ctx->pc = 0x3125d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 60); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3125d8:
    // 0x3125d8: 0xafa30044  sw          $v1, 0x44($sp)
    ctx->pc = 0x3125d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
label_3125dc:
    // 0x3125dc: 0x27b40050  addiu       $s4, $sp, 0x50
    ctx->pc = 0x3125dcu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_3125e0:
    // 0x3125e0: 0x6ba60017  ldl         $a2, 0x17($sp)
    ctx->pc = 0x3125e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_3125e4:
    // 0x3125e4: 0x6fa60010  ldr         $a2, 0x10($sp)
    ctx->pc = 0x3125e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_3125e8:
    // 0x3125e8: 0x8fa70018  lw          $a3, 0x18($sp)
    ctx->pc = 0x3125e8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 24)));
label_3125ec:
    // 0x3125ec: 0xb3a60037  sdl         $a2, 0x37($sp)
    ctx->pc = 0x3125ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3125f0:
    // 0x3125f0: 0xb7a60030  sdr         $a2, 0x30($sp)
    ctx->pc = 0x3125f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3125f4:
    // 0x3125f4: 0xafa70038  sw          $a3, 0x38($sp)
    ctx->pc = 0x3125f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 56), GPR_U32(ctx, 7));
label_3125f8:
    // 0x3125f8: 0x24110028  addiu       $s1, $zero, 0x28
    ctx->pc = 0x3125f8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 40));
label_3125fc:
    // 0x3125fc: 0x97b00020  lhu         $s0, 0x20($sp)
    ctx->pc = 0x3125fcu;
    SET_GPR_ZE32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
label_312600:
    // 0x312600: 0x97b3001c  lhu         $s3, 0x1C($sp)
    ctx->pc = 0x312600u;
    SET_GPR_ZE32(ctx, 19, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 28)));
label_312604:
    // 0x312604: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
label_312608:
    if (ctx->pc == 0x312608u) {
        ctx->pc = 0x312608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312604u;
        // 0x312608: 0x8fb20000  lw          $s2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31260Cu;
        goto label_31260c;
    }
    ctx->pc = 0x312604u;
    {
        const bool branch_taken_0x312604 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x312608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312604u;
        // 0x312608: 0x8fb20000  lw          $s2, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312604) {
            ctx->pc = 0x312614u;
            goto label_312614;
        }
    }
    ctx->pc = 0x31260Cu;
label_31260c:
    // 0x31260c: 0x101100  sll         $v0, $s0, 4
    ctx->pc = 0x31260cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_312610:
    // 0x312610: 0x24510037  addiu       $s1, $v0, 0x37
    ctx->pc = 0x312610u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 55));
label_312614:
    // 0x312614: 0x32550001  andi        $s5, $s2, 0x1
    ctx->pc = 0x312614u;
    SET_GPR_U64(ctx, 21, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)1);
label_312618:
    // 0x312618: 0x12a00003  beqz        $s5, . + 4 + (0x3 << 2)
label_31261c:
    if (ctx->pc == 0x31261Cu) {
        ctx->pc = 0x31261Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312618u;
        // 0x31261c: 0x26230001  addiu       $v1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x312620u;
        goto label_312620;
    }
    ctx->pc = 0x312618u;
    {
        const bool branch_taken_0x312618 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x31261Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312618u;
        // 0x31261c: 0x26230001  addiu       $v1, $s1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312618) {
            ctx->pc = 0x312628u;
            goto label_312628;
        }
    }
    ctx->pc = 0x312620u;
label_312620:
    // 0x312620: 0x131040  sll         $v0, $s3, 1
    ctx->pc = 0x312620u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
label_312624:
    // 0x312624: 0x628821  addu        $s1, $v1, $v0
    ctx->pc = 0x312624u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_312628:
    // 0x312628: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x312628u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_31262c:
    // 0x31262c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x31262cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_312630:
    // 0x312630: 0x60b82d  daddu       $s7, $v1, $zero
    ctx->pc = 0x312630u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_312634:
    // 0x312634: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x312634u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_312638:
    // 0x312638: 0x2463e880  addiu       $v1, $v1, -0x1780
    ctx->pc = 0x312638u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961280));
label_31263c:
    // 0x31263c: 0x8c620108  lw          $v0, 0x108($v1)
    ctx->pc = 0x31263cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 264)));
label_312640:
    // 0x312640: 0x40f809  jalr        $v0
label_312644:
    if (ctx->pc == 0x312644u) {
        ctx->pc = 0x312644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312640u;
        // 0x312644: 0x34a5002c  ori         $a1, $a1, 0x2C (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)44);
        ctx->in_delay_slot = false;
        ctx->pc = 0x312648u;
        goto label_312648;
    }
    ctx->pc = 0x312640u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x312648u);
        ctx->pc = 0x312644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312640u;
        // 0x312644: 0x34a5002c  ori         $a1, $a1, 0x2C (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)44);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x312640u, 0x312648u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x312648u;
label_312648:
    // 0x312648: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x312648u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_31264c:
    // 0x31264c: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
label_312650:
    if (ctx->pc == 0x312650u) {
        ctx->pc = 0x312650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31264Cu;
        // 0x312650: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x312654u;
        goto label_312654;
    }
    ctx->pc = 0x31264Cu;
    {
        const bool branch_taken_0x31264c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x312650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31264Cu;
        // 0x312650: 0x60282d  daddu       $a1, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31264c) {
            ctx->pc = 0x312680u;
            goto label_312680;
        }
    }
    ctx->pc = 0x312654u;
label_312654:
    // 0x312654: 0x2402011d  addiu       $v0, $zero, 0x11D
    ctx->pc = 0x312654u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 285));
label_312658:
    // 0x312658: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x312658u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_31265c:
    // 0x31265c: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x31265cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
label_312660:
    // 0x312660: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x312660u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_312664:
    // 0x312664: 0xc1035f6  jal         func_40D7D8
label_312668:
    if (ctx->pc == 0x312668u) {
        ctx->pc = 0x312668u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312664u;
        // 0x312668: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x31266Cu;
        goto label_31266c;
    }
    ctx->pc = 0x312664u;
    SET_GPR_U32(ctx, 31, 0x31266Cu);
    ctx->pc = 0x312668u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312664u;
    // 0x312668: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x312664u, 0x31266Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31266Cu;
label_31266c:
    // 0x31266c: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x31266cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
label_312670:
    // 0x312670: 0xc103628  jal         func_40D8A0
label_312674:
    if (ctx->pc == 0x312674u) {
        ctx->pc = 0x312674u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312670u;
        // 0x312674: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x312678u;
        goto label_312678;
    }
    ctx->pc = 0x312670u;
    SET_GPR_U32(ctx, 31, 0x312678u);
    ctx->pc = 0x312674u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312670u;
    // 0x312674: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x312670u, 0x312678u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312678u;
label_312678:
    // 0x312678: 0x10000024  b           . + 4 + (0x24 << 2)
label_31267c:
    if (ctx->pc == 0x31267Cu) {
        ctx->pc = 0x31267Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312678u;
        // 0x31267c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x312680u;
        goto label_312680;
    }
    ctx->pc = 0x312678u;
    {
        const bool branch_taken_0x312678 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31267Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312678u;
        // 0x31267c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312678) {
            ctx->pc = 0x31270Cu;
            goto label_31270c;
        }
    }
    ctx->pc = 0x312680u;
label_312680:
    // 0x312680: 0xacb20000  sw          $s2, 0x0($a1)
    ctx->pc = 0x312680u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 18));
label_312684:
    // 0x312684: 0xa4b3001c  sh          $s3, 0x1C($a1)
    ctx->pc = 0x312684u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 28), (uint16_t)GPR_U32(ctx, 19));
label_312688:
    // 0x312688: 0xa4b0001e  sh          $s0, 0x1E($a1)
    ctx->pc = 0x312688u;
    WRITE16(ADD32(GPR_U32(ctx, 5), 30), (uint16_t)GPR_U32(ctx, 16));
label_31268c:
    // 0x31268c: 0x6ba40037  ldl         $a0, 0x37($sp)
    ctx->pc = 0x31268cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
label_312690:
    // 0x312690: 0x6fa40030  ldr         $a0, 0x30($sp)
    ctx->pc = 0x312690u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
label_312694:
    // 0x312694: 0x6ba6003f  ldl         $a2, 0x3F($sp)
    ctx->pc = 0x312694u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 63); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_312698:
    // 0x312698: 0x6fa60038  ldr         $a2, 0x38($sp)
    ctx->pc = 0x312698u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 56); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_31269c:
    // 0x31269c: 0x6ba70047  ldl         $a3, 0x47($sp)
    ctx->pc = 0x31269cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 71); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
label_3126a0:
    // 0x3126a0: 0x6fa70040  ldr         $a3, 0x40($sp)
    ctx->pc = 0x3126a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 64); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
label_3126a4:
    // 0x3126a4: 0xb0a4000b  sdl         $a0, 0xB($a1)
    ctx->pc = 0x3126a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 11); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3126a8:
    // 0x3126a8: 0xb4a40004  sdr         $a0, 0x4($a1)
    ctx->pc = 0x3126a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 4); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3126ac:
    // 0x3126ac: 0xb0a60013  sdl         $a2, 0x13($a1)
    ctx->pc = 0x3126acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3126b0:
    // 0x3126b0: 0xb4a6000c  sdr         $a2, 0xC($a1)
    ctx->pc = 0x3126b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3126b4:
    // 0x3126b4: 0xb0a7001b  sdl         $a3, 0x1B($a1)
    ctx->pc = 0x3126b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_3126b8:
    // 0x3126b8: 0xb4a70014  sdr         $a3, 0x14($a1)
    ctx->pc = 0x3126b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_3126bc:
    // 0x3126bc: 0x12000009  beqz        $s0, . + 4 + (0x9 << 2)
label_3126c0:
    if (ctx->pc == 0x3126C0u) {
        ctx->pc = 0x3126C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3126BCu;
        // 0x3126c0: 0x24a30028  addiu       $v1, $a1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 40));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3126C4u;
        goto label_3126c4;
    }
    ctx->pc = 0x3126BCu;
    {
        const bool branch_taken_0x3126bc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3126C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3126BCu;
        // 0x3126c0: 0x24a30028  addiu       $v1, $a1, 0x28 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 40));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3126bc) {
            ctx->pc = 0x3126E4u;
            goto label_3126e4;
        }
    }
    ctx->pc = 0x3126C4u;
label_3126c4:
    // 0x3126c4: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3126c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3126c8:
    // 0x3126c8: 0x24a30037  addiu       $v1, $a1, 0x37
    ctx->pc = 0x3126c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 55));
label_3126cc:
    // 0x3126cc: 0x3442fff0  ori         $v0, $v0, 0xFFF0
    ctx->pc = 0x3126ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65520);
label_3126d0:
    // 0x3126d0: 0x102100  sll         $a0, $s0, 4
    ctx->pc = 0x3126d0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 4));
label_3126d4:
    // 0x3126d4: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3126d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3126d8:
    // 0x3126d8: 0xaca30020  sw          $v1, 0x20($a1)
    ctx->pc = 0x3126d8u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 3));
label_3126dc:
    // 0x3126dc: 0x10000002  b           . + 4 + (0x2 << 2)
label_3126e0:
    if (ctx->pc == 0x3126E0u) {
        ctx->pc = 0x3126E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3126DCu;
        // 0x3126e0: 0x641821  addu        $v1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3126E4u;
        goto label_3126e4;
    }
    ctx->pc = 0x3126DCu;
    {
        const bool branch_taken_0x3126dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3126E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3126DCu;
        // 0x3126e0: 0x641821  addu        $v1, $v1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3126dc) {
            ctx->pc = 0x3126E8u;
            goto label_3126e8;
        }
    }
    ctx->pc = 0x3126E4u;
label_3126e4:
    // 0x3126e4: 0xaca00020  sw          $zero, 0x20($a1)
    ctx->pc = 0x3126e4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 32), GPR_U32(ctx, 0));
label_3126e8:
    // 0x3126e8: 0x12a00006  beqz        $s5, . + 4 + (0x6 << 2)
label_3126ec:
    if (ctx->pc == 0x3126ECu) {
        ctx->pc = 0x3126ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3126E8u;
        // 0x3126ec: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3126F0u;
        goto label_3126f0;
    }
    ctx->pc = 0x3126E8u;
    {
        const bool branch_taken_0x3126e8 = (GPR_U64(ctx, 21) == GPR_U64(ctx, 0));
        ctx->pc = 0x3126ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3126E8u;
        // 0x3126ec: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3126e8) {
            ctx->pc = 0x312704u;
            goto label_312704;
        }
    }
    ctx->pc = 0x3126F0u;
label_3126f0:
    // 0x3126f0: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x3126f0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
label_3126f4:
    // 0x3126f4: 0x3442fffe  ori         $v0, $v0, 0xFFFE
    ctx->pc = 0x3126f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65534);
label_3126f8:
    // 0x3126f8: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x3126f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
label_3126fc:
    // 0x3126fc: 0x10000002  b           . + 4 + (0x2 << 2)
label_312700:
    if (ctx->pc == 0x312700u) {
        ctx->pc = 0x312700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3126FCu;
        // 0x312700: 0xaca30024  sw          $v1, 0x24($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x312704u;
        goto label_312704;
    }
    ctx->pc = 0x3126FCu;
    {
        const bool branch_taken_0x3126fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x312700u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3126FCu;
        // 0x312700: 0xaca30024  sw          $v1, 0x24($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3126fc) {
            ctx->pc = 0x312708u;
            goto label_312708;
        }
    }
    ctx->pc = 0x312704u;
label_312704:
    // 0x312704: 0xaca00024  sw          $zero, 0x24($a1)
    ctx->pc = 0x312704u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 36), GPR_U32(ctx, 0));
label_312708:
    // 0x312708: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x312708u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_31270c:
    // 0x31270c: 0x12200036  beqz        $s1, . + 4 + (0x36 << 2)
label_312710:
    if (ctx->pc == 0x312710u) {
        ctx->pc = 0x312710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31270Cu;
        // 0x312710: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x312714u;
        goto label_312714;
    }
    ctx->pc = 0x31270Cu;
    {
        const bool branch_taken_0x31270c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x312710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31270Cu;
        // 0x312710: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31270c) {
            ctx->pc = 0x3127E8u;
            goto label_3127e8;
        }
    }
    ctx->pc = 0x312714u;
label_312714:
    // 0x312714: 0x9622001e  lhu         $v0, 0x1E($s1)
    ctx->pc = 0x312714u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 30)));
label_312718:
    // 0x312718: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
label_31271c:
    if (ctx->pc == 0x31271Cu) {
        ctx->pc = 0x31271Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312718u;
        // 0x31271c: 0x28100  sll         $s0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x312720u;
        goto label_312720;
    }
    ctx->pc = 0x312718u;
    {
        const bool branch_taken_0x312718 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31271Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312718u;
        // 0x31271c: 0x28100  sll         $s0, $v0, 4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312718) {
            ctx->pc = 0x3127A4u;
            goto label_3127a4;
        }
    }
    ctx->pc = 0x312720u;
label_312720:
    // 0x312720: 0x8e250020  lw          $a1, 0x20($s1)
    ctx->pc = 0x312720u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
label_312724:
    // 0x312724: 0x2c0202d  daddu       $a0, $s6, $zero
    ctx->pc = 0x312724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_312728:
    // 0x312728: 0xc10480a  jal         func_412028
label_31272c:
    if (ctx->pc == 0x31272Cu) {
        ctx->pc = 0x31272Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312728u;
        // 0x31272c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x312730u;
        goto label_312730;
    }
    ctx->pc = 0x312728u;
    SET_GPR_U32(ctx, 31, 0x312730u);
    ctx->pc = 0x31272Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x312728u;
    // 0x31272c: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412028u, 0x312728u, 0x312730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x312730u;
label_312730:
    // 0x312730: 0x14500027  bne         $v0, $s0, . + 4 + (0x27 << 2)
label_312734:
    if (ctx->pc == 0x312734u) {
        ctx->pc = 0x312734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312730u;
        // 0x312734: 0x26e3e880  addiu       $v1, $s7, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294961280));
        ctx->in_delay_slot = false;
        ctx->pc = 0x312738u;
        goto label_312738;
    }
    ctx->pc = 0x312730u;
    {
        const bool branch_taken_0x312730 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 16));
        ctx->pc = 0x312734u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312730u;
        // 0x312734: 0x26e3e880  addiu       $v1, $s7, -0x1780 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294961280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x312730) {
            ctx->pc = 0x3127D0u;
            goto label_3127d0;
        }
    }
    ctx->pc = 0x312738u;
label_312738:
    // 0x312738: 0x9622001e  lhu         $v0, 0x1E($s1)
    ctx->pc = 0x312738u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 30)));
label_31273c:
    // 0x31273c: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
label_312740:
    if (ctx->pc == 0x312740u) {
        ctx->pc = 0x312740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31273Cu;
        // 0x312740: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x312744u;
        goto label_312744;
    }
    ctx->pc = 0x31273Cu;
    {
        const bool branch_taken_0x31273c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x312740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31273Cu;
        // 0x312740: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31273c) {
            ctx->pc = 0x3127A4u;
            goto label_3127a4;
        }
    }
    ctx->pc = 0x312744u;
label_312744:
    // 0x312744: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x312744u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_312748:
    // 0x312748: 0x18a0000a  blez        $a1, . + 4 + (0xA << 2)
label_31274c:
    if (ctx->pc == 0x31274Cu) {
        ctx->pc = 0x31274Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312748u;
        // 0x31274c: 0x30a40003  andi        $a0, $a1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        ctx->pc = 0x312750u;
        goto label_312750;
    }
    ctx->pc = 0x312748u;
    {
        const bool branch_taken_0x312748 = (GPR_S32(ctx, 5) <= 0);
        ctx->pc = 0x31274Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312748u;
        // 0x31274c: 0x30a40003  andi        $a0, $a1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x312748) {
            ctx->pc = 0x312774u;
            goto label_312774;
        }
    }
    ctx->pc = 0x312750u;
label_312750:
    // 0x312750: 0x5080000d  beql        $a0, $zero, . + 4 + (0xD << 2)
label_312754:
    if (ctx->pc == 0x312754u) {
        ctx->pc = 0x312754u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312750u;
        // 0x312754: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x312758u;
        goto label_312758;
    }
    ctx->pc = 0x312750u;
    {
        const bool branch_taken_0x312750 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x312750) {
            ctx->pc = 0x312754u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x312750u;
            // 0x312754: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x312788u;
            goto label_312788;
        }
    }
    ctx->pc = 0x312758u;
label_312758:
    // 0x312758: 0x28820002  slti        $v0, $a0, 0x2
    ctx->pc = 0x312758u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)2) ? 1 : 0);
label_31275c:
    // 0x31275c: 0x54400006  bnel        $v0, $zero, . + 4 + (0x6 << 2)
label_312760:
    if (ctx->pc == 0x312760u) {
        ctx->pc = 0x312760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31275Cu;
        // 0x312760: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x312764u;
        goto label_312764;
    }
    ctx->pc = 0x31275Cu;
    {
        const bool branch_taken_0x31275c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31275c) {
            ctx->pc = 0x312760u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31275Cu;
            // 0x312760: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x312778u;
            goto label_312778;
        }
    }
    ctx->pc = 0x312764u;
label_312764:
    // 0x312764: 0x28820003  slti        $v0, $a0, 0x3
    ctx->pc = 0x312764u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)3) ? 1 : 0);
label_312768:
    // 0x312768: 0x50400001  beql        $v0, $zero, . + 4 + (0x1 << 2)
label_31276c:
    if (ctx->pc == 0x31276Cu) {
        ctx->pc = 0x31276Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x312768u;
        // 0x31276c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x312770u;
        goto label_312770;
    }
    ctx->pc = 0x312768u;
    {
        const bool branch_taken_0x312768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x312768) {
            ctx->pc = 0x31276Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x312768u;
            // 0x31276c: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x312770u;
            goto label_312770;
        }
    }
    ctx->pc = 0x312770u;
label_312770:
    // 0x312770: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x312770u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_312774:
    // 0x312774: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x312774u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
label_312778:
    // 0x312778: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x312778u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_31277c:
    // 0x31277c: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_312780:
    if (ctx->pc == 0x312780u) {
        ctx->pc = 0x312780u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31277Cu;
        // 0x312780: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x312784u;
        goto label_312784;
    }
    ctx->pc = 0x31277Cu;
    {
        const bool branch_taken_0x31277c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31277c) {
            ctx->pc = 0x312780u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31277Cu;
            // 0x312780: 0x8e220000  lw          $v0, 0x0($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3127A8u;
            goto label_3127a8;
        }
    }
    ctx->pc = 0x312784u;
label_312784:
    // 0x312784: 0x24630004  addiu       $v1, $v1, 0x4
    ctx->pc = 0x312784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
label_312788:
    // 0x312788: 0x65102b  sltu        $v0, $v1, $a1
    ctx->pc = 0x312788u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 5)) ? 1 : 0);
label_31278c:
    // 0x31278c: 0x0  nop
    ctx->pc = 0x31278cu;
    // NOP
label_312790:
    // 0x312790: 0x0  nop
    ctx->pc = 0x312790u;
    // NOP
label_312794:
    // 0x312794: 0x0  nop
    ctx->pc = 0x312794u;
    // NOP
label_312798:
    // 0x312798: 0x0  nop
    ctx->pc = 0x312798u;
    // NOP
label_31279c:
    // 0x31279c: 0x5440fffa  bnel        $v0, $zero, . + 4 + (-0x6 << 2)
label_3127a0:
    if (ctx->pc == 0x3127A0u) {
        ctx->pc = 0x3127A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31279Cu;
        // 0x3127a0: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3127A4u;
        goto label_3127a4;
    }
    ctx->pc = 0x31279Cu;
    {
        const bool branch_taken_0x31279c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31279c) {
            ctx->pc = 0x3127A0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31279Cu;
            // 0x3127a0: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
            ctx->in_delay_slot = false;
            ctx->pc = 0x312788u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_312788;
        }
    }
    ctx->pc = 0x3127A4u;
label_3127a4:
    // 0x3127a4: 0x8e220000  lw          $v0, 0x0($s1)
    ctx->pc = 0x3127a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_3127a8:
    // 0x3127a8: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x3127a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
label_3127ac:
    // 0x3127ac: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
label_3127b0:
    if (ctx->pc == 0x3127B0u) {
        ctx->pc = 0x3127B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3127ACu;
        // 0x3127b0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3127B4u;
        goto label_3127b4;
    }
    ctx->pc = 0x3127ACu;
    {
        const bool branch_taken_0x3127ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3127B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3127ACu;
        // 0x3127b0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3127ac) {
            ctx->pc = 0x3127E4u;
            goto label_3127e4;
        }
    }
    ctx->pc = 0x3127B4u;
label_3127b4:
    // 0x3127b4: 0x9626001c  lhu         $a2, 0x1C($s1)
    ctx->pc = 0x3127b4u;
    SET_GPR_ZE32(ctx, 6, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 28)));
label_3127b8:
    // 0x3127b8: 0x8e250024  lw          $a1, 0x24($s1)
    ctx->pc = 0x3127b8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 36)));
label_3127bc:
    // 0x3127bc: 0xc10347c  jal         func_40D1F0
label_3127c0:
    if (ctx->pc == 0x3127C0u) {
        ctx->pc = 0x3127C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3127BCu;
        // 0x3127c0: 0x63040  sll         $a2, $a2, 1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3127C4u;
        goto label_3127c4;
    }
    ctx->pc = 0x3127BCu;
    SET_GPR_U32(ctx, 31, 0x3127C4u);
    ctx->pc = 0x3127C0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3127BCu;
    // 0x3127c0: 0x63040  sll         $a2, $a2, 1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1F0u, 0x3127BCu, 0x3127C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3127C4u;
label_3127c4:
    // 0x3127c4: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
label_3127c8:
    if (ctx->pc == 0x3127C8u) {
        ctx->pc = 0x3127C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3127C4u;
        // 0x3127c8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3127CCu;
        goto label_3127cc;
    }
    ctx->pc = 0x3127C4u;
    {
        const bool branch_taken_0x3127c4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3127c4) {
            ctx->pc = 0x3127C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3127C4u;
            // 0x3127c8: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3127E8u;
            goto label_3127e8;
        }
    }
    ctx->pc = 0x3127CCu;
label_3127cc:
    // 0x3127cc: 0x26e3e880  addiu       $v1, $s7, -0x1780
    ctx->pc = 0x3127ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 23), 4294961280));
label_3127d0:
    // 0x3127d0: 0x8c62010c  lw          $v0, 0x10C($v1)
    ctx->pc = 0x3127d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 268)));
label_3127d4:
    // 0x3127d4: 0x40f809  jalr        $v0
label_3127d8:
    if (ctx->pc == 0x3127D8u) {
        ctx->pc = 0x3127D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3127D4u;
        // 0x3127d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3127DCu;
        goto label_3127dc;
    }
    ctx->pc = 0x3127D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3127DCu);
        ctx->pc = 0x3127D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3127D4u;
        // 0x3127d8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3127D4u, 0x3127DCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3127DCu;
label_3127dc:
    // 0x3127dc: 0x10000002  b           . + 4 + (0x2 << 2)
label_3127e0:
    if (ctx->pc == 0x3127E0u) {
        ctx->pc = 0x3127E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3127DCu;
        // 0x3127e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3127E4u;
        goto label_3127e4;
    }
    ctx->pc = 0x3127DCu;
    {
        const bool branch_taken_0x3127dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3127E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3127DCu;
        // 0x3127e0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3127dc) {
            ctx->pc = 0x3127E8u;
            goto label_3127e8;
        }
    }
    ctx->pc = 0x3127E4u;
label_3127e4:
    // 0x3127e4: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x3127e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_3127e8:
    // 0x3127e8: 0x7bb000f0  lq          $s0, 0xF0($sp)
    ctx->pc = 0x3127e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 240)));
label_3127ec:
    // 0x3127ec: 0x7bb100e0  lq          $s1, 0xE0($sp)
    ctx->pc = 0x3127ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 224)));
label_3127f0:
    // 0x3127f0: 0x7bb200d0  lq          $s2, 0xD0($sp)
    ctx->pc = 0x3127f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 208)));
label_3127f4:
    // 0x3127f4: 0x7bb300c0  lq          $s3, 0xC0($sp)
    ctx->pc = 0x3127f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 192)));
label_3127f8:
    // 0x3127f8: 0x7bb400b0  lq          $s4, 0xB0($sp)
    ctx->pc = 0x3127f8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3127fc:
    // 0x3127fc: 0x7bb500a0  lq          $s5, 0xA0($sp)
    ctx->pc = 0x3127fcu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_312800:
    // 0x312800: 0x7bb60090  lq          $s6, 0x90($sp)
    ctx->pc = 0x312800u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_312804:
    // 0x312804: 0x7bb70080  lq          $s7, 0x80($sp)
    ctx->pc = 0x312804u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_312808:
    // 0x312808: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x312808u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_31280c:
    // 0x31280c: 0x3e00008  jr          $ra
label_312810:
    if (ctx->pc == 0x312810u) {
        ctx->pc = 0x312810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31280Cu;
        // 0x312810: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = 0x312814u;
        goto label_312814;
    }
    ctx->pc = 0x31280Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x312810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31280Cu;
        // 0x312810: 0x27bd0100  addiu       $sp, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31280Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x312814u;
label_312814:
    // 0x312814: 0x0  nop
    ctx->pc = 0x312814u;
    // NOP
    ctx->pc = 0x312818u;
}
