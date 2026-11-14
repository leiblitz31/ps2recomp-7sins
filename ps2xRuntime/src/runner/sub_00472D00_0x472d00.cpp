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

// Function: sub_00472D00
// Address: 0x472d00 - 0x472fe0
void sub_00472D00_0x472d00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00472D00_0x472d00");
#endif

    switch (ctx->pc) {
        case 0x472d00u: goto label_472d00;
        case 0x472d04u: goto label_472d04;
        case 0x472d08u: goto label_472d08;
        case 0x472d0cu: goto label_472d0c;
        case 0x472d10u: goto label_472d10;
        case 0x472d14u: goto label_472d14;
        case 0x472d18u: goto label_472d18;
        case 0x472d1cu: goto label_472d1c;
        case 0x472d20u: goto label_472d20;
        case 0x472d24u: goto label_472d24;
        case 0x472d28u: goto label_472d28;
        case 0x472d2cu: goto label_472d2c;
        case 0x472d30u: goto label_472d30;
        case 0x472d34u: goto label_472d34;
        case 0x472d38u: goto label_472d38;
        case 0x472d3cu: goto label_472d3c;
        case 0x472d40u: goto label_472d40;
        case 0x472d44u: goto label_472d44;
        case 0x472d48u: goto label_472d48;
        case 0x472d4cu: goto label_472d4c;
        case 0x472d50u: goto label_472d50;
        case 0x472d54u: goto label_472d54;
        case 0x472d58u: goto label_472d58;
        case 0x472d5cu: goto label_472d5c;
        case 0x472d60u: goto label_472d60;
        case 0x472d64u: goto label_472d64;
        case 0x472d68u: goto label_472d68;
        case 0x472d6cu: goto label_472d6c;
        case 0x472d70u: goto label_472d70;
        case 0x472d74u: goto label_472d74;
        case 0x472d78u: goto label_472d78;
        case 0x472d7cu: goto label_472d7c;
        case 0x472d80u: goto label_472d80;
        case 0x472d84u: goto label_472d84;
        case 0x472d88u: goto label_472d88;
        case 0x472d8cu: goto label_472d8c;
        case 0x472d90u: goto label_472d90;
        case 0x472d94u: goto label_472d94;
        case 0x472d98u: goto label_472d98;
        case 0x472d9cu: goto label_472d9c;
        case 0x472da0u: goto label_472da0;
        case 0x472da4u: goto label_472da4;
        case 0x472da8u: goto label_472da8;
        case 0x472dacu: goto label_472dac;
        case 0x472db0u: goto label_472db0;
        case 0x472db4u: goto label_472db4;
        case 0x472db8u: goto label_472db8;
        case 0x472dbcu: goto label_472dbc;
        case 0x472dc0u: goto label_472dc0;
        case 0x472dc4u: goto label_472dc4;
        case 0x472dc8u: goto label_472dc8;
        case 0x472dccu: goto label_472dcc;
        case 0x472dd0u: goto label_472dd0;
        case 0x472dd4u: goto label_472dd4;
        case 0x472dd8u: goto label_472dd8;
        case 0x472ddcu: goto label_472ddc;
        case 0x472de0u: goto label_472de0;
        case 0x472de4u: goto label_472de4;
        case 0x472de8u: goto label_472de8;
        case 0x472decu: goto label_472dec;
        case 0x472df0u: goto label_472df0;
        case 0x472df4u: goto label_472df4;
        case 0x472df8u: goto label_472df8;
        case 0x472dfcu: goto label_472dfc;
        case 0x472e00u: goto label_472e00;
        case 0x472e04u: goto label_472e04;
        case 0x472e08u: goto label_472e08;
        case 0x472e0cu: goto label_472e0c;
        case 0x472e10u: goto label_472e10;
        case 0x472e14u: goto label_472e14;
        case 0x472e18u: goto label_472e18;
        case 0x472e1cu: goto label_472e1c;
        case 0x472e20u: goto label_472e20;
        case 0x472e24u: goto label_472e24;
        case 0x472e28u: goto label_472e28;
        case 0x472e2cu: goto label_472e2c;
        case 0x472e30u: goto label_472e30;
        case 0x472e34u: goto label_472e34;
        case 0x472e38u: goto label_472e38;
        case 0x472e3cu: goto label_472e3c;
        case 0x472e40u: goto label_472e40;
        case 0x472e44u: goto label_472e44;
        case 0x472e48u: goto label_472e48;
        case 0x472e4cu: goto label_472e4c;
        case 0x472e50u: goto label_472e50;
        case 0x472e54u: goto label_472e54;
        case 0x472e58u: goto label_472e58;
        case 0x472e5cu: goto label_472e5c;
        case 0x472e60u: goto label_472e60;
        case 0x472e64u: goto label_472e64;
        case 0x472e68u: goto label_472e68;
        case 0x472e6cu: goto label_472e6c;
        case 0x472e70u: goto label_472e70;
        case 0x472e74u: goto label_472e74;
        case 0x472e78u: goto label_472e78;
        case 0x472e7cu: goto label_472e7c;
        case 0x472e80u: goto label_472e80;
        case 0x472e84u: goto label_472e84;
        case 0x472e88u: goto label_472e88;
        case 0x472e8cu: goto label_472e8c;
        case 0x472e90u: goto label_472e90;
        case 0x472e94u: goto label_472e94;
        case 0x472e98u: goto label_472e98;
        case 0x472e9cu: goto label_472e9c;
        case 0x472ea0u: goto label_472ea0;
        case 0x472ea4u: goto label_472ea4;
        case 0x472ea8u: goto label_472ea8;
        case 0x472eacu: goto label_472eac;
        case 0x472eb0u: goto label_472eb0;
        case 0x472eb4u: goto label_472eb4;
        case 0x472eb8u: goto label_472eb8;
        case 0x472ebcu: goto label_472ebc;
        case 0x472ec0u: goto label_472ec0;
        case 0x472ec4u: goto label_472ec4;
        case 0x472ec8u: goto label_472ec8;
        case 0x472eccu: goto label_472ecc;
        case 0x472ed0u: goto label_472ed0;
        case 0x472ed4u: goto label_472ed4;
        case 0x472ed8u: goto label_472ed8;
        case 0x472edcu: goto label_472edc;
        case 0x472ee0u: goto label_472ee0;
        case 0x472ee4u: goto label_472ee4;
        case 0x472ee8u: goto label_472ee8;
        case 0x472eecu: goto label_472eec;
        case 0x472ef0u: goto label_472ef0;
        case 0x472ef4u: goto label_472ef4;
        case 0x472ef8u: goto label_472ef8;
        case 0x472efcu: goto label_472efc;
        case 0x472f00u: goto label_472f00;
        case 0x472f04u: goto label_472f04;
        case 0x472f08u: goto label_472f08;
        case 0x472f0cu: goto label_472f0c;
        case 0x472f10u: goto label_472f10;
        case 0x472f14u: goto label_472f14;
        case 0x472f18u: goto label_472f18;
        case 0x472f1cu: goto label_472f1c;
        case 0x472f20u: goto label_472f20;
        case 0x472f24u: goto label_472f24;
        case 0x472f28u: goto label_472f28;
        case 0x472f2cu: goto label_472f2c;
        case 0x472f30u: goto label_472f30;
        case 0x472f34u: goto label_472f34;
        case 0x472f38u: goto label_472f38;
        case 0x472f3cu: goto label_472f3c;
        case 0x472f40u: goto label_472f40;
        case 0x472f44u: goto label_472f44;
        case 0x472f48u: goto label_472f48;
        case 0x472f4cu: goto label_472f4c;
        case 0x472f50u: goto label_472f50;
        case 0x472f54u: goto label_472f54;
        case 0x472f58u: goto label_472f58;
        case 0x472f5cu: goto label_472f5c;
        case 0x472f60u: goto label_472f60;
        case 0x472f64u: goto label_472f64;
        case 0x472f68u: goto label_472f68;
        case 0x472f6cu: goto label_472f6c;
        case 0x472f70u: goto label_472f70;
        case 0x472f74u: goto label_472f74;
        case 0x472f78u: goto label_472f78;
        case 0x472f7cu: goto label_472f7c;
        case 0x472f80u: goto label_472f80;
        case 0x472f84u: goto label_472f84;
        case 0x472f88u: goto label_472f88;
        case 0x472f8cu: goto label_472f8c;
        case 0x472f90u: goto label_472f90;
        case 0x472f94u: goto label_472f94;
        case 0x472f98u: goto label_472f98;
        case 0x472f9cu: goto label_472f9c;
        case 0x472fa0u: goto label_472fa0;
        case 0x472fa4u: goto label_472fa4;
        case 0x472fa8u: goto label_472fa8;
        case 0x472facu: goto label_472fac;
        case 0x472fb0u: goto label_472fb0;
        case 0x472fb4u: goto label_472fb4;
        case 0x472fb8u: goto label_472fb8;
        case 0x472fbcu: goto label_472fbc;
        case 0x472fc0u: goto label_472fc0;
        case 0x472fc4u: goto label_472fc4;
        case 0x472fc8u: goto label_472fc8;
        case 0x472fccu: goto label_472fcc;
        case 0x472fd0u: goto label_472fd0;
        case 0x472fd4u: goto label_472fd4;
        case 0x472fd8u: goto label_472fd8;
        case 0x472fdcu: goto label_472fdc;
        default: break;
    }

    ctx->pc = 0x472d00u;

label_472d00:
    // 0x472d00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x472d00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_472d04:
    // 0x472d04: 0xafa40000  sw          $a0, 0x0($sp)
    ctx->pc = 0x472d04u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 4));
label_472d08:
    // 0x472d08: 0xafa50010  sw          $a1, 0x10($sp)
    ctx->pc = 0x472d08u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 5));
label_472d0c:
    // 0x472d0c: 0xafa60020  sw          $a2, 0x20($sp)
    ctx->pc = 0x472d0cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 6));
label_472d10:
    // 0x472d10: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x472d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_472d14:
    // 0x472d14: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_472d18:
    if (ctx->pc == 0x472D18u) {
        ctx->pc = 0x472D1Cu;
        goto label_472d1c;
    }
    ctx->pc = 0x472D14u;
    {
        const bool branch_taken_0x472d14 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x472d14) {
            ctx->pc = 0x472D2Cu;
            goto label_472d2c;
        }
    }
    ctx->pc = 0x472D1Cu;
label_472d1c:
    // 0x472d1c: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x472d1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_472d20:
    // 0x472d20: 0xc4600030  lwc1        $f0, 0x30($v1)
    ctx->pc = 0x472d20u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_472d24:
    // 0x472d24: 0x8fa30010  lw          $v1, 0x10($sp)
    ctx->pc = 0x472d24u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_472d28:
    // 0x472d28: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x472d28u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_472d2c:
    // 0x472d2c: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x472d2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_472d30:
    // 0x472d30: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
label_472d34:
    if (ctx->pc == 0x472D34u) {
        ctx->pc = 0x472D38u;
        goto label_472d38;
    }
    ctx->pc = 0x472D30u;
    {
        const bool branch_taken_0x472d30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x472d30) {
            ctx->pc = 0x472D48u;
            goto label_472d48;
        }
    }
    ctx->pc = 0x472D38u;
label_472d38:
    // 0x472d38: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x472d38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_472d3c:
    // 0x472d3c: 0xc4600034  lwc1        $f0, 0x34($v1)
    ctx->pc = 0x472d3cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 52)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_472d40:
    // 0x472d40: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x472d40u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_472d44:
    // 0x472d44: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x472d44u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_472d48:
    // 0x472d48: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x472d48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_472d4c:
    // 0x472d4c: 0x3e00008  jr          $ra
label_472d50:
    if (ctx->pc == 0x472D50u) {
        ctx->pc = 0x472D54u;
        goto label_472d54;
    }
    ctx->pc = 0x472D4Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x472D4Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x472D54u;
label_472d54:
    // 0x472d54: 0x0  nop
    ctx->pc = 0x472d54u;
    // NOP
label_472d58:
    // 0x472d58: 0x0  nop
    ctx->pc = 0x472d58u;
    // NOP
label_472d5c:
    // 0x472d5c: 0x0  nop
    ctx->pc = 0x472d5cu;
    // NOP
label_472d60:
    // 0x472d60: 0x27bdfc30  addiu       $sp, $sp, -0x3D0
    ctx->pc = 0x472d60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966320));
label_472d64:
    // 0x472d64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x472d64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_472d68:
    // 0x472d68: 0xafa403a0  sw          $a0, 0x3A0($sp)
    ctx->pc = 0x472d68u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 928), GPR_U32(ctx, 4));
label_472d6c:
    // 0x472d6c: 0xafa503b0  sw          $a1, 0x3B0($sp)
    ctx->pc = 0x472d6cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 944), GPR_U32(ctx, 5));
label_472d70:
    // 0x472d70: 0xafa603c0  sw          $a2, 0x3C0($sp)
    ctx->pc = 0x472d70u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 960), GPR_U32(ctx, 6));
label_472d74:
    // 0x472d74: 0xc11c1fc  jal         func_4707F0
label_472d78:
    if (ctx->pc == 0x472D78u) {
        ctx->pc = 0x472D7Cu;
        goto label_472d7c;
    }
    ctx->pc = 0x472D74u;
    SET_GPR_U32(ctx, 31, 0x472D7Cu);
    ctx->pc = 0x4707F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4707F0u, 0x472D74u, 0x472D7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x472D7Cu;
label_472d7c:
    // 0x472d7c: 0x1440002b  bnez        $v0, . + 4 + (0x2B << 2)
label_472d80:
    if (ctx->pc == 0x472D80u) {
        ctx->pc = 0x472D84u;
        goto label_472d84;
    }
    ctx->pc = 0x472D7Cu;
    {
        const bool branch_taken_0x472d7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x472d7c) {
            ctx->pc = 0x472E2Cu;
            goto label_472e2c;
        }
    }
    ctx->pc = 0x472D84u;
label_472d84:
    // 0x472d84: 0x8f83b3bc  lw          $v1, -0x4C44($gp)
    ctx->pc = 0x472d84u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947772)));
label_472d88:
    // 0x472d88: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
label_472d8c:
    if (ctx->pc == 0x472D8Cu) {
        ctx->pc = 0x472D90u;
        goto label_472d90;
    }
    ctx->pc = 0x472D88u;
    {
        const bool branch_taken_0x472d88 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x472d88) {
            ctx->pc = 0x472E2Cu;
            goto label_472e2c;
        }
    }
    ctx->pc = 0x472D90u;
label_472d90:
    // 0x472d90: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x472d90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_472d94:
    // 0x472d94: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x472d94u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_472d98:
    // 0x472d98: 0x27a60390  addiu       $a2, $sp, 0x390
    ctx->pc = 0x472d98u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 912));
label_472d9c:
    // 0x472d9c: 0xc115ee8  jal         func_457BA0
label_472da0:
    if (ctx->pc == 0x472DA0u) {
        ctx->pc = 0x472DA4u;
        goto label_472da4;
    }
    ctx->pc = 0x472D9Cu;
    SET_GPR_U32(ctx, 31, 0x472DA4u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x472D9Cu, 0x472DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x472DA4u;
label_472da4:
    // 0x472da4: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_472da8:
    if (ctx->pc == 0x472DA8u) {
        ctx->pc = 0x472DACu;
        goto label_472dac;
    }
    ctx->pc = 0x472DA4u;
    {
        const bool branch_taken_0x472da4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x472da4) {
            ctx->pc = 0x472E2Cu;
            goto label_472e2c;
        }
    }
    ctx->pc = 0x472DACu;
label_472dac:
    // 0x472dac: 0x8fa30398  lw          $v1, 0x398($sp)
    ctx->pc = 0x472dacu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 920)));
label_472db0:
    // 0x472db0: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
label_472db4:
    if (ctx->pc == 0x472DB4u) {
        ctx->pc = 0x472DB8u;
        goto label_472db8;
    }
    ctx->pc = 0x472DB0u;
    {
        const bool branch_taken_0x472db0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x472db0) {
            ctx->pc = 0x472E2Cu;
            goto label_472e2c;
        }
    }
    ctx->pc = 0x472DB8u;
label_472db8:
    // 0x472db8: 0x27a40250  addiu       $a0, $sp, 0x250
    ctx->pc = 0x472db8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
label_472dbc:
    // 0x472dbc: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x472dbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_472dc0:
    // 0x472dc0: 0x8fa60394  lw          $a2, 0x394($sp)
    ctx->pc = 0x472dc0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 916)));
label_472dc4:
    // 0x472dc4: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x472dc4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_472dc8:
    // 0x472dc8: 0x24e702c8  addiu       $a3, $a3, 0x2C8
    ctx->pc = 0x472dc8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 712));
label_472dcc:
    // 0x472dcc: 0x2408008d  addiu       $t0, $zero, 0x8D
    ctx->pc = 0x472dccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 141));
label_472dd0:
    // 0x472dd0: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x472dd0u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_472dd4:
    // 0x472dd4: 0x25290340  addiu       $t1, $t1, 0x340
    ctx->pc = 0x472dd4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 832));
label_472dd8:
    // 0x472dd8: 0xc113940  jal         func_44E500
label_472ddc:
    if (ctx->pc == 0x472DDCu) {
        ctx->pc = 0x472DE0u;
        goto label_472de0;
    }
    ctx->pc = 0x472DD8u;
    SET_GPR_U32(ctx, 31, 0x472DE0u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x472DD8u, 0x472DE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x472DE0u;
label_472de0:
    // 0x472de0: 0x27a40250  addiu       $a0, $sp, 0x250
    ctx->pc = 0x472de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
label_472de4:
    // 0x472de4: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x472de4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_472de8:
    // 0x472de8: 0x24a50410  addiu       $a1, $a1, 0x410
    ctx->pc = 0x472de8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1040));
label_472dec:
    // 0x472dec: 0xc115c24  jal         func_457090
label_472df0:
    if (ctx->pc == 0x472DF0u) {
        ctx->pc = 0x472DF4u;
        goto label_472df4;
    }
    ctx->pc = 0x472DECu;
    SET_GPR_U32(ctx, 31, 0x472DF4u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x472DECu, 0x472DF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x472DF4u;
label_472df4:
    // 0x472df4: 0x27a40250  addiu       $a0, $sp, 0x250
    ctx->pc = 0x472df4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
label_472df8:
    // 0x472df8: 0x8fa20398  lw          $v0, 0x398($sp)
    ctx->pc = 0x472df8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 920)));
label_472dfc:
    // 0x472dfc: 0x40f809  jalr        $v0
label_472e00:
    if (ctx->pc == 0x472E00u) {
        ctx->pc = 0x472E04u;
        goto label_472e04;
    }
    ctx->pc = 0x472DFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x472E04u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x472DFCu, 0x472E04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x472E04u;
label_472e04:
    // 0x472e04: 0xaf82b3bc  sw          $v0, -0x4C44($gp)
    ctx->pc = 0x472e04u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947772), GPR_U32(ctx, 2));
label_472e08:
    // 0x472e08: 0x8fa20250  lw          $v0, 0x250($sp)
    ctx->pc = 0x472e08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 592)));
label_472e0c:
    // 0x472e0c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_472e10:
    if (ctx->pc == 0x472E10u) {
        ctx->pc = 0x472E14u;
        goto label_472e14;
    }
    ctx->pc = 0x472E0Cu;
    {
        const bool branch_taken_0x472e0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x472e0c) {
            ctx->pc = 0x472E1Cu;
            goto label_472e1c;
        }
    }
    ctx->pc = 0x472E14u;
label_472e14:
    // 0x472e14: 0xd  break       0
    ctx->pc = 0x472e14u;
    runtime->handleBreak(rdram, ctx);
label_472e18:
    // 0x472e18: 0x0  nop
    ctx->pc = 0x472e18u;
    // NOP
label_472e1c:
    // 0x472e1c: 0x27a40250  addiu       $a0, $sp, 0x250
    ctx->pc = 0x472e1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 592));
label_472e20:
    // 0x472e20: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x472e20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_472e24:
    // 0x472e24: 0xc11392c  jal         func_44E4B0
label_472e28:
    if (ctx->pc == 0x472E28u) {
        ctx->pc = 0x472E2Cu;
        goto label_472e2c;
    }
    ctx->pc = 0x472E24u;
    SET_GPR_U32(ctx, 31, 0x472E2Cu);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x472E24u, 0x472E2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x472E2Cu;
label_472e2c:
    // 0x472e2c: 0x8fa303a0  lw          $v1, 0x3A0($sp)
    ctx->pc = 0x472e2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_472e30:
    // 0x472e30: 0x8c630028  lw          $v1, 0x28($v1)
    ctx->pc = 0x472e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 40)));
label_472e34:
    // 0x472e34: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x472e34u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_472e38:
    // 0x472e38: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x472e38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_472e3c:
    // 0x472e3c: 0x1460002b  bnez        $v1, . + 4 + (0x2B << 2)
label_472e40:
    if (ctx->pc == 0x472E40u) {
        ctx->pc = 0x472E44u;
        goto label_472e44;
    }
    ctx->pc = 0x472E3Cu;
    {
        const bool branch_taken_0x472e3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x472e3c) {
            ctx->pc = 0x472EECu;
            goto label_472eec;
        }
    }
    ctx->pc = 0x472E44u;
label_472e44:
    // 0x472e44: 0x8f83b3c0  lw          $v1, -0x4C40($gp)
    ctx->pc = 0x472e44u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947776)));
label_472e48:
    // 0x472e48: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
label_472e4c:
    if (ctx->pc == 0x472E4Cu) {
        ctx->pc = 0x472E50u;
        goto label_472e50;
    }
    ctx->pc = 0x472E48u;
    {
        const bool branch_taken_0x472e48 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x472e48) {
            ctx->pc = 0x472EECu;
            goto label_472eec;
        }
    }
    ctx->pc = 0x472E50u;
label_472e50:
    // 0x472e50: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x472e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_472e54:
    // 0x472e54: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x472e54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_472e58:
    // 0x472e58: 0x27a60380  addiu       $a2, $sp, 0x380
    ctx->pc = 0x472e58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 896));
label_472e5c:
    // 0x472e5c: 0xc115ee8  jal         func_457BA0
label_472e60:
    if (ctx->pc == 0x472E60u) {
        ctx->pc = 0x472E64u;
        goto label_472e64;
    }
    ctx->pc = 0x472E5Cu;
    SET_GPR_U32(ctx, 31, 0x472E64u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x472E5Cu, 0x472E64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x472E64u;
label_472e64:
    // 0x472e64: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_472e68:
    if (ctx->pc == 0x472E68u) {
        ctx->pc = 0x472E6Cu;
        goto label_472e6c;
    }
    ctx->pc = 0x472E64u;
    {
        const bool branch_taken_0x472e64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x472e64) {
            ctx->pc = 0x472EECu;
            goto label_472eec;
        }
    }
    ctx->pc = 0x472E6Cu;
label_472e6c:
    // 0x472e6c: 0x8fa30388  lw          $v1, 0x388($sp)
    ctx->pc = 0x472e6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 904)));
label_472e70:
    // 0x472e70: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
label_472e74:
    if (ctx->pc == 0x472E74u) {
        ctx->pc = 0x472E78u;
        goto label_472e78;
    }
    ctx->pc = 0x472E70u;
    {
        const bool branch_taken_0x472e70 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x472e70) {
            ctx->pc = 0x472EECu;
            goto label_472eec;
        }
    }
    ctx->pc = 0x472E78u;
label_472e78:
    // 0x472e78: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x472e78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_472e7c:
    // 0x472e7c: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x472e7cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_472e80:
    // 0x472e80: 0x8fa60384  lw          $a2, 0x384($sp)
    ctx->pc = 0x472e80u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 900)));
label_472e84:
    // 0x472e84: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x472e84u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_472e88:
    // 0x472e88: 0x24e702c8  addiu       $a3, $a3, 0x2C8
    ctx->pc = 0x472e88u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 712));
label_472e8c:
    // 0x472e8c: 0x2408008e  addiu       $t0, $zero, 0x8E
    ctx->pc = 0x472e8cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 142));
label_472e90:
    // 0x472e90: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x472e90u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_472e94:
    // 0x472e94: 0x252903c0  addiu       $t1, $t1, 0x3C0
    ctx->pc = 0x472e94u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 960));
label_472e98:
    // 0x472e98: 0xc113940  jal         func_44E500
label_472e9c:
    if (ctx->pc == 0x472E9Cu) {
        ctx->pc = 0x472EA0u;
        goto label_472ea0;
    }
    ctx->pc = 0x472E98u;
    SET_GPR_U32(ctx, 31, 0x472EA0u);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x472E98u, 0x472EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x472EA0u;
label_472ea0:
    // 0x472ea0: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x472ea0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_472ea4:
    // 0x472ea4: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x472ea4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_472ea8:
    // 0x472ea8: 0x24a50470  addiu       $a1, $a1, 0x470
    ctx->pc = 0x472ea8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1136));
label_472eac:
    // 0x472eac: 0xc115c24  jal         func_457090
label_472eb0:
    if (ctx->pc == 0x472EB0u) {
        ctx->pc = 0x472EB4u;
        goto label_472eb4;
    }
    ctx->pc = 0x472EACu;
    SET_GPR_U32(ctx, 31, 0x472EB4u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x472EACu, 0x472EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x472EB4u;
label_472eb4:
    // 0x472eb4: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x472eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_472eb8:
    // 0x472eb8: 0x8fa20388  lw          $v0, 0x388($sp)
    ctx->pc = 0x472eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 904)));
label_472ebc:
    // 0x472ebc: 0x40f809  jalr        $v0
label_472ec0:
    if (ctx->pc == 0x472EC0u) {
        ctx->pc = 0x472EC4u;
        goto label_472ec4;
    }
    ctx->pc = 0x472EBCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x472EC4u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x472EBCu, 0x472EC4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x472EC4u;
label_472ec4:
    // 0x472ec4: 0xaf82b3c0  sw          $v0, -0x4C40($gp)
    ctx->pc = 0x472ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947776), GPR_U32(ctx, 2));
label_472ec8:
    // 0x472ec8: 0x8fa20130  lw          $v0, 0x130($sp)
    ctx->pc = 0x472ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 304)));
label_472ecc:
    // 0x472ecc: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_472ed0:
    if (ctx->pc == 0x472ED0u) {
        ctx->pc = 0x472ED4u;
        goto label_472ed4;
    }
    ctx->pc = 0x472ECCu;
    {
        const bool branch_taken_0x472ecc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x472ecc) {
            ctx->pc = 0x472EDCu;
            goto label_472edc;
        }
    }
    ctx->pc = 0x472ED4u;
label_472ed4:
    // 0x472ed4: 0xd  break       0
    ctx->pc = 0x472ed4u;
    runtime->handleBreak(rdram, ctx);
label_472ed8:
    // 0x472ed8: 0x0  nop
    ctx->pc = 0x472ed8u;
    // NOP
label_472edc:
    // 0x472edc: 0x27a40130  addiu       $a0, $sp, 0x130
    ctx->pc = 0x472edcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_472ee0:
    // 0x472ee0: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x472ee0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_472ee4:
    // 0x472ee4: 0xc11392c  jal         func_44E4B0
label_472ee8:
    if (ctx->pc == 0x472EE8u) {
        ctx->pc = 0x472EECu;
        goto label_472eec;
    }
    ctx->pc = 0x472EE4u;
    SET_GPR_U32(ctx, 31, 0x472EECu);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x472EE4u, 0x472EECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x472EECu;
label_472eec:
    // 0x472eec: 0x8fa303b0  lw          $v1, 0x3B0($sp)
    ctx->pc = 0x472eecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 944)));
label_472ef0:
    // 0x472ef0: 0x10600004  beqz        $v1, . + 4 + (0x4 << 2)
label_472ef4:
    if (ctx->pc == 0x472EF4u) {
        ctx->pc = 0x472EF8u;
        goto label_472ef8;
    }
    ctx->pc = 0x472EF0u;
    {
        const bool branch_taken_0x472ef0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x472ef0) {
            ctx->pc = 0x472F04u;
            goto label_472f04;
        }
    }
    ctx->pc = 0x472EF8u;
label_472ef8:
    // 0x472ef8: 0x8fa303c0  lw          $v1, 0x3C0($sp)
    ctx->pc = 0x472ef8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 960)));
label_472efc:
    // 0x472efc: 0x1460002c  bnez        $v1, . + 4 + (0x2C << 2)
label_472f00:
    if (ctx->pc == 0x472F00u) {
        ctx->pc = 0x472F04u;
        goto label_472f04;
    }
    ctx->pc = 0x472EFCu;
    {
        const bool branch_taken_0x472efc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x472efc) {
            ctx->pc = 0x472FB0u;
            goto label_472fb0;
        }
    }
    ctx->pc = 0x472F04u;
label_472f04:
    // 0x472f04: 0x8f83b3c4  lw          $v1, -0x4C3C($gp)
    ctx->pc = 0x472f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947780)));
label_472f08:
    // 0x472f08: 0x10600027  beqz        $v1, . + 4 + (0x27 << 2)
label_472f0c:
    if (ctx->pc == 0x472F0Cu) {
        ctx->pc = 0x472F10u;
        goto label_472f10;
    }
    ctx->pc = 0x472F08u;
    {
        const bool branch_taken_0x472f08 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x472f08) {
            ctx->pc = 0x472FA8u;
            goto label_472fa8;
        }
    }
    ctx->pc = 0x472F10u;
label_472f10:
    // 0x472f10: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x472f10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_472f14:
    // 0x472f14: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x472f14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_472f18:
    // 0x472f18: 0x27a60370  addiu       $a2, $sp, 0x370
    ctx->pc = 0x472f18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 880));
label_472f1c:
    // 0x472f1c: 0xc115ee8  jal         func_457BA0
label_472f20:
    if (ctx->pc == 0x472F20u) {
        ctx->pc = 0x472F24u;
        goto label_472f24;
    }
    ctx->pc = 0x472F1Cu;
    SET_GPR_U32(ctx, 31, 0x472F24u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x472F1Cu, 0x472F24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x472F24u;
label_472f24:
    // 0x472f24: 0x10400020  beqz        $v0, . + 4 + (0x20 << 2)
label_472f28:
    if (ctx->pc == 0x472F28u) {
        ctx->pc = 0x472F2Cu;
        goto label_472f2c;
    }
    ctx->pc = 0x472F24u;
    {
        const bool branch_taken_0x472f24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x472f24) {
            ctx->pc = 0x472FA8u;
            goto label_472fa8;
        }
    }
    ctx->pc = 0x472F2Cu;
label_472f2c:
    // 0x472f2c: 0x8fa30378  lw          $v1, 0x378($sp)
    ctx->pc = 0x472f2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 888)));
label_472f30:
    // 0x472f30: 0x1060001d  beqz        $v1, . + 4 + (0x1D << 2)
label_472f34:
    if (ctx->pc == 0x472F34u) {
        ctx->pc = 0x472F38u;
        goto label_472f38;
    }
    ctx->pc = 0x472F30u;
    {
        const bool branch_taken_0x472f30 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x472f30) {
            ctx->pc = 0x472FA8u;
            goto label_472fa8;
        }
    }
    ctx->pc = 0x472F38u;
label_472f38:
    // 0x472f38: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x472f38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_472f3c:
    // 0x472f3c: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x472f3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_472f40:
    // 0x472f40: 0x8fa60374  lw          $a2, 0x374($sp)
    ctx->pc = 0x472f40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 884)));
label_472f44:
    // 0x472f44: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x472f44u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_472f48:
    // 0x472f48: 0x24e702c8  addiu       $a3, $a3, 0x2C8
    ctx->pc = 0x472f48u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 712));
label_472f4c:
    // 0x472f4c: 0x24080092  addiu       $t0, $zero, 0x92
    ctx->pc = 0x472f4cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 146));
label_472f50:
    // 0x472f50: 0x2789b3c8  addiu       $t1, $gp, -0x4C38
    ctx->pc = 0x472f50u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 28), 4294947784));
label_472f54:
    // 0x472f54: 0xc113940  jal         func_44E500
label_472f58:
    if (ctx->pc == 0x472F58u) {
        ctx->pc = 0x472F5Cu;
        goto label_472f5c;
    }
    ctx->pc = 0x472F54u;
    SET_GPR_U32(ctx, 31, 0x472F5Cu);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x472F54u, 0x472F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x472F5Cu;
label_472f5c:
    // 0x472f5c: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x472f5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_472f60:
    // 0x472f60: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x472f60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_472f64:
    // 0x472f64: 0x24a504c0  addiu       $a1, $a1, 0x4C0
    ctx->pc = 0x472f64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1216));
label_472f68:
    // 0x472f68: 0xc115c24  jal         func_457090
label_472f6c:
    if (ctx->pc == 0x472F6Cu) {
        ctx->pc = 0x472F70u;
        goto label_472f70;
    }
    ctx->pc = 0x472F68u;
    SET_GPR_U32(ctx, 31, 0x472F70u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x472F68u, 0x472F70u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x472F70u;
label_472f70:
    // 0x472f70: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x472f70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_472f74:
    // 0x472f74: 0x8fa20378  lw          $v0, 0x378($sp)
    ctx->pc = 0x472f74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 888)));
label_472f78:
    // 0x472f78: 0x40f809  jalr        $v0
label_472f7c:
    if (ctx->pc == 0x472F7Cu) {
        ctx->pc = 0x472F80u;
        goto label_472f80;
    }
    ctx->pc = 0x472F78u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x472F80u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x472F78u, 0x472F80u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x472F80u;
label_472f80:
    // 0x472f80: 0xaf82b3c4  sw          $v0, -0x4C3C($gp)
    ctx->pc = 0x472f80u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947780), GPR_U32(ctx, 2));
label_472f84:
    // 0x472f84: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x472f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_472f88:
    // 0x472f88: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_472f8c:
    if (ctx->pc == 0x472F8Cu) {
        ctx->pc = 0x472F90u;
        goto label_472f90;
    }
    ctx->pc = 0x472F88u;
    {
        const bool branch_taken_0x472f88 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x472f88) {
            ctx->pc = 0x472F98u;
            goto label_472f98;
        }
    }
    ctx->pc = 0x472F90u;
label_472f90:
    // 0x472f90: 0xd  break       0
    ctx->pc = 0x472f90u;
    runtime->handleBreak(rdram, ctx);
label_472f94:
    // 0x472f94: 0x0  nop
    ctx->pc = 0x472f94u;
    // NOP
label_472f98:
    // 0x472f98: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x472f98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_472f9c:
    // 0x472f9c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x472f9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_472fa0:
    // 0x472fa0: 0xc11392c  jal         func_44E4B0
label_472fa4:
    if (ctx->pc == 0x472FA4u) {
        ctx->pc = 0x472FA8u;
        goto label_472fa8;
    }
    ctx->pc = 0x472FA0u;
    SET_GPR_U32(ctx, 31, 0x472FA8u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x472FA0u, 0x472FA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x472FA8u;
label_472fa8:
    // 0x472fa8: 0x10000009  b           . + 4 + (0x9 << 2)
label_472fac:
    if (ctx->pc == 0x472FACu) {
        ctx->pc = 0x472FB0u;
        goto label_472fb0;
    }
    ctx->pc = 0x472FA8u;
    {
        const bool branch_taken_0x472fa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x472fa8) {
            ctx->pc = 0x472FD0u;
            goto label_472fd0;
        }
    }
    ctx->pc = 0x472FB0u;
label_472fb0:
    // 0x472fb0: 0x8fa303a0  lw          $v1, 0x3A0($sp)
    ctx->pc = 0x472fb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_472fb4:
    // 0x472fb4: 0xc4600038  lwc1        $f0, 0x38($v1)
    ctx->pc = 0x472fb4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_472fb8:
    // 0x472fb8: 0x8fa303b0  lw          $v1, 0x3B0($sp)
    ctx->pc = 0x472fb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 944)));
label_472fbc:
    // 0x472fbc: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x472fbcu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_472fc0:
    // 0x472fc0: 0x8fa303a0  lw          $v1, 0x3A0($sp)
    ctx->pc = 0x472fc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 928)));
label_472fc4:
    // 0x472fc4: 0xc460003c  lwc1        $f0, 0x3C($v1)
    ctx->pc = 0x472fc4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 3), 60)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_472fc8:
    // 0x472fc8: 0x8fa303c0  lw          $v1, 0x3C0($sp)
    ctx->pc = 0x472fc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 960)));
label_472fcc:
    // 0x472fcc: 0xe4600000  swc1        $f0, 0x0($v1)
    ctx->pc = 0x472fccu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 0), bits); }
label_472fd0:
    // 0x472fd0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x472fd0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_472fd4:
    // 0x472fd4: 0x27bd03d0  addiu       $sp, $sp, 0x3D0
    ctx->pc = 0x472fd4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 976));
label_472fd8:
    // 0x472fd8: 0x3e00008  jr          $ra
label_472fdc:
    if (ctx->pc == 0x472FDCu) {
        ctx->pc = 0x472FE0u;
        goto label_fallthrough_0x472fd8;
    }
    ctx->pc = 0x472FD8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x472FD8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x472fd8:
    ctx->pc = 0x472FE0u;
}
