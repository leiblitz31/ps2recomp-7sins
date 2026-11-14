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

// Function: sub_00100820
// Address: 0x100820 - 0x100b50
void sub_00100820_0x100820(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100820_0x100820");
#endif

    switch (ctx->pc) {
        case 0x100850u: goto label_100850;
        case 0x100860u: goto label_100860;
        case 0x10088cu: goto label_10088c;
        case 0x1008b0u: goto label_1008b0;
        case 0x1008c0u: goto label_1008c0;
        case 0x1008d0u: goto label_1008d0;
        case 0x1008dcu: goto label_1008dc;
        case 0x1008ecu: goto label_1008ec;
        case 0x100920u: goto label_100920;
        case 0x100928u: goto label_100928;
        case 0x10093cu: goto label_10093c;
        case 0x100944u: goto label_100944;
        case 0x100954u: goto label_100954;
        case 0x100964u: goto label_100964;
        case 0x100980u: goto label_100980;
        case 0x100990u: goto label_100990;
        case 0x10099cu: goto label_10099c;
        case 0x1009b8u: goto label_1009b8;
        case 0x100a98u: goto label_100a98;
        case 0x100ad8u: goto label_100ad8;
        case 0x100ae4u: goto label_100ae4;
        case 0x100af0u: goto label_100af0;
        case 0x100b00u: goto label_100b00;
        case 0x100b1cu: goto label_100b1c;
        case 0x100b28u: goto label_100b28;
        default: break;
    }

    ctx->pc = 0x100820u;

    // 0x100820: 0x27bdfed0  addiu       $sp, $sp, -0x130
    ctx->pc = 0x100820u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966992));
    // 0x100824: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x100824u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x100828: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x100828u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x10082c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x10082cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x100830: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x100830u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x100834: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x100834u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x100838: 0x27a4011c  addiu       $a0, $sp, 0x11C
    ctx->pc = 0x100838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 284));
    // 0x10083c: 0x27a50118  addiu       $a1, $sp, 0x118
    ctx->pc = 0x10083cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 280));
    // 0x100840: 0x27a60114  addiu       $a2, $sp, 0x114
    ctx->pc = 0x100840u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 276));
    // 0x100844: 0x27a70110  addiu       $a3, $sp, 0x110
    ctx->pc = 0x100844u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
    // 0x100848: 0xc1223cc  jal         func_488F30
    ctx->pc = 0x100848u;
    SET_GPR_U32(ctx, 31, 0x100850u);
    ctx->pc = 0x488F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488F30u, 0x100848u, 0x100850u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100850u;
label_100850:
    // 0x100850: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x100850u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x100854: 0x24a51080  addiu       $a1, $a1, 0x1080
    ctx->pc = 0x100854u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4224));
    // 0x100858: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x100858u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x10085c: 0x24030011  addiu       $v1, $zero, 0x11
    ctx->pc = 0x10085cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
label_100860:
    // 0x100860: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x100860u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x100864: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x100864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x100868: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x100868u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x10086c: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x10086cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x100870: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x100870u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x100874: 0x1c60fffa  bgtz        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x100874u;
    {
        const bool branch_taken_0x100874 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x100874) {
            ctx->pc = 0x100860u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_100860;
        }
    }
    ctx->pc = 0x10087Cu;
    // 0x10087c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x10087cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x100880: 0x24a510d0  addiu       $a1, $a1, 0x10D0
    ctx->pc = 0x100880u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4304));
    // 0x100884: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x100884u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x100888: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x100888u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_10088c:
    // 0x10088c: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x10088cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x100890: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x100890u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x100894: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x100894u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x100898: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x100898u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x10089c: 0x24840004  addiu       $a0, $a0, 0x4
    ctx->pc = 0x10089cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1008a0: 0x1c60fffa  bgtz        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1008A0u;
    {
        const bool branch_taken_0x1008a0 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x1008a0) {
            ctx->pc = 0x10088Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10088c;
        }
    }
    ctx->pc = 0x1008A8u;
    // 0x1008a8: 0xc1241d8  jal         func_490760
    ctx->pc = 0x1008A8u;
    SET_GPR_U32(ctx, 31, 0x1008B0u);
    ctx->pc = 0x490760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x490760u, 0x1008A8u, 0x1008B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1008B0u;
label_1008b0:
    // 0x1008b0: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x1008b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x1008b4: 0x24050011  addiu       $a1, $zero, 0x11
    ctx->pc = 0x1008b4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1008b8: 0xc1243e8  jal         func_490FA0
    ctx->pc = 0x1008B8u;
    SET_GPR_U32(ctx, 31, 0x1008C0u);
    ctx->pc = 0x490FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x490FA0u, 0x1008B8u, 0x1008C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1008C0u;
label_1008c0:
    // 0x1008c0: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x1008c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x1008c4: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x1008c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1008c8: 0xc124550  jal         func_491540
    ctx->pc = 0x1008C8u;
    SET_GPR_U32(ctx, 31, 0x1008D0u);
    ctx->pc = 0x491540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x491540u, 0x1008C8u, 0x1008D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1008D0u;
label_1008d0:
    // 0x1008d0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1008d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1008d4: 0xc11c0bc  jal         func_4702F0
    ctx->pc = 0x1008D4u;
    SET_GPR_U32(ctx, 31, 0x1008DCu);
    ctx->pc = 0x4702F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4702F0u, 0x1008D4u, 0x1008DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1008DCu;
label_1008dc:
    // 0x1008dc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x1008dcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1008e0: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x1008e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x1008e4: 0xc040320  jal         func_100C80
    ctx->pc = 0x1008E4u;
    SET_GPR_U32(ctx, 31, 0x1008ECu);
    ctx->pc = 0x100C80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C80u, 0x1008E4u, 0x1008ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1008ECu;
label_1008ec:
    // 0x1008ec: 0x24020280  addiu       $v0, $zero, 0x280
    ctx->pc = 0x1008ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x1008f0: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x1008f0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
    // 0x1008f4: 0x24020200  addiu       $v0, $zero, 0x200
    ctx->pc = 0x1008f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 512));
    // 0x1008f8: 0xafa20068  sw          $v0, 0x68($sp)
    ctx->pc = 0x1008f8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 104), GPR_U32(ctx, 2));
    // 0x1008fc: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x1008fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x100900: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x100900u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
    // 0x100904: 0x24020203  addiu       $v0, $zero, 0x203
    ctx->pc = 0x100904u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 515));
    // 0x100908: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x100908u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
    // 0x10090c: 0xafa00060  sw          $zero, 0x60($sp)
    ctx->pc = 0x10090cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 0));
    // 0x100910: 0x27b30060  addiu       $s3, $sp, 0x60
    ctx->pc = 0x100910u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x100914: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x100914u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100918: 0xc1221c0  jal         func_488700
    ctx->pc = 0x100918u;
    SET_GPR_U32(ctx, 31, 0x100920u);
    ctx->pc = 0x488700u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488700u, 0x100918u, 0x100920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100920u;
label_100920:
    // 0x100920: 0xc116444  jal         func_459110
    ctx->pc = 0x100920u;
    SET_GPR_U32(ctx, 31, 0x100928u);
    ctx->pc = 0x459110u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x459110u, 0x100920u, 0x100928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100928u;
label_100928:
    // 0x100928: 0x27a400e8  addiu       $a0, $sp, 0xE8
    ctx->pc = 0x100928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x10092c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x10092cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x100930: 0x24a510f0  addiu       $a1, $a1, 0x10F0
    ctx->pc = 0x100930u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4336));
    // 0x100934: 0xc040304  jal         func_100C10
    ctx->pc = 0x100934u;
    SET_GPR_U32(ctx, 31, 0x10093Cu);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x100934u, 0x10093Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10093Cu;
label_10093c:
    // 0x10093c: 0xc122470  jal         func_4891C0
    ctx->pc = 0x10093Cu;
    SET_GPR_U32(ctx, 31, 0x100944u);
    ctx->pc = 0x4891C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4891C0u, 0x10093Cu, 0x100944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100944u;
label_100944:
    // 0x100944: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x100944u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100948: 0x27a500e8  addiu       $a1, $sp, 0xE8
    ctx->pc = 0x100948u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x10094c: 0xc123884  jal         func_48E210
    ctx->pc = 0x10094Cu;
    SET_GPR_U32(ctx, 31, 0x100954u);
    ctx->pc = 0x48E210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x48E210u, 0x10094Cu, 0x100954u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100954u;
label_100954:
    // 0x100954: 0x27a400e8  addiu       $a0, $sp, 0xE8
    ctx->pc = 0x100954u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 232));
    // 0x100958: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x100958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10095c: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x10095Cu;
    SET_GPR_U32(ctx, 31, 0x100964u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x10095Cu, 0x100964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100964u;
label_100964:
    // 0x100964: 0x8f83bb80  lw          $v1, -0x4480($gp)
    ctx->pc = 0x100964u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x100968: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x100968u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x10096c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x10096cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x100970: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x100970u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x100974: 0x8c460010  lw          $a2, 0x10($v0)
    ctx->pc = 0x100974u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x100978: 0xc122554  jal         func_489550
    ctx->pc = 0x100978u;
    SET_GPR_U32(ctx, 31, 0x100980u);
    ctx->pc = 0x489550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x489550u, 0x100978u, 0x100980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100980u;
label_100980:
    // 0x100980: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x100980u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100984: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x100984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100988: 0xc11c0cc  jal         func_470330
    ctx->pc = 0x100988u;
    SET_GPR_U32(ctx, 31, 0x100990u);
    ctx->pc = 0x470330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x470330u, 0x100988u, 0x100990u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100990u;
label_100990:
    // 0x100990: 0xc78c8444  lwc1        $f12, -0x7BBC($gp)
    ctx->pc = 0x100990u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935620)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x100994: 0xc11c2bc  jal         func_470AF0
    ctx->pc = 0x100994u;
    SET_GPR_U32(ctx, 31, 0x10099Cu);
    ctx->pc = 0x470AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x470AF0u, 0x100994u, 0x10099Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10099Cu;
label_10099c:
    // 0x10099c: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x10099cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x1009a0: 0xafa20104  sw          $v0, 0x104($sp)
    ctx->pc = 0x1009a0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 2));
    // 0x1009a4: 0x24020400  addiu       $v0, $zero, 0x400
    ctx->pc = 0x1009a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x1009a8: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x1009a8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
    // 0x1009ac: 0x27a40100  addiu       $a0, $sp, 0x100
    ctx->pc = 0x1009acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x1009b0: 0xc11f15c  jal         func_47C570
    ctx->pc = 0x1009B0u;
    SET_GPR_U32(ctx, 31, 0x1009B8u);
    ctx->pc = 0x47C570u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C570u, 0x1009B0u, 0x1009B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1009B8u;
label_1009b8:
    // 0x1009b8: 0x8e110060  lw          $s1, 0x60($s0)
    ctx->pc = 0x1009b8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 96)));
    // 0x1009bc: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x1009bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x1009c0: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x1009c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x1009c4: 0xac43000c  sw          $v1, 0xC($v0)
    ctx->pc = 0x1009c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 12), GPR_U32(ctx, 3));
    // 0x1009c8: 0x8e230010  lw          $v1, 0x10($s1)
    ctx->pc = 0x1009c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
    // 0x1009cc: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x1009ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x1009d0: 0xac430010  sw          $v1, 0x10($v0)
    ctx->pc = 0x1009d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 16), GPR_U32(ctx, 3));
    // 0x1009d4: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x1009d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x1009d8: 0x8c42000c  lw          $v0, 0xC($v0)
    ctx->pc = 0x1009d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
    // 0x1009dc: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1009DCu;
    {
        const bool branch_taken_0x1009dc = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1009dc) {
            ctx->pc = 0x1009F8u;
            goto label_1009f8;
        }
    }
    ctx->pc = 0x1009E4u;
    // 0x1009e4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1009e4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1009e8: 0x0  nop
    ctx->pc = 0x1009e8u;
    // NOP
    // 0x1009ec: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x1009ecu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x1009f0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1009F0u;
    {
        const bool branch_taken_0x1009f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1009f0) {
            ctx->pc = 0x100A14u;
            goto label_100a14;
        }
    }
    ctx->pc = 0x1009F8u;
label_1009f8:
    // 0x1009f8: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x1009f8u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x1009fc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1009fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x100a00: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x100a00u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x100a04: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x100a04u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x100a08: 0x0  nop
    ctx->pc = 0x100a08u;
    // NOP
    // 0x100a0c: 0x46800060  cvt.s.w     $f1, $f0
    ctx->pc = 0x100a0cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[1] = FPU_CVT_S_W(tmp); }
    // 0x100a10: 0x46010840  add.s       $f1, $f1, $f1
    ctx->pc = 0x100a10u;
    ctx->f[1] = FPU_ADD_S(ctx->f[1], ctx->f[1]);
label_100a14:
    // 0x100a14: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x100a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
    // 0x100a18: 0x8c420010  lw          $v0, 0x10($v0)
    ctx->pc = 0x100a18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x100a1c: 0x4400006  bltz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x100A1Cu;
    {
        const bool branch_taken_0x100a1c = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x100a1c) {
            ctx->pc = 0x100A38u;
            goto label_100a38;
        }
    }
    ctx->pc = 0x100A24u;
    // 0x100a24: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x100a24u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x100a28: 0x0  nop
    ctx->pc = 0x100a28u;
    // NOP
    // 0x100a2c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x100a2cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x100a30: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x100A30u;
    {
        const bool branch_taken_0x100a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x100a30) {
            ctx->pc = 0x100A54u;
            goto label_100a54;
        }
    }
    ctx->pc = 0x100A38u;
label_100a38:
    // 0x100a38: 0x21842  srl         $v1, $v0, 1
    ctx->pc = 0x100a38u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
    // 0x100a3c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x100a3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x100a40: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x100a40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x100a44: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x100a44u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x100a48: 0x0  nop
    ctx->pc = 0x100a48u;
    // NOP
    // 0x100a4c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x100a4cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x100a50: 0x46000000  add.s       $f0, $f0, $f0
    ctx->pc = 0x100a50u;
    ctx->f[0] = FPU_ADD_S(ctx->f[0], ctx->f[0]);
label_100a54:
    // 0x100a54: 0x0  nop
    ctx->pc = 0x100a54u;
    // NOP
    // 0x100a58: 0x0  nop
    ctx->pc = 0x100a58u;
    // NOP
    // 0x100a5c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x100a5cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x100a60: 0xe7a0010c  swc1        $f0, 0x10C($sp)
    ctx->pc = 0x100a60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 268), bits); }
    // 0x100a64: 0x27a300f8  addiu       $v1, $sp, 0xF8
    ctx->pc = 0x100a64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x100a68: 0xdf828498  ld          $v0, -0x7B68($gp)
    ctx->pc = 0x100a68u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294935704)));
    // 0x100a6c: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x100a6cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
    // 0x100a70: 0x3c023f80  lui         $v0, 0x3F80
    ctx->pc = 0x100a70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16256 << 16));
    // 0x100a74: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x100a74u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x100a78: 0xc7a0010c  lwc1        $f0, 0x10C($sp)
    ctx->pc = 0x100a78u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 268)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x100a7c: 0x46000803  div.s       $f0, $f1, $f0
    ctx->pc = 0x100a7cu;
    { if (ctx->f[0] == 0.0f) ctx->fcr31 |= 0x100000; /* DZ flag */ ctx->f[0] = FPU_DIV_S(ctx->f[1], ctx->f[0]); }
    // 0x100a80: 0xe7a000fc  swc1        $f0, 0xFC($sp)
    ctx->pc = 0x100a80u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 252), bits); }
    // 0x100a84: 0xe7a00108  swc1        $f0, 0x108($sp)
    ctx->pc = 0x100a84u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 264), bits); }
    // 0x100a88: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x100a88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100a8c: 0x27a500f8  addiu       $a1, $sp, 0xF8
    ctx->pc = 0x100a8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 248));
    // 0x100a90: 0xc105fee  jal         func_417FB8
    ctx->pc = 0x100A90u;
    SET_GPR_U32(ctx, 31, 0x100A98u);
    ctx->pc = 0x417FB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417FB8u, 0x100A90u, 0x100A98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100A98u;
label_100a98:
    // 0x100a98: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x100a98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x100a9c: 0x24426ae0  addiu       $v0, $v0, 0x6AE0
    ctx->pc = 0x100a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27360));
    // 0x100aa0: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x100aa0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x100aa4: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x100aa4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x100aa8: 0x24426b80  addiu       $v0, $v0, 0x6B80
    ctx->pc = 0x100aa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27520));
    // 0x100aac: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x100aacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
    // 0x100ab0: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x100ab0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x100ab4: 0x24426b50  addiu       $v0, $v0, 0x6B50
    ctx->pc = 0x100ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27472));
    // 0x100ab8: 0xafa20058  sw          $v0, 0x58($sp)
    ctx->pc = 0x100ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 88), GPR_U32(ctx, 2));
    // 0x100abc: 0x3c020046  lui         $v0, 0x46
    ctx->pc = 0x100abcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)70 << 16));
    // 0x100ac0: 0x24426b10  addiu       $v0, $v0, 0x6B10
    ctx->pc = 0x100ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 27408));
    // 0x100ac4: 0xafa2005c  sw          $v0, 0x5C($sp)
    ctx->pc = 0x100ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
    // 0x100ac8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x100ac8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x100acc: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x100accu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x100ad0: 0xc127d52  jal         func_49F548
    ctx->pc = 0x100AD0u;
    SET_GPR_U32(ctx, 31, 0x100AD8u);
    ctx->pc = 0x49F548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F548u, 0x100AD0u, 0x100AD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100AD8u;
label_100ad8:
    // 0x100ad8: 0xaf82b81c  sw          $v0, -0x47E4($gp)
    ctx->pc = 0x100ad8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294948892), GPR_U32(ctx, 2));
    // 0x100adc: 0xc127dfe  jal         func_49F7F8
    ctx->pc = 0x100ADCu;
    SET_GPR_U32(ctx, 31, 0x100AE4u);
    ctx->pc = 0x49F7F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F7F8u, 0x100ADCu, 0x100AE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100AE4u;
label_100ae4:
    // 0x100ae4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x100ae4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100ae8: 0xc12b08c  jal         func_4AC230
    ctx->pc = 0x100AE8u;
    SET_GPR_U32(ctx, 31, 0x100AF0u);
    ctx->pc = 0x4AC230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AC230u, 0x100AE8u, 0x100AF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100AF0u;
label_100af0:
    // 0x100af0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x100AF0u;
    {
        const bool branch_taken_0x100af0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x100af0) {
            ctx->pc = 0x100B10u;
            goto label_100b10;
        }
    }
    ctx->pc = 0x100AF8u;
    // 0x100af8: 0xc12c12a  jal         func_4B04A8
    ctx->pc = 0x100AF8u;
    SET_GPR_U32(ctx, 31, 0x100B00u);
    ctx->pc = 0x4B04A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B04A8u, 0x100AF8u, 0x100B00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100B00u;
label_100b00:
    // 0x100b00: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x100B00u;
    {
        const bool branch_taken_0x100b00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x100b00) {
            ctx->pc = 0x100B10u;
            goto label_100b10;
        }
    }
    ctx->pc = 0x100B08u;
    // 0x100b08: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x100b08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x100b0c: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x100b0cu;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_100b10:
    // 0x100b10: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x100b10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100b14: 0xc1080ea  jal         func_4203A8
    ctx->pc = 0x100B14u;
    SET_GPR_U32(ctx, 31, 0x100B1Cu);
    ctx->pc = 0x4203A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4203A8u, 0x100B14u, 0x100B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100B1Cu;
label_100b1c:
    // 0x100b1c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x100b1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x100b20: 0xc1080dc  jal         func_420370
    ctx->pc = 0x100B20u;
    SET_GPR_U32(ctx, 31, 0x100B28u);
    ctx->pc = 0x420370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x420370u, 0x100B20u, 0x100B28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100B28u;
label_100b28:
    // 0x100b28: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x100b28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x100b2c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x100b2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x100b30: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x100b30u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x100b34: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x100b34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x100b38: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x100b38u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x100b3c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x100b3cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x100b40: 0x27bd0130  addiu       $sp, $sp, 0x130
    ctx->pc = 0x100b40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
    // 0x100b44: 0x3e00008  jr          $ra
    ctx->pc = 0x100B44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100B44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x100B4Cu;
    // 0x100b4c: 0x0  nop
    ctx->pc = 0x100b4cu;
    // NOP
    ctx->pc = 0x100b50u;
}
