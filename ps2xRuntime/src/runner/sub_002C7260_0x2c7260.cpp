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

// Function: sub_002C7260
// Address: 0x2c7260 - 0x2c7380
void sub_002C7260_0x2c7260(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002C7260_0x2c7260");
#endif

    switch (ctx->pc) {
        case 0x2c729cu: goto label_2c729c;
        case 0x2c72b0u: goto label_2c72b0;
        case 0x2c72c4u: goto label_2c72c4;
        case 0x2c72d4u: goto label_2c72d4;
        case 0x2c72e4u: goto label_2c72e4;
        case 0x2c72fcu: goto label_2c72fc;
        case 0x2c731cu: goto label_2c731c;
        case 0x2c7328u: goto label_2c7328;
        case 0x2c7338u: goto label_2c7338;
        case 0x2c7358u: goto label_2c7358;
        default: break;
    }

    ctx->pc = 0x2c7260u;

    // 0x2c7260: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x2c7260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x2c7264: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x2c7264u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x2c7268: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x2c7268u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x2c726c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2c726cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2c7270: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2c7270u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2c7274: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2c7274u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2c7278: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x2c7278u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    // 0x2c727c: 0xafa50070  sw          $a1, 0x70($sp)
    ctx->pc = 0x2c727cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 5));
    // 0x2c7280: 0xa3a60080  sb          $a2, 0x80($sp)
    ctx->pc = 0x2c7280u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 128), (uint8_t)GPR_U32(ctx, 6));
    // 0x2c7284: 0x8f82bcc4  lw          $v0, -0x433C($gp)
    ctx->pc = 0x2c7284u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950084)));
    // 0x2c7288: 0x8c530000  lw          $s3, 0x0($v0)
    ctx->pc = 0x2c7288u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2c728c: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x2c728cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7290: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x2c7290u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x2c7294: 0xc085538  jal         func_2154E0
    ctx->pc = 0x2C7294u;
    SET_GPR_U32(ctx, 31, 0x2C729Cu);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x2C7294u, 0x2C729Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C729Cu;
label_2c729c:
    // 0x2c729c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x2c729cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c72a0: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x2c72a0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c72a4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c72a4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c72a8: 0xc096880  jal         func_25A200
    ctx->pc = 0x2C72A8u;
    SET_GPR_U32(ctx, 31, 0x2C72B0u);
    ctx->pc = 0x25A200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A200u, 0x2C72A8u, 0x2C72B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C72B0u;
label_2c72b0:
    // 0x2c72b0: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C72B0u;
    {
        const bool branch_taken_0x2c72b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c72b0) {
            ctx->pc = 0x2C72C8u;
            goto label_2c72c8;
        }
    }
    ctx->pc = 0x2C72B8u;
    // 0x2c72b8: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x2c72b8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c72bc: 0xc096880  jal         func_25A200
    ctx->pc = 0x2C72BCu;
    SET_GPR_U32(ctx, 31, 0x2C72C4u);
    ctx->pc = 0x25A200u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A200u, 0x2C72BCu, 0x2C72C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C72C4u;
label_2c72c4:
    // 0x2c72c4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2c72c4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c72c8:
    // 0x2c72c8: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x2c72c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2c72cc: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x2C72CCu;
    SET_GPR_U32(ctx, 31, 0x2C72D4u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x2C72CCu, 0x2C72D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C72D4u;
label_2c72d4:
    // 0x2c72d4: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x2c72d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2c72d8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c72d8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c72dc: 0xc0400e0  jal         func_100380
    ctx->pc = 0x2C72DCu;
    SET_GPR_U32(ctx, 31, 0x2C72E4u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x2C72DCu, 0x2C72E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C72E4u;
label_2c72e4:
    // 0x2c72e4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c72e4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c72e8: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2C72E8u;
    {
        const bool branch_taken_0x2c72e8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2c72e8) {
            ctx->pc = 0x2C7300u;
            goto label_2c7300;
        }
    }
    ctx->pc = 0x2C72F0u;
    // 0x2c72f0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2c72f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c72f4: 0xc0b1db0  jal         func_2C76C0
    ctx->pc = 0x2C72F4u;
    SET_GPR_U32(ctx, 31, 0x2C72FCu);
    ctx->pc = 0x2C76C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C76C0u, 0x2C72F4u, 0x2C72FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C72FCu;
label_2c72fc:
    // 0x2c72fc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2c72fcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2c7300:
    // 0x2c7300: 0xafb0005c  sw          $s0, 0x5C($sp)
    ctx->pc = 0x2c7300u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 92), GPR_U32(ctx, 16));
    // 0x2c7304: 0x8fa3005c  lw          $v1, 0x5C($sp)
    ctx->pc = 0x2c7304u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x2c7308: 0x8fa20070  lw          $v0, 0x70($sp)
    ctx->pc = 0x2c7308u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2c730c: 0x2464000c  addiu       $a0, $v1, 0xC
    ctx->pc = 0x2c730cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 12));
    // 0x2c7310: 0x24450004  addiu       $a1, $v0, 0x4
    ctx->pc = 0x2c7310u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x2c7314: 0xc041ba4  jal         func_106E90
    ctx->pc = 0x2C7314u;
    SET_GPR_U32(ctx, 31, 0x2C731Cu);
    ctx->pc = 0x106E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E90u, 0x2C7314u, 0x2C731Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C731Cu;
label_2c731c:
    // 0x2c731c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2c731cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7320: 0xc048b18  jal         func_122C60
    ctx->pc = 0x2C7320u;
    SET_GPR_U32(ctx, 31, 0x2C7328u);
    ctx->pc = 0x122C60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122C60u, 0x2C7320u, 0x2C7328u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7328u;
label_2c7328:
    // 0x2c7328: 0x8fa4005c  lw          $a0, 0x5C($sp)
    ctx->pc = 0x2c7328u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x2c732c: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x2c732cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2c7330: 0xc041ba4  jal         func_106E90
    ctx->pc = 0x2C7330u;
    SET_GPR_U32(ctx, 31, 0x2C7338u);
    ctx->pc = 0x106E90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E90u, 0x2C7330u, 0x2C7338u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7338u;
label_2c7338:
    // 0x2c7338: 0x93a30080  lbu         $v1, 0x80($sp)
    ctx->pc = 0x2c7338u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2c733c: 0x8fa2005c  lw          $v0, 0x5C($sp)
    ctx->pc = 0x2c733cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 92)));
    // 0x2c7340: 0xa0430018  sb          $v1, 0x18($v0)
    ctx->pc = 0x2c7340u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 24), (uint8_t)GPR_U32(ctx, 3));
    // 0x2c7344: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x2c7344u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2c7348: 0x8c44009c  lw          $a0, 0x9C($v0)
    ctx->pc = 0x2c7348u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 156)));
    // 0x2c734c: 0x27a5005c  addiu       $a1, $sp, 0x5C
    ctx->pc = 0x2c734cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x2c7350: 0xc0b1ce0  jal         func_2C7380
    ctx->pc = 0x2C7350u;
    SET_GPR_U32(ctx, 31, 0x2C7358u);
    ctx->pc = 0x2C7380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2C7380u, 0x2C7350u, 0x2C7358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2C7358u;
label_2c7358:
    // 0x2c7358: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x2c7358u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2c735c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2c735cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2c7360: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2c7360u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2c7364: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2c7364u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2c7368: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2c7368u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2c736c: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x2c736cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2c7370: 0x3e00008  jr          $ra
    ctx->pc = 0x2C7370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2C7370u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2C7378u;
    // 0x2c7378: 0x0  nop
    ctx->pc = 0x2c7378u;
    // NOP
    // 0x2c737c: 0x0  nop
    ctx->pc = 0x2c737cu;
    // NOP
    ctx->pc = 0x2c7380u;
}
