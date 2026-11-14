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

// Function: sub_00271890
// Address: 0x271890 - 0x271a40
void sub_00271890_0x271890(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00271890_0x271890");
#endif

    switch (ctx->pc) {
        case 0x271890u: goto label_271890;
        case 0x271894u: goto label_271894;
        case 0x271898u: goto label_271898;
        case 0x27189cu: goto label_27189c;
        case 0x2718a0u: goto label_2718a0;
        case 0x2718a4u: goto label_2718a4;
        case 0x2718a8u: goto label_2718a8;
        case 0x2718acu: goto label_2718ac;
        case 0x2718b0u: goto label_2718b0;
        case 0x2718b4u: goto label_2718b4;
        case 0x2718b8u: goto label_2718b8;
        case 0x2718bcu: goto label_2718bc;
        case 0x2718c0u: goto label_2718c0;
        case 0x2718c4u: goto label_2718c4;
        case 0x2718c8u: goto label_2718c8;
        case 0x2718ccu: goto label_2718cc;
        case 0x2718d0u: goto label_2718d0;
        case 0x2718d4u: goto label_2718d4;
        case 0x2718d8u: goto label_2718d8;
        case 0x2718dcu: goto label_2718dc;
        case 0x2718e0u: goto label_2718e0;
        case 0x2718e4u: goto label_2718e4;
        case 0x2718e8u: goto label_2718e8;
        case 0x2718ecu: goto label_2718ec;
        case 0x2718f0u: goto label_2718f0;
        case 0x2718f4u: goto label_2718f4;
        case 0x2718f8u: goto label_2718f8;
        case 0x2718fcu: goto label_2718fc;
        case 0x271900u: goto label_271900;
        case 0x271904u: goto label_271904;
        case 0x271908u: goto label_271908;
        case 0x27190cu: goto label_27190c;
        case 0x271910u: goto label_271910;
        case 0x271914u: goto label_271914;
        case 0x271918u: goto label_271918;
        case 0x27191cu: goto label_27191c;
        case 0x271920u: goto label_271920;
        case 0x271924u: goto label_271924;
        case 0x271928u: goto label_271928;
        case 0x27192cu: goto label_27192c;
        case 0x271930u: goto label_271930;
        case 0x271934u: goto label_271934;
        case 0x271938u: goto label_271938;
        case 0x27193cu: goto label_27193c;
        case 0x271940u: goto label_271940;
        case 0x271944u: goto label_271944;
        case 0x271948u: goto label_271948;
        case 0x27194cu: goto label_27194c;
        case 0x271950u: goto label_271950;
        case 0x271954u: goto label_271954;
        case 0x271958u: goto label_271958;
        case 0x27195cu: goto label_27195c;
        case 0x271960u: goto label_271960;
        case 0x271964u: goto label_271964;
        case 0x271968u: goto label_271968;
        case 0x27196cu: goto label_27196c;
        case 0x271970u: goto label_271970;
        case 0x271974u: goto label_271974;
        case 0x271978u: goto label_271978;
        case 0x27197cu: goto label_27197c;
        case 0x271980u: goto label_271980;
        case 0x271984u: goto label_271984;
        case 0x271988u: goto label_271988;
        case 0x27198cu: goto label_27198c;
        case 0x271990u: goto label_271990;
        case 0x271994u: goto label_271994;
        case 0x271998u: goto label_271998;
        case 0x27199cu: goto label_27199c;
        case 0x2719a0u: goto label_2719a0;
        case 0x2719a4u: goto label_2719a4;
        case 0x2719a8u: goto label_2719a8;
        case 0x2719acu: goto label_2719ac;
        case 0x2719b0u: goto label_2719b0;
        case 0x2719b4u: goto label_2719b4;
        case 0x2719b8u: goto label_2719b8;
        case 0x2719bcu: goto label_2719bc;
        case 0x2719c0u: goto label_2719c0;
        case 0x2719c4u: goto label_2719c4;
        case 0x2719c8u: goto label_2719c8;
        case 0x2719ccu: goto label_2719cc;
        case 0x2719d0u: goto label_2719d0;
        case 0x2719d4u: goto label_2719d4;
        case 0x2719d8u: goto label_2719d8;
        case 0x2719dcu: goto label_2719dc;
        case 0x2719e0u: goto label_2719e0;
        case 0x2719e4u: goto label_2719e4;
        case 0x2719e8u: goto label_2719e8;
        case 0x2719ecu: goto label_2719ec;
        case 0x2719f0u: goto label_2719f0;
        case 0x2719f4u: goto label_2719f4;
        case 0x2719f8u: goto label_2719f8;
        case 0x2719fcu: goto label_2719fc;
        case 0x271a00u: goto label_271a00;
        case 0x271a04u: goto label_271a04;
        case 0x271a08u: goto label_271a08;
        case 0x271a0cu: goto label_271a0c;
        case 0x271a10u: goto label_271a10;
        case 0x271a14u: goto label_271a14;
        case 0x271a18u: goto label_271a18;
        case 0x271a1cu: goto label_271a1c;
        case 0x271a20u: goto label_271a20;
        case 0x271a24u: goto label_271a24;
        case 0x271a28u: goto label_271a28;
        case 0x271a2cu: goto label_271a2c;
        case 0x271a30u: goto label_271a30;
        case 0x271a34u: goto label_271a34;
        case 0x271a38u: goto label_271a38;
        case 0x271a3cu: goto label_271a3c;
        default: break;
    }

    ctx->pc = 0x271890u;

label_271890:
    // 0x271890: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x271890u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
label_271894:
    // 0x271894: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x271894u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
label_271898:
    // 0x271898: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x271898u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
label_27189c:
    // 0x27189c: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x27189cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
label_2718a0:
    // 0x2718a0: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x2718a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
label_2718a4:
    // 0x2718a4: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2718a4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_2718a8:
    // 0x2718a8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2718a8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_2718ac:
    // 0x2718ac: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2718acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_2718b0:
    // 0x2718b0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2718b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_2718b4:
    // 0x2718b4: 0xafa400b0  sw          $a0, 0xB0($sp)
    ctx->pc = 0x2718b4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 4));
label_2718b8:
    // 0x2718b8: 0xafa500c0  sw          $a1, 0xC0($sp)
    ctx->pc = 0x2718b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 5));
label_2718bc:
    // 0x2718bc: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2718bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2718c0:
    // 0x2718c0: 0x8c44002c  lw          $a0, 0x2C($v0)
    ctx->pc = 0x2718c0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
label_2718c4:
    // 0x2718c4: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2718c4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_2718c8:
    // 0x2718c8: 0xc085538  jal         func_2154E0
label_2718cc:
    if (ctx->pc == 0x2718CCu) {
        ctx->pc = 0x2718D0u;
        goto label_2718d0;
    }
    ctx->pc = 0x2718C8u;
    SET_GPR_U32(ctx, 31, 0x2718D0u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2718C8u, 0x2718D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2718D0u;
label_2718d0:
    // 0x2718d0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2718d0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2718d4:
    // 0x2718d4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2718d4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2718d8:
    // 0x2718d8: 0xc096950  jal         func_25A540
label_2718dc:
    if (ctx->pc == 0x2718DCu) {
        ctx->pc = 0x2718E0u;
        goto label_2718e0;
    }
    ctx->pc = 0x2718D8u;
    SET_GPR_U32(ctx, 31, 0x2718E0u);
    ctx->pc = 0x25A540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A540u, 0x2718D8u, 0x2718E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2718E0u;
label_2718e0:
    // 0x2718e0: 0x40b02d  daddu       $s6, $v0, $zero
    ctx->pc = 0x2718e0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2718e4:
    // 0x2718e4: 0x8fa300b0  lw          $v1, 0xB0($sp)
    ctx->pc = 0x2718e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2718e8:
    // 0x2718e8: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2718e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_2718ec:
    // 0x2718ec: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2718ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2718f0:
    // 0x2718f0: 0x8c650054  lw          $a1, 0x54($v1)
    ctx->pc = 0x2718f0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 84)));
label_2718f4:
    // 0x2718f4: 0x90460007  lbu         $a2, 0x7($v0)
    ctx->pc = 0x2718f4u;
    SET_GPR_ZE32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 7)));
label_2718f8:
    // 0x2718f8: 0xc09c4e4  jal         func_271390
label_2718fc:
    if (ctx->pc == 0x2718FCu) {
        ctx->pc = 0x271900u;
        goto label_271900;
    }
    ctx->pc = 0x2718F8u;
    SET_GPR_U32(ctx, 31, 0x271900u);
    ctx->pc = 0x271390u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271390u, 0x2718F8u, 0x271900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271900u;
label_271900:
    // 0x271900: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x271900u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_271904:
    // 0x271904: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x271904u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_271908:
    // 0x271908: 0xc0480fc  jal         func_1203F0
label_27190c:
    if (ctx->pc == 0x27190Cu) {
        ctx->pc = 0x271910u;
        goto label_271910;
    }
    ctx->pc = 0x271908u;
    SET_GPR_U32(ctx, 31, 0x271910u);
    ctx->pc = 0x1203F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1203F0u, 0x271908u, 0x271910u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271910u;
label_271910:
    // 0x271910: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x271910u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_271914:
    // 0x271914: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x271914u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_271918:
    // 0x271918: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x271918u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27191c:
    // 0x27191c: 0x2c0382d  daddu       $a3, $s6, $zero
    ctx->pc = 0x27191cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_271920:
    // 0x271920: 0xc09c420  jal         func_271080
label_271924:
    if (ctx->pc == 0x271924u) {
        ctx->pc = 0x271928u;
        goto label_271928;
    }
    ctx->pc = 0x271920u;
    SET_GPR_U32(ctx, 31, 0x271928u);
    ctx->pc = 0x271080u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271080u, 0x271920u, 0x271928u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271928u;
label_271928:
    // 0x271928: 0x240401f0  addiu       $a0, $zero, 0x1F0
    ctx->pc = 0x271928u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 496));
label_27192c:
    // 0x27192c: 0xc119b68  jal         func_466DA0
label_271930:
    if (ctx->pc == 0x271930u) {
        ctx->pc = 0x271934u;
        goto label_271934;
    }
    ctx->pc = 0x27192Cu;
    SET_GPR_U32(ctx, 31, 0x271934u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x27192Cu, 0x271934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271934u;
label_271934:
    // 0x271934: 0x240401f0  addiu       $a0, $zero, 0x1F0
    ctx->pc = 0x271934u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 496));
label_271938:
    // 0x271938: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x271938u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27193c:
    // 0x27193c: 0xc0400e0  jal         func_100380
label_271940:
    if (ctx->pc == 0x271940u) {
        ctx->pc = 0x271944u;
        goto label_271944;
    }
    ctx->pc = 0x27193Cu;
    SET_GPR_U32(ctx, 31, 0x271944u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x27193Cu, 0x271944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271944u;
label_271944:
    // 0x271944: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x271944u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_271948:
    // 0x271948: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_27194c:
    if (ctx->pc == 0x27194Cu) {
        ctx->pc = 0x271950u;
        goto label_271950;
    }
    ctx->pc = 0x271948u;
    {
        const bool branch_taken_0x271948 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x271948) {
            ctx->pc = 0x271960u;
            goto label_271960;
        }
    }
    ctx->pc = 0x271950u;
label_271950:
    // 0x271950: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x271950u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_271954:
    // 0x271954: 0xc0a8e8c  jal         func_2A3A30
label_271958:
    if (ctx->pc == 0x271958u) {
        ctx->pc = 0x27195Cu;
        goto label_27195c;
    }
    ctx->pc = 0x271954u;
    SET_GPR_U32(ctx, 31, 0x27195Cu);
    ctx->pc = 0x2A3A30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A3A30u, 0x271954u, 0x27195Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27195Cu;
label_27195c:
    // 0x27195c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27195cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_271960:
    // 0x271960: 0xafb000ac  sw          $s0, 0xAC($sp)
    ctx->pc = 0x271960u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 16));
label_271964:
    // 0x271964: 0x8fb100ac  lw          $s1, 0xAC($sp)
    ctx->pc = 0x271964u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_271968:
    // 0x271968: 0xc122430  jal         func_4890C0
label_27196c:
    if (ctx->pc == 0x27196Cu) {
        ctx->pc = 0x271970u;
        goto label_271970;
    }
    ctx->pc = 0x271968u;
    SET_GPR_U32(ctx, 31, 0x271970u);
    ctx->pc = 0x4890C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4890C0u, 0x271968u, 0x271970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271970u;
label_271970:
    // 0x271970: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x271970u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_271974:
    // 0x271974: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x271974u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_271978:
    // 0x271978: 0xc121288  jal         func_484A20
label_27197c:
    if (ctx->pc == 0x27197Cu) {
        ctx->pc = 0x271980u;
        goto label_271980;
    }
    ctx->pc = 0x271978u;
    SET_GPR_U32(ctx, 31, 0x271980u);
    ctx->pc = 0x484A20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x484A20u, 0x271978u, 0x271980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271980u;
label_271980:
    // 0x271980: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x271980u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_271984:
    // 0x271984: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x271984u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_271988:
    // 0x271988: 0x280282d  daddu       $a1, $s4, $zero
    ctx->pc = 0x271988u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_27198c:
    // 0x27198c: 0xc0a9dac  jal         func_2A76B0
label_271990:
    if (ctx->pc == 0x271990u) {
        ctx->pc = 0x271994u;
        goto label_271994;
    }
    ctx->pc = 0x27198Cu;
    SET_GPR_U32(ctx, 31, 0x271994u);
    ctx->pc = 0x2A76B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A76B0u, 0x27198Cu, 0x271994u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271994u;
label_271994:
    // 0x271994: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x271994u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_271998:
    // 0x271998: 0x27a50080  addiu       $a1, $sp, 0x80
    ctx->pc = 0x271998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
label_27199c:
    // 0x27199c: 0xc0a9db8  jal         func_2A76E0
label_2719a0:
    if (ctx->pc == 0x2719A0u) {
        ctx->pc = 0x2719A4u;
        goto label_2719a4;
    }
    ctx->pc = 0x27199Cu;
    SET_GPR_U32(ctx, 31, 0x2719A4u);
    ctx->pc = 0x2A76E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A76E0u, 0x27199Cu, 0x2719A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2719A4u;
label_2719a4:
    // 0x2719a4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2719a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_2719a8:
    // 0x2719a8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2719a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2719ac:
    // 0x2719ac: 0xc0a9dc8  jal         func_2A7720
label_2719b0:
    if (ctx->pc == 0x2719B0u) {
        ctx->pc = 0x2719B4u;
        goto label_2719b4;
    }
    ctx->pc = 0x2719ACu;
    SET_GPR_U32(ctx, 31, 0x2719B4u);
    ctx->pc = 0x2A7720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2A7720u, 0x2719ACu, 0x2719B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2719B4u;
label_2719b4:
    // 0x2719b4: 0x8fa400ac  lw          $a0, 0xAC($sp)
    ctx->pc = 0x2719b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_2719b8:
    // 0x2719b8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2719b8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2719bc:
    // 0x2719bc: 0xc09d23c  jal         func_2748F0
label_2719c0:
    if (ctx->pc == 0x2719C0u) {
        ctx->pc = 0x2719C4u;
        goto label_2719c4;
    }
    ctx->pc = 0x2719BCu;
    SET_GPR_U32(ctx, 31, 0x2719C4u);
    ctx->pc = 0x2748F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2748F0u, 0x2719BCu, 0x2719C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2719C4u;
label_2719c4:
    // 0x2719c4: 0x8fa400ac  lw          $a0, 0xAC($sp)
    ctx->pc = 0x2719c4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_2719c8:
    // 0x2719c8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x2719c8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_2719cc:
    // 0x2719cc: 0x8fa600c0  lw          $a2, 0xC0($sp)
    ctx->pc = 0x2719ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
label_2719d0:
    // 0x2719d0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2719d0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2719d4:
    // 0x2719d4: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x2719d4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_2719d8:
    // 0x2719d8: 0x320f809  jalr        $t9
label_2719dc:
    if (ctx->pc == 0x2719DCu) {
        ctx->pc = 0x2719E0u;
        goto label_2719e0;
    }
    ctx->pc = 0x2719D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2719E0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2719D8u, 0x2719E0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2719E0u;
label_2719e0:
    // 0x2719e0: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2719e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_2719e4:
    // 0x2719e4: 0x8fa400ac  lw          $a0, 0xAC($sp)
    ctx->pc = 0x2719e4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
label_2719e8:
    // 0x2719e8: 0x8c45003c  lw          $a1, 0x3C($v0)
    ctx->pc = 0x2719e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_2719ec:
    // 0x2719ec: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x2719ecu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_2719f0:
    // 0x2719f0: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x2719f0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_2719f4:
    // 0x2719f4: 0x320f809  jalr        $t9
label_2719f8:
    if (ctx->pc == 0x2719F8u) {
        ctx->pc = 0x2719FCu;
        goto label_2719fc;
    }
    ctx->pc = 0x2719F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x2719FCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2719F4u, 0x2719FCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2719FCu;
label_2719fc:
    // 0x2719fc: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x2719fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
label_271a00:
    // 0x271a00: 0x24440044  addiu       $a0, $v0, 0x44
    ctx->pc = 0x271a00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 68));
label_271a04:
    // 0x271a04: 0x27a500ac  addiu       $a1, $sp, 0xAC
    ctx->pc = 0x271a04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 172));
label_271a08:
    // 0x271a08: 0xc09c1d8  jal         func_270760
label_271a0c:
    if (ctx->pc == 0x271A0Cu) {
        ctx->pc = 0x271A10u;
        goto label_271a10;
    }
    ctx->pc = 0x271A08u;
    SET_GPR_U32(ctx, 31, 0x271A10u);
    ctx->pc = 0x270760u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x270760u, 0x271A08u, 0x271A10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271A10u;
label_271a10:
    // 0x271a10: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x271a10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_271a14:
    // 0x271a14: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x271a14u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_271a18:
    // 0x271a18: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x271a18u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_271a1c:
    // 0x271a1c: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x271a1cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_271a20:
    // 0x271a20: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x271a20u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_271a24:
    // 0x271a24: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x271a24u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_271a28:
    // 0x271a28: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x271a28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_271a2c:
    // 0x271a2c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x271a2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_271a30:
    // 0x271a30: 0x27bd00d0  addiu       $sp, $sp, 0xD0
    ctx->pc = 0x271a30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
label_271a34:
    // 0x271a34: 0x3e00008  jr          $ra
label_271a38:
    if (ctx->pc == 0x271A38u) {
        ctx->pc = 0x271A3Cu;
        goto label_271a3c;
    }
    ctx->pc = 0x271A34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x271A34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x271A3Cu;
label_271a3c:
    // 0x271a3c: 0x0  nop
    ctx->pc = 0x271a3cu;
    // NOP
    ctx->pc = 0x271a40u;
}
