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

// Function: sub_00276CC0
// Address: 0x276cc0 - 0x276ff0
void sub_00276CC0_0x276cc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00276CC0_0x276cc0");
#endif

    switch (ctx->pc) {
        case 0x276cd8u: goto label_276cd8;
        case 0x276d28u: goto label_276d28;
        case 0x276d68u: goto label_276d68;
        case 0x276d84u: goto label_276d84;
        case 0x276d98u: goto label_276d98;
        case 0x276db4u: goto label_276db4;
        case 0x276de4u: goto label_276de4;
        case 0x276e0cu: goto label_276e0c;
        case 0x276e1cu: goto label_276e1c;
        case 0x276e2cu: goto label_276e2c;
        case 0x276e44u: goto label_276e44;
        case 0x276e54u: goto label_276e54;
        case 0x276e6cu: goto label_276e6c;
        case 0x276ec4u: goto label_276ec4;
        case 0x276ed4u: goto label_276ed4;
        case 0x276ef4u: goto label_276ef4;
        case 0x276f08u: goto label_276f08;
        case 0x276f20u: goto label_276f20;
        case 0x276f30u: goto label_276f30;
        case 0x276f40u: goto label_276f40;
        case 0x276f4cu: goto label_276f4c;
        case 0x276f64u: goto label_276f64;
        case 0x276f80u: goto label_276f80;
        case 0x276f98u: goto label_276f98;
        case 0x276fa4u: goto label_276fa4;
        case 0x276fb4u: goto label_276fb4;
        case 0x276fc0u: goto label_276fc0;
        default: break;
    }

    ctx->pc = 0x276cc0u;

    // 0x276cc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x276cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x276cc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x276cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x276cc8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x276cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x276ccc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x276cccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x276cd0: 0xc09d130  jal         func_2744C0
    ctx->pc = 0x276CD0u;
    SET_GPR_U32(ctx, 31, 0x276CD8u);
    ctx->pc = 0x2744C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2744C0u, 0x276CD0u, 0x276CD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276CD8u;
label_276cd8:
    // 0x276cd8: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x276cd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x276cdc: 0x24635dd0  addiu       $v1, $v1, 0x5DD0
    ctx->pc = 0x276cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 24016));
    // 0x276ce0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x276ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x276ce4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x276ce4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x276ce8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x276ce8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x276cec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x276cecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x276cf0: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x276cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x276cf4: 0x3e00008  jr          $ra
    ctx->pc = 0x276CF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x276CF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x276CFCu;
    // 0x276cfc: 0x0  nop
    ctx->pc = 0x276cfcu;
    // NOP
    // 0x276d00: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x276d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x276d04: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x276d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x276d08: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x276d08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x276d0c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x276d0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x276d10: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x276d10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x276d14: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x276d14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x276d18: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x276d18u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x276d1c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x276d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x276d20: 0xc09d248  jal         func_274920
    ctx->pc = 0x276D20u;
    SET_GPR_U32(ctx, 31, 0x276D28u);
    ctx->pc = 0x274920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274920u, 0x276D20u, 0x276D28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276D28u;
label_276d28:
    // 0x276d28: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x276d28u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x276d2c: 0x1043004b  beq         $v0, $v1, . + 4 + (0x4B << 2)
    ctx->pc = 0x276D2Cu;
    {
        const bool branch_taken_0x276d2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x276d2c) {
            ctx->pc = 0x276E5Cu;
            goto label_276e5c;
        }
    }
    ctx->pc = 0x276D34u;
    // 0x276d34: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x276d34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x276d38: 0x1043004c  beq         $v0, $v1, . + 4 + (0x4C << 2)
    ctx->pc = 0x276D38u;
    {
        const bool branch_taken_0x276d38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x276d38) {
            ctx->pc = 0x276E6Cu;
            goto label_276e6c;
        }
    }
    ctx->pc = 0x276D40u;
    // 0x276d40: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x276d40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x276d44: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x276D44u;
    {
        const bool branch_taken_0x276d44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x276d44) {
            ctx->pc = 0x276D54u;
            goto label_276d54;
        }
    }
    ctx->pc = 0x276D4Cu;
    // 0x276d4c: 0x10000047  b           . + 4 + (0x47 << 2)
    ctx->pc = 0x276D4Cu;
    {
        const bool branch_taken_0x276d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x276d4c) {
            ctx->pc = 0x276E6Cu;
            goto label_276e6c;
        }
    }
    ctx->pc = 0x276D54u;
label_276d54:
    // 0x276d54: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x276d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x276d58: 0x8c44003c  lw          $a0, 0x3C($v0)
    ctx->pc = 0x276d58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x276d5c: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x276d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x276d60: 0xc085538  jal         func_2154E0
    ctx->pc = 0x276D60u;
    SET_GPR_U32(ctx, 31, 0x276D68u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x276D60u, 0x276D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276D68u;
label_276d68:
    // 0x276d68: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x276d68u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276d6c: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x276d6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x276d70: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x276d70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x276d74: 0x24050487  addiu       $a1, $zero, 0x487
    ctx->pc = 0x276d74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1159));
    // 0x276d78: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x276d78u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276d7c: 0xc040ab0  jal         func_102AC0
    ctx->pc = 0x276D7Cu;
    SET_GPR_U32(ctx, 31, 0x276D84u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x276D7Cu, 0x276D84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276D84u;
label_276d84:
    // 0x276d84: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x276d84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276d88: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x276d88u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276d8c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x276d8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276d90: 0xc0968a8  jal         func_25A2A0
    ctx->pc = 0x276D90u;
    SET_GPR_U32(ctx, 31, 0x276D98u);
    ctx->pc = 0x25A2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A2A0u, 0x276D90u, 0x276D98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276D98u;
label_276d98:
    // 0x276d98: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x276d98u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276d9c: 0x12600008  beqz        $s3, . + 4 + (0x8 << 2)
    ctx->pc = 0x276D9Cu;
    {
        const bool branch_taken_0x276d9c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x276d9c) {
            ctx->pc = 0x276DC0u;
            goto label_276dc0;
        }
    }
    ctx->pc = 0x276DA4u;
    // 0x276da4: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x276da4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276da8: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x276da8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x276dac: 0xc085538  jal         func_2154E0
    ctx->pc = 0x276DACu;
    SET_GPR_U32(ctx, 31, 0x276DB4u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x276DACu, 0x276DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276DB4u;
label_276db4:
    // 0x276db4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x276db4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276db8: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x276DB8u;
    {
        const bool branch_taken_0x276db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x276db8) {
            ctx->pc = 0x276DE8u;
            goto label_276de8;
        }
    }
    ctx->pc = 0x276DC0u;
label_276dc0:
    // 0x276dc0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x276dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x276dc4: 0x8c420044  lw          $v0, 0x44($v0)
    ctx->pc = 0x276dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x276dc8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x276DC8u;
    {
        const bool branch_taken_0x276dc8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x276dc8) {
            ctx->pc = 0x276DE8u;
            goto label_276de8;
        }
    }
    ctx->pc = 0x276DD0u;
    // 0x276dd0: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x276dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x276dd4: 0x8c440044  lw          $a0, 0x44($v0)
    ctx->pc = 0x276dd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x276dd8: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x276dd8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x276ddc: 0xc085538  jal         func_2154E0
    ctx->pc = 0x276DDCu;
    SET_GPR_U32(ctx, 31, 0x276DE4u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x276DDCu, 0x276DE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276DE4u;
label_276de4:
    // 0x276de4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x276de4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_276de8:
    // 0x276de8: 0x16400012  bnez        $s2, . + 4 + (0x12 << 2)
    ctx->pc = 0x276DE8u;
    {
        const bool branch_taken_0x276de8 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x276de8) {
            ctx->pc = 0x276E34u;
            goto label_276e34;
        }
    }
    ctx->pc = 0x276DF0u;
    // 0x276df0: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x276DF0u;
    {
        const bool branch_taken_0x276df0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x276df0) {
            ctx->pc = 0x276E0Cu;
            goto label_276e0c;
        }
    }
    ctx->pc = 0x276DF8u;
    // 0x276df8: 0x8fa20050  lw          $v0, 0x50($sp)
    ctx->pc = 0x276df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x276dfc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x276dfcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276e00: 0x8c45003c  lw          $a1, 0x3C($v0)
    ctx->pc = 0x276e00u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x276e04: 0xc097698  jal         func_25DA60
    ctx->pc = 0x276E04u;
    SET_GPR_U32(ctx, 31, 0x276E0Cu);
    ctx->pc = 0x25DA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25DA60u, 0x276E04u, 0x276E0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276E0Cu;
label_276e0c:
    // 0x276e0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x276e0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276e10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x276e10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276e14: 0xc09689c  jal         func_25A270
    ctx->pc = 0x276E14u;
    SET_GPR_U32(ctx, 31, 0x276E1Cu);
    ctx->pc = 0x25A270u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25A270u, 0x276E14u, 0x276E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276E1Cu;
label_276e1c:
    // 0x276e1c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x276e1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276e20: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x276e20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276e24: 0xc04ec84  jal         func_13B210
    ctx->pc = 0x276E24u;
    SET_GPR_U32(ctx, 31, 0x276E2Cu);
    ctx->pc = 0x13B210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B210u, 0x276E24u, 0x276E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276E2Cu;
label_276e2c:
    // 0x276e2c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x276E2Cu;
    {
        const bool branch_taken_0x276e2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x276e2c) {
            ctx->pc = 0x276E44u;
            goto label_276e44;
        }
    }
    ctx->pc = 0x276E34u;
label_276e34:
    // 0x276e34: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x276e34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276e38: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x276e38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276e3c: 0xc04ec84  jal         func_13B210
    ctx->pc = 0x276E3Cu;
    SET_GPR_U32(ctx, 31, 0x276E44u);
    ctx->pc = 0x13B210u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13B210u, 0x276E3Cu, 0x276E44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276E44u;
label_276e44:
    // 0x276e44: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x276e44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x276e48: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x276e48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x276e4c: 0xc09d250  jal         func_274940
    ctx->pc = 0x276E4Cu;
    SET_GPR_U32(ctx, 31, 0x276E54u);
    ctx->pc = 0x274940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274940u, 0x276E4Cu, 0x276E54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276E54u;
label_276e54:
    // 0x276e54: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x276E54u;
    {
        const bool branch_taken_0x276e54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x276e54) {
            ctx->pc = 0x276E6Cu;
            goto label_276e6c;
        }
    }
    ctx->pc = 0x276E5Cu;
label_276e5c:
    // 0x276e5c: 0x8fa40050  lw          $a0, 0x50($sp)
    ctx->pc = 0x276e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x276e60: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x276e60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x276e64: 0xc09d250  jal         func_274940
    ctx->pc = 0x276E64u;
    SET_GPR_U32(ctx, 31, 0x276E6Cu);
    ctx->pc = 0x274940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274940u, 0x276E64u, 0x276E6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276E6Cu;
label_276e6c:
    // 0x276e6c: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x276e6cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x276e70: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x276e70u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x276e74: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x276e74u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x276e78: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x276e78u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x276e7c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x276e7cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x276e80: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x276e80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x276e84: 0x3e00008  jr          $ra
    ctx->pc = 0x276E84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x276E84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x276E8Cu;
    // 0x276e8c: 0x0  nop
    ctx->pc = 0x276e8cu;
    // NOP
    // 0x276e90: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x276e90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x276e94: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x276e94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x276e98: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x276e98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x276e9c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x276e9cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x276ea0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x276ea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x276ea4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x276ea4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x276ea8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x276ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x276eac: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x276eacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
    // 0x276eb0: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x276eb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x276eb4: 0x8c44003c  lw          $a0, 0x3C($v0)
    ctx->pc = 0x276eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x276eb8: 0x2405000f  addiu       $a1, $zero, 0xF
    ctx->pc = 0x276eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x276ebc: 0xc085538  jal         func_2154E0
    ctx->pc = 0x276EBCu;
    SET_GPR_U32(ctx, 31, 0x276EC4u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x276EBCu, 0x276EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276EC4u;
label_276ec4:
    // 0x276ec4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x276ec4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276ec8: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x276ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x276ecc: 0xc09d248  jal         func_274920
    ctx->pc = 0x276ECCu;
    SET_GPR_U32(ctx, 31, 0x276ED4u);
    ctx->pc = 0x274920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274920u, 0x276ECCu, 0x276ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276ED4u;
label_276ed4:
    // 0x276ed4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x276ed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x276ed8: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x276ED8u;
    {
        const bool branch_taken_0x276ed8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x276ed8) {
            ctx->pc = 0x276EE8u;
            goto label_276ee8;
        }
    }
    ctx->pc = 0x276EE0u;
    // 0x276ee0: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x276EE0u;
    {
        const bool branch_taken_0x276ee0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x276ee0) {
            ctx->pc = 0x276F98u;
            goto label_276f98;
        }
    }
    ctx->pc = 0x276EE8u;
label_276ee8:
    // 0x276ee8: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x276ee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x276eec: 0xc09d274  jal         func_2749D0
    ctx->pc = 0x276EECu;
    SET_GPR_U32(ctx, 31, 0x276EF4u);
    ctx->pc = 0x2749D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2749D0u, 0x276EECu, 0x276EF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276EF4u;
label_276ef4:
    // 0x276ef4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x276ef4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276ef8: 0x24050487  addiu       $a1, $zero, 0x487
    ctx->pc = 0x276ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1159));
    // 0x276efc: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x276efcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276f00: 0xc040ab0  jal         func_102AC0
    ctx->pc = 0x276F00u;
    SET_GPR_U32(ctx, 31, 0x276F08u);
    ctx->pc = 0x102AC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102AC0u, 0x276F00u, 0x276F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276F08u;
label_276f08:
    // 0x276f08: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x276f08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276f0c: 0x12600022  beqz        $s3, . + 4 + (0x22 << 2)
    ctx->pc = 0x276F0Cu;
    {
        const bool branch_taken_0x276f0c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x276f0c) {
            ctx->pc = 0x276F98u;
            goto label_276f98;
        }
    }
    ctx->pc = 0x276F14u;
    // 0x276f14: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x276f14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276f18: 0xc09b35c  jal         func_26CD70
    ctx->pc = 0x276F18u;
    SET_GPR_U32(ctx, 31, 0x276F20u);
    ctx->pc = 0x26CD70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x26CD70u, 0x276F18u, 0x276F20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276F20u;
label_276f20:
    // 0x276f20: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x276f20u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276f24: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x276f24u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276f28: 0xc0480fc  jal         func_1203F0
    ctx->pc = 0x276F28u;
    SET_GPR_U32(ctx, 31, 0x276F30u);
    ctx->pc = 0x1203F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1203F0u, 0x276F28u, 0x276F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276F30u;
label_276f30:
    // 0x276f30: 0x12820019  beq         $s4, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x276F30u;
    {
        const bool branch_taken_0x276f30 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 2));
        if (branch_taken_0x276f30) {
            ctx->pc = 0x276F98u;
            goto label_276f98;
        }
    }
    ctx->pc = 0x276F38u;
    // 0x276f38: 0xc090864  jal         func_242190
    ctx->pc = 0x276F38u;
    SET_GPR_U32(ctx, 31, 0x276F40u);
    ctx->pc = 0x242190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x242190u, 0x276F38u, 0x276F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276F40u;
label_276f40:
    // 0x276f40: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x276f40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276f44: 0xc090590  jal         func_241640
    ctx->pc = 0x276F44u;
    SET_GPR_U32(ctx, 31, 0x276F4Cu);
    ctx->pc = 0x241640u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x241640u, 0x276F44u, 0x276F4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276F4Cu;
label_276f4c:
    // 0x276f4c: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x276f4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276f50: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x276f50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x276f54: 0x8c450044  lw          $a1, 0x44($v0)
    ctx->pc = 0x276f54u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x276f58: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x276f58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276f5c: 0xc09158c  jal         func_245630
    ctx->pc = 0x276F5Cu;
    SET_GPR_U32(ctx, 31, 0x276F64u);
    ctx->pc = 0x245630u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x245630u, 0x276F5Cu, 0x276F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276F64u;
label_276f64:
    // 0x276f64: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x276F64u;
    {
        const bool branch_taken_0x276f64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x276f64) {
            ctx->pc = 0x276F98u;
            goto label_276f98;
        }
    }
    ctx->pc = 0x276F6Cu;
    // 0x276f6c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x276f6cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x276f70: 0x8c440044  lw          $a0, 0x44($v0)
    ctx->pc = 0x276f70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
    // 0x276f74: 0x2405000b  addiu       $a1, $zero, 0xB
    ctx->pc = 0x276f74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x276f78: 0xc085538  jal         func_2154E0
    ctx->pc = 0x276F78u;
    SET_GPR_U32(ctx, 31, 0x276F80u);
    ctx->pc = 0x2154E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2154E0u, 0x276F78u, 0x276F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276F80u;
label_276f80:
    // 0x276f80: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x276f80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276f84: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x276f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x276f88: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x276f88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276f8c: 0x8c45003c  lw          $a1, 0x3C($v0)
    ctx->pc = 0x276f8cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
    // 0x276f90: 0xc097698  jal         func_25DA60
    ctx->pc = 0x276F90u;
    SET_GPR_U32(ctx, 31, 0x276F98u);
    ctx->pc = 0x25DA60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x25DA60u, 0x276F90u, 0x276F98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276F98u;
label_276f98:
    // 0x276f98: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x276f98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276f9c: 0xc0480fc  jal         func_1203F0
    ctx->pc = 0x276F9Cu;
    SET_GPR_U32(ctx, 31, 0x276FA4u);
    ctx->pc = 0x1203F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1203F0u, 0x276F9Cu, 0x276FA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276FA4u;
label_276fa4:
    // 0x276fa4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x276fa4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276fa8: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x276fa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x276fac: 0xc09dbfc  jal         func_276FF0
    ctx->pc = 0x276FACu;
    SET_GPR_U32(ctx, 31, 0x276FB4u);
    ctx->pc = 0x276FF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x276FF0u, 0x276FACu, 0x276FB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276FB4u;
label_276fb4:
    // 0x276fb4: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x276fb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x276fb8: 0xc09d210  jal         func_274840
    ctx->pc = 0x276FB8u;
    SET_GPR_U32(ctx, 31, 0x276FC0u);
    ctx->pc = 0x274840u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274840u, 0x276FB8u, 0x276FC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x276FC0u;
label_276fc0:
    // 0x276fc0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x276fc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x276fc4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x276fc4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x276fc8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x276fc8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x276fcc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x276fccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x276fd0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x276fd0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x276fd4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x276fd4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x276fd8: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x276fd8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x276fdc: 0x3e00008  jr          $ra
    ctx->pc = 0x276FDCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x276FDCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x276FE4u;
    // 0x276fe4: 0x0  nop
    ctx->pc = 0x276fe4u;
    // NOP
    // 0x276fe8: 0x0  nop
    ctx->pc = 0x276fe8u;
    // NOP
    // 0x276fec: 0x0  nop
    ctx->pc = 0x276fecu;
    // NOP
    ctx->pc = 0x276ff0u;
}
