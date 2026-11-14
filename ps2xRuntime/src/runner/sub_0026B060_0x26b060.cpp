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

// Function: sub_0026B060
// Address: 0x26b060 - 0x26b1c0
void sub_0026B060_0x26b060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0026B060_0x26b060");
#endif

    switch (ctx->pc) {
        case 0x26b094u: goto label_26b094;
        case 0x26b0a4u: goto label_26b0a4;
        case 0x26b0b4u: goto label_26b0b4;
        case 0x26b0c0u: goto label_26b0c0;
        case 0x26b0d0u: goto label_26b0d0;
        case 0x26b0e0u: goto label_26b0e0;
        case 0x26b0f0u: goto label_26b0f0;
        case 0x26b0fcu: goto label_26b0fc;
        case 0x26b118u: goto label_26b118;
        case 0x26b130u: goto label_26b130;
        case 0x26b160u: goto label_26b160;
        default: break;
    }

    ctx->pc = 0x26b060u;

    // 0x26b060: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x26b060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x26b064: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x26b064u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x26b068: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x26b068u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x26b06c: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x26b06cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x26b070: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x26b070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x26b074: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x26b074u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x26b078: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x26b078u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x26b07c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x26b07cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x26b080: 0xafa40070  sw          $a0, 0x70($sp)
    ctx->pc = 0x26b080u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 4));
    // 0x26b084: 0xafa50080  sw          $a1, 0x80($sp)
    ctx->pc = 0x26b084u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 5));
    // 0x26b088: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x26b088u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x26b08c: 0xc09ac80  jal         func_26B200
    ctx->pc = 0x26B08Cu;
    SET_GPR_U32(ctx, 31, 0x26B094u);
    ctx->pc = 0x26B200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B200u, 0x26B08Cu, 0x26B094u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B094u;
label_26b094:
    // 0x26b094: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x26b094u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b098: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x26b098u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b09c: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x26B09Cu;
    {
        const bool branch_taken_0x26b09c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b09c) {
            ctx->pc = 0x26B17Cu;
            goto label_26b17c;
        }
    }
    ctx->pc = 0x26B0A4u;
label_26b0a4:
    // 0x26b0a4: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x26b0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x26b0a8: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x26b0a8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b0ac: 0xc09ac70  jal         func_26B1C0
    ctx->pc = 0x26B0ACu;
    SET_GPR_U32(ctx, 31, 0x26B0B4u);
    ctx->pc = 0x26B1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B1C0u, 0x26B0ACu, 0x26B0B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B0B4u;
label_26b0b4:
    // 0x26b0b4: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x26b0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x26b0b8: 0xc041a70  jal         func_1069C0
    ctx->pc = 0x26B0B8u;
    SET_GPR_U32(ctx, 31, 0x26B0C0u);
    ctx->pc = 0x1069C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1069C0u, 0x26B0B8u, 0x26B0C0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B0C0u;
label_26b0c0:
    // 0x26b0c0: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x26b0c0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b0c4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26b0c4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b0c8: 0xc048bb4  jal         func_122ED0
    ctx->pc = 0x26B0C8u;
    SET_GPR_U32(ctx, 31, 0x26B0D0u);
    ctx->pc = 0x122ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122ED0u, 0x26B0C8u, 0x26B0D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B0D0u;
label_26b0d0:
    // 0x26b0d0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x26b0d0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b0d4: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x26b0d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b0d8: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x26B0D8u;
    {
        const bool branch_taken_0x26b0d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b0d8) {
            ctx->pc = 0x26B16Cu;
            goto label_26b16c;
        }
    }
    ctx->pc = 0x26B0E0u;
label_26b0e0:
    // 0x26b0e0: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26b0e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b0e4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26b0e4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b0e8: 0xc068c94  jal         func_1A3250
    ctx->pc = 0x26B0E8u;
    SET_GPR_U32(ctx, 31, 0x26B0F0u);
    ctx->pc = 0x1A3250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3250u, 0x26B0E8u, 0x26B0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B0F0u;
label_26b0f0:
    // 0x26b0f0: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x26b0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26b0f4: 0xc09d0b8  jal         func_2742E0
    ctx->pc = 0x26B0F4u;
    SET_GPR_U32(ctx, 31, 0x26B0FCu);
    ctx->pc = 0x2742E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2742E0u, 0x26B0F4u, 0x26B0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B0FCu;
label_26b0fc:
    // 0x26b0fc: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x26b0fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x26b100: 0x14430019  bne         $v0, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x26B100u;
    {
        const bool branch_taken_0x26b100 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x26b100) {
            ctx->pc = 0x26B168u;
            goto label_26b168;
        }
    }
    ctx->pc = 0x26B108u;
    // 0x26b108: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x26b108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b10c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x26b10cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b110: 0xc068c94  jal         func_1A3250
    ctx->pc = 0x26B110u;
    SET_GPR_U32(ctx, 31, 0x26B118u);
    ctx->pc = 0x1A3250u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3250u, 0x26B110u, 0x26B118u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B118u;
label_26b118:
    // 0x26b118: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x26b118u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x26b11c: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x26b11cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x26b120: 0x24a5cf08  addiu       $a1, $a1, -0x30F8
    ctx->pc = 0x26b120u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294954760));
    // 0x26b124: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x26b124u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b128: 0xc047970  jal         func_11E5C0
    ctx->pc = 0x26B128u;
    SET_GPR_U32(ctx, 31, 0x26B130u);
    ctx->pc = 0x11E5C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11E5C0u, 0x26B128u, 0x26B130u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B130u;
label_26b130:
    // 0x26b130: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x26b130u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b134: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x26b134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x26b138: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x26b138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x26b13c: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x26B13Cu;
    {
        const bool branch_taken_0x26b13c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x26b13c) {
            ctx->pc = 0x26B150u;
            goto label_26b150;
        }
    }
    ctx->pc = 0x26B144u;
    // 0x26b144: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x26b144u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x26b148: 0x16620007  bne         $s3, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x26B148u;
    {
        const bool branch_taken_0x26b148 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        if (branch_taken_0x26b148) {
            ctx->pc = 0x26B168u;
            goto label_26b168;
        }
    }
    ctx->pc = 0x26B150u;
label_26b150:
    // 0x26b150: 0x8fa40070  lw          $a0, 0x70($sp)
    ctx->pc = 0x26b150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x26b154: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x26b154u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x26b158: 0xc09ac70  jal         func_26B1C0
    ctx->pc = 0x26B158u;
    SET_GPR_U32(ctx, 31, 0x26B160u);
    ctx->pc = 0x26B1C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26B1C0u, 0x26B158u, 0x26B160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x26B160u;
label_26b160:
    // 0x26b160: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x26B160u;
    {
        const bool branch_taken_0x26b160 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x26b160) {
            ctx->pc = 0x26B18Cu;
            goto label_26b18c;
        }
    }
    ctx->pc = 0x26B168u;
label_26b168:
    // 0x26b168: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x26b168u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_26b16c:
    // 0x26b16c: 0x214102b  sltu        $v0, $s0, $s4
    ctx->pc = 0x26b16cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x26b170: 0x1440ffdb  bnez        $v0, . + 4 + (-0x25 << 2)
    ctx->pc = 0x26B170u;
    {
        const bool branch_taken_0x26b170 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26b170) {
            ctx->pc = 0x26B0E0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26b0e0;
        }
    }
    ctx->pc = 0x26B178u;
    // 0x26b178: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x26b178u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_26b17c:
    // 0x26b17c: 0x235102b  sltu        $v0, $s1, $s5
    ctx->pc = 0x26b17cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 21)) ? 1 : 0);
    // 0x26b180: 0x1440ffc8  bnez        $v0, . + 4 + (-0x38 << 2)
    ctx->pc = 0x26B180u;
    {
        const bool branch_taken_0x26b180 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x26b180) {
            ctx->pc = 0x26B0A4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_26b0a4;
        }
    }
    ctx->pc = 0x26B188u;
    // 0x26b188: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x26b188u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_26b18c:
    // 0x26b18c: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x26b18cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x26b190: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x26b190u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x26b194: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x26b194u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x26b198: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x26b198u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x26b19c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x26b19cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x26b1a0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x26b1a0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x26b1a4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x26b1a4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x26b1a8: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x26b1a8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x26b1ac: 0x3e00008  jr          $ra
    ctx->pc = 0x26B1ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x26B1ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x26B1B4u;
    // 0x26b1b4: 0x0  nop
    ctx->pc = 0x26b1b4u;
    // NOP
    // 0x26b1b8: 0x0  nop
    ctx->pc = 0x26b1b8u;
    // NOP
    // 0x26b1bc: 0x0  nop
    ctx->pc = 0x26b1bcu;
    // NOP
    ctx->pc = 0x26b1c0u;
}
