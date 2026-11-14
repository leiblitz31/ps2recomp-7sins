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

// Function: sub_004A9350
// Address: 0x4a9350 - 0x4a9588
void sub_004A9350_0x4a9350(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_004A9350_0x4a9350");
#endif

    switch (ctx->pc) {
        case 0x4a9350u: goto label_4a9350;
        case 0x4a9354u: goto label_4a9354;
        case 0x4a9358u: goto label_4a9358;
        case 0x4a935cu: goto label_4a935c;
        case 0x4a9360u: goto label_4a9360;
        case 0x4a9364u: goto label_4a9364;
        case 0x4a9368u: goto label_4a9368;
        case 0x4a936cu: goto label_4a936c;
        case 0x4a9370u: goto label_4a9370;
        case 0x4a9374u: goto label_4a9374;
        case 0x4a9378u: goto label_4a9378;
        case 0x4a937cu: goto label_4a937c;
        case 0x4a9380u: goto label_4a9380;
        case 0x4a9384u: goto label_4a9384;
        case 0x4a9388u: goto label_4a9388;
        case 0x4a938cu: goto label_4a938c;
        case 0x4a9390u: goto label_4a9390;
        case 0x4a9394u: goto label_4a9394;
        case 0x4a9398u: goto label_4a9398;
        case 0x4a939cu: goto label_4a939c;
        case 0x4a93a0u: goto label_4a93a0;
        case 0x4a93a4u: goto label_4a93a4;
        case 0x4a93a8u: goto label_4a93a8;
        case 0x4a93acu: goto label_4a93ac;
        case 0x4a93b0u: goto label_4a93b0;
        case 0x4a93b4u: goto label_4a93b4;
        case 0x4a93b8u: goto label_4a93b8;
        case 0x4a93bcu: goto label_4a93bc;
        case 0x4a93c0u: goto label_4a93c0;
        case 0x4a93c4u: goto label_4a93c4;
        case 0x4a93c8u: goto label_4a93c8;
        case 0x4a93ccu: goto label_4a93cc;
        case 0x4a93d0u: goto label_4a93d0;
        case 0x4a93d4u: goto label_4a93d4;
        case 0x4a93d8u: goto label_4a93d8;
        case 0x4a93dcu: goto label_4a93dc;
        case 0x4a93e0u: goto label_4a93e0;
        case 0x4a93e4u: goto label_4a93e4;
        case 0x4a93e8u: goto label_4a93e8;
        case 0x4a93ecu: goto label_4a93ec;
        case 0x4a93f0u: goto label_4a93f0;
        case 0x4a93f4u: goto label_4a93f4;
        case 0x4a93f8u: goto label_4a93f8;
        case 0x4a93fcu: goto label_4a93fc;
        case 0x4a9400u: goto label_4a9400;
        case 0x4a9404u: goto label_4a9404;
        case 0x4a9408u: goto label_4a9408;
        case 0x4a940cu: goto label_4a940c;
        case 0x4a9410u: goto label_4a9410;
        case 0x4a9414u: goto label_4a9414;
        case 0x4a9418u: goto label_4a9418;
        case 0x4a941cu: goto label_4a941c;
        case 0x4a9420u: goto label_4a9420;
        case 0x4a9424u: goto label_4a9424;
        case 0x4a9428u: goto label_4a9428;
        case 0x4a942cu: goto label_4a942c;
        case 0x4a9430u: goto label_4a9430;
        case 0x4a9434u: goto label_4a9434;
        case 0x4a9438u: goto label_4a9438;
        case 0x4a943cu: goto label_4a943c;
        case 0x4a9440u: goto label_4a9440;
        case 0x4a9444u: goto label_4a9444;
        case 0x4a9448u: goto label_4a9448;
        case 0x4a944cu: goto label_4a944c;
        case 0x4a9450u: goto label_4a9450;
        case 0x4a9454u: goto label_4a9454;
        case 0x4a9458u: goto label_4a9458;
        case 0x4a945cu: goto label_4a945c;
        case 0x4a9460u: goto label_4a9460;
        case 0x4a9464u: goto label_4a9464;
        case 0x4a9468u: goto label_4a9468;
        case 0x4a946cu: goto label_4a946c;
        case 0x4a9470u: goto label_4a9470;
        case 0x4a9474u: goto label_4a9474;
        case 0x4a9478u: goto label_4a9478;
        case 0x4a947cu: goto label_4a947c;
        case 0x4a9480u: goto label_4a9480;
        case 0x4a9484u: goto label_4a9484;
        case 0x4a9488u: goto label_4a9488;
        case 0x4a948cu: goto label_4a948c;
        case 0x4a9490u: goto label_4a9490;
        case 0x4a9494u: goto label_4a9494;
        case 0x4a9498u: goto label_4a9498;
        case 0x4a949cu: goto label_4a949c;
        case 0x4a94a0u: goto label_4a94a0;
        case 0x4a94a4u: goto label_4a94a4;
        case 0x4a94a8u: goto label_4a94a8;
        case 0x4a94acu: goto label_4a94ac;
        case 0x4a94b0u: goto label_4a94b0;
        case 0x4a94b4u: goto label_4a94b4;
        case 0x4a94b8u: goto label_4a94b8;
        case 0x4a94bcu: goto label_4a94bc;
        case 0x4a94c0u: goto label_4a94c0;
        case 0x4a94c4u: goto label_4a94c4;
        case 0x4a94c8u: goto label_4a94c8;
        case 0x4a94ccu: goto label_4a94cc;
        case 0x4a94d0u: goto label_4a94d0;
        case 0x4a94d4u: goto label_4a94d4;
        case 0x4a94d8u: goto label_4a94d8;
        case 0x4a94dcu: goto label_4a94dc;
        case 0x4a94e0u: goto label_4a94e0;
        case 0x4a94e4u: goto label_4a94e4;
        case 0x4a94e8u: goto label_4a94e8;
        case 0x4a94ecu: goto label_4a94ec;
        case 0x4a94f0u: goto label_4a94f0;
        case 0x4a94f4u: goto label_4a94f4;
        case 0x4a94f8u: goto label_4a94f8;
        case 0x4a94fcu: goto label_4a94fc;
        case 0x4a9500u: goto label_4a9500;
        case 0x4a9504u: goto label_4a9504;
        case 0x4a9508u: goto label_4a9508;
        case 0x4a950cu: goto label_4a950c;
        case 0x4a9510u: goto label_4a9510;
        case 0x4a9514u: goto label_4a9514;
        case 0x4a9518u: goto label_4a9518;
        case 0x4a951cu: goto label_4a951c;
        case 0x4a9520u: goto label_4a9520;
        case 0x4a9524u: goto label_4a9524;
        case 0x4a9528u: goto label_4a9528;
        case 0x4a952cu: goto label_4a952c;
        case 0x4a9530u: goto label_4a9530;
        case 0x4a9534u: goto label_4a9534;
        case 0x4a9538u: goto label_4a9538;
        case 0x4a953cu: goto label_4a953c;
        case 0x4a9540u: goto label_4a9540;
        case 0x4a9544u: goto label_4a9544;
        case 0x4a9548u: goto label_4a9548;
        case 0x4a954cu: goto label_4a954c;
        case 0x4a9550u: goto label_4a9550;
        case 0x4a9554u: goto label_4a9554;
        case 0x4a9558u: goto label_4a9558;
        case 0x4a955cu: goto label_4a955c;
        case 0x4a9560u: goto label_4a9560;
        case 0x4a9564u: goto label_4a9564;
        case 0x4a9568u: goto label_4a9568;
        case 0x4a956cu: goto label_4a956c;
        case 0x4a9570u: goto label_4a9570;
        case 0x4a9574u: goto label_4a9574;
        case 0x4a9578u: goto label_4a9578;
        case 0x4a957cu: goto label_4a957c;
        case 0x4a9580u: goto label_4a9580;
        case 0x4a9584u: goto label_4a9584;
        default: break;
    }

    ctx->pc = 0x4a9350u;

label_4a9350:
    // 0x4a9350: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x4a9350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
label_4a9354:
    // 0x4a9354: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x4a9354u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
label_4a9358:
    // 0x4a9358: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x4a9358u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
label_4a935c:
    // 0x4a935c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x4a935cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_4a9360:
    // 0x4a9360: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x4a9360u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
label_4a9364:
    // 0x4a9364: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x4a9364u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_4a9368:
    // 0x4a9368: 0x10c0001d  beqz        $a2, . + 4 + (0x1D << 2)
label_4a936c:
    if (ctx->pc == 0x4A936Cu) {
        ctx->pc = 0x4A936Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9368u;
        // 0x4a936c: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A9370u;
        goto label_4a9370;
    }
    ctx->pc = 0x4A9368u;
    {
        const bool branch_taken_0x4a9368 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A936Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9368u;
        // 0x4a936c: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9368) {
            ctx->pc = 0x4A93E0u;
            goto label_4a93e0;
        }
    }
    ctx->pc = 0x4A9370u;
label_4a9370:
    // 0x4a9370: 0x27b00010  addiu       $s0, $sp, 0x10
    ctx->pc = 0x4a9370u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_4a9374:
    // 0x4a9374: 0xafbd0010  sw          $sp, 0x10($sp)
    ctx->pc = 0x4a9374u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 29));
label_4a9378:
    // 0x4a9378: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4a9378u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a937c:
    // 0x4a937c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x4a937cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4a9380:
    // 0x4a9380: 0xc12acd0  jal         func_4AB340
label_4a9384:
    if (ctx->pc == 0x4A9384u) {
        ctx->pc = 0x4A9384u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9380u;
        // 0x4a9384: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A9388u;
        goto label_4a9388;
    }
    ctx->pc = 0x4A9380u;
    SET_GPR_U32(ctx, 31, 0x4A9388u);
    ctx->pc = 0x4A9384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A9380u;
    // 0x4a9384: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AB340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AB340u, 0x4A9380u, 0x4A9388u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A9388u;
label_4a9388:
    // 0x4a9388: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4a9388u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a938c:
    // 0x4a938c: 0x26250004  addiu       $a1, $s1, 0x4
    ctx->pc = 0x4a938cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_4a9390:
    // 0x4a9390: 0xc12acd0  jal         func_4AB340
label_4a9394:
    if (ctx->pc == 0x4A9394u) {
        ctx->pc = 0x4A9394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9390u;
        // 0x4a9394: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A9398u;
        goto label_4a9398;
    }
    ctx->pc = 0x4A9390u;
    SET_GPR_U32(ctx, 31, 0x4A9398u);
    ctx->pc = 0x4A9394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A9390u;
    // 0x4a9394: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AB340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AB340u, 0x4A9390u, 0x4A9398u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A9398u;
label_4a9398:
    // 0x4a9398: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x4a9398u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a939c:
    // 0x4a939c: 0x26250006  addiu       $a1, $s1, 0x6
    ctx->pc = 0x4a939cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 6));
label_4a93a0:
    // 0x4a93a0: 0xc12acd0  jal         func_4AB340
label_4a93a4:
    if (ctx->pc == 0x4A93A4u) {
        ctx->pc = 0x4A93A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A93A0u;
        // 0x4a93a4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A93A8u;
        goto label_4a93a8;
    }
    ctx->pc = 0x4A93A0u;
    SET_GPR_U32(ctx, 31, 0x4A93A8u);
    ctx->pc = 0x4A93A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A93A0u;
    // 0x4a93a4: 0x24060002  addiu       $a2, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AB340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AB340u, 0x4A93A0u, 0x4A93A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A93A8u;
label_4a93a8:
    // 0x4a93a8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x4a93a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_4a93ac:
    // 0x4a93ac: 0x6a23000f  ldl         $v1, 0xF($s1)
    ctx->pc = 0x4a93acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_4a93b0:
    // 0x4a93b0: 0x6e230008  ldr         $v1, 0x8($s1)
    ctx->pc = 0x4a93b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_4a93b4:
    // 0x4a93b4: 0xb0430007  sdl         $v1, 0x7($v0)
    ctx->pc = 0x4a93b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a93b8:
    // 0x4a93b8: 0xb4430000  sdr         $v1, 0x0($v0)
    ctx->pc = 0x4a93b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a93bc:
    // 0x4a93bc: 0x6ba20007  ldl         $v0, 0x7($sp)
    ctx->pc = 0x4a93bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_4a93c0:
    // 0x4a93c0: 0x6fa20000  ldr         $v0, 0x0($sp)
    ctx->pc = 0x4a93c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_4a93c4:
    // 0x4a93c4: 0x6ba3000f  ldl         $v1, 0xF($sp)
    ctx->pc = 0x4a93c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
label_4a93c8:
    // 0x4a93c8: 0x6fa30008  ldr         $v1, 0x8($sp)
    ctx->pc = 0x4a93c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
label_4a93cc:
    // 0x4a93cc: 0xb2420007  sdl         $v0, 0x7($s2)
    ctx->pc = 0x4a93ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a93d0:
    // 0x4a93d0: 0xb6420000  sdr         $v0, 0x0($s2)
    ctx->pc = 0x4a93d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a93d4:
    // 0x4a93d4: 0xb243000f  sdl         $v1, 0xF($s2)
    ctx->pc = 0x4a93d4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a93d8:
    // 0x4a93d8: 0x10000009  b           . + 4 + (0x9 << 2)
label_4a93dc:
    if (ctx->pc == 0x4A93DCu) {
        ctx->pc = 0x4A93DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A93D8u;
        // 0x4a93dc: 0xb6430008  sdr         $v1, 0x8($s2) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 18), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A93E0u;
        goto label_4a93e0;
    }
    ctx->pc = 0x4A93D8u;
    {
        const bool branch_taken_0x4a93d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A93DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A93D8u;
        // 0x4a93dc: 0xb6430008  sdr         $v1, 0x8($s2) (Delay Slot)
        { uint32_t addr = ADD32(GPR_U32(ctx, 18), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a93d8) {
            ctx->pc = 0x4A9400u;
            goto label_4a9400;
        }
    }
    ctx->pc = 0x4A93E0u;
label_4a93e0:
    // 0x4a93e0: 0x6a260007  ldl         $a2, 0x7($s1)
    ctx->pc = 0x4a93e0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
label_4a93e4:
    // 0x4a93e4: 0x6e260000  ldr         $a2, 0x0($s1)
    ctx->pc = 0x4a93e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
label_4a93e8:
    // 0x4a93e8: 0x6a22000f  ldl         $v0, 0xF($s1)
    ctx->pc = 0x4a93e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_4a93ec:
    // 0x4a93ec: 0x6e220008  ldr         $v0, 0x8($s1)
    ctx->pc = 0x4a93ecu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_4a93f0:
    // 0x4a93f0: 0xb2460007  sdl         $a2, 0x7($s2)
    ctx->pc = 0x4a93f0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a93f4:
    // 0x4a93f4: 0xb6460000  sdr         $a2, 0x0($s2)
    ctx->pc = 0x4a93f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a93f8:
    // 0x4a93f8: 0xb242000f  sdl         $v0, 0xF($s2)
    ctx->pc = 0x4a93f8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a93fc:
    // 0x4a93fc: 0xb6420008  sdr         $v0, 0x8($s2)
    ctx->pc = 0x4a93fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a9400:
    // 0x4a9400: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x4a9400u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_4a9404:
    // 0x4a9404: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x4a9404u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_4a9408:
    // 0x4a9408: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x4a9408u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_4a940c:
    // 0x4a940c: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x4a940cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_4a9410:
    // 0x4a9410: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x4a9410u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_4a9414:
    // 0x4a9414: 0x3e00008  jr          $ra
label_4a9418:
    if (ctx->pc == 0x4A9418u) {
        ctx->pc = 0x4A9418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9414u;
        // 0x4a9418: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A941Cu;
        goto label_4a941c;
    }
    ctx->pc = 0x4A9414u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A9418u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9414u;
        // 0x4a9418: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A9414u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A941Cu;
label_4a941c:
    // 0x4a941c: 0x0  nop
    ctx->pc = 0x4a941cu;
    // NOP
label_4a9420:
    // 0x4a9420: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x4a9420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_4a9424:
    // 0x4a9424: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x4a9424u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_4a9428:
    // 0x4a9428: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x4a9428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_4a942c:
    // 0x4a942c: 0x10c00010  beqz        $a2, . + 4 + (0x10 << 2)
label_4a9430:
    if (ctx->pc == 0x4A9430u) {
        ctx->pc = 0x4A9430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A942Cu;
        // 0x4a9430: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A9434u;
        goto label_4a9434;
    }
    ctx->pc = 0x4A942Cu;
    {
        const bool branch_taken_0x4a942c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A9430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A942Cu;
        // 0x4a9430: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a942c) {
            ctx->pc = 0x4A9470u;
            goto label_4a9470;
        }
    }
    ctx->pc = 0x4A9434u;
label_4a9434:
    // 0x4a9434: 0xafa50000  sw          $a1, 0x0($sp)
    ctx->pc = 0x4a9434u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 5));
label_4a9438:
    // 0x4a9438: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4a9438u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4a943c:
    // 0x4a943c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x4a943cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a9440:
    // 0x4a9440: 0xc12acd0  jal         func_4AB340
label_4a9444:
    if (ctx->pc == 0x4A9444u) {
        ctx->pc = 0x4A9444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9440u;
        // 0x4a9444: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A9448u;
        goto label_4a9448;
    }
    ctx->pc = 0x4A9440u;
    SET_GPR_U32(ctx, 31, 0x4A9448u);
    ctx->pc = 0x4A9444u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A9440u;
    // 0x4a9444: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AB340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AB340u, 0x4A9440u, 0x4A9448u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A9448u;
label_4a9448:
    // 0x4a9448: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4a9448u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4a944c:
    // 0x4a944c: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x4a944cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_4a9450:
    // 0x4a9450: 0xc12acd0  jal         func_4AB340
label_4a9454:
    if (ctx->pc == 0x4A9454u) {
        ctx->pc = 0x4A9454u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9450u;
        // 0x4a9454: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A9458u;
        goto label_4a9458;
    }
    ctx->pc = 0x4A9450u;
    SET_GPR_U32(ctx, 31, 0x4A9458u);
    ctx->pc = 0x4A9454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A9450u;
    // 0x4a9454: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AB340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AB340u, 0x4A9450u, 0x4A9458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A9458u;
label_4a9458:
    // 0x4a9458: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x4a9458u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_4a945c:
    // 0x4a945c: 0x26050008  addiu       $a1, $s0, 0x8
    ctx->pc = 0x4a945cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
label_4a9460:
    // 0x4a9460: 0xc12acd0  jal         func_4AB340
label_4a9464:
    if (ctx->pc == 0x4A9464u) {
        ctx->pc = 0x4A9464u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9460u;
        // 0x4a9464: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A9468u;
        goto label_4a9468;
    }
    ctx->pc = 0x4A9460u;
    SET_GPR_U32(ctx, 31, 0x4A9468u);
    ctx->pc = 0x4A9464u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x4A9460u;
    // 0x4a9464: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4AB340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AB340u, 0x4A9460u, 0x4A9468u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4A9468u;
label_4a9468:
    // 0x4a9468: 0x1000000a  b           . + 4 + (0xA << 2)
label_4a946c:
    if (ctx->pc == 0x4A946Cu) {
        ctx->pc = 0x4A946Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9468u;
        // 0x4a946c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A9470u;
        goto label_4a9470;
    }
    ctx->pc = 0x4A9468u;
    {
        const bool branch_taken_0x4a9468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A946Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9468u;
        // 0x4a946c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9468) {
            ctx->pc = 0x4A9494u;
            goto label_4a9494;
        }
    }
    ctx->pc = 0x4A9470u;
label_4a9470:
    // 0x4a9470: 0x6a020007  ldl         $v0, 0x7($s0)
    ctx->pc = 0x4a9470u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
label_4a9474:
    // 0x4a9474: 0x6e020000  ldr         $v0, 0x0($s0)
    ctx->pc = 0x4a9474u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
label_4a9478:
    // 0x4a9478: 0x8a03000b  lwl         $v1, 0xB($s0)
    ctx->pc = 0x4a9478u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
label_4a947c:
    // 0x4a947c: 0x9a030008  lwr         $v1, 0x8($s0)
    ctx->pc = 0x4a947cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
label_4a9480:
    // 0x4a9480: 0xb0a20007  sdl         $v0, 0x7($a1)
    ctx->pc = 0x4a9480u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a9484:
    // 0x4a9484: 0xb4a20000  sdr         $v0, 0x0($a1)
    ctx->pc = 0x4a9484u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
label_4a9488:
    // 0x4a9488: 0xa8a3000b  swl         $v1, 0xB($a1)
    ctx->pc = 0x4a9488u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
label_4a948c:
    // 0x4a948c: 0xb8a30008  swr         $v1, 0x8($a1)
    ctx->pc = 0x4a948cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
label_4a9490:
    // 0x4a9490: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x4a9490u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_4a9494:
    // 0x4a9494: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x4a9494u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_4a9498:
    // 0x4a9498: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x4a9498u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_4a949c:
    // 0x4a949c: 0x3e00008  jr          $ra
label_4a94a0:
    if (ctx->pc == 0x4A94A0u) {
        ctx->pc = 0x4A94A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A949Cu;
        // 0x4a94a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A94A4u;
        goto label_4a94a4;
    }
    ctx->pc = 0x4A949Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A94A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A949Cu;
        // 0x4a94a0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A949Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A94A4u;
label_4a94a4:
    // 0x4a94a4: 0x0  nop
    ctx->pc = 0x4a94a4u;
    // NOP
label_4a94a8:
    // 0x4a94a8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x4a94a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_4a94ac:
    // 0x4a94ac: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x4a94acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_4a94b0:
    // 0x4a94b0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x4a94b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_4a94b4:
    // 0x4a94b4: 0x8c900000  lw          $s0, 0x0($a0)
    ctx->pc = 0x4a94b4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_4a94b8:
    // 0x4a94b8: 0x8c840004  lw          $a0, 0x4($a0)
    ctx->pc = 0x4a94b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_4a94bc:
    // 0x4a94bc: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
label_4a94c0:
    if (ctx->pc == 0x4A94C0u) {
        ctx->pc = 0x4A94C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A94BCu;
        // 0x4a94c0: 0x2403000c  addiu       $v1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A94C4u;
        goto label_4a94c4;
    }
    ctx->pc = 0x4A94BCu;
    {
        const bool branch_taken_0x4a94bc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A94C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A94BCu;
        // 0x4a94c0: 0x2403000c  addiu       $v1, $zero, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a94bc) {
            ctx->pc = 0x4A94E8u;
            goto label_4a94e8;
        }
    }
    ctx->pc = 0x4A94C4u;
label_4a94c4:
    // 0x4a94c4: 0x3c030062  lui         $v1, 0x62
    ctx->pc = 0x4a94c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
label_4a94c8:
    // 0x4a94c8: 0x8c62e974  lw          $v0, -0x168C($v1)
    ctx->pc = 0x4a94c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961524)));
label_4a94cc:
    // 0x4a94cc: 0x40f809  jalr        $v0
label_4a94d0:
    if (ctx->pc == 0x4A94D0u) {
        ctx->pc = 0x4A94D4u;
        goto label_4a94d4;
    }
    ctx->pc = 0x4A94CCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x4A94D4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A94CCu, 0x4A94D4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x4A94D4u;
label_4a94d4:
    // 0x4a94d4: 0x8f83c1e8  lw          $v1, -0x3E18($gp)
    ctx->pc = 0x4a94d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951400)));
label_4a94d8:
    // 0x4a94d8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x4a94d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_4a94dc:
    // 0x4a94dc: 0x31823  negu        $v1, $v1
    ctx->pc = 0x4a94dcu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
label_4a94e0:
    // 0x4a94e0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x4a94e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_4a94e4:
    // 0x4a94e4: 0x2443000c  addiu       $v1, $v0, 0xC
    ctx->pc = 0x4a94e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
label_4a94e8:
    // 0x4a94e8: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x4a94e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
label_4a94ec:
    // 0x4a94ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4a94ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4a94f0:
    // 0x4a94f0: 0x70100a  movz        $v0, $v1, $s0
    ctx->pc = 0x4a94f0u;
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 3));
label_4a94f4:
    // 0x4a94f4: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x4a94f4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_4a94f8:
    // 0x4a94f8: 0x3e00008  jr          $ra
label_4a94fc:
    if (ctx->pc == 0x4A94FCu) {
        ctx->pc = 0x4A94FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A94F8u;
        // 0x4a94fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A9500u;
        goto label_4a9500;
    }
    ctx->pc = 0x4A94F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A94FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A94F8u;
        // 0x4a94fc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A94F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A9500u;
label_4a9500:
    // 0x4a9500: 0x2408ffdf  addiu       $t0, $zero, -0x21
    ctx->pc = 0x4a9500u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
label_4a9504:
    // 0x4a9504: 0x0  nop
    ctx->pc = 0x4a9504u;
    // NOP
label_4a9508:
    // 0x4a9508: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x4a9508u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
label_4a950c:
    // 0x4a950c: 0x2462ffbf  addiu       $v0, $v1, -0x41
    ctx->pc = 0x4a950cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967231));
label_4a9510:
    // 0x4a9510: 0x2c42003a  sltiu       $v0, $v0, 0x3A
    ctx->pc = 0x4a9510u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)58) ? 1 : 0);
label_4a9514:
    // 0x4a9514: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4a9518:
    if (ctx->pc == 0x4A9518u) {
        ctx->pc = 0x4A9518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9514u;
        // 0x4a9518: 0x681024  and         $v0, $v1, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A951Cu;
        goto label_4a951c;
    }
    ctx->pc = 0x4A9514u;
    {
        const bool branch_taken_0x4a9514 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A9518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9514u;
        // 0x4a9518: 0x681024  and         $v0, $v1, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9514) {
            ctx->pc = 0x4A9524u;
            goto label_4a9524;
        }
    }
    ctx->pc = 0x4A951Cu;
label_4a951c:
    // 0x4a951c: 0x10000002  b           . + 4 + (0x2 << 2)
label_4a9520:
    if (ctx->pc == 0x4A9520u) {
        ctx->pc = 0x4A9520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A951Cu;
        // 0x4a9520: 0x21600  sll         $v0, $v0, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A9524u;
        goto label_4a9524;
    }
    ctx->pc = 0x4A951Cu;
    {
        const bool branch_taken_0x4a951c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A9520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A951Cu;
        // 0x4a9520: 0x21600  sll         $v0, $v0, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a951c) {
            ctx->pc = 0x4A9528u;
            goto label_4a9528;
        }
    }
    ctx->pc = 0x4A9524u;
label_4a9524:
    // 0x4a9524: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x4a9524u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_4a9528:
    // 0x4a9528: 0x23e03  sra         $a3, $v0, 24
    ctx->pc = 0x4a9528u;
    SET_GPR_S32(ctx, 7, SRA32(GPR_S32(ctx, 2), 24));
label_4a952c:
    // 0x4a952c: 0x90a20000  lbu         $v0, 0x0($a1)
    ctx->pc = 0x4a952cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
label_4a9530:
    // 0x4a9530: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x4a9530u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_4a9534:
    // 0x4a9534: 0x2442ffbe  addiu       $v0, $v0, -0x42
    ctx->pc = 0x4a9534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967230));
label_4a9538:
    // 0x4a9538: 0x2c42001f  sltiu       $v0, $v0, 0x1F
    ctx->pc = 0x4a9538u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)31) ? 1 : 0);
label_4a953c:
    // 0x4a953c: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_4a9540:
    if (ctx->pc == 0x4A9540u) {
        ctx->pc = 0x4A9540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A953Cu;
        // 0x4a9540: 0x31600  sll         $v0, $v1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A9544u;
        goto label_4a9544;
    }
    ctx->pc = 0x4A953Cu;
    {
        const bool branch_taken_0x4a953c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A9540u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A953Cu;
        // 0x4a9540: 0x31600  sll         $v0, $v1, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a953c) {
            ctx->pc = 0x4A9560u;
            goto label_4a9560;
        }
    }
    ctx->pc = 0x4A9544u;
label_4a9544:
    // 0x4a9544: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x4a9544u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_4a9548:
    // 0x4a9548: 0x2842007b  slti        $v0, $v0, 0x7B
    ctx->pc = 0x4a9548u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)123) ? 1 : 0);
label_4a954c:
    // 0x4a954c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_4a9550:
    if (ctx->pc == 0x4A9550u) {
        ctx->pc = 0x4A9550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A954Cu;
        // 0x4a9550: 0x681024  and         $v0, $v1, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A9554u;
        goto label_4a9554;
    }
    ctx->pc = 0x4A954Cu;
    {
        const bool branch_taken_0x4a954c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A9550u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A954Cu;
        // 0x4a9550: 0x681024  and         $v0, $v1, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a954c) {
            ctx->pc = 0x4A955Cu;
            goto label_4a955c;
        }
    }
    ctx->pc = 0x4A9554u;
label_4a9554:
    // 0x4a9554: 0x10000002  b           . + 4 + (0x2 << 2)
label_4a9558:
    if (ctx->pc == 0x4A9558u) {
        ctx->pc = 0x4A9558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9554u;
        // 0x4a9558: 0x21600  sll         $v0, $v0, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A955Cu;
        goto label_4a955c;
    }
    ctx->pc = 0x4A9554u;
    {
        const bool branch_taken_0x4a9554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x4A9558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9554u;
        // 0x4a9558: 0x21600  sll         $v0, $v0, 24 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9554) {
            ctx->pc = 0x4A9560u;
            goto label_4a9560;
        }
    }
    ctx->pc = 0x4A955Cu;
label_4a955c:
    // 0x4a955c: 0x31600  sll         $v0, $v1, 24
    ctx->pc = 0x4a955cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 24));
label_4a9560:
    // 0x4a9560: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x4a9560u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
label_4a9564:
    // 0x4a9564: 0x14e20006  bne         $a3, $v0, . + 4 + (0x6 << 2)
label_4a9568:
    if (ctx->pc == 0x4A9568u) {
        ctx->pc = 0x4A9568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9564u;
        // 0x4a9568: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A956Cu;
        goto label_4a956c;
    }
    ctx->pc = 0x4A9564u;
    {
        const bool branch_taken_0x4a9564 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x4A9568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9564u;
        // 0x4a9568: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9564) {
            ctx->pc = 0x4A9580u;
            goto label_4a9580;
        }
    }
    ctx->pc = 0x4A956Cu;
label_4a956c:
    // 0x4a956c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x4a956cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_4a9570:
    // 0x4a9570: 0x14c0ffe5  bnez        $a2, . + 4 + (-0x1B << 2)
label_4a9574:
    if (ctx->pc == 0x4A9574u) {
        ctx->pc = 0x4A9574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9570u;
        // 0x4a9574: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A9578u;
        goto label_4a9578;
    }
    ctx->pc = 0x4A9570u;
    {
        const bool branch_taken_0x4a9570 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x4A9574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9570u;
        // 0x4a9574: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x4a9570) {
            ctx->pc = 0x4A9508u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_4a9508;
        }
    }
    ctx->pc = 0x4A9578u;
label_4a9578:
    // 0x4a9578: 0x3e00008  jr          $ra
label_4a957c:
    if (ctx->pc == 0x4A957Cu) {
        ctx->pc = 0x4A957Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9578u;
        // 0x4a957c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A9580u;
        goto label_4a9580;
    }
    ctx->pc = 0x4A9578u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A957Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9578u;
        // 0x4a957c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A9578u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x4A9580u;
label_4a9580:
    // 0x4a9580: 0x3e00008  jr          $ra
label_4a9584:
    if (ctx->pc == 0x4A9584u) {
        ctx->pc = 0x4A9584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9580u;
        // 0x4a9584: 0xe21023  subu        $v0, $a3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x4A9588u;
        goto label_fallthrough_0x4a9580;
    }
    ctx->pc = 0x4A9580u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x4A9584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x4A9580u;
        // 0x4a9584: 0xe21023  subu        $v0, $a3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 7), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4A9580u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4a9580:
    ctx->pc = 0x4A9588u;
}
