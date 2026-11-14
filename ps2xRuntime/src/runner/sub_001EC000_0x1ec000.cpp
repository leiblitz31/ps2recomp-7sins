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

// Function: sub_001EC000
// Address: 0x1ec000 - 0x1ec160
void sub_001EC000_0x1ec000(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EC000_0x1ec000");
#endif

    switch (ctx->pc) {
        case 0x1ec030u: goto label_1ec030;
        case 0x1ec03cu: goto label_1ec03c;
        case 0x1ec080u: goto label_1ec080;
        case 0x1ec0a0u: goto label_1ec0a0;
        case 0x1ec0e0u: goto label_1ec0e0;
        case 0x1ec0f0u: goto label_1ec0f0;
        case 0x1ec108u: goto label_1ec108;
        case 0x1ec130u: goto label_1ec130;
        case 0x1ec140u: goto label_1ec140;
        default: break;
    }

    ctx->pc = 0x1ec000u;

    // 0x1ec000: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x1ec000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x1ec004: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1ec004u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1ec008: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x1ec008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x1ec00c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x1ec00cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x1ec010: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x1ec010u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x1ec014: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x1ec014u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x1ec018: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x1ec018u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    // 0x1ec01c: 0xafa0005c  sw          $zero, 0x5C($sp)
    ctx->pc = 0x1ec01cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 0));
    // 0x1ec020: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1ec020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ec024: 0x244400bc  addiu       $a0, $v0, 0xBC
    ctx->pc = 0x1ec024u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 188));
    // 0x1ec028: 0xc07ac08  jal         func_1EB020
    ctx->pc = 0x1EC028u;
    SET_GPR_U32(ctx, 31, 0x1EC030u);
    ctx->pc = 0x1EB020u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EB020u, 0x1EC028u, 0x1EC030u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC030u;
label_1ec030:
    // 0x1ec030: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1ec030u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec034: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1EC034u;
    {
        const bool branch_taken_0x1ec034 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ec034) {
            ctx->pc = 0x1EC064u;
            goto label_1ec064;
        }
    }
    ctx->pc = 0x1EC03Cu;
label_1ec03c:
    // 0x1ec03c: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1ec03cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ec040: 0x90420004  lbu         $v0, 0x4($v0)
    ctx->pc = 0x1ec040u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x1ec044: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x1ec044u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ec048: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EC048u;
    {
        const bool branch_taken_0x1ec048 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ec048) {
            ctx->pc = 0x1EC060u;
            goto label_1ec060;
        }
    }
    ctx->pc = 0x1EC050u;
    // 0x1ec050: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1ec050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x1ec054: 0xafa2005c  sw          $v0, 0x5C($sp)
    ctx->pc = 0x1ec054u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 2));
    // 0x1ec058: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1EC058u;
    {
        const bool branch_taken_0x1ec058 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ec058) {
            ctx->pc = 0x1EC064u;
            goto label_1ec064;
        }
    }
    ctx->pc = 0x1EC060u;
label_1ec060:
    // 0x1ec060: 0x26100004  addiu       $s0, $s0, 0x4
    ctx->pc = 0x1ec060u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
label_1ec064:
    // 0x1ec064: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1ec064u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1ec068: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1EC068u;
    {
        const bool branch_taken_0x1ec068 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ec068) {
            ctx->pc = 0x1EC088u;
            goto label_1ec088;
        }
    }
    ctx->pc = 0x1EC070u;
    // 0x1ec070: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1ec070u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ec074: 0x244400bc  addiu       $a0, $v0, 0xBC
    ctx->pc = 0x1ec074u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 188));
    // 0x1ec078: 0xc07abf8  jal         func_1EAFE0
    ctx->pc = 0x1EC078u;
    SET_GPR_U32(ctx, 31, 0x1EC080u);
    ctx->pc = 0x1EAFE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EAFE0u, 0x1EC078u, 0x1EC080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC080u;
label_1ec080:
    // 0x1ec080: 0x1602ffee  bne         $s0, $v0, . + 4 + (-0x12 << 2)
    ctx->pc = 0x1EC080u;
    {
        const bool branch_taken_0x1ec080 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x1ec080) {
            ctx->pc = 0x1EC03Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1ec03c;
        }
    }
    ctx->pc = 0x1EC088u;
label_1ec088:
    // 0x1ec088: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1ec088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1ec08c: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1EC08Cu;
    {
        const bool branch_taken_0x1ec08c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ec08c) {
            ctx->pc = 0x1EC130u;
            goto label_1ec130;
        }
    }
    ctx->pc = 0x1EC094u;
    // 0x1ec094: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1ec094u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ec098: 0xc07b2e0  jal         func_1ECB80
    ctx->pc = 0x1EC098u;
    SET_GPR_U32(ctx, 31, 0x1EC0A0u);
    ctx->pc = 0x1ECB80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ECB80u, 0x1EC098u, 0x1EC0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC0A0u;
label_1ec0a0:
    // 0x1ec0a0: 0x8f83bb60  lw          $v1, -0x44A0($gp)
    ctx->pc = 0x1ec0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949728)));
    // 0x1ec0a4: 0x8c630014  lw          $v1, 0x14($v1)
    ctx->pc = 0x1ec0a4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x1ec0a8: 0x43082b  sltu        $at, $v0, $v1
    ctx->pc = 0x1ec0a8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1ec0ac: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EC0ACu;
    {
        const bool branch_taken_0x1ec0ac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ec0ac) {
            ctx->pc = 0x1EC0C4u;
            goto label_1ec0c4;
        }
    }
    ctx->pc = 0x1EC0B4u;
    // 0x1ec0b4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ec0b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1ec0b8: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x1ec0b8u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x1ec0bc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1EC0BCu;
    {
        const bool branch_taken_0x1ec0bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ec0bc) {
            ctx->pc = 0x1EC0C8u;
            goto label_1ec0c8;
        }
    }
    ctx->pc = 0x1EC0C4u;
label_1ec0c4:
    // 0x1ec0c4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1ec0c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ec0c8:
    // 0x1ec0c8: 0x325300ff  andi        $s3, $s2, 0xFF
    ctx->pc = 0x1ec0c8u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x1ec0cc: 0x12600018  beqz        $s3, . + 4 + (0x18 << 2)
    ctx->pc = 0x1EC0CCu;
    {
        const bool branch_taken_0x1ec0cc = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ec0cc) {
            ctx->pc = 0x1EC130u;
            goto label_1ec130;
        }
    }
    ctx->pc = 0x1EC0D4u;
    // 0x1ec0d4: 0x24040128  addiu       $a0, $zero, 0x128
    ctx->pc = 0x1ec0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 296));
    // 0x1ec0d8: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x1EC0D8u;
    SET_GPR_U32(ctx, 31, 0x1EC0E0u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x1EC0D8u, 0x1EC0E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC0E0u;
label_1ec0e0:
    // 0x1ec0e0: 0x24040128  addiu       $a0, $zero, 0x128
    ctx->pc = 0x1ec0e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 296));
    // 0x1ec0e4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1ec0e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec0e8: 0xc0400e0  jal         func_100380
    ctx->pc = 0x1EC0E8u;
    SET_GPR_U32(ctx, 31, 0x1EC0F0u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x1EC0E8u, 0x1EC0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC0F0u;
label_1ec0f0:
    // 0x1ec0f0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1ec0f0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec0f4: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1EC0F4u;
    {
        const bool branch_taken_0x1ec0f4 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ec0f4) {
            ctx->pc = 0x1EC10Cu;
            goto label_1ec10c;
        }
    }
    ctx->pc = 0x1EC0FCu;
    // 0x1ec0fc: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1ec0fcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ec100: 0xc07b138  jal         func_1EC4E0
    ctx->pc = 0x1EC100u;
    SET_GPR_U32(ctx, 31, 0x1EC108u);
    ctx->pc = 0x1EC4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EC4E0u, 0x1EC100u, 0x1EC108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC108u;
label_1ec108:
    // 0x1ec108: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1ec108u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1ec10c:
    // 0x1ec10c: 0xafb1005c  sw          $s1, 0x5C($sp)
    ctx->pc = 0x1ec10cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 17));
    // 0x1ec110: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x1ec110u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1ec114: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1EC114u;
    {
        const bool branch_taken_0x1ec114 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ec114) {
            ctx->pc = 0x1EC130u;
            goto label_1ec130;
        }
    }
    ctx->pc = 0x1EC11Cu;
    // 0x1ec11c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x1ec11cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ec120: 0x244400bc  addiu       $a0, $v0, 0xBC
    ctx->pc = 0x1ec120u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 188));
    // 0x1ec124: 0x27a5005c  addiu       $a1, $sp, 0x5C
    ctx->pc = 0x1ec124u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x1ec128: 0xc07b058  jal         func_1EC160
    ctx->pc = 0x1EC128u;
    SET_GPR_U32(ctx, 31, 0x1EC130u);
    ctx->pc = 0x1EC160u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EC160u, 0x1EC128u, 0x1EC130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC130u;
label_1ec130:
    // 0x1ec130: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x1ec130u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x1ec134: 0x8fa5005c  lw          $a1, 0x5C($sp)
    ctx->pc = 0x1ec134u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x1ec138: 0xc07b18c  jal         func_1EC630
    ctx->pc = 0x1EC138u;
    SET_GPR_U32(ctx, 31, 0x1EC140u);
    ctx->pc = 0x1EC630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EC630u, 0x1EC138u, 0x1EC140u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1EC140u;
label_1ec140:
    // 0x1ec140: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1ec140u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1ec144: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1ec144u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1ec148: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1ec148u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1ec14c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1ec14cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ec150: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1ec150u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ec154: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x1ec154u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x1ec158: 0x3e00008  jr          $ra
    ctx->pc = 0x1EC158u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EC158u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EC160u;
}
