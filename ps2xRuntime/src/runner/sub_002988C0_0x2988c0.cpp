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

// Function: sub_002988C0
// Address: 0x2988c0 - 0x298ab0
void sub_002988C0_0x2988c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002988C0_0x2988c0");
#endif

    switch (ctx->pc) {
        case 0x2988fcu: goto label_2988fc;
        case 0x298910u: goto label_298910;
        case 0x298924u: goto label_298924;
        case 0x29893cu: goto label_29893c;
        case 0x298950u: goto label_298950;
        case 0x298960u: goto label_298960;
        case 0x298980u: goto label_298980;
        case 0x298988u: goto label_298988;
        case 0x29899cu: goto label_29899c;
        case 0x2989c4u: goto label_2989c4;
        case 0x2989d8u: goto label_2989d8;
        case 0x2989e8u: goto label_2989e8;
        case 0x2989fcu: goto label_2989fc;
        case 0x298a10u: goto label_298a10;
        case 0x298a2cu: goto label_298a2c;
        case 0x298a70u: goto label_298a70;
        case 0x298a94u: goto label_298a94;
        default: break;
    }

    ctx->pc = 0x2988c0u;

    // 0x2988c0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2988c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2988c4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2988c4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2988c8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2988c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2988cc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2988ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2988d0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2988d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2988d4: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x2988d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x2988d8: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x2988d8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x2988dc: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x2988dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2988e0: 0x1003006c  beq         $zero, $v1, . + 4 + (0x6C << 2)
    ctx->pc = 0x2988E0u;
    {
        const bool branch_taken_0x2988e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 3));
        if (branch_taken_0x2988e0) {
            ctx->pc = 0x298A94u;
            goto label_298a94;
        }
    }
    ctx->pc = 0x2988E8u;
    // 0x2988e8: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x2988e8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2988ec: 0x24050470  addiu       $a1, $zero, 0x470
    ctx->pc = 0x2988ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1136));
    // 0x2988f0: 0x2786a308  addiu       $a2, $gp, -0x5CF8
    ctx->pc = 0x2988f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943496));
    // 0x2988f4: 0xc041a50  jal         func_106940
    ctx->pc = 0x2988F4u;
    SET_GPR_U32(ctx, 31, 0x2988FCu);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x2988F4u, 0x2988FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2988FCu;
label_2988fc:
    // 0x2988fc: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x2988fcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x298900: 0x24640034  addiu       $a0, $v1, 0x34
    ctx->pc = 0x298900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 52));
    // 0x298904: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x298904u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298908: 0xc041ba4  jal         func_106E90
    ctx->pc = 0x298908u;
    SET_GPR_U32(ctx, 31, 0x298910u);
    ctx->pc = 0x106E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E90u, 0x298908u, 0x298910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298910u;
label_298910:
    // 0x298910: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x298910u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x298914: 0x24050471  addiu       $a1, $zero, 0x471
    ctx->pc = 0x298914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1137));
    // 0x298918: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x298918u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29891c: 0xc04146c  jal         func_1051B0
    ctx->pc = 0x29891Cu;
    SET_GPR_U32(ctx, 31, 0x298924u);
    ctx->pc = 0x1051B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1051B0u, 0x29891Cu, 0x298924u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298924u;
label_298924:
    // 0x298924: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x298924u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x298928: 0xa0620044  sb          $v0, 0x44($v1)
    ctx->pc = 0x298928u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 68), (uint8_t)GPR_U32(ctx, 2));
    // 0x29892c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x29892cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x298930: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x298930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x298934: 0xc042514  jal         func_109450
    ctx->pc = 0x298934u;
    SET_GPR_U32(ctx, 31, 0x29893Cu);
    ctx->pc = 0x109450u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x109450u, 0x298934u, 0x29893Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29893Cu;
label_29893c:
    // 0x29893c: 0x10400055  beqz        $v0, . + 4 + (0x55 << 2)
    ctx->pc = 0x29893Cu;
    {
        const bool branch_taken_0x29893c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29893c) {
            ctx->pc = 0x298A94u;
            goto label_298a94;
        }
    }
    ctx->pc = 0x298944u;
    // 0x298944: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x298944u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x298948: 0xc041b48  jal         func_106D20
    ctx->pc = 0x298948u;
    SET_GPR_U32(ctx, 31, 0x298950u);
    ctx->pc = 0x106D20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106D20u, 0x298948u, 0x298950u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298950u;
label_298950:
    // 0x298950: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x298950u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x298954: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x298954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
    // 0x298958: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x298958u;
    SET_GPR_U32(ctx, 31, 0x298960u);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x298958u, 0x298960u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298960u;
label_298960:
    // 0x298960: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x298960u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x298964: 0x2785a310  addiu       $a1, $gp, -0x5CF0
    ctx->pc = 0x298964u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943504));
    // 0x298968: 0x3c06004f  lui         $a2, 0x4F
    ctx->pc = 0x298968u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)79 << 16));
    // 0x29896c: 0x24c6d670  addiu       $a2, $a2, -0x2990
    ctx->pc = 0x29896cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294956656));
    // 0x298970: 0x2407005c  addiu       $a3, $zero, 0x5C
    ctx->pc = 0x298970u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 92));
    // 0x298974: 0x40402d  daddu       $t0, $v0, $zero
    ctx->pc = 0x298974u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298978: 0xc0424a8  jal         func_1092A0
    ctx->pc = 0x298978u;
    SET_GPR_U32(ctx, 31, 0x298980u);
    ctx->pc = 0x1092A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1092A0u, 0x298978u, 0x298980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298980u;
label_298980:
    // 0x298980: 0xc122470  jal         func_4891C0
    ctx->pc = 0x298980u;
    SET_GPR_U32(ctx, 31, 0x298988u);
    ctx->pc = 0x4891C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4891C0u, 0x298980u, 0x298988u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298988u;
label_298988:
    // 0x298988: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x298988u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x29898c: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x29898cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x298990: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x298990u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298994: 0xc123a28  jal         func_48E8A0
    ctx->pc = 0x298994u;
    SET_GPR_U32(ctx, 31, 0x29899Cu);
    ctx->pc = 0x48E8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48E8A0u, 0x298994u, 0x29899Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x29899Cu;
label_29899c:
    // 0x29899c: 0x8fa30050  lw          $v1, 0x50($sp)
    ctx->pc = 0x29899cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2989a0: 0xac620040  sw          $v0, 0x40($v1)
    ctx->pc = 0x2989a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 64), GPR_U32(ctx, 2));
    // 0x2989a4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2989a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2989a8: 0x8c420040  lw          $v0, 0x40($v0)
    ctx->pc = 0x2989a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x2989ac: 0x10020035  beq         $zero, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x2989ACu;
    {
        const bool branch_taken_0x2989ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 2));
        if (branch_taken_0x2989ac) {
            ctx->pc = 0x298A84u;
            goto label_298a84;
        }
    }
    ctx->pc = 0x2989B4u;
    // 0x2989b4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2989b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2989b8: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x2989b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x2989bc: 0xc0a63a0  jal         func_298E80
    ctx->pc = 0x2989BCu;
    SET_GPR_U32(ctx, 31, 0x2989C4u);
    ctx->pc = 0x298E80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298E80u, 0x2989BCu, 0x2989C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2989C4u;
label_2989c4:
    // 0x2989c4: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2989c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2989c8: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x2989c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x2989cc: 0x24050009  addiu       $a1, $zero, 0x9
    ctx->pc = 0x2989ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x2989d0: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2989D0u;
    SET_GPR_U32(ctx, 31, 0x2989D8u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2989D0u, 0x2989D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2989D8u;
label_2989d8:
    // 0x2989d8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2989d8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2989dc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2989dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2989e0: 0xc091018  jal         func_244060
    ctx->pc = 0x2989E0u;
    SET_GPR_U32(ctx, 31, 0x2989E8u);
    ctx->pc = 0x244060u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x244060u, 0x2989E0u, 0x2989E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2989E8u;
label_2989e8:
    // 0x2989e8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2989e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2989ec: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2989ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2989f0: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x2989f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x2989f4: 0xc123428  jal         func_48D0A0
    ctx->pc = 0x2989F4u;
    SET_GPR_U32(ctx, 31, 0x2989FCu);
    ctx->pc = 0x48D0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48D0A0u, 0x2989F4u, 0x2989FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2989FCu;
label_2989fc:
    // 0x2989fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2989fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298a00: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x298a00u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298a04: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x298a04u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298a08: 0xc10671c  jal         func_419C70
    ctx->pc = 0x298A08u;
    SET_GPR_U32(ctx, 31, 0x298A10u);
    ctx->pc = 0x419C70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x419C70u, 0x298A08u, 0x298A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298A10u;
label_298a10:
    // 0x298a10: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x298a10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x298a14: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x298a14u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x298a18: 0x27a5004c  addiu       $a1, $sp, 0x4C
    ctx->pc = 0x298a18u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x298a1c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x298a1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298a20: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x298a20u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298a24: 0xc1233b4  jal         func_48CED0
    ctx->pc = 0x298A24u;
    SET_GPR_U32(ctx, 31, 0x298A2Cu);
    ctx->pc = 0x48CED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48CED0u, 0x298A24u, 0x298A2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298A2Cu;
label_298a2c:
    // 0x298a2c: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x298a2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x298a30: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x298a30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x298a34: 0xac430048  sw          $v1, 0x48($v0)
    ctx->pc = 0x298a34u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 72), GPR_U32(ctx, 3));
    // 0x298a38: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x298a38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x298a3c: 0x90420044  lbu         $v0, 0x44($v0)
    ctx->pc = 0x298a3cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x298a40: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x298a40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x298a44: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x298a44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x298a48: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x298A48u;
    {
        const bool branch_taken_0x298a48 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x298a48) {
            ctx->pc = 0x298A78u;
            goto label_298a78;
        }
    }
    ctx->pc = 0x298A50u;
    // 0x298a50: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x298a50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x298a54: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x298a54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x298a58: 0x8c420040  lw          $v0, 0x40($v0)
    ctx->pc = 0x298a58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x298a5c: 0xac430008  sw          $v1, 0x8($v0)
    ctx->pc = 0x298a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
    // 0x298a60: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x298a60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x298a64: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x298a64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x298a68: 0xc0a62ec  jal         func_298BB0
    ctx->pc = 0x298A68u;
    SET_GPR_U32(ctx, 31, 0x298A70u);
    ctx->pc = 0x298BB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x298BB0u, 0x298A68u, 0x298A70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298A70u;
label_298a70:
    // 0x298a70: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x298A70u;
    {
        const bool branch_taken_0x298a70 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x298a70) {
            ctx->pc = 0x298A84u;
            goto label_298a84;
        }
    }
    ctx->pc = 0x298A78u;
label_298a78:
    // 0x298a78: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x298a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x298a7c: 0x8c420040  lw          $v0, 0x40($v0)
    ctx->pc = 0x298a7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x298a80: 0xac400008  sw          $zero, 0x8($v0)
    ctx->pc = 0x298a80u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 0));
label_298a84:
    // 0x298a84: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x298a84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x298a88: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x298a88u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x298a8c: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x298A8Cu;
    SET_GPR_U32(ctx, 31, 0x298A94u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x298A8Cu, 0x298A94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x298A94u;
label_298a94:
    // 0x298a94: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x298a94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x298a98: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x298a98u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x298a9c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x298a9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x298aa0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x298aa0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x298aa4: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x298aa4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x298aa8: 0x3e00008  jr          $ra
    ctx->pc = 0x298AA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x298AA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x298AB0u;
}
