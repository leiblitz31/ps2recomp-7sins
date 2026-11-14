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

// Function: sub_003F94D0
// Address: 0x3f94d0 - 0x3f98c0
void sub_003F94D0_0x3f94d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_003F94D0_0x3f94d0");
#endif

    switch (ctx->pc) {
        case 0x3f9538u: goto label_3f9538;
        case 0x3f9558u: goto label_3f9558;
        case 0x3f959cu: goto label_3f959c;
        case 0x3f95b0u: goto label_3f95b0;
        case 0x3f95f8u: goto label_3f95f8;
        case 0x3f9640u: goto label_3f9640;
        case 0x3f9660u: goto label_3f9660;
        case 0x3f9668u: goto label_3f9668;
        case 0x3f96b0u: goto label_3f96b0;
        case 0x3f96c0u: goto label_3f96c0;
        case 0x3f96d0u: goto label_3f96d0;
        case 0x3f9704u: goto label_3f9704;
        case 0x3f9714u: goto label_3f9714;
        case 0x3f9724u: goto label_3f9724;
        case 0x3f9734u: goto label_3f9734;
        case 0x3f9744u: goto label_3f9744;
        case 0x3f9794u: goto label_3f9794;
        case 0x3f97a4u: goto label_3f97a4;
        case 0x3f97c0u: goto label_3f97c0;
        case 0x3f97f4u: goto label_3f97f4;
        case 0x3f982cu: goto label_3f982c;
        case 0x3f9844u: goto label_3f9844;
        case 0x3f9874u: goto label_3f9874;
        case 0x3f987cu: goto label_3f987c;
        default: break;
    }

    ctx->pc = 0x3f94d0u;

    // 0x3f94d0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x3f94d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x3f94d4: 0x7fb20090  sq          $s2, 0x90($sp)
    ctx->pc = 0x3f94d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 18));
    // 0x3f94d8: 0x7fb000b0  sq          $s0, 0xB0($sp)
    ctx->pc = 0x3f94d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 176), GPR_VEC(ctx, 16));
    // 0x3f94dc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x3f94dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f94e0: 0x7fb100a0  sq          $s1, 0xA0($sp)
    ctx->pc = 0x3f94e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 160), GPR_VEC(ctx, 17));
    // 0x3f94e4: 0x7fb30080  sq          $s3, 0x80($sp)
    ctx->pc = 0x3f94e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 19));
    // 0x3f94e8: 0x7fb40070  sq          $s4, 0x70($sp)
    ctx->pc = 0x3f94e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 20));
    // 0x3f94ec: 0x7fb50060  sq          $s5, 0x60($sp)
    ctx->pc = 0x3f94ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 21));
    // 0x3f94f0: 0x7fb60050  sq          $s6, 0x50($sp)
    ctx->pc = 0x3f94f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 22));
    // 0x3f94f4: 0x7fb70040  sq          $s7, 0x40($sp)
    ctx->pc = 0x3f94f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 23));
    // 0x3f94f8: 0x7fbe0030  sq          $fp, 0x30($sp)
    ctx->pc = 0x3f94f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 30));
    // 0x3f94fc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x3f94fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x3f9500: 0xde4201b0  ld          $v0, 0x1B0($s2)
    ctx->pc = 0x3f9500u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 432)));
    // 0x3f9504: 0xde430188  ld          $v1, 0x188($s2)
    ctx->pc = 0x3f9504u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 392)));
    // 0x3f9508: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x3f9508u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x3f950c: 0x43182b  sltu        $v1, $v0, $v1
    ctx->pc = 0x3f950cu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x3f9510: 0x146000de  bnez        $v1, . + 4 + (0xDE << 2)
    ctx->pc = 0x3F9510u;
    {
        const bool branch_taken_0x3f9510 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F9514u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9510u;
        // 0x3f9514: 0xfe4201b0  sd          $v0, 0x1B0($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 432), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f9510) {
            ctx->pc = 0x3F988Cu;
            goto label_3f988c;
        }
    }
    ctx->pc = 0x3F9518u;
    // 0x3f9518: 0x92420207  lbu         $v0, 0x207($s2)
    ctx->pc = 0x3f9518u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 519)));
    // 0x3f951c: 0x1040003c  beqz        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x3F951Cu;
    {
        const bool branch_taken_0x3f951c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F9520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F951Cu;
        // 0x3f9520: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f951c) {
            ctx->pc = 0x3F9610u;
            goto label_3f9610;
        }
    }
    ctx->pc = 0x3F9524u;
    // 0x3f9524: 0xde470198  ld          $a3, 0x198($s2)
    ctx->pc = 0x3f9524u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 18), 408)));
    // 0x3f9528: 0xfe4001b0  sd          $zero, 0x1B0($s2)
    ctx->pc = 0x3f9528u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 432), GPR_U64(ctx, 0));
    // 0x3f952c: 0x8e4501b8  lw          $a1, 0x1B8($s2)
    ctx->pc = 0x3f952cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 440)));
    // 0x3f9530: 0xc0f8b4e  jal         func_3E2D38
    ctx->pc = 0x3F9530u;
    SET_GPR_U32(ctx, 31, 0x3F9538u);
    ctx->pc = 0x3F9534u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F9530u;
    // 0x3f9534: 0x64e70001  daddiu      $a3, $a3, 0x1 (Delay Slot)
    SET_GPR_S64(ctx, 7, (int64_t)GPR_S64(ctx, 7) + (int64_t)(int32_t)1);
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E2D38u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E2D38u, 0x3F9530u, 0x3F9538u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F9538u;
label_3f9538:
    // 0x3f9538: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x3f9538u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x3f953c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x3f953cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x3f9540: 0x2475e0d8  addiu       $s5, $v1, -0x1F28
    ctx->pc = 0x3f9540u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959320));
    // 0x3f9544: 0x2454e0b8  addiu       $s4, $v0, -0x1F48
    ctx->pc = 0x3f9544u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959288));
    // 0x3f9548: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x3f9548u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x3f954c: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x3f954cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x3f9550: 0x2473e118  addiu       $s3, $v1, -0x1EE8
    ctx->pc = 0x3f9550u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959384));
    // 0x3f9554: 0x2451e0f8  addiu       $s1, $v0, -0x1F08
    ctx->pc = 0x3f9554u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959352));
label_3f9558:
    // 0x3f9558: 0x92420208  lbu         $v0, 0x208($s2)
    ctx->pc = 0x3f9558u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 520)));
    // 0x3f955c: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x3f955cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x3f9560: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x3f9560u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3f9564: 0x2c630007  sltiu       $v1, $v1, 0x7
    ctx->pc = 0x3f9564u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x3f9568: 0x10600029  beqz        $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x3F9568u;
    {
        const bool branch_taken_0x3f9568 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F956Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9568u;
        // 0x3f956c: 0xa2420208  sb          $v0, 0x208($s2) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 18), 520), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f9568) {
            ctx->pc = 0x3F9610u;
            goto label_3f9610;
        }
    }
    ctx->pc = 0x3F9570u;
    // 0x3f9570: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x3f9570u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x3f9574: 0xde430178  ld          $v1, 0x178($s2)
    ctx->pc = 0x3f9574u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 376)));
    // 0x3f9578: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3f9578u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3f957c: 0x543021  addu        $a2, $v0, $s4
    ctx->pc = 0x3f957cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x3f9580: 0x551021  addu        $v0, $v0, $s5
    ctx->pc = 0x3f9580u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 21)));
    // 0x3f9584: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x3f9584u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3f9588: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x3f9588u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3f958c: 0x64840001  daddiu      $a0, $a0, 0x1
    ctx->pc = 0x3f958cu;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)1);
    // 0x3f9590: 0x65182d  daddu       $v1, $v1, $a1
    ctx->pc = 0x3f9590u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 5));
    // 0x3f9594: 0xc0be820  jal         func_2FA080
    ctx->pc = 0x3F9594u;
    SET_GPR_U32(ctx, 31, 0x3F959Cu);
    ctx->pc = 0x3F9598u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F9594u;
    // 0x3f9598: 0x64202f  dsubu       $a0, $v1, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) - GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA080u, 0x3F9594u, 0x3F959Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F959Cu;
label_3f959c:
    // 0x3f959c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x3f959cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f95a0: 0x9245020d  lbu         $a1, 0x20D($s2)
    ctx->pc = 0x3f95a0u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 525)));
    // 0x3f95a4: 0xfe5001a8  sd          $s0, 0x1A8($s2)
    ctx->pc = 0x3f95a4u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 424), GPR_U64(ctx, 16));
    // 0x3f95a8: 0xc0be4b8  jal         func_2F92E0
    ctx->pc = 0x3F95A8u;
    SET_GPR_U32(ctx, 31, 0x3F95B0u);
    ctx->pc = 0x3F95ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F95A8u;
    // 0x3f95ac: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F92E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F92E0u, 0x3F95A8u, 0x3F95B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F95B0u;
label_3f95b0:
    // 0x3f95b0: 0x64420007  daddiu      $v0, $v0, 0x7
    ctx->pc = 0x3f95b0u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)7);
    // 0x3f95b4: 0xde430108  ld          $v1, 0x108($s2)
    ctx->pc = 0x3f95b4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 264)));
    // 0x3f95b8: 0x210fa  dsrl        $v0, $v0, 3
    ctx->pc = 0x3f95b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 3);
    // 0x3f95bc: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x3f95bcu;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x3f95c0: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x3f95c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x3f95c4: 0x1460000e  bnez        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x3F95C4u;
    {
        const bool branch_taken_0x3f95c4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F95C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F95C4u;
        // 0x3f95c8: 0xfe4201a0  sd          $v0, 0x1A0($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 416), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f95c4) {
            ctx->pc = 0x3F9600u;
            goto label_3f9600;
        }
    }
    ctx->pc = 0x3F95CCu;
    // 0x3f95cc: 0x92420208  lbu         $v0, 0x208($s2)
    ctx->pc = 0x3f95ccu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 520)));
    // 0x3f95d0: 0xde430180  ld          $v1, 0x180($s2)
    ctx->pc = 0x3f95d0u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 384)));
    // 0x3f95d4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x3f95d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x3f95d8: 0x513021  addu        $a2, $v0, $s1
    ctx->pc = 0x3f95d8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x3f95dc: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x3f95dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x3f95e0: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x3f95e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x3f95e4: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x3f95e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x3f95e8: 0x64840001  daddiu      $a0, $a0, 0x1
    ctx->pc = 0x3f95e8u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)1);
    // 0x3f95ec: 0x65182d  daddu       $v1, $v1, $a1
    ctx->pc = 0x3f95ecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 5));
    // 0x3f95f0: 0xc0be820  jal         func_2FA080
    ctx->pc = 0x3F95F0u;
    SET_GPR_U32(ctx, 31, 0x3F95F8u);
    ctx->pc = 0x3F95F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F95F0u;
    // 0x3f95f4: 0x64202f  dsubu       $a0, $v1, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) - GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2FA080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2FA080u, 0x3F95F0u, 0x3F95F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F95F8u;
label_3f95f8:
    // 0x3f95f8: 0x1200ffd7  beqz        $s0, . + 4 + (-0x29 << 2)
    ctx->pc = 0x3F95F8u;
    {
        const bool branch_taken_0x3f95f8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F95FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F95F8u;
        // 0x3f95fc: 0xfe420188  sd          $v0, 0x188($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 392), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f95f8) {
            ctx->pc = 0x3F9558u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f9558;
        }
    }
    ctx->pc = 0x3F9600u;
label_3f9600:
    // 0x3f9600: 0x92420208  lbu         $v0, 0x208($s2)
    ctx->pc = 0x3f9600u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 520)));
    // 0x3f9604: 0x2c420007  sltiu       $v0, $v0, 0x7
    ctx->pc = 0x3f9604u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)7) ? 1 : 0);
    // 0x3f9608: 0x144000a1  bnez        $v0, . + 4 + (0xA1 << 2)
    ctx->pc = 0x3F9608u;
    {
        const bool branch_taken_0x3f9608 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F960Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9608u;
        // 0x3f960c: 0x7bb000b0  lq          $s0, 0xB0($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f9608) {
            ctx->pc = 0x3F9890u;
            goto label_3f9890;
        }
    }
    ctx->pc = 0x3F9610u;
label_3f9610:
    // 0x3f9610: 0xde420100  ld          $v0, 0x100($s2)
    ctx->pc = 0x3f9610u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 256)));
    // 0x3f9614: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x3f9614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x3f9618: 0x1440008d  bnez        $v0, . + 4 + (0x8D << 2)
    ctx->pc = 0x3F9618u;
    {
        const bool branch_taken_0x3f9618 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F961Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9618u;
        // 0x3f961c: 0x26540110  addiu       $s4, $s2, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 18), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f9618) {
            ctx->pc = 0x3F9850u;
            goto label_3f9850;
        }
    }
    ctx->pc = 0x3F9620u;
    // 0x3f9620: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3f9620u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f9624: 0xae5d0120  sw          $sp, 0x120($s2)
    ctx->pc = 0x3f9624u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 288), GPR_U32(ctx, 29));
    // 0x3f9628: 0xae420124  sw          $v0, 0x124($s2)
    ctx->pc = 0x3f9628u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 292), GPR_U32(ctx, 2));
    // 0x3f962c: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x3f962cu;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3f9630: 0x3c150060  lui         $s5, 0x60
    ctx->pc = 0x3f9630u;
    SET_GPR_S32(ctx, 21, (int32_t)((uint32_t)96 << 16));
    // 0x3f9634: 0x241e0008  addiu       $fp, $zero, 0x8
    ctx->pc = 0x3f9634u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3f9638: 0x3c160060  lui         $s6, 0x60
    ctx->pc = 0x3f9638u;
    SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)96 << 16));
    // 0x3f963c: 0x8e420114  lw          $v0, 0x114($s2)
    ctx->pc = 0x3f963cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 276)));
label_3f9640:
    // 0x3f9640: 0x1440005d  bnez        $v0, . + 4 + (0x5D << 2)
    ctx->pc = 0x3F9640u;
    {
        const bool branch_taken_0x3f9640 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F9644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9640u;
        // 0x3f9644: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f9640) {
            ctx->pc = 0x3F97B8u;
            goto label_3f97b8;
        }
    }
    ctx->pc = 0x3F9648u;
    // 0x3f9648: 0xde4201e8  ld          $v0, 0x1E8($s2)
    ctx->pc = 0x3f9648u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 488)));
    // 0x3f964c: 0x54400041  bnel        $v0, $zero, . + 4 + (0x41 << 2)
    ctx->pc = 0x3F964Cu;
    {
        const bool branch_taken_0x3f964c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f964c) {
            ctx->pc = 0x3F9650u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F964Cu;
            // 0x3f9650: 0x8e45015c  lw          $a1, 0x15C($s2) (Delay Slot)
            SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 348)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F9754u;
            goto label_3f9754;
        }
    }
    ctx->pc = 0x3F9654u;
    // 0x3f9654: 0x3c110060  lui         $s1, 0x60
    ctx->pc = 0x3f9654u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)96 << 16));
    // 0x3f9658: 0x26500200  addiu       $s0, $s2, 0x200
    ctx->pc = 0x3f9658u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 512));
    // 0x3f965c: 0x3c130060  lui         $s3, 0x60
    ctx->pc = 0x3f965cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)96 << 16));
label_3f9660:
    // 0x3f9660: 0xc0fe77c  jal         func_3F9DF0
    ctx->pc = 0x3F9660u;
    SET_GPR_U32(ctx, 31, 0x3F9668u);
    ctx->pc = 0x3F9664u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F9660u;
    // 0x3f9664: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3F9DF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3F9DF0u, 0x3F9660u, 0x3F9668u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F9668u;
label_3f9668:
    // 0x3f9668: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x3F9668u;
    {
        const bool branch_taken_0x3f9668 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F966Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9668u;
        // 0x3f966c: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f9668) {
            ctx->pc = 0x3F96C4u;
            goto label_3f96c4;
        }
    }
    ctx->pc = 0x3F9670u;
    // 0x3f9670: 0x92420200  lbu         $v0, 0x200($s2)
    ctx->pc = 0x3f9670u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 512)));
    // 0x3f9674: 0x30420020  andi        $v0, $v0, 0x20
    ctx->pc = 0x3f9674u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32);
    // 0x3f9678: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3F9678u;
    {
        const bool branch_taken_0x3f9678 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F967Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9678u;
        // 0x3f967c: 0xde420100  ld          $v0, 0x100($s2) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 256)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f9678) {
            ctx->pc = 0x3F9698u;
            goto label_3f9698;
        }
    }
    ctx->pc = 0x3F9680u;
    // 0x3f9680: 0x30420200  andi        $v0, $v0, 0x200
    ctx->pc = 0x3f9680u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)512);
    // 0x3f9684: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3F9684u;
    {
        const bool branch_taken_0x3f9684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F9688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9684u;
        // 0x3f9688: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f9684) {
            ctx->pc = 0x3F96A4u;
            goto label_3f96a4;
        }
    }
    ctx->pc = 0x3F968Cu;
    // 0x3f968c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x3F968Cu;
    {
        const bool branch_taken_0x3f968c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f968c) {
            ctx->pc = 0x3F96B8u;
            goto label_3f96b8;
        }
    }
    ctx->pc = 0x3F9694u;
    // 0x3f9694: 0x0  nop
    ctx->pc = 0x3f9694u;
    // NOP
label_3f9698:
    // 0x3f9698: 0x30420400  andi        $v0, $v0, 0x400
    ctx->pc = 0x3f9698u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1024);
    // 0x3f969c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x3F969Cu;
    {
        const bool branch_taken_0x3f969c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F96A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F969Cu;
        // 0x3f96a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f969c) {
            ctx->pc = 0x3F96B8u;
            goto label_3f96b8;
        }
    }
    ctx->pc = 0x3F96A4u;
label_3f96a4:
    // 0x3f96a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f96a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f96a8: 0xc0f865c  jal         func_3E1970
    ctx->pc = 0x3F96A8u;
    SET_GPR_U32(ctx, 31, 0x3F96B0u);
    ctx->pc = 0x3F96ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F96A8u;
    // 0x3f96ac: 0x2625ea40  addiu       $a1, $s1, -0x15C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1970u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1970u, 0x3F96A8u, 0x3F96B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F96B0u;
label_3f96b0:
    // 0x3f96b0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x3F96B0u;
    {
        const bool branch_taken_0x3f96b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F96B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F96B0u;
        // 0x3f96b4: 0x27a50010  addiu       $a1, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f96b0) {
            ctx->pc = 0x3F96C4u;
            goto label_3f96c4;
        }
    }
    ctx->pc = 0x3F96B8u;
label_3f96b8:
    // 0x3f96b8: 0xc0f8704  jal         func_3E1C10
    ctx->pc = 0x3F96B8u;
    SET_GPR_U32(ctx, 31, 0x3F96C0u);
    ctx->pc = 0x3F96BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F96B8u;
    // 0x3f96bc: 0x2625ea40  addiu       $a1, $s1, -0x15C0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 17), 4294961728));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1C10u, 0x3F96B8u, 0x3F96C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F96C0u;
label_3f96c0:
    // 0x3f96c0: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x3f96c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_3f96c4:
    // 0x3f96c4: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x3f96c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x3f96c8: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F96C8u;
    SET_GPR_U32(ctx, 31, 0x3F96D0u);
    ctx->pc = 0x3F96CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F96C8u;
    // 0x3f96cc: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F96C8u, 0x3F96D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F96D0u;
label_3f96d0:
    // 0x3f96d0: 0x93a20010  lbu         $v0, 0x10($sp)
    ctx->pc = 0x3f96d0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3f96d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f96d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f96d8: 0x93a30011  lbu         $v1, 0x11($sp)
    ctx->pc = 0x3f96d8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 17)));
    // 0x3f96dc: 0x93a50012  lbu         $a1, 0x12($sp)
    ctx->pc = 0x3f96dcu;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 18)));
    // 0x3f96e0: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x3f96e0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x3f96e4: 0x31c38  dsll        $v1, $v1, 16
    ctx->pc = 0x3f96e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 16);
    // 0x3f96e8: 0x93a60013  lbu         $a2, 0x13($sp)
    ctx->pc = 0x3f96e8u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 19)));
    // 0x3f96ec: 0x43102d  daddu       $v0, $v0, $v1
    ctx->pc = 0x3f96ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 3));
    // 0x3f96f0: 0x52a38  dsll        $a1, $a1, 8
    ctx->pc = 0x3f96f0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << 8);
    // 0x3f96f4: 0x45102d  daddu       $v0, $v0, $a1
    ctx->pc = 0x3f96f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 5));
    // 0x3f96f8: 0x46102d  daddu       $v0, $v0, $a2
    ctx->pc = 0x3f96f8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 6));
    // 0x3f96fc: 0xc0f85de  jal         func_3E1778
    ctx->pc = 0x3F96FCu;
    SET_GPR_U32(ctx, 31, 0x3F9704u);
    ctx->pc = 0x3F9700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F96FCu;
    // 0x3f9700: 0xfe4201e8  sd          $v0, 0x1E8($s2) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 18), 488), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1778u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1778u, 0x3F96FCu, 0x3F9704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F9704u;
label_3f9704:
    // 0x3f9704: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f9704u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f9708: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3f9708u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f970c: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F970Cu;
    SET_GPR_U32(ctx, 31, 0x3F9714u);
    ctx->pc = 0x3F9710u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F970Cu;
    // 0x3f9710: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F970Cu, 0x3F9714u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F9714u;
label_3f9714:
    // 0x3f9714: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f9714u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f9718: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x3f9718u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f971c: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F971Cu;
    SET_GPR_U32(ctx, 31, 0x3F9724u);
    ctx->pc = 0x3F9720u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F971Cu;
    // 0x3f9720: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F971Cu, 0x3F9724u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F9724u;
label_3f9724:
    // 0x3f9724: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x3f9724u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f9728: 0x2785ac40  addiu       $a1, $gp, -0x53C0
    ctx->pc = 0x3f9728u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294945856));
    // 0x3f972c: 0xc0bb752  jal         func_2EDD48
    ctx->pc = 0x3F972Cu;
    SET_GPR_U32(ctx, 31, 0x3F9734u);
    ctx->pc = 0x3F9730u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F972Cu;
    // 0x3f9730: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2EDD48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2EDD48u, 0x3F972Cu, 0x3F9734u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F9734u;
label_3f9734:
    // 0x3f9734: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3F9734u;
    {
        const bool branch_taken_0x3f9734 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F9738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9734u;
        // 0x3f9738: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f9734) {
            ctx->pc = 0x3F9744u;
            goto label_3f9744;
        }
    }
    ctx->pc = 0x3F973Cu;
    // 0x3f973c: 0xc0f86f2  jal         func_3E1BC8
    ctx->pc = 0x3F973Cu;
    SET_GPR_U32(ctx, 31, 0x3F9744u);
    ctx->pc = 0x3F9740u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F973Cu;
    // 0x3f9740: 0x2665f6a8  addiu       $a1, $s3, -0x958 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 4294964904));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1BC8u, 0x3F973Cu, 0x3F9744u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F9744u;
label_3f9744:
    // 0x3f9744: 0xde4201e8  ld          $v0, 0x1E8($s2)
    ctx->pc = 0x3f9744u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 488)));
    // 0x3f9748: 0x1040ffc5  beqz        $v0, . + 4 + (-0x3B << 2)
    ctx->pc = 0x3F9748u;
    {
        const bool branch_taken_0x3f9748 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f9748) {
            ctx->pc = 0x3F9660u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f9660;
        }
    }
    ctx->pc = 0x3F9750u;
    // 0x3f9750: 0x8e45015c  lw          $a1, 0x15C($s2)
    ctx->pc = 0x3f9750u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 348)));
label_3f9754:
    // 0x3f9754: 0x8e440158  lw          $a0, 0x158($s2)
    ctx->pc = 0x3f9754u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
    // 0x3f9758: 0x5103c  dsll32      $v0, $a1, 0
    ctx->pc = 0x3f9758u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 0));
    // 0x3f975c: 0xde4301e8  ld          $v1, 0x1E8($s2)
    ctx->pc = 0x3f975cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 488)));
    // 0x3f9760: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x3f9760u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x3f9764: 0xae440110  sw          $a0, 0x110($s2)
    ctx->pc = 0x3f9764u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 272), GPR_U32(ctx, 4));
    // 0x3f9768: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x3f9768u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x3f976c: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x3F976Cu;
    {
        const bool branch_taken_0x3f976c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F9770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F976Cu;
        // 0x3f9770: 0xae450114  sw          $a1, 0x114($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 276), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f976c) {
            ctx->pc = 0x3F977Cu;
            goto label_3f977c;
        }
    }
    ctx->pc = 0x3F9774u;
    // 0x3f9774: 0x8e4201e8  lw          $v0, 0x1E8($s2)
    ctx->pc = 0x3f9774u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 488)));
    // 0x3f9778: 0xae420114  sw          $v0, 0x114($s2)
    ctx->pc = 0x3f9778u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 276), GPR_U32(ctx, 2));
label_3f977c:
    // 0x3f977c: 0x8e510158  lw          $s1, 0x158($s2)
    ctx->pc = 0x3f977cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 344)));
    // 0x3f9780: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f9780u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f9784: 0x8e500114  lw          $s0, 0x114($s2)
    ctx->pc = 0x3f9784u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 276)));
    // 0x3f9788: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f9788u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f978c: 0xc0f94da  jal         func_3E5368
    ctx->pc = 0x3F978Cu;
    SET_GPR_U32(ctx, 31, 0x3F9794u);
    ctx->pc = 0x3F9790u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F978Cu;
    // 0x3f9790: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E5368u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E5368u, 0x3F978Cu, 0x3F9794u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F9794u;
label_3f9794:
    // 0x3f9794: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x3f9794u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f9798: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x3f9798u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f979c: 0xc0f85ec  jal         func_3E17B0
    ctx->pc = 0x3F979Cu;
    SET_GPR_U32(ctx, 31, 0x3F97A4u);
    ctx->pc = 0x3F97A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F979Cu;
    // 0x3f97a0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E17B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E17B0u, 0x3F979Cu, 0x3F97A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F97A4u;
label_3f97a4:
    // 0x3f97a4: 0xde4201e8  ld          $v0, 0x1E8($s2)
    ctx->pc = 0x3f97a4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 488)));
    // 0x3f97a8: 0x9e430114  lwu         $v1, 0x114($s2)
    ctx->pc = 0x3f97a8u;
    SET_GPR_ZE32(ctx, 3, READ32(ADD32(GPR_U32(ctx, 18), 276)));
    // 0x3f97ac: 0x43102f  dsubu       $v0, $v0, $v1
    ctx->pc = 0x3f97acu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) - GPR_U64(ctx, 3));
    // 0x3f97b0: 0xfe4201e8  sd          $v0, 0x1E8($s2)
    ctx->pc = 0x3f97b0u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 488), GPR_U64(ctx, 2));
    // 0x3f97b4: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x3f97b4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_3f97b8:
    // 0x3f97b8: 0xc0f71f0  jal         func_3DC7C0
    ctx->pc = 0x3F97B8u;
    SET_GPR_U32(ctx, 31, 0x3F97C0u);
    ctx->pc = 0x3F97BCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F97B8u;
    // 0x3f97bc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DC7C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DC7C0u, 0x3F97B8u, 0x3F97C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F97C0u;
label_3f97c0:
    // 0x3f97c0: 0x14570014  bne         $v0, $s7, . + 4 + (0x14 << 2)
    ctx->pc = 0x3F97C0u;
    {
        const bool branch_taken_0x3f97c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 23));
        if (branch_taken_0x3f97c0) {
            ctx->pc = 0x3F9814u;
            goto label_3f9814;
        }
    }
    ctx->pc = 0x3F97C8u;
    // 0x3f97c8: 0x8e420124  lw          $v0, 0x124($s2)
    ctx->pc = 0x3f97c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 292)));
    // 0x3f97cc: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x3F97CCu;
    {
        const bool branch_taken_0x3f97cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F97D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F97CCu;
        // 0x3f97d0: 0x26a5f6c0  addiu       $a1, $s5, -0x940 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294964928));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f97cc) {
            ctx->pc = 0x3F97ECu;
            goto label_3f97ec;
        }
    }
    ctx->pc = 0x3F97D4u;
    // 0x3f97d4: 0x8e420114  lw          $v0, 0x114($s2)
    ctx->pc = 0x3f97d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 276)));
    // 0x3f97d8: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3F97D8u;
    {
        const bool branch_taken_0x3f97d8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f97d8) {
            ctx->pc = 0x3F97ECu;
            goto label_3f97ec;
        }
    }
    ctx->pc = 0x3F97E0u;
    // 0x3f97e0: 0xde4201e8  ld          $v0, 0x1E8($s2)
    ctx->pc = 0x3f97e0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 488)));
    // 0x3f97e4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x3F97E4u;
    {
        const bool branch_taken_0x3f97e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f97e4) {
            ctx->pc = 0x3F97E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F97E4u;
            // 0x3f97e8: 0xde4200f8  ld          $v0, 0xF8($s2) (Delay Slot)
            SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 248)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F97F8u;
            goto label_3f97f8;
        }
    }
    ctx->pc = 0x3F97ECu;
label_3f97ec:
    // 0x3f97ec: 0xc0f86f2  jal         func_3E1BC8
    ctx->pc = 0x3F97ECu;
    SET_GPR_U32(ctx, 31, 0x3F97F4u);
    ctx->pc = 0x3F97F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F97ECu;
    // 0x3f97f0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1BC8u, 0x3F97ECu, 0x3F97F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F97F4u;
label_3f97f4:
    // 0x3f97f4: 0xde4200f8  ld          $v0, 0xF8($s2)
    ctx->pc = 0x3f97f4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 248)));
label_3f97f8:
    // 0x3f97f8: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x3f97f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x3f97fc: 0xde430100  ld          $v1, 0x100($s2)
    ctx->pc = 0x3f97fcu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 256)));
    // 0x3f9800: 0x5e1025  or          $v0, $v0, $fp
    ctx->pc = 0x3f9800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 30));
    // 0x3f9804: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x3f9804u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x3f9808: 0xfe4200f8  sd          $v0, 0xF8($s2)
    ctx->pc = 0x3f9808u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 248), GPR_U64(ctx, 2));
    // 0x3f980c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x3F980Cu;
    {
        const bool branch_taken_0x3f980c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F9810u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F980Cu;
        // 0x3f9810: 0xfe430100  sd          $v1, 0x100($s2) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 18), 256), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f980c) {
            ctx->pc = 0x3F984Cu;
            goto label_3f984c;
        }
    }
    ctx->pc = 0x3F9814u;
label_3f9814:
    // 0x3f9814: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x3F9814u;
    {
        const bool branch_taken_0x3f9814 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F9818u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9814u;
        // 0x3f9818: 0x26c2f6d8  addiu       $v0, $s6, -0x928 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 22), 4294964952));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f9814) {
            ctx->pc = 0x3F982Cu;
            goto label_3f982c;
        }
    }
    ctx->pc = 0x3F981Cu;
    // 0x3f981c: 0x8e450130  lw          $a1, 0x130($s2)
    ctx->pc = 0x3f981cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 304)));
    // 0x3f9820: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f9820u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f9824: 0xc0f86f2  jal         func_3E1BC8
    ctx->pc = 0x3F9824u;
    SET_GPR_U32(ctx, 31, 0x3F982Cu);
    ctx->pc = 0x3F9828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F9824u;
    // 0x3f9828: 0x45280a  movz        $a1, $v0, $a1 (Delay Slot)
    if (GPR_U64(ctx, 5) == 0) SET_GPR_VEC(ctx, 5, GPR_VEC(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1BC8u, 0x3F9824u, 0x3F982Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F982Cu;
label_3f982c:
    // 0x3f982c: 0x8e420124  lw          $v0, 0x124($s2)
    ctx->pc = 0x3f982cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 292)));
    // 0x3f9830: 0x5440ff83  bnel        $v0, $zero, . + 4 + (-0x7D << 2)
    ctx->pc = 0x3F9830u;
    {
        const bool branch_taken_0x3f9830 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x3f9830) {
            ctx->pc = 0x3F9834u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3F9830u;
            // 0x3f9834: 0x8e420114  lw          $v0, 0x114($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 276)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3F9640u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f9640;
        }
    }
    ctx->pc = 0x3F9838u;
    // 0x3f9838: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f9838u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f983c: 0xc0f86f2  jal         func_3E1BC8
    ctx->pc = 0x3F983Cu;
    SET_GPR_U32(ctx, 31, 0x3F9844u);
    ctx->pc = 0x3F9840u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F983Cu;
    // 0x3f9840: 0x26a5f6c0  addiu       $a1, $s5, -0x940 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 4294964928));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1BC8u, 0x3F983Cu, 0x3F9844u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F9844u;
label_3f9844:
    // 0x3f9844: 0x1000ff7e  b           . + 4 + (-0x82 << 2)
    ctx->pc = 0x3F9844u;
    {
        const bool branch_taken_0x3f9844 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3F9848u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9844u;
        // 0x3f9848: 0x8e420114  lw          $v0, 0x114($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 276)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f9844) {
            ctx->pc = 0x3F9640u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_3f9640;
        }
    }
    ctx->pc = 0x3F984Cu;
label_3f984c:
    // 0x3f984c: 0xae400124  sw          $zero, 0x124($s2)
    ctx->pc = 0x3f984cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 292), GPR_U32(ctx, 0));
label_3f9850:
    // 0x3f9850: 0xde4201e8  ld          $v0, 0x1E8($s2)
    ctx->pc = 0x3f9850u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 488)));
    // 0x3f9854: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3F9854u;
    {
        const bool branch_taken_0x3f9854 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3F9858u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F9854u;
        // 0x3f9858: 0x3c050060  lui         $a1, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3f9854) {
            ctx->pc = 0x3F9868u;
            goto label_3f9868;
        }
    }
    ctx->pc = 0x3F985Cu;
    // 0x3f985c: 0x8e420114  lw          $v0, 0x114($s2)
    ctx->pc = 0x3f985cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 276)));
    // 0x3f9860: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3F9860u;
    {
        const bool branch_taken_0x3f9860 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3f9860) {
            ctx->pc = 0x3F9874u;
            goto label_3f9874;
        }
    }
    ctx->pc = 0x3F9868u;
label_3f9868:
    // 0x3f9868: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x3f9868u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x3f986c: 0xc0f86f2  jal         func_3E1BC8
    ctx->pc = 0x3F986Cu;
    SET_GPR_U32(ctx, 31, 0x3F9874u);
    ctx->pc = 0x3F9870u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F986Cu;
    // 0x3f9870: 0x24a5f6f0  addiu       $a1, $a1, -0x910 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294964976));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3E1BC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3E1BC8u, 0x3F986Cu, 0x3F9874u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F9874u;
label_3f9874:
    // 0x3f9874: 0xc0f73da  jal         func_3DCF68
    ctx->pc = 0x3F9874u;
    SET_GPR_U32(ctx, 31, 0x3F987Cu);
    ctx->pc = 0x3F9878u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x3F9874u;
    // 0x3f9878: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3DCF68u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3DCF68u, 0x3F9874u, 0x3F987Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x3F987Cu;
label_3f987c:
    // 0x3f987c: 0xde4300f8  ld          $v1, 0xF8($s2)
    ctx->pc = 0x3f987cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 18), 248)));
    // 0x3f9880: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x3f9880u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x3f9884: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x3f9884u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x3f9888: 0xfe4300f8  sd          $v1, 0xF8($s2)
    ctx->pc = 0x3f9888u;
    WRITE64(ADD32(GPR_U32(ctx, 18), 248), GPR_U64(ctx, 3));
label_3f988c:
    // 0x3f988c: 0x7bb000b0  lq          $s0, 0xB0($sp)
    ctx->pc = 0x3f988cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 176)));
label_3f9890:
    // 0x3f9890: 0x7bb100a0  lq          $s1, 0xA0($sp)
    ctx->pc = 0x3f9890u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x3f9894: 0x7bb20090  lq          $s2, 0x90($sp)
    ctx->pc = 0x3f9894u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x3f9898: 0x7bb30080  lq          $s3, 0x80($sp)
    ctx->pc = 0x3f9898u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x3f989c: 0x7bb40070  lq          $s4, 0x70($sp)
    ctx->pc = 0x3f989cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x3f98a0: 0x7bb50060  lq          $s5, 0x60($sp)
    ctx->pc = 0x3f98a0u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x3f98a4: 0x7bb60050  lq          $s6, 0x50($sp)
    ctx->pc = 0x3f98a4u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x3f98a8: 0x7bb70040  lq          $s7, 0x40($sp)
    ctx->pc = 0x3f98a8u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x3f98ac: 0x7bbe0030  lq          $fp, 0x30($sp)
    ctx->pc = 0x3f98acu;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x3f98b0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x3f98b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x3f98b4: 0x3e00008  jr          $ra
    ctx->pc = 0x3F98B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3F98B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3F98B4u;
        // 0x3f98b8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3F98B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3F98BCu;
    // 0x3f98bc: 0x0  nop
    ctx->pc = 0x3f98bcu;
    // NOP
    ctx->pc = 0x3f98c0u;
}
