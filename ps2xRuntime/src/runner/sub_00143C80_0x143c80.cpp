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

// Function: sub_00143C80
// Address: 0x143c80 - 0x143ec0
void sub_00143C80_0x143c80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00143C80_0x143c80");
#endif

    switch (ctx->pc) {
        case 0x143c80u: goto label_143c80;
        case 0x143c84u: goto label_143c84;
        case 0x143c88u: goto label_143c88;
        case 0x143c8cu: goto label_143c8c;
        case 0x143c90u: goto label_143c90;
        case 0x143c94u: goto label_143c94;
        case 0x143c98u: goto label_143c98;
        case 0x143c9cu: goto label_143c9c;
        case 0x143ca0u: goto label_143ca0;
        case 0x143ca4u: goto label_143ca4;
        case 0x143ca8u: goto label_143ca8;
        case 0x143cacu: goto label_143cac;
        case 0x143cb0u: goto label_143cb0;
        case 0x143cb4u: goto label_143cb4;
        case 0x143cb8u: goto label_143cb8;
        case 0x143cbcu: goto label_143cbc;
        case 0x143cc0u: goto label_143cc0;
        case 0x143cc4u: goto label_143cc4;
        case 0x143cc8u: goto label_143cc8;
        case 0x143cccu: goto label_143ccc;
        case 0x143cd0u: goto label_143cd0;
        case 0x143cd4u: goto label_143cd4;
        case 0x143cd8u: goto label_143cd8;
        case 0x143cdcu: goto label_143cdc;
        case 0x143ce0u: goto label_143ce0;
        case 0x143ce4u: goto label_143ce4;
        case 0x143ce8u: goto label_143ce8;
        case 0x143cecu: goto label_143cec;
        case 0x143cf0u: goto label_143cf0;
        case 0x143cf4u: goto label_143cf4;
        case 0x143cf8u: goto label_143cf8;
        case 0x143cfcu: goto label_143cfc;
        case 0x143d00u: goto label_143d00;
        case 0x143d04u: goto label_143d04;
        case 0x143d08u: goto label_143d08;
        case 0x143d0cu: goto label_143d0c;
        case 0x143d10u: goto label_143d10;
        case 0x143d14u: goto label_143d14;
        case 0x143d18u: goto label_143d18;
        case 0x143d1cu: goto label_143d1c;
        case 0x143d20u: goto label_143d20;
        case 0x143d24u: goto label_143d24;
        case 0x143d28u: goto label_143d28;
        case 0x143d2cu: goto label_143d2c;
        case 0x143d30u: goto label_143d30;
        case 0x143d34u: goto label_143d34;
        case 0x143d38u: goto label_143d38;
        case 0x143d3cu: goto label_143d3c;
        case 0x143d40u: goto label_143d40;
        case 0x143d44u: goto label_143d44;
        case 0x143d48u: goto label_143d48;
        case 0x143d4cu: goto label_143d4c;
        case 0x143d50u: goto label_143d50;
        case 0x143d54u: goto label_143d54;
        case 0x143d58u: goto label_143d58;
        case 0x143d5cu: goto label_143d5c;
        case 0x143d60u: goto label_143d60;
        case 0x143d64u: goto label_143d64;
        case 0x143d68u: goto label_143d68;
        case 0x143d6cu: goto label_143d6c;
        case 0x143d70u: goto label_143d70;
        case 0x143d74u: goto label_143d74;
        case 0x143d78u: goto label_143d78;
        case 0x143d7cu: goto label_143d7c;
        case 0x143d80u: goto label_143d80;
        case 0x143d84u: goto label_143d84;
        case 0x143d88u: goto label_143d88;
        case 0x143d8cu: goto label_143d8c;
        case 0x143d90u: goto label_143d90;
        case 0x143d94u: goto label_143d94;
        case 0x143d98u: goto label_143d98;
        case 0x143d9cu: goto label_143d9c;
        case 0x143da0u: goto label_143da0;
        case 0x143da4u: goto label_143da4;
        case 0x143da8u: goto label_143da8;
        case 0x143dacu: goto label_143dac;
        case 0x143db0u: goto label_143db0;
        case 0x143db4u: goto label_143db4;
        case 0x143db8u: goto label_143db8;
        case 0x143dbcu: goto label_143dbc;
        case 0x143dc0u: goto label_143dc0;
        case 0x143dc4u: goto label_143dc4;
        case 0x143dc8u: goto label_143dc8;
        case 0x143dccu: goto label_143dcc;
        case 0x143dd0u: goto label_143dd0;
        case 0x143dd4u: goto label_143dd4;
        case 0x143dd8u: goto label_143dd8;
        case 0x143ddcu: goto label_143ddc;
        case 0x143de0u: goto label_143de0;
        case 0x143de4u: goto label_143de4;
        case 0x143de8u: goto label_143de8;
        case 0x143decu: goto label_143dec;
        case 0x143df0u: goto label_143df0;
        case 0x143df4u: goto label_143df4;
        case 0x143df8u: goto label_143df8;
        case 0x143dfcu: goto label_143dfc;
        case 0x143e00u: goto label_143e00;
        case 0x143e04u: goto label_143e04;
        case 0x143e08u: goto label_143e08;
        case 0x143e0cu: goto label_143e0c;
        case 0x143e10u: goto label_143e10;
        case 0x143e14u: goto label_143e14;
        case 0x143e18u: goto label_143e18;
        case 0x143e1cu: goto label_143e1c;
        case 0x143e20u: goto label_143e20;
        case 0x143e24u: goto label_143e24;
        case 0x143e28u: goto label_143e28;
        case 0x143e2cu: goto label_143e2c;
        case 0x143e30u: goto label_143e30;
        case 0x143e34u: goto label_143e34;
        case 0x143e38u: goto label_143e38;
        case 0x143e3cu: goto label_143e3c;
        case 0x143e40u: goto label_143e40;
        case 0x143e44u: goto label_143e44;
        case 0x143e48u: goto label_143e48;
        case 0x143e4cu: goto label_143e4c;
        case 0x143e50u: goto label_143e50;
        case 0x143e54u: goto label_143e54;
        case 0x143e58u: goto label_143e58;
        case 0x143e5cu: goto label_143e5c;
        case 0x143e60u: goto label_143e60;
        case 0x143e64u: goto label_143e64;
        case 0x143e68u: goto label_143e68;
        case 0x143e6cu: goto label_143e6c;
        case 0x143e70u: goto label_143e70;
        case 0x143e74u: goto label_143e74;
        case 0x143e78u: goto label_143e78;
        case 0x143e7cu: goto label_143e7c;
        case 0x143e80u: goto label_143e80;
        case 0x143e84u: goto label_143e84;
        case 0x143e88u: goto label_143e88;
        case 0x143e8cu: goto label_143e8c;
        case 0x143e90u: goto label_143e90;
        case 0x143e94u: goto label_143e94;
        case 0x143e98u: goto label_143e98;
        case 0x143e9cu: goto label_143e9c;
        case 0x143ea0u: goto label_143ea0;
        case 0x143ea4u: goto label_143ea4;
        case 0x143ea8u: goto label_143ea8;
        case 0x143eacu: goto label_143eac;
        case 0x143eb0u: goto label_143eb0;
        case 0x143eb4u: goto label_143eb4;
        case 0x143eb8u: goto label_143eb8;
        case 0x143ebcu: goto label_143ebc;
        default: break;
    }

    ctx->pc = 0x143c80u;

label_143c80:
    // 0x143c80: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x143c80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_143c84:
    // 0x143c84: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x143c84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_143c88:
    // 0x143c88: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x143c88u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_143c8c:
    // 0x143c8c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x143c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_143c90:
    // 0x143c90: 0xc08d368  jal         func_234DA0
label_143c94:
    if (ctx->pc == 0x143C94u) {
        ctx->pc = 0x143C98u;
        goto label_143c98;
    }
    ctx->pc = 0x143C90u;
    SET_GPR_U32(ctx, 31, 0x143C98u);
    ctx->pc = 0x234DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x234DA0u, 0x143C90u, 0x143C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143C98u;
label_143c98:
    // 0x143c98: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x143c98u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_143c9c:
    // 0x143c9c: 0x246338b0  addiu       $v1, $v1, 0x38B0
    ctx->pc = 0x143c9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14512));
label_143ca0:
    // 0x143ca0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x143ca0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_143ca4:
    // 0x143ca4: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x143ca4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_143ca8:
    // 0x143ca8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x143ca8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_143cac:
    // 0x143cac: 0x24440034  addiu       $a0, $v0, 0x34
    ctx->pc = 0x143cacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 52));
label_143cb0:
    // 0x143cb0: 0xc08d5f4  jal         func_2357D0
label_143cb4:
    if (ctx->pc == 0x143CB4u) {
        ctx->pc = 0x143CB8u;
        goto label_143cb8;
    }
    ctx->pc = 0x143CB0u;
    SET_GPR_U32(ctx, 31, 0x143CB8u);
    ctx->pc = 0x2357D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2357D0u, 0x143CB0u, 0x143CB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143CB8u;
label_143cb8:
    // 0x143cb8: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x143cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_143cbc:
    // 0x143cbc: 0xac400060  sw          $zero, 0x60($v0)
    ctx->pc = 0x143cbcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 0));
label_143cc0:
    // 0x143cc0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x143cc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_143cc4:
    // 0x143cc4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x143cc4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_143cc8:
    // 0x143cc8: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x143cc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_143ccc:
    // 0x143ccc: 0x3e00008  jr          $ra
label_143cd0:
    if (ctx->pc == 0x143CD0u) {
        ctx->pc = 0x143CD4u;
        goto label_143cd4;
    }
    ctx->pc = 0x143CCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143CCCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x143CD4u;
label_143cd4:
    // 0x143cd4: 0x0  nop
    ctx->pc = 0x143cd4u;
    // NOP
label_143cd8:
    // 0x143cd8: 0x0  nop
    ctx->pc = 0x143cd8u;
    // NOP
label_143cdc:
    // 0x143cdc: 0x0  nop
    ctx->pc = 0x143cdcu;
    // NOP
label_143ce0:
    // 0x143ce0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x143ce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_143ce4:
    // 0x143ce4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x143ce4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_143ce8:
    // 0x143ce8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x143ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_143cec:
    // 0x143cec: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x143cecu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
label_143cf0:
    // 0x143cf0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x143cf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_143cf4:
    // 0x143cf4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_143cf8:
    if (ctx->pc == 0x143CF8u) {
        ctx->pc = 0x143CFCu;
        goto label_143cfc;
    }
    ctx->pc = 0x143CF4u;
    {
        const bool branch_taken_0x143cf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x143cf4) {
            ctx->pc = 0x143D3Cu;
            goto label_143d3c;
        }
    }
    ctx->pc = 0x143CFCu;
label_143cfc:
    // 0x143cfc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x143cfcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_143d00:
    // 0x143d00: 0x246338b0  addiu       $v1, $v1, 0x38B0
    ctx->pc = 0x143d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 14512));
label_143d04:
    // 0x143d04: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x143d04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_143d08:
    // 0x143d08: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x143d08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_143d0c:
    // 0x143d0c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x143d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_143d10:
    // 0x143d10: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x143d10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_143d14:
    // 0x143d14: 0xc08d438  jal         func_2350E0
label_143d18:
    if (ctx->pc == 0x143D18u) {
        ctx->pc = 0x143D1Cu;
        goto label_143d1c;
    }
    ctx->pc = 0x143D14u;
    SET_GPR_U32(ctx, 31, 0x143D1Cu);
    ctx->pc = 0x2350E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2350E0u, 0x143D14u, 0x143D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143D1Cu;
label_143d1c:
    // 0x143d1c: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x143d1cu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
label_143d20:
    // 0x143d20: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x143d20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_143d24:
    // 0x143d24: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x143d24u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_143d28:
    // 0x143d28: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_143d2c:
    if (ctx->pc == 0x143D2Cu) {
        ctx->pc = 0x143D30u;
        goto label_143d30;
    }
    ctx->pc = 0x143D28u;
    {
        const bool branch_taken_0x143d28 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x143d28) {
            ctx->pc = 0x143D3Cu;
            goto label_143d3c;
        }
    }
    ctx->pc = 0x143D30u;
label_143d30:
    // 0x143d30: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x143d30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_143d34:
    // 0x143d34: 0xc0ba070  jal         func_2E81C0
label_143d38:
    if (ctx->pc == 0x143D38u) {
        ctx->pc = 0x143D3Cu;
        goto label_143d3c;
    }
    ctx->pc = 0x143D34u;
    SET_GPR_U32(ctx, 31, 0x143D3Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x143D34u, 0x143D3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143D3Cu;
label_143d3c:
    // 0x143d3c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x143d3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_143d40:
    // 0x143d40: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x143d40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_143d44:
    // 0x143d44: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x143d44u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_143d48:
    // 0x143d48: 0x3e00008  jr          $ra
label_143d4c:
    if (ctx->pc == 0x143D4Cu) {
        ctx->pc = 0x143D50u;
        goto label_143d50;
    }
    ctx->pc = 0x143D48u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143D48u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x143D50u;
label_143d50:
    // 0x143d50: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x143d50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_143d54:
    // 0x143d54: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x143d54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_143d58:
    // 0x143d58: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x143d58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_143d5c:
    // 0x143d5c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x143d5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_143d60:
    // 0x143d60: 0xafa40030  sw          $a0, 0x30($sp)
    ctx->pc = 0x143d60u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 4));
label_143d64:
    // 0x143d64: 0x8fa40030  lw          $a0, 0x30($sp)
    ctx->pc = 0x143d64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_143d68:
    // 0x143d68: 0xc08d45c  jal         func_235170
label_143d6c:
    if (ctx->pc == 0x143D6Cu) {
        ctx->pc = 0x143D70u;
        goto label_143d70;
    }
    ctx->pc = 0x143D68u;
    SET_GPR_U32(ctx, 31, 0x143D70u);
    ctx->pc = 0x235170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x235170u, 0x143D68u, 0x143D70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143D70u;
label_143d70:
    // 0x143d70: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x143d70u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_143d74:
    // 0x143d74: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x143d74u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_143d78:
    // 0x143d78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x143d78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_143d7c:
    // 0x143d7c: 0x1462001e  bne         $v1, $v0, . + 4 + (0x1E << 2)
label_143d80:
    if (ctx->pc == 0x143D80u) {
        ctx->pc = 0x143D84u;
        goto label_143d84;
    }
    ctx->pc = 0x143D7Cu;
    {
        const bool branch_taken_0x143d7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x143d7c) {
            ctx->pc = 0x143DF8u;
            goto label_143df8;
        }
    }
    ctx->pc = 0x143D84u;
label_143d84:
    // 0x143d84: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x143d84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_143d88:
    // 0x143d88: 0xc119b68  jal         func_466DA0
label_143d8c:
    if (ctx->pc == 0x143D8Cu) {
        ctx->pc = 0x143D90u;
        goto label_143d90;
    }
    ctx->pc = 0x143D88u;
    SET_GPR_U32(ctx, 31, 0x143D90u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x143D88u, 0x143D90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143D90u;
label_143d90:
    // 0x143d90: 0x24040050  addiu       $a0, $zero, 0x50
    ctx->pc = 0x143d90u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
label_143d94:
    // 0x143d94: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x143d94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_143d98:
    // 0x143d98: 0xc0400e0  jal         func_100380
label_143d9c:
    if (ctx->pc == 0x143D9Cu) {
        ctx->pc = 0x143DA0u;
        goto label_143da0;
    }
    ctx->pc = 0x143D98u;
    SET_GPR_U32(ctx, 31, 0x143DA0u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x143D98u, 0x143DA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143DA0u;
label_143da0:
    // 0x143da0: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x143da0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_143da4:
    // 0x143da4: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
label_143da8:
    if (ctx->pc == 0x143DA8u) {
        ctx->pc = 0x143DACu;
        goto label_143dac;
    }
    ctx->pc = 0x143DA4u;
    {
        const bool branch_taken_0x143da4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x143da4) {
            ctx->pc = 0x143DBCu;
            goto label_143dbc;
        }
    }
    ctx->pc = 0x143DACu;
label_143dac:
    // 0x143dac: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x143dacu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_143db0:
    // 0x143db0: 0xc04d8bc  jal         func_1362F0
label_143db4:
    if (ctx->pc == 0x143DB4u) {
        ctx->pc = 0x143DB8u;
        goto label_143db8;
    }
    ctx->pc = 0x143DB0u;
    SET_GPR_U32(ctx, 31, 0x143DB8u);
    ctx->pc = 0x1362F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1362F0u, 0x143DB0u, 0x143DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143DB8u;
label_143db8:
    // 0x143db8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x143db8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_143dbc:
    // 0x143dbc: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x143dbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_143dc0:
    // 0x143dc0: 0xac500060  sw          $s0, 0x60($v0)
    ctx->pc = 0x143dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 16));
label_143dc4:
    // 0x143dc4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x143dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_143dc8:
    // 0x143dc8: 0x8c440060  lw          $a0, 0x60($v0)
    ctx->pc = 0x143dc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_143dcc:
    // 0x143dcc: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x143dccu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_143dd0:
    // 0x143dd0: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x143dd0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_143dd4:
    // 0x143dd4: 0x320f809  jalr        $t9
label_143dd8:
    if (ctx->pc == 0x143DD8u) {
        ctx->pc = 0x143DDCu;
        goto label_143ddc;
    }
    ctx->pc = 0x143DD4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x143DDCu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143DD4u, 0x143DDCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x143DDCu;
label_143ddc:
    // 0x143ddc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x143ddcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_143de0:
    // 0x143de0: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x143de0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_143de4:
    // 0x143de4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x143de4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_143de8:
    // 0x143de8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x143de8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_143dec:
    // 0x143dec: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x143decu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_143df0:
    // 0x143df0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x143df0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_143df4:
    // 0x143df4: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x143df4u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_143df8:
    // 0x143df8: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x143df8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_143dfc:
    // 0x143dfc: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x143dfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_143e00:
    // 0x143e00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x143e00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_143e04:
    // 0x143e04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x143e04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_143e08:
    // 0x143e08: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x143e08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_143e0c:
    // 0x143e0c: 0x3e00008  jr          $ra
label_143e10:
    if (ctx->pc == 0x143E10u) {
        ctx->pc = 0x143E14u;
        goto label_143e14;
    }
    ctx->pc = 0x143E0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143E0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x143E14u;
label_143e14:
    // 0x143e14: 0x0  nop
    ctx->pc = 0x143e14u;
    // NOP
label_143e18:
    // 0x143e18: 0x0  nop
    ctx->pc = 0x143e18u;
    // NOP
label_143e1c:
    // 0x143e1c: 0x0  nop
    ctx->pc = 0x143e1cu;
    // NOP
label_143e20:
    // 0x143e20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x143e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_143e24:
    // 0x143e24: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x143e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_143e28:
    // 0x143e28: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x143e28u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_143e2c:
    // 0x143e2c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x143e2cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_143e30:
    // 0x143e30: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x143e30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_143e34:
    // 0x143e34: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x143e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_143e38:
    // 0x143e38: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_143e3c:
    if (ctx->pc == 0x143E3Cu) {
        ctx->pc = 0x143E40u;
        goto label_143e40;
    }
    ctx->pc = 0x143E38u;
    {
        const bool branch_taken_0x143e38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x143e38) {
            ctx->pc = 0x143E58u;
            goto label_143e58;
        }
    }
    ctx->pc = 0x143E40u;
label_143e40:
    // 0x143e40: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x143e40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_143e44:
    // 0x143e44: 0x8c440060  lw          $a0, 0x60($v0)
    ctx->pc = 0x143e44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_143e48:
    // 0x143e48: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x143e48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_143e4c:
    // 0x143e4c: 0x8f39000c  lw          $t9, 0xC($t9)
    ctx->pc = 0x143e4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 12)));
label_143e50:
    // 0x143e50: 0x320f809  jalr        $t9
label_143e54:
    if (ctx->pc == 0x143E54u) {
        ctx->pc = 0x143E58u;
        goto label_143e58;
    }
    ctx->pc = 0x143E50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x143E58u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143E50u, 0x143E58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x143E58u;
label_143e58:
    // 0x143e58: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x143e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_143e5c:
    // 0x143e5c: 0x8c420060  lw          $v0, 0x60($v0)
    ctx->pc = 0x143e5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_143e60:
    // 0x143e60: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
label_143e64:
    if (ctx->pc == 0x143E64u) {
        ctx->pc = 0x143E68u;
        goto label_143e68;
    }
    ctx->pc = 0x143E60u;
    {
        const bool branch_taken_0x143e60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x143e60) {
            ctx->pc = 0x143E90u;
            goto label_143e90;
        }
    }
    ctx->pc = 0x143E68u;
label_143e68:
    // 0x143e68: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x143e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_143e6c:
    // 0x143e6c: 0x8c440060  lw          $a0, 0x60($v0)
    ctx->pc = 0x143e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_143e70:
    // 0x143e70: 0xc050fb0  jal         func_143EC0
label_143e74:
    if (ctx->pc == 0x143E74u) {
        ctx->pc = 0x143E78u;
        goto label_143e78;
    }
    ctx->pc = 0x143E70u;
    SET_GPR_U32(ctx, 31, 0x143E78u);
    ctx->pc = 0x143EC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x143EC0u, 0x143E70u, 0x143E78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143E78u;
label_143e78:
    // 0x143e78: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x143e78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_143e7c:
    // 0x143e7c: 0x8c440060  lw          $a0, 0x60($v0)
    ctx->pc = 0x143e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 96)));
label_143e80:
    // 0x143e80: 0xc119c5c  jal         func_467170
label_143e84:
    if (ctx->pc == 0x143E84u) {
        ctx->pc = 0x143E88u;
        goto label_143e88;
    }
    ctx->pc = 0x143E80u;
    SET_GPR_U32(ctx, 31, 0x143E88u);
    ctx->pc = 0x467170u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x467170u, 0x143E80u, 0x143E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143E88u;
label_143e88:
    // 0x143e88: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x143e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_143e8c:
    // 0x143e8c: 0xac400060  sw          $zero, 0x60($v0)
    ctx->pc = 0x143e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 0));
label_143e90:
    // 0x143e90: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x143e90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_143e94:
    // 0x143e94: 0xc08d46c  jal         func_2351B0
label_143e98:
    if (ctx->pc == 0x143E98u) {
        ctx->pc = 0x143E9Cu;
        goto label_143e9c;
    }
    ctx->pc = 0x143E94u;
    SET_GPR_U32(ctx, 31, 0x143E9Cu);
    ctx->pc = 0x2351B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2351B0u, 0x143E94u, 0x143E9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x143E9Cu;
label_143e9c:
    // 0x143e9c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x143e9cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_143ea0:
    // 0x143ea0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x143ea0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_143ea4:
    // 0x143ea4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x143ea4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_143ea8:
    // 0x143ea8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x143ea8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_143eac:
    // 0x143eac: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x143eacu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_143eb0:
    // 0x143eb0: 0x3e00008  jr          $ra
label_143eb4:
    if (ctx->pc == 0x143EB4u) {
        ctx->pc = 0x143EB8u;
        goto label_143eb8;
    }
    ctx->pc = 0x143EB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x143EB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x143EB8u;
label_143eb8:
    // 0x143eb8: 0x0  nop
    ctx->pc = 0x143eb8u;
    // NOP
label_143ebc:
    // 0x143ebc: 0x0  nop
    ctx->pc = 0x143ebcu;
    // NOP
    ctx->pc = 0x143ec0u;
}
