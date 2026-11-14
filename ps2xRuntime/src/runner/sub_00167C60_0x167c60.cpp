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

// Function: sub_00167C60
// Address: 0x167c60 - 0x167fc0
void sub_00167C60_0x167c60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00167C60_0x167c60");
#endif

    switch (ctx->pc) {
        case 0x167c60u: goto label_167c60;
        case 0x167c64u: goto label_167c64;
        case 0x167c68u: goto label_167c68;
        case 0x167c6cu: goto label_167c6c;
        case 0x167c70u: goto label_167c70;
        case 0x167c74u: goto label_167c74;
        case 0x167c78u: goto label_167c78;
        case 0x167c7cu: goto label_167c7c;
        case 0x167c80u: goto label_167c80;
        case 0x167c84u: goto label_167c84;
        case 0x167c88u: goto label_167c88;
        case 0x167c8cu: goto label_167c8c;
        case 0x167c90u: goto label_167c90;
        case 0x167c94u: goto label_167c94;
        case 0x167c98u: goto label_167c98;
        case 0x167c9cu: goto label_167c9c;
        case 0x167ca0u: goto label_167ca0;
        case 0x167ca4u: goto label_167ca4;
        case 0x167ca8u: goto label_167ca8;
        case 0x167cacu: goto label_167cac;
        case 0x167cb0u: goto label_167cb0;
        case 0x167cb4u: goto label_167cb4;
        case 0x167cb8u: goto label_167cb8;
        case 0x167cbcu: goto label_167cbc;
        case 0x167cc0u: goto label_167cc0;
        case 0x167cc4u: goto label_167cc4;
        case 0x167cc8u: goto label_167cc8;
        case 0x167cccu: goto label_167ccc;
        case 0x167cd0u: goto label_167cd0;
        case 0x167cd4u: goto label_167cd4;
        case 0x167cd8u: goto label_167cd8;
        case 0x167cdcu: goto label_167cdc;
        case 0x167ce0u: goto label_167ce0;
        case 0x167ce4u: goto label_167ce4;
        case 0x167ce8u: goto label_167ce8;
        case 0x167cecu: goto label_167cec;
        case 0x167cf0u: goto label_167cf0;
        case 0x167cf4u: goto label_167cf4;
        case 0x167cf8u: goto label_167cf8;
        case 0x167cfcu: goto label_167cfc;
        case 0x167d00u: goto label_167d00;
        case 0x167d04u: goto label_167d04;
        case 0x167d08u: goto label_167d08;
        case 0x167d0cu: goto label_167d0c;
        case 0x167d10u: goto label_167d10;
        case 0x167d14u: goto label_167d14;
        case 0x167d18u: goto label_167d18;
        case 0x167d1cu: goto label_167d1c;
        case 0x167d20u: goto label_167d20;
        case 0x167d24u: goto label_167d24;
        case 0x167d28u: goto label_167d28;
        case 0x167d2cu: goto label_167d2c;
        case 0x167d30u: goto label_167d30;
        case 0x167d34u: goto label_167d34;
        case 0x167d38u: goto label_167d38;
        case 0x167d3cu: goto label_167d3c;
        case 0x167d40u: goto label_167d40;
        case 0x167d44u: goto label_167d44;
        case 0x167d48u: goto label_167d48;
        case 0x167d4cu: goto label_167d4c;
        case 0x167d50u: goto label_167d50;
        case 0x167d54u: goto label_167d54;
        case 0x167d58u: goto label_167d58;
        case 0x167d5cu: goto label_167d5c;
        case 0x167d60u: goto label_167d60;
        case 0x167d64u: goto label_167d64;
        case 0x167d68u: goto label_167d68;
        case 0x167d6cu: goto label_167d6c;
        case 0x167d70u: goto label_167d70;
        case 0x167d74u: goto label_167d74;
        case 0x167d78u: goto label_167d78;
        case 0x167d7cu: goto label_167d7c;
        case 0x167d80u: goto label_167d80;
        case 0x167d84u: goto label_167d84;
        case 0x167d88u: goto label_167d88;
        case 0x167d8cu: goto label_167d8c;
        case 0x167d90u: goto label_167d90;
        case 0x167d94u: goto label_167d94;
        case 0x167d98u: goto label_167d98;
        case 0x167d9cu: goto label_167d9c;
        case 0x167da0u: goto label_167da0;
        case 0x167da4u: goto label_167da4;
        case 0x167da8u: goto label_167da8;
        case 0x167dacu: goto label_167dac;
        case 0x167db0u: goto label_167db0;
        case 0x167db4u: goto label_167db4;
        case 0x167db8u: goto label_167db8;
        case 0x167dbcu: goto label_167dbc;
        case 0x167dc0u: goto label_167dc0;
        case 0x167dc4u: goto label_167dc4;
        case 0x167dc8u: goto label_167dc8;
        case 0x167dccu: goto label_167dcc;
        case 0x167dd0u: goto label_167dd0;
        case 0x167dd4u: goto label_167dd4;
        case 0x167dd8u: goto label_167dd8;
        case 0x167ddcu: goto label_167ddc;
        case 0x167de0u: goto label_167de0;
        case 0x167de4u: goto label_167de4;
        case 0x167de8u: goto label_167de8;
        case 0x167decu: goto label_167dec;
        case 0x167df0u: goto label_167df0;
        case 0x167df4u: goto label_167df4;
        case 0x167df8u: goto label_167df8;
        case 0x167dfcu: goto label_167dfc;
        case 0x167e00u: goto label_167e00;
        case 0x167e04u: goto label_167e04;
        case 0x167e08u: goto label_167e08;
        case 0x167e0cu: goto label_167e0c;
        case 0x167e10u: goto label_167e10;
        case 0x167e14u: goto label_167e14;
        case 0x167e18u: goto label_167e18;
        case 0x167e1cu: goto label_167e1c;
        case 0x167e20u: goto label_167e20;
        case 0x167e24u: goto label_167e24;
        case 0x167e28u: goto label_167e28;
        case 0x167e2cu: goto label_167e2c;
        case 0x167e30u: goto label_167e30;
        case 0x167e34u: goto label_167e34;
        case 0x167e38u: goto label_167e38;
        case 0x167e3cu: goto label_167e3c;
        case 0x167e40u: goto label_167e40;
        case 0x167e44u: goto label_167e44;
        case 0x167e48u: goto label_167e48;
        case 0x167e4cu: goto label_167e4c;
        case 0x167e50u: goto label_167e50;
        case 0x167e54u: goto label_167e54;
        case 0x167e58u: goto label_167e58;
        case 0x167e5cu: goto label_167e5c;
        case 0x167e60u: goto label_167e60;
        case 0x167e64u: goto label_167e64;
        case 0x167e68u: goto label_167e68;
        case 0x167e6cu: goto label_167e6c;
        case 0x167e70u: goto label_167e70;
        case 0x167e74u: goto label_167e74;
        case 0x167e78u: goto label_167e78;
        case 0x167e7cu: goto label_167e7c;
        case 0x167e80u: goto label_167e80;
        case 0x167e84u: goto label_167e84;
        case 0x167e88u: goto label_167e88;
        case 0x167e8cu: goto label_167e8c;
        case 0x167e90u: goto label_167e90;
        case 0x167e94u: goto label_167e94;
        case 0x167e98u: goto label_167e98;
        case 0x167e9cu: goto label_167e9c;
        case 0x167ea0u: goto label_167ea0;
        case 0x167ea4u: goto label_167ea4;
        case 0x167ea8u: goto label_167ea8;
        case 0x167eacu: goto label_167eac;
        case 0x167eb0u: goto label_167eb0;
        case 0x167eb4u: goto label_167eb4;
        case 0x167eb8u: goto label_167eb8;
        case 0x167ebcu: goto label_167ebc;
        case 0x167ec0u: goto label_167ec0;
        case 0x167ec4u: goto label_167ec4;
        case 0x167ec8u: goto label_167ec8;
        case 0x167eccu: goto label_167ecc;
        case 0x167ed0u: goto label_167ed0;
        case 0x167ed4u: goto label_167ed4;
        case 0x167ed8u: goto label_167ed8;
        case 0x167edcu: goto label_167edc;
        case 0x167ee0u: goto label_167ee0;
        case 0x167ee4u: goto label_167ee4;
        case 0x167ee8u: goto label_167ee8;
        case 0x167eecu: goto label_167eec;
        case 0x167ef0u: goto label_167ef0;
        case 0x167ef4u: goto label_167ef4;
        case 0x167ef8u: goto label_167ef8;
        case 0x167efcu: goto label_167efc;
        case 0x167f00u: goto label_167f00;
        case 0x167f04u: goto label_167f04;
        case 0x167f08u: goto label_167f08;
        case 0x167f0cu: goto label_167f0c;
        case 0x167f10u: goto label_167f10;
        case 0x167f14u: goto label_167f14;
        case 0x167f18u: goto label_167f18;
        case 0x167f1cu: goto label_167f1c;
        case 0x167f20u: goto label_167f20;
        case 0x167f24u: goto label_167f24;
        case 0x167f28u: goto label_167f28;
        case 0x167f2cu: goto label_167f2c;
        case 0x167f30u: goto label_167f30;
        case 0x167f34u: goto label_167f34;
        case 0x167f38u: goto label_167f38;
        case 0x167f3cu: goto label_167f3c;
        case 0x167f40u: goto label_167f40;
        case 0x167f44u: goto label_167f44;
        case 0x167f48u: goto label_167f48;
        case 0x167f4cu: goto label_167f4c;
        case 0x167f50u: goto label_167f50;
        case 0x167f54u: goto label_167f54;
        case 0x167f58u: goto label_167f58;
        case 0x167f5cu: goto label_167f5c;
        case 0x167f60u: goto label_167f60;
        case 0x167f64u: goto label_167f64;
        case 0x167f68u: goto label_167f68;
        case 0x167f6cu: goto label_167f6c;
        case 0x167f70u: goto label_167f70;
        case 0x167f74u: goto label_167f74;
        case 0x167f78u: goto label_167f78;
        case 0x167f7cu: goto label_167f7c;
        case 0x167f80u: goto label_167f80;
        case 0x167f84u: goto label_167f84;
        case 0x167f88u: goto label_167f88;
        case 0x167f8cu: goto label_167f8c;
        case 0x167f90u: goto label_167f90;
        case 0x167f94u: goto label_167f94;
        case 0x167f98u: goto label_167f98;
        case 0x167f9cu: goto label_167f9c;
        case 0x167fa0u: goto label_167fa0;
        case 0x167fa4u: goto label_167fa4;
        case 0x167fa8u: goto label_167fa8;
        case 0x167facu: goto label_167fac;
        case 0x167fb0u: goto label_167fb0;
        case 0x167fb4u: goto label_167fb4;
        case 0x167fb8u: goto label_167fb8;
        case 0x167fbcu: goto label_167fbc;
        default: break;
    }

    ctx->pc = 0x167c60u;

label_167c60:
    // 0x167c60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x167c60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_167c64:
    // 0x167c64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x167c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_167c68:
    // 0x167c68: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x167c68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_167c6c:
    // 0x167c6c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x167c6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_167c70:
    // 0x167c70: 0x24050015  addiu       $a1, $zero, 0x15
    ctx->pc = 0x167c70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 21));
label_167c74:
    // 0x167c74: 0xc0557e8  jal         func_155FA0
label_167c78:
    if (ctx->pc == 0x167C78u) {
        ctx->pc = 0x167C7Cu;
        goto label_167c7c;
    }
    ctx->pc = 0x167C74u;
    SET_GPR_U32(ctx, 31, 0x167C7Cu);
    ctx->pc = 0x155FA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155FA0u, 0x167C74u, 0x167C7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167C7Cu;
label_167c7c:
    // 0x167c7c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x167c7cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_167c80:
    // 0x167c80: 0x24633bf0  addiu       $v1, $v1, 0x3BF0
    ctx->pc = 0x167c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15344));
label_167c84:
    // 0x167c84: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x167c84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_167c88:
    // 0x167c88: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x167c88u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_167c8c:
    // 0x167c8c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x167c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_167c90:
    // 0x167c90: 0xac400060  sw          $zero, 0x60($v0)
    ctx->pc = 0x167c90u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 96), GPR_U32(ctx, 0));
label_167c94:
    // 0x167c94: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x167c94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_167c98:
    // 0x167c98: 0xa0400064  sb          $zero, 0x64($v0)
    ctx->pc = 0x167c98u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 100), (uint8_t)GPR_U32(ctx, 0));
label_167c9c:
    // 0x167c9c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x167c9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_167ca0:
    // 0x167ca0: 0xac400054  sw          $zero, 0x54($v0)
    ctx->pc = 0x167ca0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 0));
label_167ca4:
    // 0x167ca4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x167ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_167ca8:
    // 0x167ca8: 0xac400050  sw          $zero, 0x50($v0)
    ctx->pc = 0x167ca8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 0));
label_167cac:
    // 0x167cac: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x167cacu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_167cb0:
    // 0x167cb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x167cb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_167cb4:
    // 0x167cb4: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x167cb4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_167cb8:
    // 0x167cb8: 0x3e00008  jr          $ra
label_167cbc:
    if (ctx->pc == 0x167CBCu) {
        ctx->pc = 0x167CC0u;
        goto label_167cc0;
    }
    ctx->pc = 0x167CB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167CB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x167CC0u;
label_167cc0:
    // 0x167cc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x167cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_167cc4:
    // 0x167cc4: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x167cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_167cc8:
    // 0x167cc8: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x167cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_167ccc:
    // 0x167ccc: 0xa7a50020  sh          $a1, 0x20($sp)
    ctx->pc = 0x167cccu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 5));
label_167cd0:
    // 0x167cd0: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x167cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_167cd4:
    // 0x167cd4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_167cd8:
    if (ctx->pc == 0x167CD8u) {
        ctx->pc = 0x167CDCu;
        goto label_167cdc;
    }
    ctx->pc = 0x167CD4u;
    {
        const bool branch_taken_0x167cd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x167cd4) {
            ctx->pc = 0x167D1Cu;
            goto label_167d1c;
        }
    }
    ctx->pc = 0x167CDCu;
label_167cdc:
    // 0x167cdc: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x167cdcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_167ce0:
    // 0x167ce0: 0x24633bf0  addiu       $v1, $v1, 0x3BF0
    ctx->pc = 0x167ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 15344));
label_167ce4:
    // 0x167ce4: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x167ce4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_167ce8:
    // 0x167ce8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x167ce8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_167cec:
    // 0x167cec: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x167cecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_167cf0:
    // 0x167cf0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x167cf0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_167cf4:
    // 0x167cf4: 0xc055950  jal         func_156540
label_167cf8:
    if (ctx->pc == 0x167CF8u) {
        ctx->pc = 0x167CFCu;
        goto label_167cfc;
    }
    ctx->pc = 0x167CF4u;
    SET_GPR_U32(ctx, 31, 0x167CFCu);
    ctx->pc = 0x156540u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156540u, 0x167CF4u, 0x167CFCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167CFCu;
label_167cfc:
    // 0x167cfc: 0x87a20020  lh          $v0, 0x20($sp)
    ctx->pc = 0x167cfcu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 32)));
label_167d00:
    // 0x167d00: 0x2143c  dsll32      $v0, $v0, 16
    ctx->pc = 0x167d00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 16));
label_167d04:
    // 0x167d04: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x167d04u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
label_167d08:
    // 0x167d08: 0x18400004  blez        $v0, . + 4 + (0x4 << 2)
label_167d0c:
    if (ctx->pc == 0x167D0Cu) {
        ctx->pc = 0x167D10u;
        goto label_167d10;
    }
    ctx->pc = 0x167D08u;
    {
        const bool branch_taken_0x167d08 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x167d08) {
            ctx->pc = 0x167D1Cu;
            goto label_167d1c;
        }
    }
    ctx->pc = 0x167D10u;
label_167d10:
    // 0x167d10: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x167d10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_167d14:
    // 0x167d14: 0xc0ba070  jal         func_2E81C0
label_167d18:
    if (ctx->pc == 0x167D18u) {
        ctx->pc = 0x167D1Cu;
        goto label_167d1c;
    }
    ctx->pc = 0x167D14u;
    SET_GPR_U32(ctx, 31, 0x167D1Cu);
    ctx->pc = 0x2E81C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E81C0u, 0x167D14u, 0x167D1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167D1Cu;
label_167d1c:
    // 0x167d1c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x167d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_167d20:
    // 0x167d20: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x167d20u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_167d24:
    // 0x167d24: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x167d24u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_167d28:
    // 0x167d28: 0x3e00008  jr          $ra
label_167d2c:
    if (ctx->pc == 0x167D2Cu) {
        ctx->pc = 0x167D30u;
        goto label_167d30;
    }
    ctx->pc = 0x167D28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167D28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x167D30u;
label_167d30:
    // 0x167d30: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x167d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_167d34:
    // 0x167d34: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x167d34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
label_167d38:
    // 0x167d38: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x167d38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_167d3c:
    // 0x167d3c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x167d3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_167d40:
    // 0x167d40: 0xafa40060  sw          $a0, 0x60($sp)
    ctx->pc = 0x167d40u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 4));
label_167d44:
    // 0x167d44: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x167d44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_167d48:
    // 0x167d48: 0xc055974  jal         func_1565D0
label_167d4c:
    if (ctx->pc == 0x167D4Cu) {
        ctx->pc = 0x167D50u;
        goto label_167d50;
    }
    ctx->pc = 0x167D48u;
    SET_GPR_U32(ctx, 31, 0x167D50u);
    ctx->pc = 0x1565D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1565D0u, 0x167D48u, 0x167D50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167D50u;
label_167d50:
    // 0x167d50: 0x305100ff  andi        $s1, $v0, 0xFF
    ctx->pc = 0x167d50u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_167d54:
    // 0x167d54: 0x322300ff  andi        $v1, $s1, 0xFF
    ctx->pc = 0x167d54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_167d58:
    // 0x167d58: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x167d58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_167d5c:
    // 0x167d5c: 0x14620037  bne         $v1, $v0, . + 4 + (0x37 << 2)
label_167d60:
    if (ctx->pc == 0x167D60u) {
        ctx->pc = 0x167D64u;
        goto label_167d64;
    }
    ctx->pc = 0x167D5Cu;
    {
        const bool branch_taken_0x167d5c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x167d5c) {
            ctx->pc = 0x167E3Cu;
            goto label_167e3c;
        }
    }
    ctx->pc = 0x167D64u;
label_167d64:
    // 0x167d64: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x167d64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_167d68:
    // 0x167d68: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x167d68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_167d6c:
    // 0x167d6c: 0x24a53fb0  addiu       $a1, $a1, 0x3FB0
    ctx->pc = 0x167d6cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16304));
label_167d70:
    // 0x167d70: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x167d70u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_167d74:
    // 0x167d74: 0x8f390030  lw          $t9, 0x30($t9)
    ctx->pc = 0x167d74u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 48)));
label_167d78:
    // 0x167d78: 0x320f809  jalr        $t9
label_167d7c:
    if (ctx->pc == 0x167D7Cu) {
        ctx->pc = 0x167D80u;
        goto label_167d80;
    }
    ctx->pc = 0x167D78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x167D80u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167D78u, 0x167D80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x167D80u;
label_167d80:
    // 0x167d80: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x167d80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_167d84:
    // 0x167d84: 0x10000026  b           . + 4 + (0x26 << 2)
label_167d88:
    if (ctx->pc == 0x167D88u) {
        ctx->pc = 0x167D8Cu;
        goto label_167d8c;
    }
    ctx->pc = 0x167D84u;
    {
        const bool branch_taken_0x167d84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x167d84) {
            ctx->pc = 0x167E20u;
            goto label_167e20;
        }
    }
    ctx->pc = 0x167D8Cu;
label_167d8c:
    // 0x167d8c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x167d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_167d90:
    // 0x167d90: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x167d90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_167d94:
    // 0x167d94: 0x24a53fd0  addiu       $a1, $a1, 0x3FD0
    ctx->pc = 0x167d94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16336));
label_167d98:
    // 0x167d98: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x167d98u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_167d9c:
    // 0x167d9c: 0xc0bc3e2  jal         func_2F0F88
label_167da0:
    if (ctx->pc == 0x167DA0u) {
        ctx->pc = 0x167DA4u;
        goto label_167da4;
    }
    ctx->pc = 0x167D9Cu;
    SET_GPR_U32(ctx, 31, 0x167DA4u);
    ctx->pc = 0x2F0F88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0F88u, 0x167D9Cu, 0x167DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167DA4u;
label_167da4:
    // 0x167da4: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x167da4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_167da8:
    // 0x167da8: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x167da8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_167dac:
    // 0x167dac: 0xc0552e4  jal         func_154B90
label_167db0:
    if (ctx->pc == 0x167DB0u) {
        ctx->pc = 0x167DB4u;
        goto label_167db4;
    }
    ctx->pc = 0x167DACu;
    SET_GPR_U32(ctx, 31, 0x167DB4u);
    ctx->pc = 0x154B90u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154B90u, 0x167DACu, 0x167DB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167DB4u;
label_167db4:
    // 0x167db4: 0x102080  sll         $a0, $s0, 2
    ctx->pc = 0x167db4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_167db8:
    // 0x167db8: 0x8fa30060  lw          $v1, 0x60($sp)
    ctx->pc = 0x167db8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_167dbc:
    // 0x167dbc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x167dbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
label_167dc0:
    // 0x167dc0: 0xac620058  sw          $v0, 0x58($v1)
    ctx->pc = 0x167dc0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 88), GPR_U32(ctx, 2));
label_167dc4:
    // 0x167dc4: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x167dc4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_167dc8:
    // 0x167dc8: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x167dc8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_167dcc:
    // 0x167dcc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x167dccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_167dd0:
    // 0x167dd0: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x167dd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_167dd4:
    // 0x167dd4: 0x10400011  beqz        $v0, . + 4 + (0x11 << 2)
label_167dd8:
    if (ctx->pc == 0x167DD8u) {
        ctx->pc = 0x167DDCu;
        goto label_167ddc;
    }
    ctx->pc = 0x167DD4u;
    {
        const bool branch_taken_0x167dd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x167dd4) {
            ctx->pc = 0x167E1Cu;
            goto label_167e1c;
        }
    }
    ctx->pc = 0x167DDCu;
label_167ddc:
    // 0x167ddc: 0xc78081b8  lwc1        $f0, -0x7E48($gp)
    ctx->pc = 0x167ddcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934968)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_167de0:
    // 0x167de0: 0xe7a0005c  swc1        $f0, 0x5C($sp)
    ctx->pc = 0x167de0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 92), bits); }
label_167de4:
    // 0x167de4: 0x8fa40060  lw          $a0, 0x60($sp)
    ctx->pc = 0x167de4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_167de8:
    // 0x167de8: 0x101880  sll         $v1, $s0, 2
    ctx->pc = 0x167de8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_167dec:
    // 0x167dec: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x167decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_167df0:
    // 0x167df0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x167df0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_167df4:
    // 0x167df4: 0x8c450058  lw          $a1, 0x58($v0)
    ctx->pc = 0x167df4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_167df8:
    // 0x167df8: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x167df8u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
label_167dfc:
    // 0x167dfc: 0x8c840034  lw          $a0, 0x34($a0)
    ctx->pc = 0x167dfcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
label_167e00:
    // 0x167e00: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x167e00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_167e04:
    // 0x167e04: 0x27a7005c  addiu       $a3, $sp, 0x5C
    ctx->pc = 0x167e04u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
label_167e08:
    // 0x167e08: 0xc78d8278  lwc1        $f13, -0x7D88($gp)
    ctx->pc = 0x167e08u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_167e0c:
    // 0x167e0c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x167e0cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_167e10:
    // 0x167e10: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x167e10u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_167e14:
    // 0x167e14: 0xc08b9fc  jal         func_22E7F0
label_167e18:
    if (ctx->pc == 0x167E18u) {
        ctx->pc = 0x167E1Cu;
        goto label_167e1c;
    }
    ctx->pc = 0x167E14u;
    SET_GPR_U32(ctx, 31, 0x167E1Cu);
    ctx->pc = 0x22E7F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22E7F0u, 0x167E14u, 0x167E1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167E1Cu;
label_167e1c:
    // 0x167e1c: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x167e1cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
label_167e20:
    // 0x167e20: 0x2a020002  slti        $v0, $s0, 0x2
    ctx->pc = 0x167e20u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)2) ? 1 : 0);
label_167e24:
    // 0x167e24: 0x1440ffd9  bnez        $v0, . + 4 + (-0x27 << 2)
label_167e28:
    if (ctx->pc == 0x167E28u) {
        ctx->pc = 0x167E2Cu;
        goto label_167e2c;
    }
    ctx->pc = 0x167E24u;
    {
        const bool branch_taken_0x167e24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x167e24) {
            ctx->pc = 0x167D8Cu;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_167d8c;
        }
    }
    ctx->pc = 0x167E2Cu;
label_167e2c:
    // 0x167e2c: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x167e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_167e30:
    // 0x167e30: 0xac400054  sw          $zero, 0x54($v0)
    ctx->pc = 0x167e30u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 84), GPR_U32(ctx, 0));
label_167e34:
    // 0x167e34: 0x8fa20060  lw          $v0, 0x60($sp)
    ctx->pc = 0x167e34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 96)));
label_167e38:
    // 0x167e38: 0xac400050  sw          $zero, 0x50($v0)
    ctx->pc = 0x167e38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 80), GPR_U32(ctx, 0));
label_167e3c:
    // 0x167e3c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x167e3cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_167e40:
    // 0x167e40: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x167e40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_167e44:
    // 0x167e44: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x167e44u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_167e48:
    // 0x167e48: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x167e48u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_167e4c:
    // 0x167e4c: 0x27bd0070  addiu       $sp, $sp, 0x70
    ctx->pc = 0x167e4cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_167e50:
    // 0x167e50: 0x3e00008  jr          $ra
label_167e54:
    if (ctx->pc == 0x167E54u) {
        ctx->pc = 0x167E58u;
        goto label_167e58;
    }
    ctx->pc = 0x167E50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167E50u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x167E58u;
label_167e58:
    // 0x167e58: 0x0  nop
    ctx->pc = 0x167e58u;
    // NOP
label_167e5c:
    // 0x167e5c: 0x0  nop
    ctx->pc = 0x167e5cu;
    // NOP
label_167e60:
    // 0x167e60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x167e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_167e64:
    // 0x167e64: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x167e64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_167e68:
    // 0x167e68: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x167e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_167e6c:
    // 0x167e6c: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x167e6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_167e70:
    // 0x167e70: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x167e70u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_167e74:
    // 0x167e74: 0xc0559ac  jal         func_1566B0
label_167e78:
    if (ctx->pc == 0x167E78u) {
        ctx->pc = 0x167E7Cu;
        goto label_167e7c;
    }
    ctx->pc = 0x167E74u;
    SET_GPR_U32(ctx, 31, 0x167E7Cu);
    ctx->pc = 0x1566B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1566B0u, 0x167E74u, 0x167E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167E7Cu;
label_167e7c:
    // 0x167e7c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x167e7cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_167e80:
    // 0x167e80: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x167e80u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_167e84:
    // 0x167e84: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x167e84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_167e88:
    // 0x167e88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x167e88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_167e8c:
    // 0x167e8c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x167e8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_167e90:
    // 0x167e90: 0x3e00008  jr          $ra
label_167e94:
    if (ctx->pc == 0x167E94u) {
        ctx->pc = 0x167E98u;
        goto label_167e98;
    }
    ctx->pc = 0x167E90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167E90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x167E98u;
label_167e98:
    // 0x167e98: 0x0  nop
    ctx->pc = 0x167e98u;
    // NOP
label_167e9c:
    // 0x167e9c: 0x0  nop
    ctx->pc = 0x167e9cu;
    // NOP
label_167ea0:
    // 0x167ea0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x167ea0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_167ea4:
    // 0x167ea4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x167ea4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_167ea8:
    // 0x167ea8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x167ea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_167eac:
    // 0x167eac: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x167eacu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_167eb0:
    // 0x167eb0: 0xa3a50030  sb          $a1, 0x30($sp)
    ctx->pc = 0x167eb0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 48), (uint8_t)GPR_U32(ctx, 5));
label_167eb4:
    // 0x167eb4: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x167eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_167eb8:
    // 0x167eb8: 0x93a50030  lbu         $a1, 0x30($sp)
    ctx->pc = 0x167eb8u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
label_167ebc:
    // 0x167ebc: 0xc055a78  jal         func_1569E0
label_167ec0:
    if (ctx->pc == 0x167EC0u) {
        ctx->pc = 0x167EC4u;
        goto label_167ec4;
    }
    ctx->pc = 0x167EBCu;
    SET_GPR_U32(ctx, 31, 0x167EC4u);
    ctx->pc = 0x1569E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1569E0u, 0x167EBCu, 0x167EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167EC4u;
label_167ec4:
    // 0x167ec4: 0x93a20030  lbu         $v0, 0x30($sp)
    ctx->pc = 0x167ec4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 48)));
label_167ec8:
    // 0x167ec8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x167ec8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_167ecc:
    // 0x167ecc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x167eccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_167ed0:
    // 0x167ed0: 0x14620025  bne         $v1, $v0, . + 4 + (0x25 << 2)
label_167ed4:
    if (ctx->pc == 0x167ED4u) {
        ctx->pc = 0x167ED8u;
        goto label_167ed8;
    }
    ctx->pc = 0x167ED0u;
    {
        const bool branch_taken_0x167ed0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x167ed0) {
            ctx->pc = 0x167F68u;
            goto label_167f68;
        }
    }
    ctx->pc = 0x167ED8u;
label_167ed8:
    // 0x167ed8: 0x93828ea8  lbu         $v0, -0x7158($gp)
    ctx->pc = 0x167ed8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294938280)));
label_167edc:
    // 0x167edc: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x167edcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_167ee0:
    // 0x167ee0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x167ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_167ee4:
    // 0x167ee4: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
label_167ee8:
    if (ctx->pc == 0x167EE8u) {
        ctx->pc = 0x167EECu;
        goto label_167eec;
    }
    ctx->pc = 0x167EE4u;
    {
        const bool branch_taken_0x167ee4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x167ee4) {
            ctx->pc = 0x167F1Cu;
            goto label_167f1c;
        }
    }
    ctx->pc = 0x167EECu;
label_167eec:
    // 0x167eec: 0xa3808ea8  sb          $zero, -0x7158($gp)
    ctx->pc = 0x167eecu;
    WRITE8(ADD32(GPR_U32(ctx, 28), 4294938280), (uint8_t)GPR_U32(ctx, 0));
label_167ef0:
    // 0x167ef0: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x167ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_167ef4:
    // 0x167ef4: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x167ef4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_167ef8:
    // 0x167ef8: 0x8c450058  lw          $a1, 0x58($v0)
    ctx->pc = 0x167ef8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_167efc:
    // 0x167efc: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x167efcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_167f00:
    // 0x167f00: 0xc08c510  jal         func_231440
label_167f04:
    if (ctx->pc == 0x167F04u) {
        ctx->pc = 0x167F08u;
        goto label_167f08;
    }
    ctx->pc = 0x167F00u;
    SET_GPR_U32(ctx, 31, 0x167F08u);
    ctx->pc = 0x231440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231440u, 0x167F00u, 0x167F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167F08u;
label_167f08:
    // 0x167f08: 0x3c040061  lui         $a0, 0x61
    ctx->pc = 0x167f08u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)97 << 16));
label_167f0c:
    // 0x167f0c: 0x2484be20  addiu       $a0, $a0, -0x41E0
    ctx->pc = 0x167f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294950432));
label_167f10:
    // 0x167f10: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x167f10u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_167f14:
    // 0x167f14: 0xc059ff0  jal         func_167FC0
label_167f18:
    if (ctx->pc == 0x167F18u) {
        ctx->pc = 0x167F1Cu;
        goto label_167f1c;
    }
    ctx->pc = 0x167F14u;
    SET_GPR_U32(ctx, 31, 0x167F1Cu);
    ctx->pc = 0x167FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x167FC0u, 0x167F14u, 0x167F1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167F1Cu;
label_167f1c:
    // 0x167f1c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x167f1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_167f20:
    // 0x167f20: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x167f20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_167f24:
    // 0x167f24: 0x8c450058  lw          $a1, 0x58($v0)
    ctx->pc = 0x167f24u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_167f28:
    // 0x167f28: 0x8c640034  lw          $a0, 0x34($v1)
    ctx->pc = 0x167f28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 52)));
label_167f2c:
    // 0x167f2c: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x167f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_167f30:
    // 0x167f30: 0xc44cbe20  lwc1        $f12, -0x41E0($v0)
    ctx->pc = 0x167f30u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294950432)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_167f34:
    // 0x167f34: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x167f34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_167f38:
    // 0x167f38: 0xc44dbe24  lwc1        $f13, -0x41DC($v0)
    ctx->pc = 0x167f38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294950436)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
label_167f3c:
    // 0x167f3c: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x167f3cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_167f40:
    // 0x167f40: 0xc44ebe28  lwc1        $f14, -0x41D8($v0)
    ctx->pc = 0x167f40u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294950440)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[14] = f; }
label_167f44:
    // 0x167f44: 0x3c020061  lui         $v0, 0x61
    ctx->pc = 0x167f44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)97 << 16));
label_167f48:
    // 0x167f48: 0xc44fbe2c  lwc1        $f15, -0x41D4($v0)
    ctx->pc = 0x167f48u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4294950444)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[15] = f; }
label_167f4c:
    // 0x167f4c: 0xc08c4d0  jal         func_231340
label_167f50:
    if (ctx->pc == 0x167F50u) {
        ctx->pc = 0x167F54u;
        goto label_167f54;
    }
    ctx->pc = 0x167F4Cu;
    SET_GPR_U32(ctx, 31, 0x167F54u);
    ctx->pc = 0x231340u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231340u, 0x167F4Cu, 0x167F54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167F54u;
label_167f54:
    // 0x167f54: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x167f54u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_167f58:
    // 0x167f58: 0xc05a128  jal         func_1684A0
label_167f5c:
    if (ctx->pc == 0x167F5Cu) {
        ctx->pc = 0x167F60u;
        goto label_167f60;
    }
    ctx->pc = 0x167F58u;
    SET_GPR_U32(ctx, 31, 0x167F60u);
    ctx->pc = 0x1684A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1684A0u, 0x167F58u, 0x167F60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167F60u;
label_167f60:
    // 0x167f60: 0x10000010  b           . + 4 + (0x10 << 2)
label_167f64:
    if (ctx->pc == 0x167F64u) {
        ctx->pc = 0x167F68u;
        goto label_167f68;
    }
    ctx->pc = 0x167F60u;
    {
        const bool branch_taken_0x167f60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x167f60) {
            ctx->pc = 0x167FA4u;
            goto label_167fa4;
        }
    }
    ctx->pc = 0x167F68u;
label_167f68:
    // 0x167f68: 0xc05548c  jal         func_155230
label_167f6c:
    if (ctx->pc == 0x167F6Cu) {
        ctx->pc = 0x167F70u;
        goto label_167f70;
    }
    ctx->pc = 0x167F68u;
    SET_GPR_U32(ctx, 31, 0x167F70u);
    ctx->pc = 0x155230u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155230u, 0x167F68u, 0x167F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167F70u;
label_167f70:
    // 0x167f70: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x167f70u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_167f74:
    // 0x167f74: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x167f74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_167f78:
    // 0x167f78: 0xc0553d4  jal         func_154F50
label_167f7c:
    if (ctx->pc == 0x167F7Cu) {
        ctx->pc = 0x167F80u;
        goto label_167f80;
    }
    ctx->pc = 0x167F78u;
    SET_GPR_U32(ctx, 31, 0x167F80u);
    ctx->pc = 0x154F50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x154F50u, 0x167F78u, 0x167F80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x167F80u;
label_167f80:
    // 0x167f80: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x167f80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_167f84:
    // 0x167f84: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
label_167f88:
    if (ctx->pc == 0x167F88u) {
        ctx->pc = 0x167F8Cu;
        goto label_167f8c;
    }
    ctx->pc = 0x167F84u;
    {
        const bool branch_taken_0x167f84 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x167f84) {
            ctx->pc = 0x167FA4u;
            goto label_167fa4;
        }
    }
    ctx->pc = 0x167F8Cu;
label_167f8c:
    // 0x167f8c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x167f8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_167f90:
    // 0x167f90: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x167f90u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_167f94:
    // 0x167f94: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x167f94u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_167f98:
    // 0x167f98: 0x8f390020  lw          $t9, 0x20($t9)
    ctx->pc = 0x167f98u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 32)));
label_167f9c:
    // 0x167f9c: 0x320f809  jalr        $t9
label_167fa0:
    if (ctx->pc == 0x167FA0u) {
        ctx->pc = 0x167FA4u;
        goto label_167fa4;
    }
    ctx->pc = 0x167F9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x167FA4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167F9Cu, 0x167FA4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x167FA4u;
label_167fa4:
    // 0x167fa4: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x167fa4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_167fa8:
    // 0x167fa8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x167fa8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_167fac:
    // 0x167fac: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x167facu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_167fb0:
    // 0x167fb0: 0x3e00008  jr          $ra
label_167fb4:
    if (ctx->pc == 0x167FB4u) {
        ctx->pc = 0x167FB8u;
        goto label_167fb8;
    }
    ctx->pc = 0x167FB0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x167FB0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x167FB8u;
label_167fb8:
    // 0x167fb8: 0x0  nop
    ctx->pc = 0x167fb8u;
    // NOP
label_167fbc:
    // 0x167fbc: 0x0  nop
    ctx->pc = 0x167fbcu;
    // NOP
    ctx->pc = 0x167fc0u;
}
