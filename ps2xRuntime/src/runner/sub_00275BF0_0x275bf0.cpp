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

// Function: sub_00275BF0
// Address: 0x275bf0 - 0x275e10
void sub_00275BF0_0x275bf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00275BF0_0x275bf0");
#endif

    switch (ctx->pc) {
        case 0x275c08u: goto label_275c08;
        case 0x275c48u: goto label_275c48;
        case 0x275c80u: goto label_275c80;
        case 0x275c94u: goto label_275c94;
        case 0x275ca8u: goto label_275ca8;
        case 0x275cc0u: goto label_275cc0;
        case 0x275cd0u: goto label_275cd0;
        case 0x275ce0u: goto label_275ce0;
        case 0x275cecu: goto label_275cec;
        case 0x275d04u: goto label_275d04;
        case 0x275d1cu: goto label_275d1c;
        case 0x275d38u: goto label_275d38;
        case 0x275d48u: goto label_275d48;
        case 0x275d58u: goto label_275d58;
        case 0x275d68u: goto label_275d68;
        case 0x275d78u: goto label_275d78;
        case 0x275d90u: goto label_275d90;
        case 0x275ddcu: goto label_275ddc;
        case 0x275dfcu: goto label_275dfc;
        default: break;
    }

    ctx->pc = 0x275bf0u;

    // 0x275bf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x275bf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x275bf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x275bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x275bf8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x275bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x275bfc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x275bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x275c00: 0xc09d130  jal         func_2744C0
    ctx->pc = 0x275C00u;
    SET_GPR_U32(ctx, 31, 0x275C08u);
    ctx->pc = 0x2744C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2744C0u, 0x275C00u, 0x275C08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275C08u;
label_275c08:
    // 0x275c08: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x275c08u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x275c0c: 0x24635c50  addiu       $v1, $v1, 0x5C50
    ctx->pc = 0x275c0cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23632));
    // 0x275c10: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x275c10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x275c14: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x275c14u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x275c18: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x275c18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x275c1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x275c1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x275c20: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x275c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x275c24: 0x3e00008  jr          $ra
    ctx->pc = 0x275C24u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275C24u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x275C2Cu;
    // 0x275c2c: 0x0  nop
    ctx->pc = 0x275c2cu;
    // NOP
    // 0x275c30: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x275c30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x275c34: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x275c34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x275c38: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x275c38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
    // 0x275c3c: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x275c3cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x275c40: 0xc09d248  jal         func_274920
    ctx->pc = 0x275C40u;
    SET_GPR_U32(ctx, 31, 0x275C48u);
    ctx->pc = 0x274920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274920u, 0x275C40u, 0x275C48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275C48u;
label_275c48:
    // 0x275c48: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x275c48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x275c4c: 0x1043004c  beq         $v0, $v1, . + 4 + (0x4C << 2)
    ctx->pc = 0x275C4Cu;
    {
        const bool branch_taken_0x275c4c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x275c4c) {
            ctx->pc = 0x275D80u;
            goto label_275d80;
        }
    }
    ctx->pc = 0x275C54u;
    // 0x275c54: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x275c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x275c58: 0x1043004d  beq         $v0, $v1, . + 4 + (0x4D << 2)
    ctx->pc = 0x275C58u;
    {
        const bool branch_taken_0x275c58 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x275c58) {
            ctx->pc = 0x275D90u;
            goto label_275d90;
        }
    }
    ctx->pc = 0x275C60u;
    // 0x275c60: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x275c60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x275c64: 0x10430003  beq         $v0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x275C64u;
    {
        const bool branch_taken_0x275c64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x275c64) {
            ctx->pc = 0x275C74u;
            goto label_275c74;
        }
    }
    ctx->pc = 0x275C6Cu;
    // 0x275c6c: 0x10000048  b           . + 4 + (0x48 << 2)
    ctx->pc = 0x275C6Cu;
    {
        const bool branch_taken_0x275c6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x275c6c) {
            ctx->pc = 0x275D90u;
            goto label_275d90;
        }
    }
    ctx->pc = 0x275C74u;
label_275c74:
    // 0x275c74: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x275c74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x275c78: 0xc088560  jal         func_221580
    ctx->pc = 0x275C78u;
    SET_GPR_U32(ctx, 31, 0x275C80u);
    ctx->pc = 0x221580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221580u, 0x275C78u, 0x275C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275C80u;
label_275c80:
    // 0x275c80: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x275c80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x275c84: 0x2405054c  addiu       $a1, $zero, 0x54C
    ctx->pc = 0x275c84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1356));
    // 0x275c88: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x275c88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x275c8c: 0xc040924  jal         func_102490
    ctx->pc = 0x275C8Cu;
    SET_GPR_U32(ctx, 31, 0x275C94u);
    ctx->pc = 0x102490u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x102490u, 0x275C8Cu, 0x275C94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275C94u;
label_275c94:
    // 0x275c94: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x275c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x275c98: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x275c98u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x275c9c: 0x24a5d150  addiu       $a1, $a1, -0x2EB0
    ctx->pc = 0x275c9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955344));
    // 0x275ca0: 0xc040304  jal         func_100C10
    ctx->pc = 0x275CA0u;
    SET_GPR_U32(ctx, 31, 0x275CA8u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x275CA0u, 0x275CA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275CA8u;
label_275ca8:
    // 0x275ca8: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x275ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x275cac: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x275cacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x275cb0: 0x240504bd  addiu       $a1, $zero, 0x4BD
    ctx->pc = 0x275cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1213));
    // 0x275cb4: 0x2786a1b0  addiu       $a2, $gp, -0x5E50
    ctx->pc = 0x275cb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943152));
    // 0x275cb8: 0xc041a50  jal         func_106940
    ctx->pc = 0x275CB8u;
    SET_GPR_U32(ctx, 31, 0x275CC0u);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x275CB8u, 0x275CC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275CC0u;
label_275cc0:
    // 0x275cc0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x275cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x275cc4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x275cc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275cc8: 0xc0424e8  jal         func_1093A0
    ctx->pc = 0x275CC8u;
    SET_GPR_U32(ctx, 31, 0x275CD0u);
    ctx->pc = 0x1093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1093A0u, 0x275CC8u, 0x275CD0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275CD0u;
label_275cd0:
    // 0x275cd0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x275cd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x275cd4: 0x2785a1b8  addiu       $a1, $gp, -0x5E48
    ctx->pc = 0x275cd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943160));
    // 0x275cd8: 0xc0424e8  jal         func_1093A0
    ctx->pc = 0x275CD8u;
    SET_GPR_U32(ctx, 31, 0x275CE0u);
    ctx->pc = 0x1093A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1093A0u, 0x275CD8u, 0x275CE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275CE0u;
label_275ce0:
    // 0x275ce0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x275ce0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x275ce4: 0xc041b38  jal         func_106CE0
    ctx->pc = 0x275CE4u;
    SET_GPR_U32(ctx, 31, 0x275CECu);
    ctx->pc = 0x106CE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106CE0u, 0x275CE4u, 0x275CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275CECu;
label_275cec:
    // 0x275cec: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x275cecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x275cf0: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x275cf0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x275cf4: 0x24a5d168  addiu       $a1, $a1, -0x2E98
    ctx->pc = 0x275cf4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955368));
    // 0x275cf8: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x275cf8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275cfc: 0xc041b90  jal         func_106E40
    ctx->pc = 0x275CFCu;
    SET_GPR_U32(ctx, 31, 0x275D04u);
    ctx->pc = 0x106E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E40u, 0x275CFCu, 0x275D04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275D04u;
label_275d04:
    // 0x275d04: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x275d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x275d08: 0x8c440030  lw          $a0, 0x30($v0)
    ctx->pc = 0x275d08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 48)));
    // 0x275d0c: 0x240504be  addiu       $a1, $zero, 0x4BE
    ctx->pc = 0x275d0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1214));
    // 0x275d10: 0x2786a1b0  addiu       $a2, $gp, -0x5E50
    ctx->pc = 0x275d10u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 28), 4294943152));
    // 0x275d14: 0xc041a50  jal         func_106940
    ctx->pc = 0x275D14u;
    SET_GPR_U32(ctx, 31, 0x275D1Cu);
    ctx->pc = 0x106940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106940u, 0x275D14u, 0x275D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275D1Cu;
label_275d1c:
    // 0x275d1c: 0x8f83bbb4  lw          $v1, -0x444C($gp)
    ctx->pc = 0x275d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x275d20: 0x8c64002c  lw          $a0, 0x2C($v1)
    ctx->pc = 0x275d20u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 44)));
    // 0x275d24: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x275d24u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x275d28: 0x24a5d180  addiu       $a1, $a1, -0x2E80
    ctx->pc = 0x275d28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955392));
    // 0x275d2c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x275d2cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275d30: 0xc041b90  jal         func_106E40
    ctx->pc = 0x275D30u;
    SET_GPR_U32(ctx, 31, 0x275D38u);
    ctx->pc = 0x106E40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x106E40u, 0x275D30u, 0x275D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275D38u;
label_275d38:
    // 0x275d38: 0x2404000b  addiu       $a0, $zero, 0xB
    ctx->pc = 0x275d38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x275d3c: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x275d3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x275d40: 0xc08ef28  jal         func_23BCA0
    ctx->pc = 0x275D40u;
    SET_GPR_U32(ctx, 31, 0x275D48u);
    ctx->pc = 0x23BCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23BCA0u, 0x275D40u, 0x275D48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275D48u;
label_275d48:
    // 0x275d48: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x275d48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x275d4c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x275d4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x275d50: 0xc09d250  jal         func_274940
    ctx->pc = 0x275D50u;
    SET_GPR_U32(ctx, 31, 0x275D58u);
    ctx->pc = 0x274940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274940u, 0x275D50u, 0x275D58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275D58u;
label_275d58:
    // 0x275d58: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x275d58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x275d5c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x275d5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x275d60: 0xc0402d4  jal         func_100B50
    ctx->pc = 0x275D60u;
    SET_GPR_U32(ctx, 31, 0x275D68u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x275D60u, 0x275D68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275D68u;
label_275d68:
    // 0x275d68: 0x27a40020  addiu       $a0, $sp, 0x20
    ctx->pc = 0x275d68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x275d6c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x275d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x275d70: 0xc0887b4  jal         func_221ED0
    ctx->pc = 0x275D70u;
    SET_GPR_U32(ctx, 31, 0x275D78u);
    ctx->pc = 0x221ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x221ED0u, 0x275D70u, 0x275D78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275D78u;
label_275d78:
    // 0x275d78: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x275D78u;
    {
        const bool branch_taken_0x275d78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x275d78) {
            ctx->pc = 0x275D90u;
            goto label_275d90;
        }
    }
    ctx->pc = 0x275D80u;
label_275d80:
    // 0x275d80: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x275d80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x275d84: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x275d84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x275d88: 0xc09d250  jal         func_274940
    ctx->pc = 0x275D88u;
    SET_GPR_U32(ctx, 31, 0x275D90u);
    ctx->pc = 0x274940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274940u, 0x275D88u, 0x275D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275D90u;
label_275d90:
    // 0x275d90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x275d90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x275d94: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x275d94u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x275d98: 0x3e00008  jr          $ra
    ctx->pc = 0x275D98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275D98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x275DA0u;
    // 0x275da0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x275da0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x275da4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x275da4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x275da8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x275da8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x275dac: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x275dacu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
    // 0x275db0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x275db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x275db4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x275DB4u;
    {
        const bool branch_taken_0x275db4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x275db4) {
            ctx->pc = 0x275DFCu;
            goto label_275dfc;
        }
    }
    ctx->pc = 0x275DBCu;
    // 0x275dbc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x275dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
    // 0x275dc0: 0x24635c50  addiu       $v1, $v1, 0x5C50
    ctx->pc = 0x275dc0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 23632));
    // 0x275dc4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x275dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x275dc8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x275dc8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x275dcc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x275dccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x275dd0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x275dd0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x275dd4: 0xc09d150  jal         func_274540
    ctx->pc = 0x275DD4u;
    SET_GPR_U32(ctx, 31, 0x275DDCu);
    ctx->pc = 0x274540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x274540u, 0x275DD4u, 0x275DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275DDCu;
label_275ddc:
    // 0x275ddc: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x275ddcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x275de0: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x275de0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
    // 0x275de4: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x275de4u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x275de8: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x275DE8u;
    {
        const bool branch_taken_0x275de8 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x275de8) {
            ctx->pc = 0x275DFCu;
            goto label_275dfc;
        }
    }
    ctx->pc = 0x275DF0u;
    // 0x275df0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x275df0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x275df4: 0xc0ba070  jal         func_2E81C0
    ctx->pc = 0x275DF4u;
    SET_GPR_U32(ctx, 31, 0x275DFCu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x275DF4u, 0x275DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x275DFCu;
label_275dfc:
    // 0x275dfc: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x275dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x275e00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x275e00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x275e04: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x275e04u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x275e08: 0x3e00008  jr          $ra
    ctx->pc = 0x275E08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x275E08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x275E10u;
}
