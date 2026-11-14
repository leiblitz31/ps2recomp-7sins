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

// Function: sub_0040C8D8
// Address: 0x40c8d8 - 0x40ca40
void sub_0040C8D8_0x40c8d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040C8D8_0x40c8d8");
#endif

    switch (ctx->pc) {
        case 0x40c8d8u: goto label_40c8d8;
        case 0x40c8dcu: goto label_40c8dc;
        case 0x40c8e0u: goto label_40c8e0;
        case 0x40c8e4u: goto label_40c8e4;
        case 0x40c8e8u: goto label_40c8e8;
        case 0x40c8ecu: goto label_40c8ec;
        case 0x40c8f0u: goto label_40c8f0;
        case 0x40c8f4u: goto label_40c8f4;
        case 0x40c8f8u: goto label_40c8f8;
        case 0x40c8fcu: goto label_40c8fc;
        case 0x40c900u: goto label_40c900;
        case 0x40c904u: goto label_40c904;
        case 0x40c908u: goto label_40c908;
        case 0x40c90cu: goto label_40c90c;
        case 0x40c910u: goto label_40c910;
        case 0x40c914u: goto label_40c914;
        case 0x40c918u: goto label_40c918;
        case 0x40c91cu: goto label_40c91c;
        case 0x40c920u: goto label_40c920;
        case 0x40c924u: goto label_40c924;
        case 0x40c928u: goto label_40c928;
        case 0x40c92cu: goto label_40c92c;
        case 0x40c930u: goto label_40c930;
        case 0x40c934u: goto label_40c934;
        case 0x40c938u: goto label_40c938;
        case 0x40c93cu: goto label_40c93c;
        case 0x40c940u: goto label_40c940;
        case 0x40c944u: goto label_40c944;
        case 0x40c948u: goto label_40c948;
        case 0x40c94cu: goto label_40c94c;
        case 0x40c950u: goto label_40c950;
        case 0x40c954u: goto label_40c954;
        case 0x40c958u: goto label_40c958;
        case 0x40c95cu: goto label_40c95c;
        case 0x40c960u: goto label_40c960;
        case 0x40c964u: goto label_40c964;
        case 0x40c968u: goto label_40c968;
        case 0x40c96cu: goto label_40c96c;
        case 0x40c970u: goto label_40c970;
        case 0x40c974u: goto label_40c974;
        case 0x40c978u: goto label_40c978;
        case 0x40c97cu: goto label_40c97c;
        case 0x40c980u: goto label_40c980;
        case 0x40c984u: goto label_40c984;
        case 0x40c988u: goto label_40c988;
        case 0x40c98cu: goto label_40c98c;
        case 0x40c990u: goto label_40c990;
        case 0x40c994u: goto label_40c994;
        case 0x40c998u: goto label_40c998;
        case 0x40c99cu: goto label_40c99c;
        case 0x40c9a0u: goto label_40c9a0;
        case 0x40c9a4u: goto label_40c9a4;
        case 0x40c9a8u: goto label_40c9a8;
        case 0x40c9acu: goto label_40c9ac;
        case 0x40c9b0u: goto label_40c9b0;
        case 0x40c9b4u: goto label_40c9b4;
        case 0x40c9b8u: goto label_40c9b8;
        case 0x40c9bcu: goto label_40c9bc;
        case 0x40c9c0u: goto label_40c9c0;
        case 0x40c9c4u: goto label_40c9c4;
        case 0x40c9c8u: goto label_40c9c8;
        case 0x40c9ccu: goto label_40c9cc;
        case 0x40c9d0u: goto label_40c9d0;
        case 0x40c9d4u: goto label_40c9d4;
        case 0x40c9d8u: goto label_40c9d8;
        case 0x40c9dcu: goto label_40c9dc;
        case 0x40c9e0u: goto label_40c9e0;
        case 0x40c9e4u: goto label_40c9e4;
        case 0x40c9e8u: goto label_40c9e8;
        case 0x40c9ecu: goto label_40c9ec;
        case 0x40c9f0u: goto label_40c9f0;
        case 0x40c9f4u: goto label_40c9f4;
        case 0x40c9f8u: goto label_40c9f8;
        case 0x40c9fcu: goto label_40c9fc;
        case 0x40ca00u: goto label_40ca00;
        case 0x40ca04u: goto label_40ca04;
        case 0x40ca08u: goto label_40ca08;
        case 0x40ca0cu: goto label_40ca0c;
        case 0x40ca10u: goto label_40ca10;
        case 0x40ca14u: goto label_40ca14;
        case 0x40ca18u: goto label_40ca18;
        case 0x40ca1cu: goto label_40ca1c;
        case 0x40ca20u: goto label_40ca20;
        case 0x40ca24u: goto label_40ca24;
        case 0x40ca28u: goto label_40ca28;
        case 0x40ca2cu: goto label_40ca2c;
        case 0x40ca30u: goto label_40ca30;
        case 0x40ca34u: goto label_40ca34;
        case 0x40ca38u: goto label_40ca38;
        case 0x40ca3cu: goto label_40ca3c;
        default: break;
    }

    ctx->pc = 0x40c8d8u;

label_40c8d8:
    // 0x40c8d8: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x40c8d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_40c8dc:
    // 0x40c8dc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x40c8dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_40c8e0:
    // 0x40c8e0: 0x7fb30050  sq          $s3, 0x50($sp)
    ctx->pc = 0x40c8e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 19));
label_40c8e4:
    // 0x40c8e4: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x40c8e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_40c8e8:
    // 0x40c8e8: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x40c8e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
label_40c8ec:
    // 0x40c8ec: 0x7fb10070  sq          $s1, 0x70($sp)
    ctx->pc = 0x40c8ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 17));
label_40c8f0:
    // 0x40c8f0: 0x7fb20060  sq          $s2, 0x60($sp)
    ctx->pc = 0x40c8f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 18));
label_40c8f4:
    // 0x40c8f4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x40c8f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_40c8f8:
    // 0x40c8f8: 0xc103468  jal         func_40D1A0
label_40c8fc:
    if (ctx->pc == 0x40C8FCu) {
        ctx->pc = 0x40C8FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C8F8u;
        // 0x40c8fc: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40C900u;
        goto label_40c900;
    }
    ctx->pc = 0x40C8F8u;
    SET_GPR_U32(ctx, 31, 0x40C900u);
    ctx->pc = 0x40C8FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40C8F8u;
    // 0x40c8fc: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D1A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D1A0u, 0x40C8F8u, 0x40C900u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C900u;
label_40c900:
    // 0x40c900: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
label_40c904:
    if (ctx->pc == 0x40C904u) {
        ctx->pc = 0x40C904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C900u;
        // 0x40c904: 0x8fb10030  lw          $s1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40C908u;
        goto label_40c908;
    }
    ctx->pc = 0x40C900u;
    {
        const bool branch_taken_0x40c900 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x40C904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C900u;
        // 0x40c904: 0x8fb10030  lw          $s1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40c900) {
            ctx->pc = 0x40C928u;
            goto label_40c928;
        }
    }
    ctx->pc = 0x40C908u;
label_40c908:
    // 0x40c908: 0x240201b4  addiu       $v0, $zero, 0x1B4
    ctx->pc = 0x40c908u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 436));
label_40c90c:
    // 0x40c90c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x40c90cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_40c910:
    // 0x40c910: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x40c910u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_40c914:
    // 0x40c914: 0xc1035f6  jal         func_40D7D8
label_40c918:
    if (ctx->pc == 0x40C918u) {
        ctx->pc = 0x40C918u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C914u;
        // 0x40c918: 0x3484001a  ori         $a0, $a0, 0x1A (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26);
        ctx->in_delay_slot = false;
        ctx->pc = 0x40C91Cu;
        goto label_40c91c;
    }
    ctx->pc = 0x40C914u;
    SET_GPR_U32(ctx, 31, 0x40C91Cu);
    ctx->pc = 0x40C918u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40C914u;
    // 0x40c918: 0x3484001a  ori         $a0, $a0, 0x1A (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x40C914u, 0x40C91Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C91Cu;
label_40c91c:
    // 0x40c91c: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x40c91cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_40c920:
    // 0x40c920: 0x1000002f  b           . + 4 + (0x2F << 2)
label_40c924:
    if (ctx->pc == 0x40C924u) {
        ctx->pc = 0x40C924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C920u;
        // 0x40c924: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40C928u;
        goto label_40c928;
    }
    ctx->pc = 0x40C920u;
    {
        const bool branch_taken_0x40c920 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40C924u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C920u;
        // 0x40c924: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40c920) {
            ctx->pc = 0x40C9E0u;
            goto label_40c9e0;
        }
    }
    ctx->pc = 0x40C928u;
label_40c928:
    // 0x40c928: 0x2406001c  addiu       $a2, $zero, 0x1C
    ctx->pc = 0x40c928u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_40c92c:
    // 0x40c92c: 0x3c040062  lui         $a0, 0x62
    ctx->pc = 0x40c92cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)98 << 16));
label_40c930:
    // 0x40c930: 0x3c050103  lui         $a1, 0x103
    ctx->pc = 0x40c930u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)259 << 16));
label_40c934:
    // 0x40c934: 0x2623ffff  addiu       $v1, $s1, -0x1
    ctx->pc = 0x40c934u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
label_40c938:
    // 0x40c938: 0x8c82e988  lw          $v0, -0x1678($a0)
    ctx->pc = 0x40c938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294961544)));
label_40c93c:
    // 0x40c93c: 0x661818  mult        $v1, $v1, $a2
    ctx->pc = 0x40c93cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 6); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
label_40c940:
    // 0x40c940: 0x27b20010  addiu       $s2, $sp, 0x10
    ctx->pc = 0x40c940u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_40c944:
    // 0x40c944: 0x34a50024  ori         $a1, $a1, 0x24
    ctx->pc = 0x40c944u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)36);
label_40c948:
    // 0x40c948: 0x24700020  addiu       $s0, $v1, 0x20
    ctx->pc = 0x40c948u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
label_40c94c:
    // 0x40c94c: 0x40f809  jalr        $v0
label_40c950:
    if (ctx->pc == 0x40C950u) {
        ctx->pc = 0x40C950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C94Cu;
        // 0x40c950: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40C954u;
        goto label_40c954;
    }
    ctx->pc = 0x40C94Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40C954u);
        ctx->pc = 0x40C950u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C94Cu;
        // 0x40c950: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40C94Cu, 0x40C954u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40C954u;
label_40c954:
    // 0x40c954: 0x5440000c  bnel        $v0, $zero, . + 4 + (0xC << 2)
label_40c958:
    if (ctx->pc == 0x40C958u) {
        ctx->pc = 0x40C958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C954u;
        // 0x40c958: 0xac510000  sw          $s1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40C95Cu;
        goto label_40c95c;
    }
    ctx->pc = 0x40C954u;
    {
        const bool branch_taken_0x40c954 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x40c954) {
            ctx->pc = 0x40C958u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x40C954u;
            // 0x40c958: 0xac510000  sw          $s1, 0x0($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x40C988u;
            goto label_40c988;
        }
    }
    ctx->pc = 0x40C95Cu;
label_40c95c:
    // 0x40c95c: 0x240201b4  addiu       $v0, $zero, 0x1B4
    ctx->pc = 0x40c95cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 436));
label_40c960:
    // 0x40c960: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x40c960u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_40c964:
    // 0x40c964: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x40c964u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_40c968:
    // 0x40c968: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x40c968u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_40c96c:
    // 0x40c96c: 0xc1035f6  jal         func_40D7D8
label_40c970:
    if (ctx->pc == 0x40C970u) {
        ctx->pc = 0x40C970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C96Cu;
        // 0x40c970: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x40C974u;
        goto label_40c974;
    }
    ctx->pc = 0x40C96Cu;
    SET_GPR_U32(ctx, 31, 0x40C974u);
    ctx->pc = 0x40C970u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40C96Cu;
    // 0x40c970: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x40C96Cu, 0x40C974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C974u;
label_40c974:
    // 0x40c974: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x40c974u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
label_40c978:
    // 0x40c978: 0xc103628  jal         func_40D8A0
label_40c97c:
    if (ctx->pc == 0x40C97Cu) {
        ctx->pc = 0x40C97Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C978u;
        // 0x40c97c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40C980u;
        goto label_40c980;
    }
    ctx->pc = 0x40C978u;
    SET_GPR_U32(ctx, 31, 0x40C980u);
    ctx->pc = 0x40C97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40C978u;
    // 0x40c97c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x40C978u, 0x40C980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C980u;
label_40c980:
    // 0x40c980: 0x10000002  b           . + 4 + (0x2 << 2)
label_40c984:
    if (ctx->pc == 0x40C984u) {
        ctx->pc = 0x40C984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C980u;
        // 0x40c984: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40C988u;
        goto label_40c988;
    }
    ctx->pc = 0x40C980u;
    {
        const bool branch_taken_0x40c980 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40C984u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C980u;
        // 0x40c984: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40c980) {
            ctx->pc = 0x40C98Cu;
            goto label_40c98c;
        }
    }
    ctx->pc = 0x40C988u;
label_40c988:
    // 0x40c988: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x40c988u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_40c98c:
    // 0x40c98c: 0x56000003  bnel        $s0, $zero, . + 4 + (0x3 << 2)
label_40c990:
    if (ctx->pc == 0x40C990u) {
        ctx->pc = 0x40C990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C98Cu;
        // 0x40c990: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40C994u;
        goto label_40c994;
    }
    ctx->pc = 0x40C98Cu;
    {
        const bool branch_taken_0x40c98c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x40c98c) {
            ctx->pc = 0x40C990u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x40C98Cu;
            // 0x40c990: 0x8e060000  lw          $a2, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x40C99Cu;
            goto label_40c99c;
        }
    }
    ctx->pc = 0x40C994u;
label_40c994:
    // 0x40c994: 0x10000023  b           . + 4 + (0x23 << 2)
label_40c998:
    if (ctx->pc == 0x40C998u) {
        ctx->pc = 0x40C998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C994u;
        // 0x40c998: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40C99Cu;
        goto label_40c99c;
    }
    ctx->pc = 0x40C994u;
    {
        const bool branch_taken_0x40c994 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40C998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C994u;
        // 0x40c998: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40c994) {
            ctx->pc = 0x40CA24u;
            goto label_40ca24;
        }
    }
    ctx->pc = 0x40C99Cu;
label_40c99c:
    // 0x40c99c: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x40c99cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
label_40c9a0:
    // 0x40c9a0: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x40c9a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_40c9a4:
    // 0x40c9a4: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x40c9a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_40c9a8:
    // 0x40c9a8: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x40c9a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_40c9ac:
    // 0x40c9ac: 0xc23018  mult        $a2, $a2, $v0
    ctx->pc = 0x40c9acu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 6, (int32_t)result); }
label_40c9b0:
    // 0x40c9b0: 0xc10480a  jal         func_412028
label_40c9b4:
    if (ctx->pc == 0x40C9B4u) {
        ctx->pc = 0x40C9B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C9B0u;
        // 0x40c9b4: 0x24c6001c  addiu       $a2, $a2, 0x1C (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40C9B8u;
        goto label_40c9b8;
    }
    ctx->pc = 0x40C9B0u;
    SET_GPR_U32(ctx, 31, 0x40C9B8u);
    ctx->pc = 0x40C9B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40C9B0u;
    // 0x40c9b4: 0x24c6001c  addiu       $a2, $a2, 0x1C (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 28));
    ctx->in_delay_slot = false;
    ctx->pc = 0x412028u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x412028u, 0x40C9B0u, 0x40C9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C9B8u;
label_40c9b8:
    // 0x40c9b8: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
label_40c9bc:
    if (ctx->pc == 0x40C9BCu) {
        ctx->pc = 0x40C9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C9B8u;
        // 0x40c9bc: 0x8fa30030  lw          $v1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40C9C0u;
        goto label_40c9c0;
    }
    ctx->pc = 0x40C9B8u;
    {
        const bool branch_taken_0x40c9b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x40C9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C9B8u;
        // 0x40c9bc: 0x8fa30030  lw          $v1, 0x30($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40c9b8) {
            ctx->pc = 0x40C9F0u;
            goto label_40c9f0;
        }
    }
    ctx->pc = 0x40C9C0u;
label_40c9c0:
    // 0x40c9c0: 0x240201b4  addiu       $v0, $zero, 0x1B4
    ctx->pc = 0x40c9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 436));
label_40c9c4:
    // 0x40c9c4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x40c9c4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_40c9c8:
    // 0x40c9c8: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x40c9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
label_40c9cc:
    // 0x40c9cc: 0xc1035f6  jal         func_40D7D8
label_40c9d0:
    if (ctx->pc == 0x40C9D0u) {
        ctx->pc = 0x40C9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C9CCu;
        // 0x40c9d0: 0x3484001a  ori         $a0, $a0, 0x1A (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26);
        ctx->in_delay_slot = false;
        ctx->pc = 0x40C9D4u;
        goto label_40c9d4;
    }
    ctx->pc = 0x40C9CCu;
    SET_GPR_U32(ctx, 31, 0x40C9D4u);
    ctx->pc = 0x40C9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40C9CCu;
    // 0x40c9d0: 0x3484001a  ori         $a0, $a0, 0x1A (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)26);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x40C9CCu, 0x40C9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C9D4u;
label_40c9d4:
    // 0x40c9d4: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x40c9d4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
label_40c9d8:
    // 0x40c9d8: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x40c9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_40c9dc:
    // 0x40c9dc: 0x0  nop
    ctx->pc = 0x40c9dcu;
    // NOP
label_40c9e0:
    // 0x40c9e0: 0xc103628  jal         func_40D8A0
label_40c9e4:
    if (ctx->pc == 0x40C9E4u) {
        ctx->pc = 0x40C9E8u;
        goto label_40c9e8;
    }
    ctx->pc = 0x40C9E0u;
    SET_GPR_U32(ctx, 31, 0x40C9E8u);
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x40C9E0u, 0x40C9E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40C9E8u;
label_40c9e8:
    // 0x40c9e8: 0x1000000e  b           . + 4 + (0xE << 2)
label_40c9ec:
    if (ctx->pc == 0x40C9ECu) {
        ctx->pc = 0x40C9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C9E8u;
        // 0x40c9ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40C9F0u;
        goto label_40c9f0;
    }
    ctx->pc = 0x40C9E8u;
    {
        const bool branch_taken_0x40c9e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40C9ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C9E8u;
        // 0x40c9ec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40c9e8) {
            ctx->pc = 0x40CA24u;
            goto label_40ca24;
        }
    }
    ctx->pc = 0x40C9F0u;
label_40c9f0:
    // 0x40c9f0: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x40c9f0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_40c9f4:
    // 0x40c9f4: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x40c9f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_40c9f8:
    // 0x40c9f8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_40c9fc:
    if (ctx->pc == 0x40C9FCu) {
        ctx->pc = 0x40C9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C9F8u;
        // 0x40c9fc: 0xafa30030  sw          $v1, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40CA00u;
        goto label_40ca00;
    }
    ctx->pc = 0x40C9F8u;
    {
        const bool branch_taken_0x40c9f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x40C9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40C9F8u;
        // 0x40c9fc: 0xafa30030  sw          $v1, 0x30($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40c9f8) {
            ctx->pc = 0x40CA20u;
            goto label_40ca20;
        }
    }
    ctx->pc = 0x40CA00u;
label_40ca00:
    // 0x40ca00: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x40ca00u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_40ca04:
    // 0x40ca04: 0x0  nop
    ctx->pc = 0x40ca04u;
    // NOP
label_40ca08:
    // 0x40ca08: 0x0  nop
    ctx->pc = 0x40ca08u;
    // NOP
label_40ca0c:
    // 0x40ca0c: 0x0  nop
    ctx->pc = 0x40ca0cu;
    // NOP
label_40ca10:
    // 0x40ca10: 0x0  nop
    ctx->pc = 0x40ca10u;
    // NOP
label_40ca14:
    // 0x40ca14: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
label_40ca18:
    if (ctx->pc == 0x40CA18u) {
        ctx->pc = 0x40CA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40CA14u;
        // 0x40ca18: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40CA1Cu;
        goto label_40ca1c;
    }
    ctx->pc = 0x40CA14u;
    {
        const bool branch_taken_0x40ca14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x40CA18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40CA14u;
        // 0x40ca18: 0x2463ffff  addiu       $v1, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40ca14) {
            ctx->pc = 0x40CA00u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_40ca00;
        }
    }
    ctx->pc = 0x40CA1Cu;
label_40ca1c:
    // 0x40ca1c: 0xafa30030  sw          $v1, 0x30($sp)
    ctx->pc = 0x40ca1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 3));
label_40ca20:
    // 0x40ca20: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x40ca20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_40ca24:
    // 0x40ca24: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x40ca24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_40ca28:
    // 0x40ca28: 0x7bb10070  lq          $s1, 0x70($sp)
    ctx->pc = 0x40ca28u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_40ca2c:
    // 0x40ca2c: 0x7bb20060  lq          $s2, 0x60($sp)
    ctx->pc = 0x40ca2cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_40ca30:
    // 0x40ca30: 0x7bb30050  lq          $s3, 0x50($sp)
    ctx->pc = 0x40ca30u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_40ca34:
    // 0x40ca34: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x40ca34u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_40ca38:
    // 0x40ca38: 0x3e00008  jr          $ra
label_40ca3c:
    if (ctx->pc == 0x40CA3Cu) {
        ctx->pc = 0x40CA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40CA38u;
        // 0x40ca3c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40CA40u;
        goto label_fallthrough_0x40ca38;
    }
    ctx->pc = 0x40CA38u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40CA3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40CA38u;
        // 0x40ca3c: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40CA38u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x40ca38:
    ctx->pc = 0x40CA40u;
}
