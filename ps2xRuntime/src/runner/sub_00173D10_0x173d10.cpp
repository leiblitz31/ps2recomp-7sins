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

// Function: sub_00173D10
// Address: 0x173d10 - 0x173ee0
void sub_00173D10_0x173d10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00173D10_0x173d10");
#endif

    switch (ctx->pc) {
        case 0x173d34u: goto label_173d34;
        case 0x173d40u: goto label_173d40;
        case 0x173d4cu: goto label_173d4c;
        case 0x173d6cu: goto label_173d6c;
        case 0x173d7cu: goto label_173d7c;
        case 0x173d8cu: goto label_173d8c;
        case 0x173dacu: goto label_173dac;
        case 0x173dc8u: goto label_173dc8;
        case 0x173dd8u: goto label_173dd8;
        case 0x173de4u: goto label_173de4;
        case 0x173dfcu: goto label_173dfc;
        case 0x173e10u: goto label_173e10;
        case 0x173e50u: goto label_173e50;
        case 0x173e60u: goto label_173e60;
        case 0x173e70u: goto label_173e70;
        case 0x173e80u: goto label_173e80;
        case 0x173e90u: goto label_173e90;
        case 0x173e98u: goto label_173e98;
        case 0x173ea8u: goto label_173ea8;
        case 0x173ebcu: goto label_173ebc;
        default: break;
    }

    ctx->pc = 0x173d10u;

    // 0x173d10: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x173d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x173d14: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x173d14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x173d18: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x173d18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x173d1c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x173d1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x173d20: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x173d20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x173d24: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x173d24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
    // 0x173d28: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x173d28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x173d2c: 0xc05cf10  jal         func_173C40
    ctx->pc = 0x173D2Cu;
    SET_GPR_U32(ctx, 31, 0x173D34u);
    ctx->pc = 0x173C40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173C40u, 0x173D2Cu, 0x173D34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173D34u;
label_173d34:
    // 0x173d34: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x173d34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x173d38: 0xc047eb8  jal         func_11FAE0
    ctx->pc = 0x173D38u;
    SET_GPR_U32(ctx, 31, 0x173D40u);
    ctx->pc = 0x11FAE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAE0u, 0x173D38u, 0x173D40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173D40u;
label_173d40:
    // 0x173d40: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x173d40u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173d44: 0xc047eb0  jal         func_11FAC0
    ctx->pc = 0x173D44u;
    SET_GPR_U32(ctx, 31, 0x173D4Cu);
    ctx->pc = 0x11FAC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x11FAC0u, 0x173D44u, 0x173D4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173D4Cu;
label_173d4c:
    // 0x173d4c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x173d4cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173d50: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x173d50u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x173d54: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x173d54u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x173d58: 0x24a54848  addiu       $a1, $a1, 0x4848
    ctx->pc = 0x173d58u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18504));
    // 0x173d5c: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x173d5cu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x173d60: 0x8e070004  lw          $a3, 0x4($s0)
    ctx->pc = 0x173d60u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x173d64: 0xc0bc3e2  jal         func_2F0F88
    ctx->pc = 0x173D64u;
    SET_GPR_U32(ctx, 31, 0x173D6Cu);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x173D64u, 0x173D6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173D6Cu;
label_173d6c:
    // 0x173d6c: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x173d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
    // 0x173d70: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x173d70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x173d74: 0xc08e57c  jal         func_2395F0
    ctx->pc = 0x173D74u;
    SET_GPR_U32(ctx, 31, 0x173D7Cu);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x173D74u, 0x173D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173D7Cu;
label_173d7c:
    // 0x173d7c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x173d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x173d80: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x173d80u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173d84: 0xc0406d0  jal         func_101B40
    ctx->pc = 0x173D84u;
    SET_GPR_U32(ctx, 31, 0x173D8Cu);
    ctx->pc = 0x101B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101B40u, 0x173D84u, 0x173D8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173D8Cu;
label_173d8c:
    // 0x173d8c: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x173d8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x173d90: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x173d90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x173d94: 0x8c45006c  lw          $a1, 0x6C($v0)
    ctx->pc = 0x173d94u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x173d98: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x173d98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x173d9c: 0x27a60070  addiu       $a2, $sp, 0x70
    ctx->pc = 0x173d9cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x173da0: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x173da0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x173da4: 0xc08c378  jal         func_230DE0
    ctx->pc = 0x173DA4u;
    SET_GPR_U32(ctx, 31, 0x173DACu);
    ctx->pc = 0x230DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x230DE0u, 0x173DA4u, 0x173DACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173DACu;
label_173dac:
    // 0x173dac: 0x8fa30080  lw          $v1, 0x80($sp)
    ctx->pc = 0x173dacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x173db0: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x173db0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x173db4: 0x8c45006c  lw          $a1, 0x6C($v0)
    ctx->pc = 0x173db4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 108)));
    // 0x173db8: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x173db8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
    // 0x173dbc: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x173dbcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x173dc0: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x173DC0u;
    SET_GPR_U32(ctx, 31, 0x173DC8u);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x173DC0u, 0x173DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173DC8u;
label_173dc8:
    // 0x173dc8: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x173dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x173dcc: 0x24440070  addiu       $a0, $v0, 0x70
    ctx->pc = 0x173dccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x173dd0: 0xc056144  jal         func_158510
    ctx->pc = 0x173DD0u;
    SET_GPR_U32(ctx, 31, 0x173DD8u);
    ctx->pc = 0x158510u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x158510u, 0x173DD0u, 0x173DD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173DD8u;
label_173dd8:
    // 0x173dd8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x173dd8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173ddc: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x173DDCu;
    {
        const bool branch_taken_0x173ddc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x173ddc) {
            ctx->pc = 0x173E00u;
            goto label_173e00;
        }
    }
    ctx->pc = 0x173DE4u;
label_173de4:
    // 0x173de4: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x173de4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x173de8: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x173de8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x173dec: 0x8c440034  lw          $a0, 0x34($v0)
    ctx->pc = 0x173decu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 52)));
    // 0x173df0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x173df0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173df4: 0xc08c8dc  jal         func_232370
    ctx->pc = 0x173DF4u;
    SET_GPR_U32(ctx, 31, 0x173DFCu);
    ctx->pc = 0x232370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x232370u, 0x173DF4u, 0x173DFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173DFCu;
label_173dfc:
    // 0x173dfc: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x173dfcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
label_173e00:
    // 0x173e00: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x173e00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x173e04: 0x24440070  addiu       $a0, $v0, 0x70
    ctx->pc = 0x173e04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    // 0x173e08: 0xc05613c  jal         func_1584F0
    ctx->pc = 0x173E08u;
    SET_GPR_U32(ctx, 31, 0x173E10u);
    ctx->pc = 0x1584F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1584F0u, 0x173E08u, 0x173E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173E10u;
label_173e10:
    // 0x173e10: 0x1622fff4  bne         $s1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x173E10u;
    {
        const bool branch_taken_0x173e10 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 2));
        if (branch_taken_0x173e10) {
            ctx->pc = 0x173DE4u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_173de4;
        }
    }
    ctx->pc = 0x173E18u;
    // 0x173e18: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x173e18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x173e1c: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x173e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x173e20: 0x431804  sllv        $v1, $v1, $v0
    ctx->pc = 0x173e20u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), GPR_U32(ctx, 2) & 0x1F));
    // 0x173e24: 0x8e020028  lw          $v0, 0x28($s0)
    ctx->pc = 0x173e24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x173e28: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x173e28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x173e2c: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x173E2Cu;
    {
        const bool branch_taken_0x173e2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x173e2c) {
            ctx->pc = 0x173E90u;
            goto label_173e90;
        }
    }
    ctx->pc = 0x173E34u;
    // 0x173e34: 0x27a40040  addiu       $a0, $sp, 0x40
    ctx->pc = 0x173e34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x173e38: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x173e38u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
    // 0x173e3c: 0x24a54858  addiu       $a1, $a1, 0x4858
    ctx->pc = 0x173e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 18520));
    // 0x173e40: 0x8e060000  lw          $a2, 0x0($s0)
    ctx->pc = 0x173e40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x173e44: 0x8e070004  lw          $a3, 0x4($s0)
    ctx->pc = 0x173e44u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x173e48: 0xc0bc3e2  jal         func_2F0F88
    ctx->pc = 0x173E48u;
    SET_GPR_U32(ctx, 31, 0x173E50u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x173E48u, 0x173E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173E50u;
label_173e50:
    // 0x173e50: 0x8f84bbdc  lw          $a0, -0x4424($gp)
    ctx->pc = 0x173e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949852)));
    // 0x173e54: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x173e54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x173e58: 0xc08e57c  jal         func_2395F0
    ctx->pc = 0x173E58u;
    SET_GPR_U32(ctx, 31, 0x173E60u);
    ctx->pc = 0x2395F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2395F0u, 0x173E58u, 0x173E60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173E60u;
label_173e60:
    // 0x173e60: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x173e60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x173e64: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x173e64u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173e68: 0xc0406d0  jal         func_101B40
    ctx->pc = 0x173E68u;
    SET_GPR_U32(ctx, 31, 0x173E70u);
    ctx->pc = 0x101B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101B40u, 0x173E68u, 0x173E70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173E70u;
label_173e70:
    // 0x173e70: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x173e70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x173e74: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x173e74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x173e78: 0xc05cfb8  jal         func_173EE0
    ctx->pc = 0x173E78u;
    SET_GPR_U32(ctx, 31, 0x173E80u);
    ctx->pc = 0x173EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x173EE0u, 0x173E78u, 0x173E80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173E80u;
label_173e80:
    // 0x173e80: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x173e80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x173e84: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x173e84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x173e88: 0xc0406a0  jal         func_101A80
    ctx->pc = 0x173E88u;
    SET_GPR_U32(ctx, 31, 0x173E90u);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x173E88u, 0x173E90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173E90u;
label_173e90:
    // 0x173e90: 0xc05548c  jal         func_155230
    ctx->pc = 0x173E90u;
    SET_GPR_U32(ctx, 31, 0x173E98u);
    ctx->pc = 0x155230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155230u, 0x173E90u, 0x173E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173E98u;
label_173e98:
    // 0x173e98: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x173e98u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173e9c: 0x24050012  addiu       $a1, $zero, 0x12
    ctx->pc = 0x173e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 18));
    // 0x173ea0: 0xc0553d4  jal         func_154F50
    ctx->pc = 0x173EA0u;
    SET_GPR_U32(ctx, 31, 0x173EA8u);
    ctx->pc = 0x154F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154F50u, 0x173EA0u, 0x173EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173EA8u;
label_173ea8:
    // 0x173ea8: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x173ea8u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x173eac: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x173eacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x173eb0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x173eb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x173eb4: 0xc0406a0  jal         func_101A80
    ctx->pc = 0x173EB4u;
    SET_GPR_U32(ctx, 31, 0x173EBCu);
    ctx->pc = 0x101A80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101A80u, 0x173EB4u, 0x173EBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x173EBCu;
label_173ebc:
    // 0x173ebc: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x173ebcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x173ec0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x173ec0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x173ec4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x173ec4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x173ec8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x173ec8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x173ecc: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x173eccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
    // 0x173ed0: 0x3e00008  jr          $ra
    ctx->pc = 0x173ED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x173ED0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x173ED8u;
    // 0x173ed8: 0x0  nop
    ctx->pc = 0x173ed8u;
    // NOP
    // 0x173edc: 0x0  nop
    ctx->pc = 0x173edcu;
    // NOP
    ctx->pc = 0x173ee0u;
}
