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

// Function: sub_00488CF0
// Address: 0x488cf0 - 0x488f30
void sub_00488CF0_0x488cf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00488CF0_0x488cf0");
#endif

    switch (ctx->pc) {
        case 0x488d0cu: goto label_488d0c;
        case 0x488d44u: goto label_488d44;
        case 0x488d74u: goto label_488d74;
        case 0x488d7cu: goto label_488d7c;
        case 0x488d90u: goto label_488d90;
        case 0x488e20u: goto label_488e20;
        case 0x488e28u: goto label_488e28;
        case 0x488e38u: goto label_488e38;
        case 0x488e68u: goto label_488e68;
        case 0x488e78u: goto label_488e78;
        case 0x488eacu: goto label_488eac;
        case 0x488f14u: goto label_488f14;
        default: break;
    }

    ctx->pc = 0x488cf0u;

    // 0x488cf0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x488cf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x488cf4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x488cf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x488cf8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x488cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x488cfc: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x488cfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x488d00: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x488d00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x488d04: 0xc11eb64  jal         func_47AD90
    ctx->pc = 0x488D04u;
    SET_GPR_U32(ctx, 31, 0x488D0Cu);
    ctx->pc = 0x47AD90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47AD90u, 0x488D04u, 0x488D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488D0Cu;
label_488d0c:
    // 0x488d0c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x488d0cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x488d10: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x488d10u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x488d14: 0x3e00008  jr          $ra
    ctx->pc = 0x488D14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x488D14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x488D1Cu;
    // 0x488d1c: 0x0  nop
    ctx->pc = 0x488d1cu;
    // NOP
    // 0x488d20: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x488d20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x488d24: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x488d24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x488d28: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x488d28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x488d2c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x488d2cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x488d30: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x488d30u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x488d34: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x488d34u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x488d38: 0xafa40050  sw          $a0, 0x50($sp)
    ctx->pc = 0x488d38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 4));
    // 0x488d3c: 0xc106218  jal         func_418860
    ctx->pc = 0x488D3Cu;
    SET_GPR_U32(ctx, 31, 0x488D44u);
    ctx->pc = 0x418860u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418860u, 0x488D3Cu, 0x488D44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488D44u;
label_488d44:
    // 0x488d44: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x488d44u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x488d48: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x488d48u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x488d4c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x488d4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x488d50: 0x8fb00050  lw          $s0, 0x50($sp)
    ctx->pc = 0x488d50u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x488d54: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x488d54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x488d58: 0xaf82c0d4  sw          $v0, -0x3F2C($gp)
    ctx->pc = 0x488d58u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294951124), GPR_U32(ctx, 2));
    // 0x488d5c: 0x8f82c0d4  lw          $v0, -0x3F2C($gp)
    ctx->pc = 0x488d5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951124)));
    // 0x488d60: 0x14400046  bnez        $v0, . + 4 + (0x46 << 2)
    ctx->pc = 0x488D60u;
    {
        const bool branch_taken_0x488d60 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x488d60) {
            ctx->pc = 0x488E7Cu;
            goto label_488e7c;
        }
    }
    ctx->pc = 0x488D68u;
    // 0x488d68: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x488d68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x488d6c: 0xc122628  jal         func_4898A0
    ctx->pc = 0x488D6Cu;
    SET_GPR_U32(ctx, 31, 0x488D74u);
    ctx->pc = 0x4898A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4898A0u, 0x488D6Cu, 0x488D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488D74u;
label_488d74:
    // 0x488d74: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x488D74u;
    {
        const bool branch_taken_0x488d74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x488d74) {
            ctx->pc = 0x488E7Cu;
            goto label_488e7c;
        }
    }
    ctx->pc = 0x488D7Cu;
label_488d7c:
    // 0x488d7c: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x488d7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
    // 0x488d80: 0x24847c30  addiu       $a0, $a0, 0x7C30
    ctx->pc = 0x488d80u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31792));
    // 0x488d84: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x488d84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x488d88: 0xc106472  jal         func_4191C8
    ctx->pc = 0x488D88u;
    SET_GPR_U32(ctx, 31, 0x488D90u);
    ctx->pc = 0x4191C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4191C8u, 0x488D88u, 0x488D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488D90u;
label_488d90:
    // 0x488d90: 0x10400039  beqz        $v0, . + 4 + (0x39 << 2)
    ctx->pc = 0x488D90u;
    {
        const bool branch_taken_0x488d90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x488d90) {
            ctx->pc = 0x488E78u;
            goto label_488e78;
        }
    }
    ctx->pc = 0x488D98u;
    // 0x488d98: 0x8f82c0d4  lw          $v0, -0x3F2C($gp)
    ctx->pc = 0x488d98u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951124)));
    // 0x488d9c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x488D9Cu;
    {
        const bool branch_taken_0x488d9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x488d9c) {
            ctx->pc = 0x488DC4u;
            goto label_488dc4;
        }
    }
    ctx->pc = 0x488DA4u;
    // 0x488da4: 0x24020280  addiu       $v0, $zero, 0x280
    ctx->pc = 0x488da4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 640));
    // 0x488da8: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x488da8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x488dac: 0x240201c0  addiu       $v0, $zero, 0x1C0
    ctx->pc = 0x488dacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x488db0: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x488db0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x488db4: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x488db4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x488db8: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x488db8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x488dbc: 0x24020203  addiu       $v0, $zero, 0x203
    ctx->pc = 0x488dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 515));
    // 0x488dc0: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x488dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
label_488dc4:
    // 0x488dc4: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x488dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x488dc8: 0x8c437c30  lw          $v1, 0x7C30($v0)
    ctx->pc = 0x488dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x657C30u));
    // 0x488dcc: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x488dccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x488dd0: 0x14620029  bne         $v1, $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x488DD0u;
    {
        const bool branch_taken_0x488dd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x488dd0) {
            ctx->pc = 0x488E78u;
            goto label_488e78;
        }
    }
    ctx->pc = 0x488DD8u;
    // 0x488dd8: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x488dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x488ddc: 0x8c437c34  lw          $v1, 0x7C34($v0)
    ctx->pc = 0x488ddcu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x657C34u));
    // 0x488de0: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x488de0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
    // 0x488de4: 0x14620024  bne         $v1, $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x488DE4u;
    {
        const bool branch_taken_0x488de4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x488de4) {
            ctx->pc = 0x488E78u;
            goto label_488e78;
        }
    }
    ctx->pc = 0x488DECu;
    // 0x488dec: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x488decu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x488df0: 0x8c437c38  lw          $v1, 0x7C38($v0)
    ctx->pc = 0x488df0u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x657C38u));
    // 0x488df4: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x488df4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x488df8: 0x1462001f  bne         $v1, $v0, . + 4 + (0x1F << 2)
    ctx->pc = 0x488DF8u;
    {
        const bool branch_taken_0x488df8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x488df8) {
            ctx->pc = 0x488E78u;
            goto label_488e78;
        }
    }
    ctx->pc = 0x488E00u;
    // 0x488e00: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x488e00u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x488e04: 0x8c437c3c  lw          $v1, 0x7C3C($v0)
    ctx->pc = 0x488e04u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x657C3Cu));
    // 0x488e08: 0x8e020010  lw          $v0, 0x10($s0)
    ctx->pc = 0x488e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x488e0c: 0x1462001a  bne         $v1, $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x488E0Cu;
    {
        const bool branch_taken_0x488e0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x488e0c) {
            ctx->pc = 0x488E78u;
            goto label_488e78;
        }
    }
    ctx->pc = 0x488E14u;
    // 0x488e14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x488e14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x488e18: 0xc106250  jal         func_418940
    ctx->pc = 0x488E18u;
    SET_GPR_U32(ctx, 31, 0x488E20u);
    ctx->pc = 0x418940u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418940u, 0x488E18u, 0x488E20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488E20u;
label_488e20:
    // 0x488e20: 0xc106208  jal         func_418820
    ctx->pc = 0x488E20u;
    SET_GPR_U32(ctx, 31, 0x488E28u);
    ctx->pc = 0x418820u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x418820u, 0x488E20u, 0x488E28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488E28u;
label_488e28:
    // 0x488e28: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x488e28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
    // 0x488e2c: 0xac627d60  sw          $v0, 0x7D60($v1)
    ctx->pc = 0x488e2cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x657D60u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x657D60u, _value); } while (0);
    // 0x488e30: 0xc106234  jal         func_4188D0
    ctx->pc = 0x488E30u;
    SET_GPR_U32(ctx, 31, 0x488E38u);
    ctx->pc = 0x4188D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4188D0u, 0x488E30u, 0x488E38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488E38u;
label_488e38:
    // 0x488e38: 0x3c030065  lui         $v1, 0x65
    ctx->pc = 0x488e38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)101 << 16));
    // 0x488e3c: 0xac627d64  sw          $v0, 0x7D64($v1)
    ctx->pc = 0x488e3cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x657D64u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x657D64u, _value); } while (0);
    // 0x488e40: 0x3c020065  lui         $v0, 0x65
    ctx->pc = 0x488e40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)101 << 16));
    // 0x488e44: 0x8c427d64  lw          $v0, 0x7D64($v0)
    ctx->pc = 0x488e44u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x657D64u));
    // 0x488e48: 0x1451000b  bne         $v0, $s1, . + 4 + (0xB << 2)
    ctx->pc = 0x488E48u;
    {
        const bool branch_taken_0x488e48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x488e48) {
            ctx->pc = 0x488E78u;
            goto label_488e78;
        }
    }
    ctx->pc = 0x488E50u;
    // 0x488e50: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x488e50u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x488e54: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x488e54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
    // 0x488e58: 0x24844450  addiu       $a0, $a0, 0x4450
    ctx->pc = 0x488e58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17488));
    // 0x488e5c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x488e5cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x488e60: 0xc115ae4  jal         func_456B90
    ctx->pc = 0x488E60u;
    SET_GPR_U32(ctx, 31, 0x488E68u);
    ctx->pc = 0x456B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456B90u, 0x488E60u, 0x488E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488E68u;
label_488e68:
    // 0x488e68: 0x3c040065  lui         $a0, 0x65
    ctx->pc = 0x488e68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)101 << 16));
    // 0x488e6c: 0x24847c30  addiu       $a0, $a0, 0x7C30
    ctx->pc = 0x488e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31792));
    // 0x488e70: 0xc122628  jal         func_4898A0
    ctx->pc = 0x488E70u;
    SET_GPR_U32(ctx, 31, 0x488E78u);
    ctx->pc = 0x4898A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4898A0u, 0x488E70u, 0x488E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488E78u;
label_488e78:
    // 0x488e78: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x488e78u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_488e7c:
    // 0x488e7c: 0x16400004  bnez        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x488E7Cu;
    {
        const bool branch_taken_0x488e7c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x488e7c) {
            ctx->pc = 0x488E90u;
            goto label_488e90;
        }
    }
    ctx->pc = 0x488E84u;
    // 0x488e84: 0x233102b  sltu        $v0, $s1, $s3
    ctx->pc = 0x488e84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x488e88: 0x1440ffbc  bnez        $v0, . + 4 + (-0x44 << 2)
    ctx->pc = 0x488E88u;
    {
        const bool branch_taken_0x488e88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x488e88) {
            ctx->pc = 0x488D7Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_488d7c;
        }
    }
    ctx->pc = 0x488E90u;
label_488e90:
    // 0x488e90: 0x16400006  bnez        $s2, . + 4 + (0x6 << 2)
    ctx->pc = 0x488E90u;
    {
        const bool branch_taken_0x488e90 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x488e90) {
            ctx->pc = 0x488EACu;
            goto label_488eac;
        }
    }
    ctx->pc = 0x488E98u;
    // 0x488e98: 0x3c04005f  lui         $a0, 0x5F
    ctx->pc = 0x488e98u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)95 << 16));
    // 0x488e9c: 0x24844470  addiu       $a0, $a0, 0x4470
    ctx->pc = 0x488e9cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17520));
    // 0x488ea0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x488ea0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x488ea4: 0xc115ae4  jal         func_456B90
    ctx->pc = 0x488EA4u;
    SET_GPR_U32(ctx, 31, 0x488EACu);
    ctx->pc = 0x456B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456B90u, 0x488EA4u, 0x488EACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488EACu;
label_488eac:
    // 0x488eac: 0x3a420001  xori        $v0, $s2, 0x1
    ctx->pc = 0x488eacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 18) ^ (uint64_t)(uint16_t)1);
    // 0x488eb0: 0x2c420001  sltiu       $v0, $v0, 0x1
    ctx->pc = 0x488eb0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
    // 0x488eb4: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x488eb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x488eb8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x488eb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x488ebc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x488ebcu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x488ec0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x488ec0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x488ec4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x488ec4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x488ec8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x488ec8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x488ecc: 0x27bd0060  addiu       $sp, $sp, 0x60
    ctx->pc = 0x488eccu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x488ed0: 0x3e00008  jr          $ra
    ctx->pc = 0x488ED0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x488ED0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x488ED8u;
    // 0x488ed8: 0x0  nop
    ctx->pc = 0x488ed8u;
    // NOP
    // 0x488edc: 0x0  nop
    ctx->pc = 0x488edcu;
    // NOP
    // 0x488ee0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x488ee0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x488ee4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x488ee4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x488ee8: 0x8f82c0c4  lw          $v0, -0x3F3C($gp)
    ctx->pc = 0x488ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951108)));
    // 0x488eec: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x488EECu;
    {
        const bool branch_taken_0x488eec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x488eec) {
            ctx->pc = 0x488F00u;
            goto label_488f00;
        }
    }
    ctx->pc = 0x488EF4u;
    // 0x488ef4: 0x8f82c0cc  lw          $v0, -0x3F34($gp)
    ctx->pc = 0x488ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294951116)));
    // 0x488ef8: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x488EF8u;
    {
        const bool branch_taken_0x488ef8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x488ef8) {
            ctx->pc = 0x488F0Cu;
            goto label_488f0c;
        }
    }
    ctx->pc = 0x488F00u;
label_488f00:
    // 0x488f00: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x488f00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x488f04: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x488F04u;
    {
        const bool branch_taken_0x488f04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x488f04) {
            ctx->pc = 0x488F14u;
            goto label_488f14;
        }
    }
    ctx->pc = 0x488F0Cu;
label_488f0c:
    // 0x488f0c: 0xc1247e0  jal         func_491F80
    ctx->pc = 0x488F0Cu;
    SET_GPR_U32(ctx, 31, 0x488F14u);
    ctx->pc = 0x491F80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x491F80u, 0x488F0Cu, 0x488F14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x488F14u;
label_488f14:
    // 0x488f14: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x488f14u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x488f18: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x488f18u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x488f1c: 0x3e00008  jr          $ra
    ctx->pc = 0x488F1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x488F1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x488F24u;
    // 0x488f24: 0x0  nop
    ctx->pc = 0x488f24u;
    // NOP
    // 0x488f28: 0x0  nop
    ctx->pc = 0x488f28u;
    // NOP
    // 0x488f2c: 0x0  nop
    ctx->pc = 0x488f2cu;
    // NOP
    ctx->pc = 0x488f30u;
}
