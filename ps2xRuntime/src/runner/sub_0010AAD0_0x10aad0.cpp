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

// Function: sub_0010AAD0
// Address: 0x10aad0 - 0x10ac80
void sub_0010AAD0_0x10aad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010AAD0_0x10aad0");
#endif

    switch (ctx->pc) {
        case 0x10ab10u: goto label_10ab10;
        case 0x10ab20u: goto label_10ab20;
        case 0x10ab40u: goto label_10ab40;
        case 0x10ab78u: goto label_10ab78;
        case 0x10abacu: goto label_10abac;
        case 0x10abc0u: goto label_10abc0;
        case 0x10abd0u: goto label_10abd0;
        case 0x10abd8u: goto label_10abd8;
        case 0x10abe4u: goto label_10abe4;
        case 0x10abfcu: goto label_10abfc;
        case 0x10ac08u: goto label_10ac08;
        case 0x10ac18u: goto label_10ac18;
        case 0x10ac2cu: goto label_10ac2c;
        case 0x10ac3cu: goto label_10ac3c;
        case 0x10ac54u: goto label_10ac54;
        case 0x10ac60u: goto label_10ac60;
        default: break;
    }

    ctx->pc = 0x10aad0u;

    // 0x10aad0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x10aad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10aad4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10aad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10aad8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x10aad8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x10aadc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x10aadcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x10aae0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x10aae0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10aae4: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x10AAE4u;
    {
        const bool branch_taken_0x10aae4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x10aae4) {
            ctx->pc = 0x10AB40u;
            goto label_10ab40;
        }
    }
    ctx->pc = 0x10AAECu;
    // 0x10aaec: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x10aaecu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x10aaf0: 0x246332c0  addiu       $v1, $v1, 0x32C0
    ctx->pc = 0x10aaf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 12992));
    // 0x10aaf4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x10aaf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10aaf8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x10aaf8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x10aafc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x10aafcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10ab00: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x10ab00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x10ab04: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x10ab04u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x10ab08: 0xc042968  jal         func_10A5A0
    ctx->pc = 0x10AB08u;
    SET_GPR_U32(ctx, 31, 0x10AB10u);
    ctx->pc = 0x10A5A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10A5A0u, 0x10AB08u, 0x10AB10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AB10u;
label_10ab10:
    // 0x10ab10: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x10ab10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10ab14: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x10ab14u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ab18: 0xc08ec24  jal         func_23B090
    ctx->pc = 0x10AB18u;
    SET_GPR_U32(ctx, 31, 0x10AB20u);
    ctx->pc = 0x23B090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B090u, 0x10AB18u, 0x10AB20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AB20u;
label_10ab20:
    // 0x10ab20: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x10ab20u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10ab24: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x10ab24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x10ab28: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x10ab28u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x10ab2c: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x10AB2Cu;
    {
        const bool branch_taken_0x10ab2c = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x10ab2c) {
            ctx->pc = 0x10AB40u;
            goto label_10ab40;
        }
    }
    ctx->pc = 0x10AB34u;
    // 0x10ab34: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x10ab34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10ab38: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x10AB38u;
    SET_GPR_U32(ctx, 31, 0x10AB40u);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x10AB38u, 0x10AB40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AB40u;
label_10ab40:
    // 0x10ab40: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x10ab40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10ab44: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10ab44u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10ab48: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x10ab48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x10ab4c: 0x3e00008  jr          $ra
    ctx->pc = 0x10AB4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10AB4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10AB54u;
    // 0x10ab54: 0x0  nop
    ctx->pc = 0x10ab54u;
    // NOP
    // 0x10ab58: 0x0  nop
    ctx->pc = 0x10ab58u;
    // NOP
    // 0x10ab5c: 0x0  nop
    ctx->pc = 0x10ab5cu;
    // NOP
    // 0x10ab60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x10ab60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x10ab64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x10ab64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10ab68: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x10ab68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x10ab6c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x10ab6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10ab70: 0xc08ec3c  jal         func_23B0F0
    ctx->pc = 0x10AB70u;
    SET_GPR_U32(ctx, 31, 0x10AB78u);
    ctx->pc = 0x23B0F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B0F0u, 0x10AB70u, 0x10AB78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AB78u;
label_10ab78:
    // 0x10ab78: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x10ab78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10ab7c: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x10ab7cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x10ab80: 0x3e00008  jr          $ra
    ctx->pc = 0x10AB80u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10AB80u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10AB88u;
    // 0x10ab88: 0x0  nop
    ctx->pc = 0x10ab88u;
    // NOP
    // 0x10ab8c: 0x0  nop
    ctx->pc = 0x10ab8cu;
    // NOP
    // 0x10ab90: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x10ab90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x10ab94: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x10ab94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x10ab98: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x10ab98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x10ab9c: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x10ab9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x10aba0: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x10aba0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x10aba4: 0xc042bc8  jal         func_10AF20
    ctx->pc = 0x10ABA4u;
    SET_GPR_U32(ctx, 31, 0x10ABACu);
    ctx->pc = 0x10AF20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10AF20u, 0x10ABA4u, 0x10ABACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10ABACu;
label_10abac:
    // 0x10abac: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x10abacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10abb0: 0x27a40028  addiu       $a0, $sp, 0x28
    ctx->pc = 0x10abb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x10abb4: 0x24450028  addiu       $a1, $v0, 0x28
    ctx->pc = 0x10abb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x10abb8: 0xc042ba8  jal         func_10AEA0
    ctx->pc = 0x10ABB8u;
    SET_GPR_U32(ctx, 31, 0x10ABC0u);
    ctx->pc = 0x10AEA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10AEA0u, 0x10ABB8u, 0x10ABC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10ABC0u;
label_10abc0:
    // 0x10abc0: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x10abc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x10abc4: 0x27a50028  addiu       $a1, $sp, 0x28
    ctx->pc = 0x10abc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x10abc8: 0xc042b8c  jal         func_10AE30
    ctx->pc = 0x10ABC8u;
    SET_GPR_U32(ctx, 31, 0x10ABD0u);
    ctx->pc = 0x10AE30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10AE30u, 0x10ABC8u, 0x10ABD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10ABD0u;
label_10abd0:
    // 0x10abd0: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x10ABD0u;
    {
        const bool branch_taken_0x10abd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x10abd0) {
            ctx->pc = 0x10AC18u;
            goto label_10ac18;
        }
    }
    ctx->pc = 0x10ABD8u;
label_10abd8:
    // 0x10abd8: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x10abd8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x10abdc: 0xc042b78  jal         func_10ADE0
    ctx->pc = 0x10ABDCu;
    SET_GPR_U32(ctx, 31, 0x10ABE4u);
    ctx->pc = 0x10ADE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10ADE0u, 0x10ABDCu, 0x10ABE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10ABE4u;
label_10abe4:
    // 0x10abe4: 0x8c500004  lw          $s0, 0x4($v0)
    ctx->pc = 0x10abe4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x10abe8: 0x12000008  beqz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x10ABE8u;
    {
        const bool branch_taken_0x10abe8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x10abe8) {
            ctx->pc = 0x10AC0Cu;
            goto label_10ac0c;
        }
    }
    ctx->pc = 0x10ABF0u;
    // 0x10abf0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10abf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10abf4: 0xc042b68  jal         func_10ADA0
    ctx->pc = 0x10ABF4u;
    SET_GPR_U32(ctx, 31, 0x10ABFCu);
    ctx->pc = 0x10ADA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10ADA0u, 0x10ABF4u, 0x10ABFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10ABFCu;
label_10abfc:
    // 0x10abfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x10abfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10ac00: 0xc119c5c  jal         func_467170
    ctx->pc = 0x10AC00u;
    SET_GPR_U32(ctx, 31, 0x10AC08u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x10AC00u, 0x10AC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AC08u;
label_10ac08:
    // 0x10ac08: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x10ac08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_10ac0c:
    // 0x10ac0c: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x10ac0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x10ac10: 0xc042b58  jal         func_10AD60
    ctx->pc = 0x10AC10u;
    SET_GPR_U32(ctx, 31, 0x10AC18u);
    ctx->pc = 0x10AD60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10AD60u, 0x10AC10u, 0x10AC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AC18u;
label_10ac18:
    // 0x10ac18: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x10ac18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10ac1c: 0x27a40024  addiu       $a0, $sp, 0x24
    ctx->pc = 0x10ac1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x10ac20: 0x24450028  addiu       $a1, $v0, 0x28
    ctx->pc = 0x10ac20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x10ac24: 0xc042b2c  jal         func_10ACB0
    ctx->pc = 0x10AC24u;
    SET_GPR_U32(ctx, 31, 0x10AC2Cu);
    ctx->pc = 0x10ACB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10ACB0u, 0x10AC24u, 0x10AC2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AC2Cu;
label_10ac2c:
    // 0x10ac2c: 0x27a4002c  addiu       $a0, $sp, 0x2C
    ctx->pc = 0x10ac2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 44));
    // 0x10ac30: 0x27a50024  addiu       $a1, $sp, 0x24
    ctx->pc = 0x10ac30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 36));
    // 0x10ac34: 0xc041998  jal         func_106660
    ctx->pc = 0x10AC34u;
    SET_GPR_U32(ctx, 31, 0x10AC3Cu);
    ctx->pc = 0x106660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106660u, 0x10AC34u, 0x10AC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AC3Cu;
label_10ac3c:
    // 0x10ac3c: 0x1440ffe6  bnez        $v0, . + 4 + (-0x1A << 2)
    ctx->pc = 0x10AC3Cu;
    {
        const bool branch_taken_0x10ac3c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10ac3c) {
            ctx->pc = 0x10ABD8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_10abd8;
        }
    }
    ctx->pc = 0x10AC44u;
    // 0x10ac44: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x10ac44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10ac48: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x10ac48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x10ac4c: 0xc042b20  jal         func_10AC80
    ctx->pc = 0x10AC4Cu;
    SET_GPR_U32(ctx, 31, 0x10AC54u);
    ctx->pc = 0x10AC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10AC80u, 0x10AC4Cu, 0x10AC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AC54u;
label_10ac54:
    // 0x10ac54: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x10ac54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10ac58: 0xc08ec48  jal         func_23B120
    ctx->pc = 0x10AC58u;
    SET_GPR_U32(ctx, 31, 0x10AC60u);
    ctx->pc = 0x23B120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23B120u, 0x10AC58u, 0x10AC60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10AC60u;
label_10ac60:
    // 0x10ac60: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x10ac60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10ac64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x10ac64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10ac68: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x10ac68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x10ac6c: 0x3e00008  jr          $ra
    ctx->pc = 0x10AC6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10AC6Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10AC74u;
    // 0x10ac74: 0x0  nop
    ctx->pc = 0x10ac74u;
    // NOP
    // 0x10ac78: 0x0  nop
    ctx->pc = 0x10ac78u;
    // NOP
    // 0x10ac7c: 0x0  nop
    ctx->pc = 0x10ac7cu;
    // NOP
    ctx->pc = 0x10ac80u;
}
