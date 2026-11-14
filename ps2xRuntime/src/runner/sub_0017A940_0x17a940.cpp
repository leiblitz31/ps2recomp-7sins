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

// Function: sub_0017A940
// Address: 0x17a940 - 0x17aa80
void sub_0017A940_0x17a940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017A940_0x17a940");
#endif

    switch (ctx->pc) {
        case 0x17a974u: goto label_17a974;
        case 0x17a9a8u: goto label_17a9a8;
        case 0x17a9b8u: goto label_17a9b8;
        case 0x17aa44u: goto label_17aa44;
        case 0x17aa58u: goto label_17aa58;
        default: break;
    }

    ctx->pc = 0x17a940u;

    // 0x17a940: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x17a940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x17a944: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x17a944u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x17a948: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x17a948u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x17a94c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x17a94cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x17a950: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x17a950u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x17a954: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x17a954u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x17a958: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17a958u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17a95c: 0xafa60090  sw          $a2, 0x90($sp)
    ctx->pc = 0x17a95cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 6));
    // 0x17a960: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x17a960u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17a964: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17a964u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17a968: 0x24440004  addiu       $a0, $v0, 0x4
    ctx->pc = 0x17a968u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x17a96c: 0xc119b68  jal         func_466DA0
    ctx->pc = 0x17A96Cu;
    SET_GPR_U32(ctx, 31, 0x17A974u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x17A96Cu, 0x17A974u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A974u;
label_17a974:
    // 0x17a974: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x17a974u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a978: 0x12000019  beqz        $s0, . + 4 + (0x19 << 2)
    ctx->pc = 0x17A978u;
    {
        const bool branch_taken_0x17a978 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a978) {
            ctx->pc = 0x17A9E0u;
            goto label_17a9e0;
        }
    }
    ctx->pc = 0x17A980u;
    // 0x17a980: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x17a980u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17a984: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x17a984u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x17a988: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x17a988u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a98c: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x17a98cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x17a990: 0x8fa20090  lw          $v0, 0x90($sp)
    ctx->pc = 0x17a990u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x17a994: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x17a994u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17a998: 0x222a021  addu        $s4, $s1, $v0
    ctx->pc = 0x17a998u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
    // 0x17a99c: 0x220902d  daddu       $s2, $s1, $zero
    ctx->pc = 0x17a99cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a9a0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x17A9A0u;
    {
        const bool branch_taken_0x17a9a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a9a0) {
            ctx->pc = 0x17A9D4u;
            goto label_17a9d4;
        }
    }
    ctx->pc = 0x17A9A8u;
label_17a9a8:
    // 0x17a9a8: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x17a9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x17a9ac: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x17a9acu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a9b0: 0xc0400e0  jal         func_100380
    ctx->pc = 0x17A9B0u;
    SET_GPR_U32(ctx, 31, 0x17A9B8u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x17A9B0u, 0x17A9B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17A9B8u;
label_17a9b8:
    // 0x17a9b8: 0xafa2006c  sw          $v0, 0x6C($sp)
    ctx->pc = 0x17a9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 108), GPR_U32(ctx, 2));
    // 0x17a9bc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x17A9BCu;
    {
        const bool branch_taken_0x17a9bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17a9bc) {
            ctx->pc = 0x17A9CCu;
            goto label_17a9cc;
        }
    }
    ctx->pc = 0x17A9C4u;
    // 0x17a9c4: 0x8fa2006c  lw          $v0, 0x6C($sp)
    ctx->pc = 0x17a9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x17a9c8: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x17a9c8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_17a9cc:
    // 0x17a9cc: 0x27b3006c  addiu       $s3, $sp, 0x6C
    ctx->pc = 0x17a9ccu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 108));
    // 0x17a9d0: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x17a9d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
label_17a9d4:
    // 0x17a9d4: 0x1654fff4  bne         $s2, $s4, . + 4 + (-0xC << 2)
    ctx->pc = 0x17A9D4u;
    {
        const bool branch_taken_0x17a9d4 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 20));
        if (branch_taken_0x17a9d4) {
            ctx->pc = 0x17A9A8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17a9a8;
        }
    }
    ctx->pc = 0x17A9DCu;
    // 0x17a9dc: 0x220802d  daddu       $s0, $s1, $zero
    ctx->pc = 0x17a9dcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_17a9e0:
    // 0x17a9e0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x17a9e0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17a9e4: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x17a9e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x17a9e8: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x17a9e8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x17a9ec: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x17a9ecu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17a9f0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x17a9f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17a9f4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x17a9f4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17a9f8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17a9f8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17a9fc: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x17a9fcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
    // 0x17aa00: 0x3e00008  jr          $ra
    ctx->pc = 0x17AA00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17AA00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17AA08u;
    // 0x17aa08: 0x0  nop
    ctx->pc = 0x17aa08u;
    // NOP
    // 0x17aa0c: 0x0  nop
    ctx->pc = 0x17aa0cu;
    // NOP
    // 0x17aa10: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x17aa10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x17aa14: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x17aa14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x17aa18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x17aa18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17aa1c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x17aa1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
    // 0x17aa20: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x17aa20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17aa24: 0x8c42006c  lw          $v0, 0x6C($v0)
    ctx->pc = 0x17aa24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x17aa28: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x17AA28u;
    {
        const bool branch_taken_0x17aa28 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17aa28) {
            ctx->pc = 0x17AA4Cu;
            goto label_17aa4c;
        }
    }
    ctx->pc = 0x17AA30u;
    // 0x17aa30: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x17aa30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17aa34: 0x8f84c008  lw          $a0, -0x3FF8($gp)
    ctx->pc = 0x17aa34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950920)));
    // 0x17aa38: 0x8c45006c  lw          $a1, 0x6C($v0)
    ctx->pc = 0x17aa38u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x17aa3c: 0xc05eaa0  jal         func_17AA80
    ctx->pc = 0x17AA3Cu;
    SET_GPR_U32(ctx, 31, 0x17AA44u);
    ctx->pc = 0x17AA80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x17AA80u, 0x17AA3Cu, 0x17AA44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AA44u;
label_17aa44:
    // 0x17aa44: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x17aa44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17aa48: 0xac40006c  sw          $zero, 0x6C($v0)
    ctx->pc = 0x17aa48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 108), GPR_U32(ctx, 0));
label_17aa4c:
    // 0x17aa4c: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x17aa4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17aa50: 0xc0559ac  jal         func_1566B0
    ctx->pc = 0x17AA50u;
    SET_GPR_U32(ctx, 31, 0x17AA58u);
    ctx->pc = 0x1566B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1566B0u, 0x17AA50u, 0x17AA58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x17AA58u;
label_17aa58:
    // 0x17aa58: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x17aa58u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x17aa5c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x17aa5cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17aa60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x17aa60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17aa64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x17aa64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17aa68: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x17aa68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x17aa6c: 0x3e00008  jr          $ra
    ctx->pc = 0x17AA6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17AA6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17AA74u;
    // 0x17aa74: 0x0  nop
    ctx->pc = 0x17aa74u;
    // NOP
    // 0x17aa78: 0x0  nop
    ctx->pc = 0x17aa78u;
    // NOP
    // 0x17aa7c: 0x0  nop
    ctx->pc = 0x17aa7cu;
    // NOP
    ctx->pc = 0x17aa80u;
}
