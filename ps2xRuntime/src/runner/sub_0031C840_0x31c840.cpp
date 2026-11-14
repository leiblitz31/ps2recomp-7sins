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

// Function: sub_0031C840
// Address: 0x31c840 - 0x31ca58
void sub_0031C840_0x31c840(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031C840_0x31c840");
#endif

    switch (ctx->pc) {
        case 0x31c840u: goto label_31c840;
        case 0x31c844u: goto label_31c844;
        case 0x31c848u: goto label_31c848;
        case 0x31c84cu: goto label_31c84c;
        case 0x31c850u: goto label_31c850;
        case 0x31c854u: goto label_31c854;
        case 0x31c858u: goto label_31c858;
        case 0x31c85cu: goto label_31c85c;
        case 0x31c860u: goto label_31c860;
        case 0x31c864u: goto label_31c864;
        case 0x31c868u: goto label_31c868;
        case 0x31c86cu: goto label_31c86c;
        case 0x31c870u: goto label_31c870;
        case 0x31c874u: goto label_31c874;
        case 0x31c878u: goto label_31c878;
        case 0x31c87cu: goto label_31c87c;
        case 0x31c880u: goto label_31c880;
        case 0x31c884u: goto label_31c884;
        case 0x31c888u: goto label_31c888;
        case 0x31c88cu: goto label_31c88c;
        case 0x31c890u: goto label_31c890;
        case 0x31c894u: goto label_31c894;
        case 0x31c898u: goto label_31c898;
        case 0x31c89cu: goto label_31c89c;
        case 0x31c8a0u: goto label_31c8a0;
        case 0x31c8a4u: goto label_31c8a4;
        case 0x31c8a8u: goto label_31c8a8;
        case 0x31c8acu: goto label_31c8ac;
        case 0x31c8b0u: goto label_31c8b0;
        case 0x31c8b4u: goto label_31c8b4;
        case 0x31c8b8u: goto label_31c8b8;
        case 0x31c8bcu: goto label_31c8bc;
        case 0x31c8c0u: goto label_31c8c0;
        case 0x31c8c4u: goto label_31c8c4;
        case 0x31c8c8u: goto label_31c8c8;
        case 0x31c8ccu: goto label_31c8cc;
        case 0x31c8d0u: goto label_31c8d0;
        case 0x31c8d4u: goto label_31c8d4;
        case 0x31c8d8u: goto label_31c8d8;
        case 0x31c8dcu: goto label_31c8dc;
        case 0x31c8e0u: goto label_31c8e0;
        case 0x31c8e4u: goto label_31c8e4;
        case 0x31c8e8u: goto label_31c8e8;
        case 0x31c8ecu: goto label_31c8ec;
        case 0x31c8f0u: goto label_31c8f0;
        case 0x31c8f4u: goto label_31c8f4;
        case 0x31c8f8u: goto label_31c8f8;
        case 0x31c8fcu: goto label_31c8fc;
        case 0x31c900u: goto label_31c900;
        case 0x31c904u: goto label_31c904;
        case 0x31c908u: goto label_31c908;
        case 0x31c90cu: goto label_31c90c;
        case 0x31c910u: goto label_31c910;
        case 0x31c914u: goto label_31c914;
        case 0x31c918u: goto label_31c918;
        case 0x31c91cu: goto label_31c91c;
        case 0x31c920u: goto label_31c920;
        case 0x31c924u: goto label_31c924;
        case 0x31c928u: goto label_31c928;
        case 0x31c92cu: goto label_31c92c;
        case 0x31c930u: goto label_31c930;
        case 0x31c934u: goto label_31c934;
        case 0x31c938u: goto label_31c938;
        case 0x31c93cu: goto label_31c93c;
        case 0x31c940u: goto label_31c940;
        case 0x31c944u: goto label_31c944;
        case 0x31c948u: goto label_31c948;
        case 0x31c94cu: goto label_31c94c;
        case 0x31c950u: goto label_31c950;
        case 0x31c954u: goto label_31c954;
        case 0x31c958u: goto label_31c958;
        case 0x31c95cu: goto label_31c95c;
        case 0x31c960u: goto label_31c960;
        case 0x31c964u: goto label_31c964;
        case 0x31c968u: goto label_31c968;
        case 0x31c96cu: goto label_31c96c;
        case 0x31c970u: goto label_31c970;
        case 0x31c974u: goto label_31c974;
        case 0x31c978u: goto label_31c978;
        case 0x31c97cu: goto label_31c97c;
        case 0x31c980u: goto label_31c980;
        case 0x31c984u: goto label_31c984;
        case 0x31c988u: goto label_31c988;
        case 0x31c98cu: goto label_31c98c;
        case 0x31c990u: goto label_31c990;
        case 0x31c994u: goto label_31c994;
        case 0x31c998u: goto label_31c998;
        case 0x31c99cu: goto label_31c99c;
        case 0x31c9a0u: goto label_31c9a0;
        case 0x31c9a4u: goto label_31c9a4;
        case 0x31c9a8u: goto label_31c9a8;
        case 0x31c9acu: goto label_31c9ac;
        case 0x31c9b0u: goto label_31c9b0;
        case 0x31c9b4u: goto label_31c9b4;
        case 0x31c9b8u: goto label_31c9b8;
        case 0x31c9bcu: goto label_31c9bc;
        case 0x31c9c0u: goto label_31c9c0;
        case 0x31c9c4u: goto label_31c9c4;
        case 0x31c9c8u: goto label_31c9c8;
        case 0x31c9ccu: goto label_31c9cc;
        case 0x31c9d0u: goto label_31c9d0;
        case 0x31c9d4u: goto label_31c9d4;
        case 0x31c9d8u: goto label_31c9d8;
        case 0x31c9dcu: goto label_31c9dc;
        case 0x31c9e0u: goto label_31c9e0;
        case 0x31c9e4u: goto label_31c9e4;
        case 0x31c9e8u: goto label_31c9e8;
        case 0x31c9ecu: goto label_31c9ec;
        case 0x31c9f0u: goto label_31c9f0;
        case 0x31c9f4u: goto label_31c9f4;
        case 0x31c9f8u: goto label_31c9f8;
        case 0x31c9fcu: goto label_31c9fc;
        case 0x31ca00u: goto label_31ca00;
        case 0x31ca04u: goto label_31ca04;
        case 0x31ca08u: goto label_31ca08;
        case 0x31ca0cu: goto label_31ca0c;
        case 0x31ca10u: goto label_31ca10;
        case 0x31ca14u: goto label_31ca14;
        case 0x31ca18u: goto label_31ca18;
        case 0x31ca1cu: goto label_31ca1c;
        case 0x31ca20u: goto label_31ca20;
        case 0x31ca24u: goto label_31ca24;
        case 0x31ca28u: goto label_31ca28;
        case 0x31ca2cu: goto label_31ca2c;
        case 0x31ca30u: goto label_31ca30;
        case 0x31ca34u: goto label_31ca34;
        case 0x31ca38u: goto label_31ca38;
        case 0x31ca3cu: goto label_31ca3c;
        case 0x31ca40u: goto label_31ca40;
        case 0x31ca44u: goto label_31ca44;
        case 0x31ca48u: goto label_31ca48;
        case 0x31ca4cu: goto label_31ca4c;
        case 0x31ca50u: goto label_31ca50;
        case 0x31ca54u: goto label_31ca54;
        default: break;
    }

    ctx->pc = 0x31c840u;

label_31c840:
    // 0x31c840: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x31c840u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_31c844:
    // 0x31c844: 0x8f82a5c0  lw          $v0, -0x5A40($gp)
    ctx->pc = 0x31c844u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294944192)));
label_31c848:
    // 0x31c848: 0x7fb10080  sq          $s1, 0x80($sp)
    ctx->pc = 0x31c848u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 17));
label_31c84c:
    // 0x31c84c: 0x7fb00090  sq          $s0, 0x90($sp)
    ctx->pc = 0x31c84cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 144), GPR_VEC(ctx, 16));
label_31c850:
    // 0x31c850: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x31c850u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
label_31c854:
    // 0x31c854: 0x7fb20070  sq          $s2, 0x70($sp)
    ctx->pc = 0x31c854u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 18));
label_31c858:
    // 0x31c858: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x31c858u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_31c85c:
    // 0x31c85c: 0x7fb40050  sq          $s4, 0x50($sp)
    ctx->pc = 0x31c85cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 20));
label_31c860:
    // 0x31c860: 0x7fb50040  sq          $s5, 0x40($sp)
    ctx->pc = 0x31c860u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 21));
label_31c864:
    // 0x31c864: 0x7fb60030  sq          $s6, 0x30($sp)
    ctx->pc = 0x31c864u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 22));
label_31c868:
    // 0x31c868: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x31c868u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_31c86c:
    // 0x31c86c: 0x7fb30060  sq          $s3, 0x60($sp)
    ctx->pc = 0x31c86cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 19));
label_31c870:
    // 0x31c870: 0x8cd30000  lw          $s3, 0x0($a2)
    ctx->pc = 0x31c870u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_31c874:
    // 0x31c874: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x31c874u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_31c878:
    // 0x31c878: 0xc103440  jal         func_40D100
label_31c87c:
    if (ctx->pc == 0x31C87Cu) {
        ctx->pc = 0x31C87Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C878u;
        // 0x31c87c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C880u;
        goto label_31c880;
    }
    ctx->pc = 0x31C878u;
    SET_GPR_U32(ctx, 31, 0x31C880u);
    ctx->pc = 0x31C87Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C878u;
    // 0x31c87c: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x31C878u, 0x31C880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C880u;
label_31c880:
    // 0x31c880: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
label_31c884:
    if (ctx->pc == 0x31C884u) {
        ctx->pc = 0x31C884u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C880u;
        // 0x31c884: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C888u;
        goto label_31c888;
    }
    ctx->pc = 0x31C880u;
    {
        const bool branch_taken_0x31c880 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31c880) {
            ctx->pc = 0x31C884u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31C880u;
            // 0x31c884: 0x8e620000  lw          $v0, 0x0($s3) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31C890u;
            goto label_31c890;
        }
    }
    ctx->pc = 0x31C888u;
label_31c888:
    // 0x31c888: 0x10000068  b           . + 4 + (0x68 << 2)
label_31c88c:
    if (ctx->pc == 0x31C88Cu) {
        ctx->pc = 0x31C88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C888u;
        // 0x31c88c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C890u;
        goto label_31c890;
    }
    ctx->pc = 0x31C888u;
    {
        const bool branch_taken_0x31c888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C88Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C888u;
        // 0x31c88c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c888) {
            ctx->pc = 0x31CA2Cu;
            goto label_31ca2c;
        }
    }
    ctx->pc = 0x31C890u;
label_31c890:
    // 0x31c890: 0x10400065  beqz        $v0, . + 4 + (0x65 << 2)
label_31c894:
    if (ctx->pc == 0x31C894u) {
        ctx->pc = 0x31C894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C890u;
        // 0x31c894: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C898u;
        goto label_31c898;
    }
    ctx->pc = 0x31C890u;
    {
        const bool branch_taken_0x31c890 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C894u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C890u;
        // 0x31c894: 0x902d  daddu       $s2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c890) {
            ctx->pc = 0x31CA28u;
            goto label_31ca28;
        }
    }
    ctx->pc = 0x31C898u;
label_31c898:
    // 0x31c898: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x31c898u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_31c89c:
    // 0x31c89c: 0x2415000c  addiu       $s5, $zero, 0xC
    ctx->pc = 0x31c89cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_31c8a0:
    // 0x31c8a0: 0x2456e880  addiu       $s6, $v0, -0x1780
    ctx->pc = 0x31c8a0u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_31c8a4:
    // 0x31c8a4: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x31c8a4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31c8a8:
    // 0x31c8a8: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x31c8a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_31c8ac:
    // 0x31c8ac: 0x548021  addu        $s0, $v0, $s4
    ctx->pc = 0x31c8acu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
label_31c8b0:
    // 0x31c8b0: 0x8e040004  lw          $a0, 0x4($s0)
    ctx->pc = 0x31c8b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_31c8b4:
    // 0x31c8b4: 0x50800006  beql        $a0, $zero, . + 4 + (0x6 << 2)
label_31c8b8:
    if (ctx->pc == 0x31C8B8u) {
        ctx->pc = 0x31C8B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C8B4u;
        // 0x31c8b8: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C8BCu;
        goto label_31c8bc;
    }
    ctx->pc = 0x31C8B4u;
    {
        const bool branch_taken_0x31c8b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x31c8b4) {
            ctx->pc = 0x31C8B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31C8B4u;
            // 0x31c8b8: 0xafa00010  sw          $zero, 0x10($sp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31C8D0u;
            goto label_31c8d0;
        }
    }
    ctx->pc = 0x31C8BCu;
label_31c8bc:
    // 0x31c8bc: 0x8ec200f4  lw          $v0, 0xF4($s6)
    ctx->pc = 0x31c8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 244)));
label_31c8c0:
    // 0x31c8c0: 0x40f809  jalr        $v0
label_31c8c4:
    if (ctx->pc == 0x31C8C4u) {
        ctx->pc = 0x31C8C8u;
        goto label_31c8c8;
    }
    ctx->pc = 0x31C8C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x31C8C8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31C8C0u, 0x31C8C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x31C8C8u;
label_31c8c8:
    // 0x31c8c8: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x31c8c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
label_31c8cc:
    // 0x31c8cc: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x31c8ccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_31c8d0:
    // 0x31c8d0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31c8d0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31c8d4:
    // 0x31c8d4: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x31c8d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_31c8d8:
    // 0x31c8d8: 0xc103440  jal         func_40D100
label_31c8dc:
    if (ctx->pc == 0x31C8DCu) {
        ctx->pc = 0x31C8DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C8D8u;
        // 0x31c8dc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C8E0u;
        goto label_31c8e0;
    }
    ctx->pc = 0x31C8D8u;
    SET_GPR_U32(ctx, 31, 0x31C8E0u);
    ctx->pc = 0x31C8DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C8D8u;
    // 0x31c8dc: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x31C8D8u, 0x31C8E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C8E0u;
label_31c8e0:
    // 0x31c8e0: 0x10400052  beqz        $v0, . + 4 + (0x52 << 2)
label_31c8e4:
    if (ctx->pc == 0x31C8E4u) {
        ctx->pc = 0x31C8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C8E0u;
        // 0x31c8e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C8E8u;
        goto label_31c8e8;
    }
    ctx->pc = 0x31C8E0u;
    {
        const bool branch_taken_0x31c8e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C8E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C8E0u;
        // 0x31c8e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c8e0) {
            ctx->pc = 0x31CA2Cu;
            goto label_31ca2c;
        }
    }
    ctx->pc = 0x31C8E8u;
label_31c8e8:
    // 0x31c8e8: 0x8e050004  lw          $a1, 0x4($s0)
    ctx->pc = 0x31c8e8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_31c8ec:
    // 0x31c8ec: 0x10a00005  beqz        $a1, . + 4 + (0x5 << 2)
label_31c8f0:
    if (ctx->pc == 0x31C8F0u) {
        ctx->pc = 0x31C8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C8ECu;
        // 0x31c8f0: 0x8fa60010  lw          $a2, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C8F4u;
        goto label_31c8f4;
    }
    ctx->pc = 0x31C8ECu;
    {
        const bool branch_taken_0x31c8ec = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C8F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C8ECu;
        // 0x31c8f0: 0x8fa60010  lw          $a2, 0x10($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c8ec) {
            ctx->pc = 0x31C904u;
            goto label_31c904;
        }
    }
    ctx->pc = 0x31C8F4u;
label_31c8f4:
    // 0x31c8f4: 0xc10486e  jal         func_4121B8
label_31c8f8:
    if (ctx->pc == 0x31C8F8u) {
        ctx->pc = 0x31C8F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C8F4u;
        // 0x31c8f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C8FCu;
        goto label_31c8fc;
    }
    ctx->pc = 0x31C8F4u;
    SET_GPR_U32(ctx, 31, 0x31C8FCu);
    ctx->pc = 0x31C8F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C8F4u;
    // 0x31c8f8: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4121B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4121B8u, 0x31C8F4u, 0x31C8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C8FCu;
label_31c8fc:
    // 0x31c8fc: 0x1040004b  beqz        $v0, . + 4 + (0x4B << 2)
label_31c900:
    if (ctx->pc == 0x31C900u) {
        ctx->pc = 0x31C900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C8FCu;
        // 0x31c900: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C904u;
        goto label_31c904;
    }
    ctx->pc = 0x31C8FCu;
    {
        const bool branch_taken_0x31c8fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C900u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C8FCu;
        // 0x31c900: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c8fc) {
            ctx->pc = 0x31CA2Cu;
            goto label_31ca2c;
        }
    }
    ctx->pc = 0x31C904u;
label_31c904:
    // 0x31c904: 0x8e030008  lw          $v1, 0x8($s0)
    ctx->pc = 0x31c904u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_31c908:
    // 0x31c908: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31c908u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31c90c:
    // 0x31c90c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x31c90cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_31c910:
    // 0x31c910: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x31c910u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_31c914:
    // 0x31c914: 0xafa30000  sw          $v1, 0x0($sp)
    ctx->pc = 0x31c914u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 3));
label_31c918:
    // 0x31c918: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x31c918u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_31c91c:
    // 0x31c91c: 0xafa20004  sw          $v0, 0x4($sp)
    ctx->pc = 0x31c91cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
label_31c920:
    // 0x31c920: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x31c920u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
label_31c924:
    // 0x31c924: 0xafa30008  sw          $v1, 0x8($sp)
    ctx->pc = 0x31c924u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 3));
label_31c928:
    // 0x31c928: 0x8e020018  lw          $v0, 0x18($s0)
    ctx->pc = 0x31c928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_31c92c:
    // 0x31c92c: 0xc103440  jal         func_40D100
label_31c930:
    if (ctx->pc == 0x31C930u) {
        ctx->pc = 0x31C930u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C92Cu;
        // 0x31c930: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C934u;
        goto label_31c934;
    }
    ctx->pc = 0x31C92Cu;
    SET_GPR_U32(ctx, 31, 0x31C934u);
    ctx->pc = 0x31C930u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C92Cu;
    // 0x31c930: 0xafa2000c  sw          $v0, 0xC($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 12), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D100u, 0x31C92Cu, 0x31C934u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C934u;
label_31c934:
    // 0x31c934: 0x1040ffd4  beqz        $v0, . + 4 + (-0x2C << 2)
label_31c938:
    if (ctx->pc == 0x31C938u) {
        ctx->pc = 0x31C938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C934u;
        // 0x31c938: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C93Cu;
        goto label_31c93c;
    }
    ctx->pc = 0x31C934u;
    {
        const bool branch_taken_0x31c934 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C938u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C934u;
        // 0x31c938: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c934) {
            ctx->pc = 0x31C888u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31c888;
        }
    }
    ctx->pc = 0x31C93Cu;
label_31c93c:
    // 0x31c93c: 0x8e050010  lw          $a1, 0x10($s0)
    ctx->pc = 0x31c93cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
label_31c940:
    // 0x31c940: 0xc10486e  jal         func_4121B8
label_31c944:
    if (ctx->pc == 0x31C944u) {
        ctx->pc = 0x31C944u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C940u;
        // 0x31c944: 0x8e060014  lw          $a2, 0x14($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C948u;
        goto label_31c948;
    }
    ctx->pc = 0x31C940u;
    SET_GPR_U32(ctx, 31, 0x31C948u);
    ctx->pc = 0x31C944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C940u;
    // 0x31c944: 0x8e060014  lw          $a2, 0x14($s0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4121B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4121B8u, 0x31C940u, 0x31C948u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C948u;
label_31c948:
    // 0x31c948: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
label_31c94c:
    if (ctx->pc == 0x31C94Cu) {
        ctx->pc = 0x31C94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C948u;
        // 0x31c94c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C950u;
        goto label_31c950;
    }
    ctx->pc = 0x31C948u;
    {
        const bool branch_taken_0x31c948 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C94Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C948u;
        // 0x31c94c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c948) {
            ctx->pc = 0x31CA2Cu;
            goto label_31ca2c;
        }
    }
    ctx->pc = 0x31C950u;
label_31c950:
    // 0x31c950: 0x8e060018  lw          $a2, 0x18($s0)
    ctx->pc = 0x31c950u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_31c954:
    // 0x31c954: 0x10c0002b  beqz        $a2, . + 4 + (0x2B << 2)
label_31c958:
    if (ctx->pc == 0x31C958u) {
        ctx->pc = 0x31C958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C954u;
        // 0x31c958: 0x26050030  addiu       $a1, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C95Cu;
        goto label_31c95c;
    }
    ctx->pc = 0x31C954u;
    {
        const bool branch_taken_0x31c954 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C954u;
        // 0x31c958: 0x26050030  addiu       $a1, $s0, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c954) {
            ctx->pc = 0x31CA04u;
            goto label_31ca04;
        }
    }
    ctx->pc = 0x31C95Cu;
label_31c95c:
    // 0x31c95c: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x31c95cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_31c960:
    // 0x31c960: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x31c960u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
label_31c964:
    // 0x31c964: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_31c968:
    if (ctx->pc == 0x31C968u) {
        ctx->pc = 0x31C968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C964u;
        // 0x31c968: 0xd50018  mult        $zero, $a2, $s5 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C96Cu;
        goto label_31c96c;
    }
    ctx->pc = 0x31C964u;
    {
        const bool branch_taken_0x31c964 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C964u;
        // 0x31c968: 0xd50018  mult        $zero, $a2, $s5 (Delay Slot)
        { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c964) {
            ctx->pc = 0x31C984u;
            goto label_31c984;
        }
    }
    ctx->pc = 0x31C96Cu;
label_31c96c:
    // 0x31c96c: 0x8e050020  lw          $a1, 0x20($s0)
    ctx->pc = 0x31c96cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
label_31c970:
    // 0x31c970: 0x3012  mflo        $a2
    ctx->pc = 0x31c970u;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_31c974:
    // 0x31c974: 0xc10341a  jal         func_40D068
label_31c978:
    if (ctx->pc == 0x31C978u) {
        ctx->pc = 0x31C978u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C974u;
        // 0x31c978: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C97Cu;
        goto label_31c97c;
    }
    ctx->pc = 0x31C974u;
    SET_GPR_U32(ctx, 31, 0x31C97Cu);
    ctx->pc = 0x31C978u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C974u;
    // 0x31c978: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D068u, 0x31C974u, 0x31C97Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C97Cu;
label_31c97c:
    // 0x31c97c: 0x1040002b  beqz        $v0, . + 4 + (0x2B << 2)
label_31c980:
    if (ctx->pc == 0x31C980u) {
        ctx->pc = 0x31C980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C97Cu;
        // 0x31c980: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C984u;
        goto label_31c984;
    }
    ctx->pc = 0x31C97Cu;
    {
        const bool branch_taken_0x31c97c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C980u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C97Cu;
        // 0x31c980: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c97c) {
            ctx->pc = 0x31CA2Cu;
            goto label_31ca2c;
        }
    }
    ctx->pc = 0x31C984u;
label_31c984:
    // 0x31c984: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x31c984u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_31c988:
    // 0x31c988: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x31c988u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
label_31c98c:
    // 0x31c98c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_31c990:
    if (ctx->pc == 0x31C990u) {
        ctx->pc = 0x31C990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C98Cu;
        // 0x31c990: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C994u;
        goto label_31c994;
    }
    ctx->pc = 0x31C98Cu;
    {
        const bool branch_taken_0x31c98c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C990u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C98Cu;
        // 0x31c990: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c98c) {
            ctx->pc = 0x31C9B0u;
            goto label_31c9b0;
        }
    }
    ctx->pc = 0x31C994u;
label_31c994:
    // 0x31c994: 0x8e060018  lw          $a2, 0x18($s0)
    ctx->pc = 0x31c994u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_31c998:
    // 0x31c998: 0xd50018  mult        $zero, $a2, $s5
    ctx->pc = 0x31c998u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 21); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_31c99c:
    // 0x31c99c: 0x3012  mflo        $a2
    ctx->pc = 0x31c99cu;
    SET_GPR_U64(ctx, 6, ctx->lo);
label_31c9a0:
    // 0x31c9a0: 0xc10341a  jal         func_40D068
label_31c9a4:
    if (ctx->pc == 0x31C9A4u) {
        ctx->pc = 0x31C9A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C9A0u;
        // 0x31c9a4: 0x8e050024  lw          $a1, 0x24($s0) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C9A8u;
        goto label_31c9a8;
    }
    ctx->pc = 0x31C9A0u;
    SET_GPR_U32(ctx, 31, 0x31C9A8u);
    ctx->pc = 0x31C9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C9A0u;
    // 0x31c9a4: 0x8e050024  lw          $a1, 0x24($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 36)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D068u, 0x31C9A0u, 0x31C9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C9A8u;
label_31c9a8:
    // 0x31c9a8: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_31c9ac:
    if (ctx->pc == 0x31C9ACu) {
        ctx->pc = 0x31C9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C9A8u;
        // 0x31c9ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C9B0u;
        goto label_31c9b0;
    }
    ctx->pc = 0x31C9A8u;
    {
        const bool branch_taken_0x31c9a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C9ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C9A8u;
        // 0x31c9ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c9a8) {
            ctx->pc = 0x31CA2Cu;
            goto label_31ca2c;
        }
    }
    ctx->pc = 0x31C9B0u;
label_31c9b0:
    // 0x31c9b0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x31c9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_31c9b4:
    // 0x31c9b4: 0x30420008  andi        $v0, $v0, 0x8
    ctx->pc = 0x31c9b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8);
label_31c9b8:
    // 0x31c9b8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_31c9bc:
    if (ctx->pc == 0x31C9BCu) {
        ctx->pc = 0x31C9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C9B8u;
        // 0x31c9bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C9C0u;
        goto label_31c9c0;
    }
    ctx->pc = 0x31C9B8u;
    {
        const bool branch_taken_0x31c9b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C9BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C9B8u;
        // 0x31c9bc: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c9b8) {
            ctx->pc = 0x31C9D8u;
            goto label_31c9d8;
        }
    }
    ctx->pc = 0x31C9C0u;
label_31c9c0:
    // 0x31c9c0: 0x8e060018  lw          $a2, 0x18($s0)
    ctx->pc = 0x31c9c0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_31c9c4:
    // 0x31c9c4: 0x8e050028  lw          $a1, 0x28($s0)
    ctx->pc = 0x31c9c4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
label_31c9c8:
    // 0x31c9c8: 0xc10486e  jal         func_4121B8
label_31c9cc:
    if (ctx->pc == 0x31C9CCu) {
        ctx->pc = 0x31C9CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C9C8u;
        // 0x31c9cc: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C9D0u;
        goto label_31c9d0;
    }
    ctx->pc = 0x31C9C8u;
    SET_GPR_U32(ctx, 31, 0x31C9D0u);
    ctx->pc = 0x31C9CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C9C8u;
    // 0x31c9cc: 0x63080  sll         $a2, $a2, 2 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x4121B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4121B8u, 0x31C9C8u, 0x31C9D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C9D0u;
label_31c9d0:
    // 0x31c9d0: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
label_31c9d4:
    if (ctx->pc == 0x31C9D4u) {
        ctx->pc = 0x31C9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C9D0u;
        // 0x31c9d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C9D8u;
        goto label_31c9d8;
    }
    ctx->pc = 0x31C9D0u;
    {
        const bool branch_taken_0x31c9d0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C9D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C9D0u;
        // 0x31c9d4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c9d0) {
            ctx->pc = 0x31CA2Cu;
            goto label_31ca2c;
        }
    }
    ctx->pc = 0x31C9D8u;
label_31c9d8:
    // 0x31c9d8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x31c9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_31c9dc:
    // 0x31c9dc: 0x30420004  andi        $v0, $v0, 0x4
    ctx->pc = 0x31c9dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4);
label_31c9e0:
    // 0x31c9e0: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_31c9e4:
    if (ctx->pc == 0x31C9E4u) {
        ctx->pc = 0x31C9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C9E0u;
        // 0x31c9e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C9E8u;
        goto label_31c9e8;
    }
    ctx->pc = 0x31C9E0u;
    {
        const bool branch_taken_0x31c9e0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C9E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C9E0u;
        // 0x31c9e4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c9e0) {
            ctx->pc = 0x31CA00u;
            goto label_31ca00;
        }
    }
    ctx->pc = 0x31C9E8u;
label_31c9e8:
    // 0x31c9e8: 0x8e060018  lw          $a2, 0x18($s0)
    ctx->pc = 0x31c9e8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
label_31c9ec:
    // 0x31c9ec: 0x8e05002c  lw          $a1, 0x2C($s0)
    ctx->pc = 0x31c9ecu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 44)));
label_31c9f0:
    // 0x31c9f0: 0xc10341a  jal         func_40D068
label_31c9f4:
    if (ctx->pc == 0x31C9F4u) {
        ctx->pc = 0x31C9F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C9F0u;
        // 0x31c9f4: 0x630c0  sll         $a2, $a2, 3 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31C9F8u;
        goto label_31c9f8;
    }
    ctx->pc = 0x31C9F0u;
    SET_GPR_U32(ctx, 31, 0x31C9F8u);
    ctx->pc = 0x31C9F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31C9F0u;
    // 0x31c9f4: 0x630c0  sll         $a2, $a2, 3 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D068u, 0x31C9F0u, 0x31C9F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31C9F8u;
label_31c9f8:
    // 0x31c9f8: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
label_31c9fc:
    if (ctx->pc == 0x31C9FCu) {
        ctx->pc = 0x31C9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C9F8u;
        // 0x31c9fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31CA00u;
        goto label_31ca00;
    }
    ctx->pc = 0x31C9F8u;
    {
        const bool branch_taken_0x31c9f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31C9FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31C9F8u;
        // 0x31c9fc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31c9f8) {
            ctx->pc = 0x31CA2Cu;
            goto label_31ca2c;
        }
    }
    ctx->pc = 0x31CA00u;
label_31ca00:
    // 0x31ca00: 0x26050030  addiu       $a1, $s0, 0x30
    ctx->pc = 0x31ca00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 48));
label_31ca04:
    // 0x31ca04: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x31ca04u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31ca08:
    // 0x31ca08: 0xc10341a  jal         func_40D068
label_31ca0c:
    if (ctx->pc == 0x31CA0Cu) {
        ctx->pc = 0x31CA0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CA08u;
        // 0x31ca0c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31CA10u;
        goto label_31ca10;
    }
    ctx->pc = 0x31CA08u;
    SET_GPR_U32(ctx, 31, 0x31CA10u);
    ctx->pc = 0x31CA0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31CA08u;
    // 0x31ca0c: 0x24060010  addiu       $a2, $zero, 0x10 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D068u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D068u, 0x31CA08u, 0x31CA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31CA10u;
label_31ca10:
    // 0x31ca10: 0x1040ff9d  beqz        $v0, . + 4 + (-0x63 << 2)
label_31ca14:
    if (ctx->pc == 0x31CA14u) {
        ctx->pc = 0x31CA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CA10u;
        // 0x31ca14: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31CA18u;
        goto label_31ca18;
    }
    ctx->pc = 0x31CA10u;
    {
        const bool branch_taken_0x31ca10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x31CA14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CA10u;
        // 0x31ca14: 0x26520001  addiu       $s2, $s2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ca10) {
            ctx->pc = 0x31C888u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31c888;
        }
    }
    ctx->pc = 0x31CA18u;
label_31ca18:
    // 0x31ca18: 0x8e620000  lw          $v0, 0x0($s3)
    ctx->pc = 0x31ca18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_31ca1c:
    // 0x31ca1c: 0x242102b  sltu        $v0, $s2, $v0
    ctx->pc = 0x31ca1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 18) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_31ca20:
    // 0x31ca20: 0x1440ffa1  bnez        $v0, . + 4 + (-0x5F << 2)
label_31ca24:
    if (ctx->pc == 0x31CA24u) {
        ctx->pc = 0x31CA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CA20u;
        // 0x31ca24: 0x26940040  addiu       $s4, $s4, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31CA28u;
        goto label_31ca28;
    }
    ctx->pc = 0x31CA20u;
    {
        const bool branch_taken_0x31ca20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x31CA24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CA20u;
        // 0x31ca24: 0x26940040  addiu       $s4, $s4, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31ca20) {
            ctx->pc = 0x31C8A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_31c8a8;
        }
    }
    ctx->pc = 0x31CA28u;
label_31ca28:
    // 0x31ca28: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x31ca28u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_31ca2c:
    // 0x31ca2c: 0x7bb00090  lq          $s0, 0x90($sp)
    ctx->pc = 0x31ca2cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 144)));
label_31ca30:
    // 0x31ca30: 0x7bb10080  lq          $s1, 0x80($sp)
    ctx->pc = 0x31ca30u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 128)));
label_31ca34:
    // 0x31ca34: 0x7bb20070  lq          $s2, 0x70($sp)
    ctx->pc = 0x31ca34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 112)));
label_31ca38:
    // 0x31ca38: 0x7bb30060  lq          $s3, 0x60($sp)
    ctx->pc = 0x31ca38u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_31ca3c:
    // 0x31ca3c: 0x7bb40050  lq          $s4, 0x50($sp)
    ctx->pc = 0x31ca3cu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_31ca40:
    // 0x31ca40: 0x7bb50040  lq          $s5, 0x40($sp)
    ctx->pc = 0x31ca40u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_31ca44:
    // 0x31ca44: 0x7bb60030  lq          $s6, 0x30($sp)
    ctx->pc = 0x31ca44u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_31ca48:
    // 0x31ca48: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x31ca48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_31ca4c:
    // 0x31ca4c: 0x3e00008  jr          $ra
label_31ca50:
    if (ctx->pc == 0x31CA50u) {
        ctx->pc = 0x31CA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CA4Cu;
        // 0x31ca50: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = 0x31CA54u;
        goto label_31ca54;
    }
    ctx->pc = 0x31CA4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31CA50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31CA4Cu;
        // 0x31ca50: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31CA4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31CA54u;
label_31ca54:
    // 0x31ca54: 0x0  nop
    ctx->pc = 0x31ca54u;
    // NOP
    ctx->pc = 0x31ca58u;
}
