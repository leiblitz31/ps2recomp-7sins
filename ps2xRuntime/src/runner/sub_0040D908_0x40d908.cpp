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

// Function: sub_0040D908
// Address: 0x40d908 - 0x40da10
void sub_0040D908_0x40d908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0040D908_0x40d908");
#endif

    switch (ctx->pc) {
        case 0x40d908u: goto label_40d908;
        case 0x40d90cu: goto label_40d90c;
        case 0x40d910u: goto label_40d910;
        case 0x40d914u: goto label_40d914;
        case 0x40d918u: goto label_40d918;
        case 0x40d91cu: goto label_40d91c;
        case 0x40d920u: goto label_40d920;
        case 0x40d924u: goto label_40d924;
        case 0x40d928u: goto label_40d928;
        case 0x40d92cu: goto label_40d92c;
        case 0x40d930u: goto label_40d930;
        case 0x40d934u: goto label_40d934;
        case 0x40d938u: goto label_40d938;
        case 0x40d93cu: goto label_40d93c;
        case 0x40d940u: goto label_40d940;
        case 0x40d944u: goto label_40d944;
        case 0x40d948u: goto label_40d948;
        case 0x40d94cu: goto label_40d94c;
        case 0x40d950u: goto label_40d950;
        case 0x40d954u: goto label_40d954;
        case 0x40d958u: goto label_40d958;
        case 0x40d95cu: goto label_40d95c;
        case 0x40d960u: goto label_40d960;
        case 0x40d964u: goto label_40d964;
        case 0x40d968u: goto label_40d968;
        case 0x40d96cu: goto label_40d96c;
        case 0x40d970u: goto label_40d970;
        case 0x40d974u: goto label_40d974;
        case 0x40d978u: goto label_40d978;
        case 0x40d97cu: goto label_40d97c;
        case 0x40d980u: goto label_40d980;
        case 0x40d984u: goto label_40d984;
        case 0x40d988u: goto label_40d988;
        case 0x40d98cu: goto label_40d98c;
        case 0x40d990u: goto label_40d990;
        case 0x40d994u: goto label_40d994;
        case 0x40d998u: goto label_40d998;
        case 0x40d99cu: goto label_40d99c;
        case 0x40d9a0u: goto label_40d9a0;
        case 0x40d9a4u: goto label_40d9a4;
        case 0x40d9a8u: goto label_40d9a8;
        case 0x40d9acu: goto label_40d9ac;
        case 0x40d9b0u: goto label_40d9b0;
        case 0x40d9b4u: goto label_40d9b4;
        case 0x40d9b8u: goto label_40d9b8;
        case 0x40d9bcu: goto label_40d9bc;
        case 0x40d9c0u: goto label_40d9c0;
        case 0x40d9c4u: goto label_40d9c4;
        case 0x40d9c8u: goto label_40d9c8;
        case 0x40d9ccu: goto label_40d9cc;
        case 0x40d9d0u: goto label_40d9d0;
        case 0x40d9d4u: goto label_40d9d4;
        case 0x40d9d8u: goto label_40d9d8;
        case 0x40d9dcu: goto label_40d9dc;
        case 0x40d9e0u: goto label_40d9e0;
        case 0x40d9e4u: goto label_40d9e4;
        case 0x40d9e8u: goto label_40d9e8;
        case 0x40d9ecu: goto label_40d9ec;
        case 0x40d9f0u: goto label_40d9f0;
        case 0x40d9f4u: goto label_40d9f4;
        case 0x40d9f8u: goto label_40d9f8;
        case 0x40d9fcu: goto label_40d9fc;
        case 0x40da00u: goto label_40da00;
        case 0x40da04u: goto label_40da04;
        case 0x40da08u: goto label_40da08;
        case 0x40da0cu: goto label_40da0c;
        default: break;
    }

    ctx->pc = 0x40d908u;

label_40d908:
    // 0x40d908: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x40d908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_40d90c:
    // 0x40d90c: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x40d90cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
label_40d910:
    // 0x40d910: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x40d910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_40d914:
    // 0x40d914: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x40d914u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_40d918:
    // 0x40d918: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x40d918u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_40d91c:
    // 0x40d91c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x40d91cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_40d920:
    // 0x40d920: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x40d920u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_40d924:
    // 0x40d924: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x40d924u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_40d928:
    // 0x40d928: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x40d928u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_40d92c:
    // 0x40d92c: 0x2453e880  addiu       $s3, $v0, -0x1780
    ctx->pc = 0x40d92cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 4294961280));
label_40d930:
    // 0x40d930: 0x24040010  addiu       $a0, $zero, 0x10
    ctx->pc = 0x40d930u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_40d934:
    // 0x40d934: 0x8e620108  lw          $v0, 0x108($s3)
    ctx->pc = 0x40d934u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 264)));
label_40d938:
    // 0x40d938: 0x40f809  jalr        $v0
label_40d93c:
    if (ctx->pc == 0x40D93Cu) {
        ctx->pc = 0x40D93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D938u;
        // 0x40d93c: 0x3c050003  lui         $a1, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40D940u;
        goto label_40d940;
    }
    ctx->pc = 0x40D938u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40D940u);
        ctx->pc = 0x40D93Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D938u;
        // 0x40d93c: 0x3c050003  lui         $a1, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)3 << 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40D938u, 0x40D940u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40D940u;
label_40d940:
    // 0x40d940: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x40d940u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_40d944:
    // 0x40d944: 0x1600000c  bnez        $s0, . + 4 + (0xC << 2)
label_40d948:
    if (ctx->pc == 0x40D948u) {
        ctx->pc = 0x40D948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D944u;
        // 0x40d948: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40D94Cu;
        goto label_40d94c;
    }
    ctx->pc = 0x40D944u;
    {
        const bool branch_taken_0x40d944 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x40D948u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D944u;
        // 0x40d948: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40d944) {
            ctx->pc = 0x40D978u;
            goto label_40d978;
        }
    }
    ctx->pc = 0x40D94Cu;
label_40d94c:
    // 0x40d94c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x40d94cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_40d950:
    // 0x40d950: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x40d950u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_40d954:
    // 0x40d954: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x40d954u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
label_40d958:
    // 0x40d958: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x40d958u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_40d95c:
    // 0x40d95c: 0xc1035f6  jal         func_40D7D8
label_40d960:
    if (ctx->pc == 0x40D960u) {
        ctx->pc = 0x40D960u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D95Cu;
        // 0x40d960: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x40D964u;
        goto label_40d964;
    }
    ctx->pc = 0x40D95Cu;
    SET_GPR_U32(ctx, 31, 0x40D964u);
    ctx->pc = 0x40D960u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40D95Cu;
    // 0x40d960: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x40D95Cu, 0x40D964u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40D964u;
label_40d964:
    // 0x40d964: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x40d964u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_40d968:
    // 0x40d968: 0xc103628  jal         func_40D8A0
label_40d96c:
    if (ctx->pc == 0x40D96Cu) {
        ctx->pc = 0x40D96Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D968u;
        // 0x40d96c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40D970u;
        goto label_40d970;
    }
    ctx->pc = 0x40D968u;
    SET_GPR_U32(ctx, 31, 0x40D970u);
    ctx->pc = 0x40D96Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40D968u;
    // 0x40d96c: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x40D968u, 0x40D970u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40D970u;
label_40d970:
    // 0x40d970: 0x1000001f  b           . + 4 + (0x1F << 2)
label_40d974:
    if (ctx->pc == 0x40D974u) {
        ctx->pc = 0x40D974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D970u;
        // 0x40d974: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40D978u;
        goto label_40d978;
    }
    ctx->pc = 0x40D970u;
    {
        const bool branch_taken_0x40d970 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40D974u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D970u;
        // 0x40d974: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40d970) {
            ctx->pc = 0x40D9F0u;
            goto label_40d9f0;
        }
    }
    ctx->pc = 0x40D978u;
label_40d978:
    // 0x40d978: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x40d978u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_40d97c:
    // 0x40d97c: 0x2230018  mult        $zero, $s1, $v1
    ctx->pc = 0x40d97cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_40d980:
    // 0x40d980: 0xae11000c  sw          $s1, 0xC($s0)
    ctx->pc = 0x40d980u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 17));
label_40d984:
    // 0x40d984: 0x3c050100  lui         $a1, 0x100
    ctx->pc = 0x40d984u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)256 << 16));
label_40d988:
    // 0x40d988: 0x8e620108  lw          $v0, 0x108($s3)
    ctx->pc = 0x40d988u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 264)));
label_40d98c:
    // 0x40d98c: 0x2452825  or          $a1, $s2, $a1
    ctx->pc = 0x40d98cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 18) | GPR_U64(ctx, 5));
label_40d990:
    // 0x40d990: 0x2012  mflo        $a0
    ctx->pc = 0x40d990u;
    SET_GPR_U64(ctx, 4, ctx->lo);
label_40d994:
    // 0x40d994: 0x40f809  jalr        $v0
label_40d998:
    if (ctx->pc == 0x40D998u) {
        ctx->pc = 0x40D998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D994u;
        // 0x40d998: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40D99Cu;
        goto label_40d99c;
    }
    ctx->pc = 0x40D994u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x40D99Cu);
        ctx->pc = 0x40D998u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D994u;
        // 0x40d998: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40D994u, 0x40D99Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40D99Cu;
label_40d99c:
    // 0x40d99c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_40d9a0:
    if (ctx->pc == 0x40D9A0u) {
        ctx->pc = 0x40D9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D99Cu;
        // 0x40d9a0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40D9A4u;
        goto label_40d9a4;
    }
    ctx->pc = 0x40D99Cu;
    {
        const bool branch_taken_0x40d99c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x40D9A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D99Cu;
        // 0x40d9a0: 0xae020000  sw          $v0, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40d99c) {
            ctx->pc = 0x40D9B0u;
            goto label_40d9b0;
        }
    }
    ctx->pc = 0x40D9A4u;
label_40d9a4:
    // 0x40d9a4: 0x10000012  b           . + 4 + (0x12 << 2)
label_40d9a8:
    if (ctx->pc == 0x40D9A8u) {
        ctx->pc = 0x40D9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D9A4u;
        // 0x40d9a8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40D9ACu;
        goto label_40d9ac;
    }
    ctx->pc = 0x40D9A4u;
    {
        const bool branch_taken_0x40d9a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x40D9A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D9A4u;
        // 0x40d9a8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x40d9a4) {
            ctx->pc = 0x40D9F0u;
            goto label_40d9f0;
        }
    }
    ctx->pc = 0x40D9ACu;
label_40d9ac:
    // 0x40d9ac: 0x0  nop
    ctx->pc = 0x40d9acu;
    // NOP
label_40d9b0:
    // 0x40d9b0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x40d9b0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_40d9b4:
    // 0x40d9b4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x40d9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
label_40d9b8:
    // 0x40d9b8: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x40d9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
label_40d9bc:
    // 0x40d9bc: 0x8e05000c  lw          $a1, 0xC($s0)
    ctx->pc = 0x40d9bcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
label_40d9c0:
    // 0x40d9c0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x40d9c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_40d9c4:
    // 0x40d9c4: 0x450018  mult        $zero, $v0, $a1
    ctx->pc = 0x40d9c4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
label_40d9c8:
    // 0x40d9c8: 0x2812  mflo        $a1
    ctx->pc = 0x40d9c8u;
    SET_GPR_U64(ctx, 5, ctx->lo);
label_40d9cc:
    // 0x40d9cc: 0xc1035f6  jal         func_40D7D8
label_40d9d0:
    if (ctx->pc == 0x40D9D0u) {
        ctx->pc = 0x40D9D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D9CCu;
        // 0x40d9d0: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
        ctx->in_delay_slot = false;
        ctx->pc = 0x40D9D4u;
        goto label_40d9d4;
    }
    ctx->pc = 0x40D9CCu;
    SET_GPR_U32(ctx, 31, 0x40D9D4u);
    ctx->pc = 0x40D9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40D9CCu;
    // 0x40d9d0: 0x34840013  ori         $a0, $a0, 0x13 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)19);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x40D9CCu, 0x40D9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40D9D4u;
label_40d9d4:
    // 0x40d9d4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x40d9d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_40d9d8:
    // 0x40d9d8: 0xc103628  jal         func_40D8A0
label_40d9dc:
    if (ctx->pc == 0x40D9DCu) {
        ctx->pc = 0x40D9DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D9D8u;
        // 0x40d9dc: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40D9E0u;
        goto label_40d9e0;
    }
    ctx->pc = 0x40D9D8u;
    SET_GPR_U32(ctx, 31, 0x40D9E0u);
    ctx->pc = 0x40D9DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x40D9D8u;
    // 0x40d9dc: 0xafa20014  sw          $v0, 0x14($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x40D9D8u, 0x40D9E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x40D9E0u;
label_40d9e0:
    // 0x40d9e0: 0x8e63010c  lw          $v1, 0x10C($s3)
    ctx->pc = 0x40d9e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 268)));
label_40d9e4:
    // 0x40d9e4: 0x60f809  jalr        $v1
label_40d9e8:
    if (ctx->pc == 0x40D9E8u) {
        ctx->pc = 0x40D9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D9E4u;
        // 0x40d9e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40D9ECu;
        goto label_40d9ec;
    }
    ctx->pc = 0x40D9E4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x40D9ECu);
        ctx->pc = 0x40D9E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40D9E4u;
        // 0x40d9e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40D9E4u, 0x40D9ECu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x40D9ECu;
label_40d9ec:
    // 0x40d9ec: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x40d9ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_40d9f0:
    // 0x40d9f0: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x40d9f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_40d9f4:
    // 0x40d9f4: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x40d9f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_40d9f8:
    // 0x40d9f8: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x40d9f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_40d9fc:
    // 0x40d9fc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x40d9fcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_40da00:
    // 0x40da00: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x40da00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_40da04:
    // 0x40da04: 0x3e00008  jr          $ra
label_40da08:
    if (ctx->pc == 0x40DA08u) {
        ctx->pc = 0x40DA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DA04u;
        // 0x40da08: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x40DA0Cu;
        goto label_40da0c;
    }
    ctx->pc = 0x40DA04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x40DA08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x40DA04u;
        // 0x40da08: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x40DA04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x40DA0Cu;
label_40da0c:
    // 0x40da0c: 0x0  nop
    ctx->pc = 0x40da0cu;
    // NOP
    ctx->pc = 0x40da10u;
}
