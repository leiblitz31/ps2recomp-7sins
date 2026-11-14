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

// Function: sub_002E6FF0
// Address: 0x2e6ff0 - 0x2e7100
void sub_002E6FF0_0x2e6ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002E6FF0_0x2e6ff0");
#endif

    switch (ctx->pc) {
        case 0x2e7024u: goto label_2e7024;
        case 0x2e7038u: goto label_2e7038;
        case 0x2e705cu: goto label_2e705c;
        case 0x2e7078u: goto label_2e7078;
        case 0x2e7090u: goto label_2e7090;
        case 0x2e70b8u: goto label_2e70b8;
        case 0x2e70c8u: goto label_2e70c8;
        case 0x2e70e4u: goto label_2e70e4;
        default: break;
    }

    ctx->pc = 0x2e6ff0u;

    // 0x2e6ff0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2e6ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2e6ff4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2e6ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2e6ff8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x2e6ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x2e6ffc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2e6ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2e7000: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2e7000u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2e7004: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x2e7004u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x2e7008: 0xafa50060  sw          $a1, 0x60($sp)
    ctx->pc = 0x2e7008u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 5));
    // 0x2e700c: 0xafa60070  sw          $a2, 0x70($sp)
    ctx->pc = 0x2e700cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 6));
    // 0x2e7010: 0xafa80090  sw          $t0, 0x90($sp)
    ctx->pc = 0x2e7010u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 8));
    // 0x2e7014: 0xa3a900a0  sb          $t1, 0xA0($sp)
    ctx->pc = 0x2e7014u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 9));
    // 0x2e7018: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2e7018u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e701c: 0xc0b9a4c  jal         func_2E6930
    ctx->pc = 0x2E701Cu;
    SET_GPR_U32(ctx, 31, 0x2E7024u);
    ctx->pc = 0x2E6930u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E6930u, 0x2E701Cu, 0x2E7024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7024u;
label_2e7024:
    // 0x2e7024: 0xafa2004c  sw          $v0, 0x4C($sp)
    ctx->pc = 0x2e7024u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 76), GPR_U32(ctx, 2));
    // 0x2e7028: 0x27a4004c  addiu       $a0, $sp, 0x4C
    ctx->pc = 0x2e7028u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 76));
    // 0x2e702c: 0x27a50090  addiu       $a1, $sp, 0x90
    ctx->pc = 0x2e702cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x2e7030: 0xc041954  jal         func_106550
    ctx->pc = 0x2E7030u;
    SET_GPR_U32(ctx, 31, 0x2E7038u);
    ctx->pc = 0x106550u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106550u, 0x2E7030u, 0x2E7038u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7038u;
label_2e7038:
    // 0x2e7038: 0x8fa3004c  lw          $v1, 0x4C($sp)
    ctx->pc = 0x2e7038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 76)));
    // 0x2e703c: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x2e703cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e7040: 0x629021  addu        $s2, $v1, $v0
    ctx->pc = 0x2e7040u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2e7044: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2e7044u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e7048: 0x24440008  addiu       $a0, $v0, 0x8
    ctx->pc = 0x2e7048u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 8));
    // 0x2e704c: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x2e704cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7050: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2e7050u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7054: 0xc0b9f24  jal         func_2E7C90
    ctx->pc = 0x2E7054u;
    SET_GPR_U32(ctx, 31, 0x2E705Cu);
    ctx->pc = 0x2E7C90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E7C90u, 0x2E7054u, 0x2E705Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E705Cu;
label_2e705c:
    // 0x2e705c: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2e705cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7060: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2e7060u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e7064: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x2e7064u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2e7068: 0x8fa50060  lw          $a1, 0x60($sp)
    ctx->pc = 0x2e7068u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e706c: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x2e706cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7070: 0xc041934  jal         func_1064D0
    ctx->pc = 0x2E7070u;
    SET_GPR_U32(ctx, 31, 0x2E7078u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x2E7070u, 0x2E7078u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7078u;
label_2e7078:
    // 0x2e7078: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e7078u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e707c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2e707cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7080: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x2e7080u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2e7084: 0x8fa60070  lw          $a2, 0x70($sp)
    ctx->pc = 0x2e7084u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2e7088: 0xc0b9c74  jal         func_2E71D0
    ctx->pc = 0x2E7088u;
    SET_GPR_U32(ctx, 31, 0x2E7090u);
    ctx->pc = 0x2E71D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E71D0u, 0x2E7088u, 0x2E7090u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E7090u;
label_2e7090:
    // 0x2e7090: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e7090u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e7094: 0x93a200a0  lbu         $v0, 0xA0($sp)
    ctx->pc = 0x2e7094u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2e7098: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2E7098u;
    {
        const bool branch_taken_0x2e7098 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2e7098) {
            ctx->pc = 0x2E70BCu;
            goto label_2e70bc;
        }
    }
    ctx->pc = 0x2E70A0u;
    // 0x2e70a0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x2e70a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e70a4: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x2e70a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2e70a8: 0x8c450004  lw          $a1, 0x4($v0)
    ctx->pc = 0x2e70a8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2e70ac: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2e70acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e70b0: 0xc041934  jal         func_1064D0
    ctx->pc = 0x2E70B0u;
    SET_GPR_U32(ctx, 31, 0x2E70B8u);
    ctx->pc = 0x1064D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1064D0u, 0x2E70B0u, 0x2E70B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E70B8u;
label_2e70b8:
    // 0x2e70b8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2e70b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2e70bc:
    // 0x2e70bc: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2e70bcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e70c0: 0xc0b9c54  jal         func_2E7150
    ctx->pc = 0x2E70C0u;
    SET_GPR_U32(ctx, 31, 0x2E70C8u);
    ctx->pc = 0x2E7150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E7150u, 0x2E70C0u, 0x2E70C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E70C8u;
label_2e70c8:
    // 0x2e70c8: 0x121080  sll         $v0, $s2, 2
    ctx->pc = 0x2e70c8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 2));
    // 0x2e70cc: 0x2223821  addu        $a3, $s1, $v0
    ctx->pc = 0x2e70ccu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x2e70d0: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x2e70d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2e70d4: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x2e70d4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e70d8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x2e70d8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2e70dc: 0xc0b9c40  jal         func_2E7100
    ctx->pc = 0x2E70DCu;
    SET_GPR_U32(ctx, 31, 0x2E70E4u);
    ctx->pc = 0x2E7100u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E7100u, 0x2E70DCu, 0x2E70E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2E70E4u;
label_2e70e4:
    // 0x2e70e4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2e70e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2e70e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2e70e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2e70ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2e70ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2e70f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2e70f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2e70f4: 0x27bd00b0  addiu       $sp, $sp, 0xB0
    ctx->pc = 0x2e70f4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
    // 0x2e70f8: 0x3e00008  jr          $ra
    ctx->pc = 0x2E70F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2E70F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2E7100u;
}
