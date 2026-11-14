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

// Function: sub_003B6558
// Address: 0x3b6558 - 0x3b67b8
void sub_003B6558_0x3b6558(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003B6558_0x3b6558");
#endif

    switch (ctx->pc) {
        case 0x3b6558u: goto label_3b6558;
        case 0x3b655cu: goto label_3b655c;
        case 0x3b6560u: goto label_3b6560;
        case 0x3b6564u: goto label_3b6564;
        case 0x3b6568u: goto label_3b6568;
        case 0x3b656cu: goto label_3b656c;
        case 0x3b6570u: goto label_3b6570;
        case 0x3b6574u: goto label_3b6574;
        case 0x3b6578u: goto label_3b6578;
        case 0x3b657cu: goto label_3b657c;
        case 0x3b6580u: goto label_3b6580;
        case 0x3b6584u: goto label_3b6584;
        case 0x3b6588u: goto label_3b6588;
        case 0x3b658cu: goto label_3b658c;
        case 0x3b6590u: goto label_3b6590;
        case 0x3b6594u: goto label_3b6594;
        case 0x3b6598u: goto label_3b6598;
        case 0x3b659cu: goto label_3b659c;
        case 0x3b65a0u: goto label_3b65a0;
        case 0x3b65a4u: goto label_3b65a4;
        case 0x3b65a8u: goto label_3b65a8;
        case 0x3b65acu: goto label_3b65ac;
        case 0x3b65b0u: goto label_3b65b0;
        case 0x3b65b4u: goto label_3b65b4;
        case 0x3b65b8u: goto label_3b65b8;
        case 0x3b65bcu: goto label_3b65bc;
        case 0x3b65c0u: goto label_3b65c0;
        case 0x3b65c4u: goto label_3b65c4;
        case 0x3b65c8u: goto label_3b65c8;
        case 0x3b65ccu: goto label_3b65cc;
        case 0x3b65d0u: goto label_3b65d0;
        case 0x3b65d4u: goto label_3b65d4;
        case 0x3b65d8u: goto label_3b65d8;
        case 0x3b65dcu: goto label_3b65dc;
        case 0x3b65e0u: goto label_3b65e0;
        case 0x3b65e4u: goto label_3b65e4;
        case 0x3b65e8u: goto label_3b65e8;
        case 0x3b65ecu: goto label_3b65ec;
        case 0x3b65f0u: goto label_3b65f0;
        case 0x3b65f4u: goto label_3b65f4;
        case 0x3b65f8u: goto label_3b65f8;
        case 0x3b65fcu: goto label_3b65fc;
        case 0x3b6600u: goto label_3b6600;
        case 0x3b6604u: goto label_3b6604;
        case 0x3b6608u: goto label_3b6608;
        case 0x3b660cu: goto label_3b660c;
        case 0x3b6610u: goto label_3b6610;
        case 0x3b6614u: goto label_3b6614;
        case 0x3b6618u: goto label_3b6618;
        case 0x3b661cu: goto label_3b661c;
        case 0x3b6620u: goto label_3b6620;
        case 0x3b6624u: goto label_3b6624;
        case 0x3b6628u: goto label_3b6628;
        case 0x3b662cu: goto label_3b662c;
        case 0x3b6630u: goto label_3b6630;
        case 0x3b6634u: goto label_3b6634;
        case 0x3b6638u: goto label_3b6638;
        case 0x3b663cu: goto label_3b663c;
        case 0x3b6640u: goto label_3b6640;
        case 0x3b6644u: goto label_3b6644;
        case 0x3b6648u: goto label_3b6648;
        case 0x3b664cu: goto label_3b664c;
        case 0x3b6650u: goto label_3b6650;
        case 0x3b6654u: goto label_3b6654;
        case 0x3b6658u: goto label_3b6658;
        case 0x3b665cu: goto label_3b665c;
        case 0x3b6660u: goto label_3b6660;
        case 0x3b6664u: goto label_3b6664;
        case 0x3b6668u: goto label_3b6668;
        case 0x3b666cu: goto label_3b666c;
        case 0x3b6670u: goto label_3b6670;
        case 0x3b6674u: goto label_3b6674;
        case 0x3b6678u: goto label_3b6678;
        case 0x3b667cu: goto label_3b667c;
        case 0x3b6680u: goto label_3b6680;
        case 0x3b6684u: goto label_3b6684;
        case 0x3b6688u: goto label_3b6688;
        case 0x3b668cu: goto label_3b668c;
        case 0x3b6690u: goto label_3b6690;
        case 0x3b6694u: goto label_3b6694;
        case 0x3b6698u: goto label_3b6698;
        case 0x3b669cu: goto label_3b669c;
        case 0x3b66a0u: goto label_3b66a0;
        case 0x3b66a4u: goto label_3b66a4;
        case 0x3b66a8u: goto label_3b66a8;
        case 0x3b66acu: goto label_3b66ac;
        case 0x3b66b0u: goto label_3b66b0;
        case 0x3b66b4u: goto label_3b66b4;
        case 0x3b66b8u: goto label_3b66b8;
        case 0x3b66bcu: goto label_3b66bc;
        case 0x3b66c0u: goto label_3b66c0;
        case 0x3b66c4u: goto label_3b66c4;
        case 0x3b66c8u: goto label_3b66c8;
        case 0x3b66ccu: goto label_3b66cc;
        case 0x3b66d0u: goto label_3b66d0;
        case 0x3b66d4u: goto label_3b66d4;
        case 0x3b66d8u: goto label_3b66d8;
        case 0x3b66dcu: goto label_3b66dc;
        case 0x3b66e0u: goto label_3b66e0;
        case 0x3b66e4u: goto label_3b66e4;
        case 0x3b66e8u: goto label_3b66e8;
        case 0x3b66ecu: goto label_3b66ec;
        case 0x3b66f0u: goto label_3b66f0;
        case 0x3b66f4u: goto label_3b66f4;
        case 0x3b66f8u: goto label_3b66f8;
        case 0x3b66fcu: goto label_3b66fc;
        case 0x3b6700u: goto label_3b6700;
        case 0x3b6704u: goto label_3b6704;
        case 0x3b6708u: goto label_3b6708;
        case 0x3b670cu: goto label_3b670c;
        case 0x3b6710u: goto label_3b6710;
        case 0x3b6714u: goto label_3b6714;
        case 0x3b6718u: goto label_3b6718;
        case 0x3b671cu: goto label_3b671c;
        case 0x3b6720u: goto label_3b6720;
        case 0x3b6724u: goto label_3b6724;
        case 0x3b6728u: goto label_3b6728;
        case 0x3b672cu: goto label_3b672c;
        case 0x3b6730u: goto label_3b6730;
        case 0x3b6734u: goto label_3b6734;
        case 0x3b6738u: goto label_3b6738;
        case 0x3b673cu: goto label_3b673c;
        case 0x3b6740u: goto label_3b6740;
        case 0x3b6744u: goto label_3b6744;
        case 0x3b6748u: goto label_3b6748;
        case 0x3b674cu: goto label_3b674c;
        case 0x3b6750u: goto label_3b6750;
        case 0x3b6754u: goto label_3b6754;
        case 0x3b6758u: goto label_3b6758;
        case 0x3b675cu: goto label_3b675c;
        case 0x3b6760u: goto label_3b6760;
        case 0x3b6764u: goto label_3b6764;
        case 0x3b6768u: goto label_3b6768;
        case 0x3b676cu: goto label_3b676c;
        case 0x3b6770u: goto label_3b6770;
        case 0x3b6774u: goto label_3b6774;
        case 0x3b6778u: goto label_3b6778;
        case 0x3b677cu: goto label_3b677c;
        case 0x3b6780u: goto label_3b6780;
        case 0x3b6784u: goto label_3b6784;
        case 0x3b6788u: goto label_3b6788;
        case 0x3b678cu: goto label_3b678c;
        case 0x3b6790u: goto label_3b6790;
        case 0x3b6794u: goto label_3b6794;
        case 0x3b6798u: goto label_3b6798;
        case 0x3b679cu: goto label_3b679c;
        case 0x3b67a0u: goto label_3b67a0;
        case 0x3b67a4u: goto label_3b67a4;
        case 0x3b67a8u: goto label_3b67a8;
        case 0x3b67acu: goto label_3b67ac;
        case 0x3b67b0u: goto label_3b67b0;
        case 0x3b67b4u: goto label_3b67b4;
        default: break;
    }

    ctx->pc = 0x3b6558u;

label_3b6558:
    // 0x3b6558: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x3b6558u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
label_3b655c:
    // 0x3b655c: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x3b655cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
label_3b6560:
    // 0x3b6560: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x3b6560u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
label_3b6564:
    // 0x3b6564: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3b6564u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_3b6568:
    // 0x3b6568: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x3b6568u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
label_3b656c:
    // 0x3b656c: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x3b656cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
label_3b6570:
    // 0x3b6570: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x3b6570u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
label_3b6574:
    // 0x3b6574: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x3b6574u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
label_3b6578:
    // 0x3b6578: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x3b6578u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
label_3b657c:
    // 0x3b657c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x3b657cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_3b6580:
    // 0x3b6580: 0xc0ed30a  jal         func_3B4C28
label_3b6584:
    if (ctx->pc == 0x3B6584u) {
        ctx->pc = 0x3B6584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6580u;
        // 0x3b6584: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6588u;
        goto label_3b6588;
    }
    ctx->pc = 0x3B6580u;
    SET_GPR_U32(ctx, 31, 0x3B6588u);
    ctx->pc = 0x3B6584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6580u;
    // 0x3b6584: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B4C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B4C28u, 0x3B6580u, 0x3B6588u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6588u;
label_3b6588:
    // 0x3b6588: 0x1200001a  beqz        $s0, . + 4 + (0x1A << 2)
label_3b658c:
    if (ctx->pc == 0x3B658Cu) {
        ctx->pc = 0x3B658Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6588u;
        // 0x3b658c: 0x24530010  addiu       $s3, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6590u;
        goto label_3b6590;
    }
    ctx->pc = 0x3B6588u;
    {
        const bool branch_taken_0x3b6588 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B658Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6588u;
        // 0x3b658c: 0x24530010  addiu       $s3, $v0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6588) {
            ctx->pc = 0x3B65F4u;
            goto label_3b65f4;
        }
    }
    ctx->pc = 0x3B6590u;
label_3b6590:
    // 0x3b6590: 0x8e4400b0  lw          $a0, 0xB0($s2)
    ctx->pc = 0x3b6590u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_3b6594:
    // 0x3b6594: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x3b6594u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_3b6598:
    // 0x3b6598: 0xafb00004  sw          $s0, 0x4($sp)
    ctx->pc = 0x3b6598u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 16));
label_3b659c:
    // 0x3b659c: 0x24558000  addiu       $s5, $v0, -0x8000
    ctx->pc = 0x3b659cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934528));
label_3b65a0:
    // 0x3b65a0: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3b65a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_3b65a4:
    // 0x3b65a4: 0xc1036d2  jal         func_40DB48
label_3b65a8:
    if (ctx->pc == 0x3B65A8u) {
        ctx->pc = 0x3B65A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B65A4u;
        // 0x3b65a8: 0x3a0a02d  daddu       $s4, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B65ACu;
        goto label_3b65ac;
    }
    ctx->pc = 0x3B65A4u;
    SET_GPR_U32(ctx, 31, 0x3B65ACu);
    ctx->pc = 0x3B65A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B65A4u;
    // 0x3b65a8: 0x3a0a02d  daddu       $s4, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB48u, 0x3B65A4u, 0x3B65ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B65ACu;
label_3b65ac:
    // 0x3b65ac: 0x8e4400b4  lw          $a0, 0xB4($s2)
    ctx->pc = 0x3b65acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
label_3b65b0:
    // 0x3b65b0: 0x24030110  addiu       $v1, $zero, 0x110
    ctx->pc = 0x3b65b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
label_3b65b4:
    // 0x3b65b4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b65b4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b65b8:
    // 0x3b65b8: 0x832818  mult        $a1, $a0, $v1
    ctx->pc = 0x3b65b8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_3b65bc:
    // 0x3b65bc: 0xa28821  addu        $s1, $a1, $v0
    ctx->pc = 0x3b65bcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_3b65c0:
    // 0x3b65c0: 0x1211000a  beq         $s0, $s1, . + 4 + (0xA << 2)
label_3b65c4:
    if (ctx->pc == 0x3B65C4u) {
        ctx->pc = 0x3B65C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B65C0u;
        // 0x3b65c4: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B65C8u;
        goto label_3b65c8;
    }
    ctx->pc = 0x3B65C0u;
    {
        const bool branch_taken_0x3b65c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        ctx->pc = 0x3B65C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B65C0u;
        // 0x3b65c4: 0x8fa20000  lw          $v0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b65c0) {
            ctx->pc = 0x3B65ECu;
            goto label_3b65ec;
        }
    }
    ctx->pc = 0x3B65C8u;
label_3b65c8:
    // 0x3b65c8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b65c8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b65cc:
    // 0x3b65cc: 0x0  nop
    ctx->pc = 0x3b65ccu;
    // NOP
label_3b65d0:
    // 0x3b65d0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3b65d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b65d4:
    // 0x3b65d4: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3b65d4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3b65d8:
    // 0x3b65d8: 0x2a0f809  jalr        $s5
label_3b65dc:
    if (ctx->pc == 0x3B65DCu) {
        ctx->pc = 0x3B65DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B65D8u;
        // 0x3b65dc: 0x26100110  addiu       $s0, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B65E0u;
        goto label_3b65e0;
    }
    ctx->pc = 0x3B65D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x3B65E0u);
        ctx->pc = 0x3B65DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B65D8u;
        // 0x3b65dc: 0x26100110  addiu       $s0, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B65D8u, 0x3B65E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B65E0u;
label_3b65e0:
    // 0x3b65e0: 0x1611fffb  bne         $s0, $s1, . + 4 + (-0x5 << 2)
label_3b65e4:
    if (ctx->pc == 0x3B65E4u) {
        ctx->pc = 0x3B65E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B65E0u;
        // 0x3b65e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B65E8u;
        goto label_3b65e8;
    }
    ctx->pc = 0x3B65E0u;
    {
        const bool branch_taken_0x3b65e0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        ctx->pc = 0x3B65E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B65E0u;
        // 0x3b65e4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b65e0) {
            ctx->pc = 0x3B65D0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b65d0;
        }
    }
    ctx->pc = 0x3B65E8u;
label_3b65e8:
    // 0x3b65e8: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x3b65e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3b65ec:
    // 0x3b65ec: 0x10000066  b           . + 4 + (0x66 << 2)
label_3b65f0:
    if (ctx->pc == 0x3B65F0u) {
        ctx->pc = 0x3B65F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B65ECu;
        // 0x3b65f0: 0x2629821  addu        $s3, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B65F4u;
        goto label_3b65f4;
    }
    ctx->pc = 0x3B65ECu;
    {
        const bool branch_taken_0x3b65ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B65F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B65ECu;
        // 0x3b65f0: 0x2629821  addu        $s3, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b65ec) {
            ctx->pc = 0x3B6788u;
            goto label_3b6788;
        }
    }
    ctx->pc = 0x3B65F4u;
label_3b65f4:
    // 0x3b65f4: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x3b65f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
label_3b65f8:
    // 0x3b65f8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3b65f8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b65fc:
    // 0x3b65fc: 0x27b00020  addiu       $s0, $sp, 0x20
    ctx->pc = 0x3b65fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_3b6600:
    // 0x3b6600: 0x24a57e10  addiu       $a1, $a1, 0x7E10
    ctx->pc = 0x3b6600u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32272));
label_3b6604:
    // 0x3b6604: 0xafa00030  sw          $zero, 0x30($sp)
    ctx->pc = 0x3b6604u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 0));
label_3b6608:
    // 0x3b6608: 0xc0ede40  jal         func_3B7900
label_3b660c:
    if (ctx->pc == 0x3B660Cu) {
        ctx->pc = 0x3B660Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6608u;
        // 0x3b660c: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6610u;
        goto label_3b6610;
    }
    ctx->pc = 0x3B6608u;
    SET_GPR_U32(ctx, 31, 0x3B6610u);
    ctx->pc = 0x3B660Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6608u;
    // 0x3b660c: 0x27a60030  addiu       $a2, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B7900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B7900u, 0x3B6608u, 0x3B6610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6610u;
label_3b6610:
    // 0x3b6610: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x3b6610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_3b6614:
    // 0x3b6614: 0x10800014  beqz        $a0, . + 4 + (0x14 << 2)
label_3b6618:
    if (ctx->pc == 0x3B6618u) {
        ctx->pc = 0x3B6618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6614u;
        // 0x3b6618: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B661Cu;
        goto label_3b661c;
    }
    ctx->pc = 0x3B6614u;
    {
        const bool branch_taken_0x3b6614 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B6618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6614u;
        // 0x3b6618: 0x3c030062  lui         $v1, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6614) {
            ctx->pc = 0x3B6668u;
            goto label_3b6668;
        }
    }
    ctx->pc = 0x3B661Cu;
label_3b661c:
    // 0x3b661c: 0x3c050003  lui         $a1, 0x3
    ctx->pc = 0x3b661cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
label_3b6620:
    // 0x3b6620: 0x8c62e988  lw          $v0, -0x1678($v1)
    ctx->pc = 0x3b6620u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961544)));
label_3b6624:
    // 0x3b6624: 0x42080  sll         $a0, $a0, 2
    ctx->pc = 0x3b6624u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
label_3b6628:
    // 0x3b6628: 0x40f809  jalr        $v0
label_3b662c:
    if (ctx->pc == 0x3B662Cu) {
        ctx->pc = 0x3B662Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6628u;
        // 0x3b662c: 0x34a50190  ori         $a1, $a1, 0x190 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)400);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6630u;
        goto label_3b6630;
    }
    ctx->pc = 0x3B6628u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x3B6630u);
        ctx->pc = 0x3B662Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6628u;
        // 0x3b662c: 0x34a50190  ori         $a1, $a1, 0x190 (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)400);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B6628u, 0x3B6630u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B6630u;
label_3b6630:
    // 0x3b6630: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
label_3b6634:
    if (ctx->pc == 0x3B6634u) {
        ctx->pc = 0x3B6634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6630u;
        // 0x3b6634: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6638u;
        goto label_3b6638;
    }
    ctx->pc = 0x3B6630u;
    {
        const bool branch_taken_0x3b6630 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B6634u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6630u;
        // 0x3b6634: 0xafa20010  sw          $v0, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6630) {
            ctx->pc = 0x3B666Cu;
            goto label_3b666c;
        }
    }
    ctx->pc = 0x3B6638u;
label_3b6638:
    // 0x3b6638: 0x8fa50030  lw          $a1, 0x30($sp)
    ctx->pc = 0x3b6638u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_3b663c:
    // 0x3b663c: 0x24020190  addiu       $v0, $zero, 0x190
    ctx->pc = 0x3b663cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 400));
label_3b6640:
    // 0x3b6640: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x3b6640u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_3b6644:
    // 0x3b6644: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x3b6644u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_3b6648:
    // 0x3b6648: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x3b6648u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
label_3b664c:
    // 0x3b664c: 0xc1035f6  jal         func_40D7D8
label_3b6650:
    if (ctx->pc == 0x3B6650u) {
        ctx->pc = 0x3B6650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B664Cu;
        // 0x3b6650: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6654u;
        goto label_3b6654;
    }
    ctx->pc = 0x3B664Cu;
    SET_GPR_U32(ctx, 31, 0x3B6654u);
    ctx->pc = 0x3B6650u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B664Cu;
    // 0x3b6650: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x3B664Cu, 0x3B6654u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6654u;
label_3b6654:
    // 0x3b6654: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x3b6654u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
label_3b6658:
    // 0x3b6658: 0xc103628  jal         func_40D8A0
label_3b665c:
    if (ctx->pc == 0x3B665Cu) {
        ctx->pc = 0x3B665Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6658u;
        // 0x3b665c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6660u;
        goto label_3b6660;
    }
    ctx->pc = 0x3B6658u;
    SET_GPR_U32(ctx, 31, 0x3B6660u);
    ctx->pc = 0x3B665Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B6658u;
    // 0x3b665c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x3B6658u, 0x3B6660u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6660u;
label_3b6660:
    // 0x3b6660: 0x10000009  b           . + 4 + (0x9 << 2)
label_3b6664:
    if (ctx->pc == 0x3B6664u) {
        ctx->pc = 0x3B6664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6660u;
        // 0x3b6664: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6668u;
        goto label_3b6668;
    }
    ctx->pc = 0x3B6660u;
    {
        const bool branch_taken_0x3b6660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B6664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6660u;
        // 0x3b6664: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6660) {
            ctx->pc = 0x3B6688u;
            goto label_3b6688;
        }
    }
    ctx->pc = 0x3B6668u;
label_3b6668:
    // 0x3b6668: 0xafa00010  sw          $zero, 0x10($sp)
    ctx->pc = 0x3b6668u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
label_3b666c:
    // 0x3b666c: 0x3c05003b  lui         $a1, 0x3B
    ctx->pc = 0x3b666cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)59 << 16));
label_3b6670:
    // 0x3b6670: 0xafa00014  sw          $zero, 0x14($sp)
    ctx->pc = 0x3b6670u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 0));
label_3b6674:
    // 0x3b6674: 0x24a57e80  addiu       $a1, $a1, 0x7E80
    ctx->pc = 0x3b6674u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32384));
label_3b6678:
    // 0x3b6678: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3b6678u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b667c:
    // 0x3b667c: 0xc0ede40  jal         func_3B7900
label_3b6680:
    if (ctx->pc == 0x3B6680u) {
        ctx->pc = 0x3B6680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B667Cu;
        // 0x3b6680: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6684u;
        goto label_3b6684;
    }
    ctx->pc = 0x3B667Cu;
    SET_GPR_U32(ctx, 31, 0x3B6684u);
    ctx->pc = 0x3B6680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B667Cu;
    // 0x3b6680: 0x27a60010  addiu       $a2, $sp, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B7900u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B7900u, 0x3B667Cu, 0x3B6684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6684u;
label_3b6684:
    // 0x3b6684: 0x27a20010  addiu       $v0, $sp, 0x10
    ctx->pc = 0x3b6684u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3b6688:
    // 0x3b6688: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
label_3b668c:
    if (ctx->pc == 0x3B668Cu) {
        ctx->pc = 0x3B668Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6688u;
        // 0x3b668c: 0x2676000c  addiu       $s6, $s3, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6690u;
        goto label_3b6690;
    }
    ctx->pc = 0x3B6688u;
    {
        const bool branch_taken_0x3b6688 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B668Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6688u;
        // 0x3b668c: 0x2676000c  addiu       $s6, $s3, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 19), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6688) {
            ctx->pc = 0x3B6698u;
            goto label_3b6698;
        }
    }
    ctx->pc = 0x3B6690u;
label_3b6690:
    // 0x3b6690: 0x1000003e  b           . + 4 + (0x3E << 2)
label_3b6694:
    if (ctx->pc == 0x3B6694u) {
        ctx->pc = 0x3B6694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6690u;
        // 0x3b6694: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6698u;
        goto label_3b6698;
    }
    ctx->pc = 0x3B6690u;
    {
        const bool branch_taken_0x3b6690 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B6694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6690u;
        // 0x3b6694: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6690) {
            ctx->pc = 0x3B678Cu;
            goto label_3b678c;
        }
    }
    ctx->pc = 0x3B6698u;
label_3b6698:
    // 0x3b6698: 0x8fa20014  lw          $v0, 0x14($sp)
    ctx->pc = 0x3b6698u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_3b669c:
    // 0x3b669c: 0x24130004  addiu       $s3, $zero, 0x4
    ctx->pc = 0x3b669cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_3b66a0:
    // 0x3b66a0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x3b66a0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b66a4:
    // 0x3b66a4: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_3b66a8:
    if (ctx->pc == 0x3B66A8u) {
        ctx->pc = 0x3B66A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B66A4u;
        // 0x3b66a8: 0x27b50010  addiu       $s5, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B66ACu;
        goto label_3b66ac;
    }
    ctx->pc = 0x3B66A4u;
    {
        const bool branch_taken_0x3b66a4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B66A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B66A4u;
        // 0x3b66a8: 0x27b50010  addiu       $s5, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b66a4) {
            ctx->pc = 0x3B66D8u;
            goto label_3b66d8;
        }
    }
    ctx->pc = 0x3B66ACu;
label_3b66ac:
    // 0x3b66ac: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3b66acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b66b0:
    // 0x3b66b0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x3b66b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_3b66b4:
    // 0x3b66b4: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3b66b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3b66b8:
    // 0x3b66b8: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x3b66b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_3b66bc:
    // 0x3b66bc: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3b66bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3b66c0:
    // 0x3b66c0: 0xc0ee8a2  jal         func_3BA288
label_3b66c4:
    if (ctx->pc == 0x3B66C4u) {
        ctx->pc = 0x3B66C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B66C0u;
        // 0x3b66c4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B66C8u;
        goto label_3b66c8;
    }
    ctx->pc = 0x3B66C0u;
    SET_GPR_U32(ctx, 31, 0x3B66C8u);
    ctx->pc = 0x3B66C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B66C0u;
    // 0x3b66c4: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3BA288u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3BA288u, 0x3B66C0u, 0x3B66C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B66C8u;
label_3b66c8:
    // 0x3b66c8: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x3b66c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_3b66cc:
    // 0x3b66cc: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x3b66ccu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3b66d0:
    // 0x3b66d0: 0x1460fff7  bnez        $v1, . + 4 + (-0x9 << 2)
label_3b66d4:
    if (ctx->pc == 0x3B66D4u) {
        ctx->pc = 0x3B66D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B66D0u;
        // 0x3b66d4: 0x2629821  addu        $s3, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B66D8u;
        goto label_3b66d8;
    }
    ctx->pc = 0x3B66D0u;
    {
        const bool branch_taken_0x3b66d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B66D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B66D0u;
        // 0x3b66d4: 0x2629821  addu        $s3, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b66d0) {
            ctx->pc = 0x3B66B0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b66b0;
        }
    }
    ctx->pc = 0x3B66D8u;
label_3b66d8:
    // 0x3b66d8: 0x8e4400b0  lw          $a0, 0xB0($s2)
    ctx->pc = 0x3b66d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 176)));
label_3b66dc:
    // 0x3b66dc: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x3b66dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
label_3b66e0:
    // 0x3b66e0: 0xafb50004  sw          $s5, 0x4($sp)
    ctx->pc = 0x3b66e0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 21));
label_3b66e4:
    // 0x3b66e4: 0x3a0a02d  daddu       $s4, $sp, $zero
    ctx->pc = 0x3b66e4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_3b66e8:
    // 0x3b66e8: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x3b66e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
label_3b66ec:
    // 0x3b66ec: 0xc1036d2  jal         func_40DB48
label_3b66f0:
    if (ctx->pc == 0x3B66F0u) {
        ctx->pc = 0x3B66F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B66ECu;
        // 0x3b66f0: 0x24558000  addiu       $s5, $v0, -0x8000 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934528));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B66F4u;
        goto label_3b66f4;
    }
    ctx->pc = 0x3B66ECu;
    SET_GPR_U32(ctx, 31, 0x3B66F4u);
    ctx->pc = 0x3B66F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B66ECu;
    // 0x3b66f0: 0x24558000  addiu       $s5, $v0, -0x8000 (Delay Slot)
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 4294934528));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40DB48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40DB48u, 0x3B66ECu, 0x3B66F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B66F4u;
label_3b66f4:
    // 0x3b66f4: 0x8e4400b4  lw          $a0, 0xB4($s2)
    ctx->pc = 0x3b66f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 180)));
label_3b66f8:
    // 0x3b66f8: 0x24030110  addiu       $v1, $zero, 0x110
    ctx->pc = 0x3b66f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
label_3b66fc:
    // 0x3b66fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3b66fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_3b6700:
    // 0x3b6700: 0x832818  mult        $a1, $a0, $v1
    ctx->pc = 0x3b6700u;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 5, (int32_t)result); }
label_3b6704:
    // 0x3b6704: 0xa28821  addu        $s1, $a1, $v0
    ctx->pc = 0x3b6704u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_3b6708:
    // 0x3b6708: 0x12110009  beq         $s0, $s1, . + 4 + (0x9 << 2)
label_3b670c:
    if (ctx->pc == 0x3B670Cu) {
        ctx->pc = 0x3B670Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6708u;
        // 0x3b670c: 0x2d39821  addu        $s3, $s6, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6710u;
        goto label_3b6710;
    }
    ctx->pc = 0x3B6708u;
    {
        const bool branch_taken_0x3b6708 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 17));
        ctx->pc = 0x3B670Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6708u;
        // 0x3b670c: 0x2d39821  addu        $s3, $s6, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 22), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6708) {
            ctx->pc = 0x3B6730u;
            goto label_3b6730;
        }
    }
    ctx->pc = 0x3B6710u;
label_3b6710:
    // 0x3b6710: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3b6710u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_3b6714:
    // 0x3b6714: 0x0  nop
    ctx->pc = 0x3b6714u;
    // NOP
label_3b6718:
    // 0x3b6718: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x3b6718u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_3b671c:
    // 0x3b671c: 0x280302d  daddu       $a2, $s4, $zero
    ctx->pc = 0x3b671cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3b6720:
    // 0x3b6720: 0x2a0f809  jalr        $s5
label_3b6724:
    if (ctx->pc == 0x3B6724u) {
        ctx->pc = 0x3B6724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6720u;
        // 0x3b6724: 0x26100110  addiu       $s0, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6728u;
        goto label_3b6728;
    }
    ctx->pc = 0x3B6720u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 21);
        SET_GPR_U32(ctx, 31, 0x3B6728u);
        ctx->pc = 0x3B6724u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6720u;
        // 0x3b6724: 0x26100110  addiu       $s0, $s0, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 272));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B6720u, 0x3B6728u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B6728u;
label_3b6728:
    // 0x3b6728: 0x1611fffb  bne         $s0, $s1, . + 4 + (-0x5 << 2)
label_3b672c:
    if (ctx->pc == 0x3B672Cu) {
        ctx->pc = 0x3B672Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6728u;
        // 0x3b672c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6730u;
        goto label_3b6730;
    }
    ctx->pc = 0x3B6728u;
    {
        const bool branch_taken_0x3b6728 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 17));
        ctx->pc = 0x3B672Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6728u;
        // 0x3b672c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6728) {
            ctx->pc = 0x3B6718u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b6718;
        }
    }
    ctx->pc = 0x3B6730u;
label_3b6730:
    // 0x3b6730: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x3b6730u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_3b6734:
    // 0x3b6734: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x3b6734u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_3b6738:
    // 0x3b6738: 0x10600013  beqz        $v1, . + 4 + (0x13 << 2)
label_3b673c:
    if (ctx->pc == 0x3B673Cu) {
        ctx->pc = 0x3B673Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6738u;
        // 0x3b673c: 0x2629821  addu        $s3, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6740u;
        goto label_3b6740;
    }
    ctx->pc = 0x3B6738u;
    {
        const bool branch_taken_0x3b6738 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B673Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6738u;
        // 0x3b673c: 0x2629821  addu        $s3, $s3, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6738) {
            ctx->pc = 0x3B6788u;
            goto label_3b6788;
        }
    }
    ctx->pc = 0x3B6740u;
label_3b6740:
    // 0x3b6740: 0x1060000c  beqz        $v1, . + 4 + (0xC << 2)
label_3b6744:
    if (ctx->pc == 0x3B6744u) {
        ctx->pc = 0x3B6744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6740u;
        // 0x3b6744: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6748u;
        goto label_3b6748;
    }
    ctx->pc = 0x3B6740u;
    {
        const bool branch_taken_0x3b6740 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3B6744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6740u;
        // 0x3b6744: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b6740) {
            ctx->pc = 0x3B6774u;
            goto label_3b6774;
        }
    }
    ctx->pc = 0x3B6748u;
label_3b6748:
    // 0x3b6748: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x3b6748u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_3b674c:
    // 0x3b674c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x3b674cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_3b6750:
    // 0x3b6750: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x3b6750u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_3b6754:
    // 0x3b6754: 0x2221021  addu        $v0, $s1, $v0
    ctx->pc = 0x3b6754u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_3b6758:
    // 0x3b6758: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x3b6758u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_3b675c:
    // 0x3b675c: 0xc0ee520  jal         func_3B9480
label_3b6760:
    if (ctx->pc == 0x3B6760u) {
        ctx->pc = 0x3B6760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B675Cu;
        // 0x3b6760: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6764u;
        goto label_3b6764;
    }
    ctx->pc = 0x3B675Cu;
    SET_GPR_U32(ctx, 31, 0x3B6764u);
    ctx->pc = 0x3B6760u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3B675Cu;
    // 0x3b6760: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3B9480u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3B9480u, 0x3B675Cu, 0x3B6764u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3B6764u;
label_3b6764:
    // 0x3b6764: 0x8fa30014  lw          $v1, 0x14($sp)
    ctx->pc = 0x3b6764u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
label_3b6768:
    // 0x3b6768: 0x203182b  sltu        $v1, $s0, $v1
    ctx->pc = 0x3b6768u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_3b676c:
    // 0x3b676c: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
label_3b6770:
    if (ctx->pc == 0x3B6770u) {
        ctx->pc = 0x3B6770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B676Cu;
        // 0x3b6770: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6774u;
        goto label_3b6774;
    }
    ctx->pc = 0x3B676Cu;
    {
        const bool branch_taken_0x3b676c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3B6770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B676Cu;
        // 0x3b6770: 0x8fa20010  lw          $v0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3b676c) {
            ctx->pc = 0x3B6750u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3b6750;
        }
    }
    ctx->pc = 0x3B6774u;
label_3b6774:
    // 0x3b6774: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x3b6774u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_3b6778:
    // 0x3b6778: 0x2442e880  addiu       $v0, $v0, -0x1780
    ctx->pc = 0x3b6778u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_3b677c:
    // 0x3b677c: 0x8c43010c  lw          $v1, 0x10C($v0)
    ctx->pc = 0x3b677cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 268)));
label_3b6780:
    // 0x3b6780: 0x60f809  jalr        $v1
label_3b6784:
    if (ctx->pc == 0x3B6784u) {
        ctx->pc = 0x3B6784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6780u;
        // 0x3b6784: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B6788u;
        goto label_3b6788;
    }
    ctx->pc = 0x3B6780u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x3B6788u);
        ctx->pc = 0x3B6784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B6780u;
        // 0x3b6784: 0x8fa40010  lw          $a0, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B6780u, 0x3B6788u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x3B6788u;
label_3b6788:
    // 0x3b6788: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x3b6788u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_3b678c:
    // 0x3b678c: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x3b678cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3b6790:
    // 0x3b6790: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x3b6790u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
label_3b6794:
    // 0x3b6794: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x3b6794u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_3b6798:
    // 0x3b6798: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x3b6798u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_3b679c:
    // 0x3b679c: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x3b679cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_3b67a0:
    // 0x3b67a0: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x3b67a0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_3b67a4:
    // 0x3b67a4: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x3b67a4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_3b67a8:
    // 0x3b67a8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x3b67a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_3b67ac:
    // 0x3b67ac: 0x3e00008  jr          $ra
label_3b67b0:
    if (ctx->pc == 0x3B67B0u) {
        ctx->pc = 0x3B67B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B67ACu;
        // 0x3b67b0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = 0x3B67B4u;
        goto label_3b67b4;
    }
    ctx->pc = 0x3B67ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3B67B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3B67ACu;
        // 0x3b67b0: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3B67ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3B67B4u;
label_3b67b4:
    // 0x3b67b4: 0x0  nop
    ctx->pc = 0x3b67b4u;
    // NOP
    ctx->pc = 0x3b67b8u;
}
