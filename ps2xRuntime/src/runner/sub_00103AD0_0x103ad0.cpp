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

// Function: sub_00103AD0
// Address: 0x103ad0 - 0x103e50
void sub_00103AD0_0x103ad0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00103AD0_0x103ad0");
#endif

    switch (ctx->pc) {
        case 0x103ad0u: goto label_103ad0;
        case 0x103ad4u: goto label_103ad4;
        case 0x103ad8u: goto label_103ad8;
        case 0x103adcu: goto label_103adc;
        case 0x103ae0u: goto label_103ae0;
        case 0x103ae4u: goto label_103ae4;
        case 0x103ae8u: goto label_103ae8;
        case 0x103aecu: goto label_103aec;
        case 0x103af0u: goto label_103af0;
        case 0x103af4u: goto label_103af4;
        case 0x103af8u: goto label_103af8;
        case 0x103afcu: goto label_103afc;
        case 0x103b00u: goto label_103b00;
        case 0x103b04u: goto label_103b04;
        case 0x103b08u: goto label_103b08;
        case 0x103b0cu: goto label_103b0c;
        case 0x103b10u: goto label_103b10;
        case 0x103b14u: goto label_103b14;
        case 0x103b18u: goto label_103b18;
        case 0x103b1cu: goto label_103b1c;
        case 0x103b20u: goto label_103b20;
        case 0x103b24u: goto label_103b24;
        case 0x103b28u: goto label_103b28;
        case 0x103b2cu: goto label_103b2c;
        case 0x103b30u: goto label_103b30;
        case 0x103b34u: goto label_103b34;
        case 0x103b38u: goto label_103b38;
        case 0x103b3cu: goto label_103b3c;
        case 0x103b40u: goto label_103b40;
        case 0x103b44u: goto label_103b44;
        case 0x103b48u: goto label_103b48;
        case 0x103b4cu: goto label_103b4c;
        case 0x103b50u: goto label_103b50;
        case 0x103b54u: goto label_103b54;
        case 0x103b58u: goto label_103b58;
        case 0x103b5cu: goto label_103b5c;
        case 0x103b60u: goto label_103b60;
        case 0x103b64u: goto label_103b64;
        case 0x103b68u: goto label_103b68;
        case 0x103b6cu: goto label_103b6c;
        case 0x103b70u: goto label_103b70;
        case 0x103b74u: goto label_103b74;
        case 0x103b78u: goto label_103b78;
        case 0x103b7cu: goto label_103b7c;
        case 0x103b80u: goto label_103b80;
        case 0x103b84u: goto label_103b84;
        case 0x103b88u: goto label_103b88;
        case 0x103b8cu: goto label_103b8c;
        case 0x103b90u: goto label_103b90;
        case 0x103b94u: goto label_103b94;
        case 0x103b98u: goto label_103b98;
        case 0x103b9cu: goto label_103b9c;
        case 0x103ba0u: goto label_103ba0;
        case 0x103ba4u: goto label_103ba4;
        case 0x103ba8u: goto label_103ba8;
        case 0x103bacu: goto label_103bac;
        case 0x103bb0u: goto label_103bb0;
        case 0x103bb4u: goto label_103bb4;
        case 0x103bb8u: goto label_103bb8;
        case 0x103bbcu: goto label_103bbc;
        case 0x103bc0u: goto label_103bc0;
        case 0x103bc4u: goto label_103bc4;
        case 0x103bc8u: goto label_103bc8;
        case 0x103bccu: goto label_103bcc;
        case 0x103bd0u: goto label_103bd0;
        case 0x103bd4u: goto label_103bd4;
        case 0x103bd8u: goto label_103bd8;
        case 0x103bdcu: goto label_103bdc;
        case 0x103be0u: goto label_103be0;
        case 0x103be4u: goto label_103be4;
        case 0x103be8u: goto label_103be8;
        case 0x103becu: goto label_103bec;
        case 0x103bf0u: goto label_103bf0;
        case 0x103bf4u: goto label_103bf4;
        case 0x103bf8u: goto label_103bf8;
        case 0x103bfcu: goto label_103bfc;
        case 0x103c00u: goto label_103c00;
        case 0x103c04u: goto label_103c04;
        case 0x103c08u: goto label_103c08;
        case 0x103c0cu: goto label_103c0c;
        case 0x103c10u: goto label_103c10;
        case 0x103c14u: goto label_103c14;
        case 0x103c18u: goto label_103c18;
        case 0x103c1cu: goto label_103c1c;
        case 0x103c20u: goto label_103c20;
        case 0x103c24u: goto label_103c24;
        case 0x103c28u: goto label_103c28;
        case 0x103c2cu: goto label_103c2c;
        case 0x103c30u: goto label_103c30;
        case 0x103c34u: goto label_103c34;
        case 0x103c38u: goto label_103c38;
        case 0x103c3cu: goto label_103c3c;
        case 0x103c40u: goto label_103c40;
        case 0x103c44u: goto label_103c44;
        case 0x103c48u: goto label_103c48;
        case 0x103c4cu: goto label_103c4c;
        case 0x103c50u: goto label_103c50;
        case 0x103c54u: goto label_103c54;
        case 0x103c58u: goto label_103c58;
        case 0x103c5cu: goto label_103c5c;
        case 0x103c60u: goto label_103c60;
        case 0x103c64u: goto label_103c64;
        case 0x103c68u: goto label_103c68;
        case 0x103c6cu: goto label_103c6c;
        case 0x103c70u: goto label_103c70;
        case 0x103c74u: goto label_103c74;
        case 0x103c78u: goto label_103c78;
        case 0x103c7cu: goto label_103c7c;
        case 0x103c80u: goto label_103c80;
        case 0x103c84u: goto label_103c84;
        case 0x103c88u: goto label_103c88;
        case 0x103c8cu: goto label_103c8c;
        case 0x103c90u: goto label_103c90;
        case 0x103c94u: goto label_103c94;
        case 0x103c98u: goto label_103c98;
        case 0x103c9cu: goto label_103c9c;
        case 0x103ca0u: goto label_103ca0;
        case 0x103ca4u: goto label_103ca4;
        case 0x103ca8u: goto label_103ca8;
        case 0x103cacu: goto label_103cac;
        case 0x103cb0u: goto label_103cb0;
        case 0x103cb4u: goto label_103cb4;
        case 0x103cb8u: goto label_103cb8;
        case 0x103cbcu: goto label_103cbc;
        case 0x103cc0u: goto label_103cc0;
        case 0x103cc4u: goto label_103cc4;
        case 0x103cc8u: goto label_103cc8;
        case 0x103cccu: goto label_103ccc;
        case 0x103cd0u: goto label_103cd0;
        case 0x103cd4u: goto label_103cd4;
        case 0x103cd8u: goto label_103cd8;
        case 0x103cdcu: goto label_103cdc;
        case 0x103ce0u: goto label_103ce0;
        case 0x103ce4u: goto label_103ce4;
        case 0x103ce8u: goto label_103ce8;
        case 0x103cecu: goto label_103cec;
        case 0x103cf0u: goto label_103cf0;
        case 0x103cf4u: goto label_103cf4;
        case 0x103cf8u: goto label_103cf8;
        case 0x103cfcu: goto label_103cfc;
        case 0x103d00u: goto label_103d00;
        case 0x103d04u: goto label_103d04;
        case 0x103d08u: goto label_103d08;
        case 0x103d0cu: goto label_103d0c;
        case 0x103d10u: goto label_103d10;
        case 0x103d14u: goto label_103d14;
        case 0x103d18u: goto label_103d18;
        case 0x103d1cu: goto label_103d1c;
        case 0x103d20u: goto label_103d20;
        case 0x103d24u: goto label_103d24;
        case 0x103d28u: goto label_103d28;
        case 0x103d2cu: goto label_103d2c;
        case 0x103d30u: goto label_103d30;
        case 0x103d34u: goto label_103d34;
        case 0x103d38u: goto label_103d38;
        case 0x103d3cu: goto label_103d3c;
        case 0x103d40u: goto label_103d40;
        case 0x103d44u: goto label_103d44;
        case 0x103d48u: goto label_103d48;
        case 0x103d4cu: goto label_103d4c;
        case 0x103d50u: goto label_103d50;
        case 0x103d54u: goto label_103d54;
        case 0x103d58u: goto label_103d58;
        case 0x103d5cu: goto label_103d5c;
        case 0x103d60u: goto label_103d60;
        case 0x103d64u: goto label_103d64;
        case 0x103d68u: goto label_103d68;
        case 0x103d6cu: goto label_103d6c;
        case 0x103d70u: goto label_103d70;
        case 0x103d74u: goto label_103d74;
        case 0x103d78u: goto label_103d78;
        case 0x103d7cu: goto label_103d7c;
        case 0x103d80u: goto label_103d80;
        case 0x103d84u: goto label_103d84;
        case 0x103d88u: goto label_103d88;
        case 0x103d8cu: goto label_103d8c;
        case 0x103d90u: goto label_103d90;
        case 0x103d94u: goto label_103d94;
        case 0x103d98u: goto label_103d98;
        case 0x103d9cu: goto label_103d9c;
        case 0x103da0u: goto label_103da0;
        case 0x103da4u: goto label_103da4;
        case 0x103da8u: goto label_103da8;
        case 0x103dacu: goto label_103dac;
        case 0x103db0u: goto label_103db0;
        case 0x103db4u: goto label_103db4;
        case 0x103db8u: goto label_103db8;
        case 0x103dbcu: goto label_103dbc;
        case 0x103dc0u: goto label_103dc0;
        case 0x103dc4u: goto label_103dc4;
        case 0x103dc8u: goto label_103dc8;
        case 0x103dccu: goto label_103dcc;
        case 0x103dd0u: goto label_103dd0;
        case 0x103dd4u: goto label_103dd4;
        case 0x103dd8u: goto label_103dd8;
        case 0x103ddcu: goto label_103ddc;
        case 0x103de0u: goto label_103de0;
        case 0x103de4u: goto label_103de4;
        case 0x103de8u: goto label_103de8;
        case 0x103decu: goto label_103dec;
        case 0x103df0u: goto label_103df0;
        case 0x103df4u: goto label_103df4;
        case 0x103df8u: goto label_103df8;
        case 0x103dfcu: goto label_103dfc;
        case 0x103e00u: goto label_103e00;
        case 0x103e04u: goto label_103e04;
        case 0x103e08u: goto label_103e08;
        case 0x103e0cu: goto label_103e0c;
        case 0x103e10u: goto label_103e10;
        case 0x103e14u: goto label_103e14;
        case 0x103e18u: goto label_103e18;
        case 0x103e1cu: goto label_103e1c;
        case 0x103e20u: goto label_103e20;
        case 0x103e24u: goto label_103e24;
        case 0x103e28u: goto label_103e28;
        case 0x103e2cu: goto label_103e2c;
        case 0x103e30u: goto label_103e30;
        case 0x103e34u: goto label_103e34;
        case 0x103e38u: goto label_103e38;
        case 0x103e3cu: goto label_103e3c;
        case 0x103e40u: goto label_103e40;
        case 0x103e44u: goto label_103e44;
        case 0x103e48u: goto label_103e48;
        case 0x103e4cu: goto label_103e4c;
        default: break;
    }

    ctx->pc = 0x103ad0u;

label_103ad0:
    // 0x103ad0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x103ad0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_103ad4:
    // 0x103ad4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x103ad4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_103ad8:
    // 0x103ad8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x103ad8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_103adc:
    // 0x103adc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x103adcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_103ae0:
    // 0x103ae0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x103ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_103ae4:
    // 0x103ae4: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x103ae4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_103ae8:
    // 0x103ae8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x103ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_103aec:
    // 0x103aec: 0x8c440054  lw          $a0, 0x54($v0)
    ctx->pc = 0x103aecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 84)));
label_103af0:
    // 0x103af0: 0xc08e4e8  jal         func_2393A0
label_103af4:
    if (ctx->pc == 0x103AF4u) {
        ctx->pc = 0x103AF8u;
        goto label_103af8;
    }
    ctx->pc = 0x103AF0u;
    SET_GPR_U32(ctx, 31, 0x103AF8u);
    ctx->pc = 0x2393A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2393A0u, 0x103AF0u, 0x103AF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103AF8u;
label_103af8:
    // 0x103af8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x103af8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_103afc:
    // 0x103afc: 0x8c440044  lw          $a0, 0x44($v0)
    ctx->pc = 0x103afcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_103b00:
    // 0x103b00: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x103b00u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_103b04:
    // 0x103b04: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x103b04u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_103b08:
    // 0x103b08: 0x320f809  jalr        $t9
label_103b0c:
    if (ctx->pc == 0x103B0Cu) {
        ctx->pc = 0x103B10u;
        goto label_103b10;
    }
    ctx->pc = 0x103B08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x103B10u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103B08u, 0x103B10u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x103B10u;
label_103b10:
    // 0x103b10: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x103b10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_103b14:
    // 0x103b14: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x103b14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_103b18:
    // 0x103b18: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x103b18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_103b1c:
    // 0x103b1c: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x103b1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_103b20:
    // 0x103b20: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x103b20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_103b24:
    // 0x103b24: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x103b24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_103b28:
    // 0x103b28: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x103b28u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_103b2c:
    // 0x103b2c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x103b2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_103b30:
    // 0x103b30: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x103b30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_103b34:
    // 0x103b34: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x103b34u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_103b38:
    // 0x103b38: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x103b38u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_103b3c:
    // 0x103b3c: 0x320f809  jalr        $t9
label_103b40:
    if (ctx->pc == 0x103B40u) {
        ctx->pc = 0x103B44u;
        goto label_103b44;
    }
    ctx->pc = 0x103B3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x103B44u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103B3Cu, 0x103B44u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x103B44u;
label_103b44:
    // 0x103b44: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x103b44u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_103b48:
    // 0x103b48: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x103b48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_103b4c:
    // 0x103b4c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x103b4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_103b50:
    // 0x103b50: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x103b50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_103b54:
    // 0x103b54: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x103b54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_103b58:
    // 0x103b58: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x103b58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_103b5c:
    // 0x103b5c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x103b5cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_103b60:
    // 0x103b60: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x103b60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_103b64:
    // 0x103b64: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x103b64u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_103b68:
    // 0x103b68: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x103b68u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_103b6c:
    // 0x103b6c: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x103b6cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_103b70:
    // 0x103b70: 0x320f809  jalr        $t9
label_103b74:
    if (ctx->pc == 0x103B74u) {
        ctx->pc = 0x103B78u;
        goto label_103b78;
    }
    ctx->pc = 0x103B70u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x103B78u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103B70u, 0x103B78u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x103B78u;
label_103b78:
    // 0x103b78: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x103b78u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_103b7c:
    // 0x103b7c: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x103b7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_103b80:
    // 0x103b80: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x103b80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_103b84:
    // 0x103b84: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x103b84u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_103b88:
    // 0x103b88: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x103b88u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_103b8c:
    // 0x103b8c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x103b8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_103b90:
    // 0x103b90: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x103b90u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_103b94:
    // 0x103b94: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x103b94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_103b98:
    // 0x103b98: 0x8c44004c  lw          $a0, 0x4C($v0)
    ctx->pc = 0x103b98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_103b9c:
    // 0x103b9c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x103b9cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_103ba0:
    // 0x103ba0: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x103ba0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_103ba4:
    // 0x103ba4: 0x320f809  jalr        $t9
label_103ba8:
    if (ctx->pc == 0x103BA8u) {
        ctx->pc = 0x103BACu;
        goto label_103bac;
    }
    ctx->pc = 0x103BA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x103BACu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103BA4u, 0x103BACu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x103BACu;
label_103bac:
    // 0x103bac: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x103bacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_103bb0:
    // 0x103bb0: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x103bb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_103bb4:
    // 0x103bb4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x103bb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_103bb8:
    // 0x103bb8: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x103bb8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_103bbc:
    // 0x103bbc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x103bbcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_103bc0:
    // 0x103bc0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x103bc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_103bc4:
    // 0x103bc4: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x103bc4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_103bc8:
    // 0x103bc8: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x103bc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_103bcc:
    // 0x103bcc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x103bccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_103bd0:
    // 0x103bd0: 0x14620029  bne         $v1, $v0, . + 4 + (0x29 << 2)
label_103bd4:
    if (ctx->pc == 0x103BD4u) {
        ctx->pc = 0x103BD8u;
        goto label_103bd8;
    }
    ctx->pc = 0x103BD0u;
    {
        const bool branch_taken_0x103bd0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x103bd0) {
            ctx->pc = 0x103C78u;
            goto label_103c78;
        }
    }
    ctx->pc = 0x103BD8u;
label_103bd8:
    // 0x103bd8: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x103bd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_103bdc:
    // 0x103bdc: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x103bdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_103be0:
    // 0x103be0: 0x8c64003c  lw          $a0, 0x3C($v1)
    ctx->pc = 0x103be0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_103be4:
    // 0x103be4: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x103be4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_103be8:
    // 0x103be8: 0x24a512c0  addiu       $a1, $a1, 0x12C0
    ctx->pc = 0x103be8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4800));
label_103bec:
    // 0x103bec: 0x3c060024  lui         $a2, 0x24
    ctx->pc = 0x103becu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)36 << 16));
label_103bf0:
    // 0x103bf0: 0x24c62150  addiu       $a2, $a2, 0x2150
    ctx->pc = 0x103bf0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8528));
label_103bf4:
    // 0x103bf4: 0x8c470040  lw          $a3, 0x40($v0)
    ctx->pc = 0x103bf4u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_103bf8:
    // 0x103bf8: 0xc085f9c  jal         func_217E70
label_103bfc:
    if (ctx->pc == 0x103BFCu) {
        ctx->pc = 0x103C00u;
        goto label_103c00;
    }
    ctx->pc = 0x103BF8u;
    SET_GPR_U32(ctx, 31, 0x103C00u);
    ctx->pc = 0x217E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217E70u, 0x103BF8u, 0x103C00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103C00u;
label_103c00:
    // 0x103c00: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x103c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_103c04:
    // 0x103c04: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x103c04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_103c08:
    // 0x103c08: 0x8c64003c  lw          $a0, 0x3C($v1)
    ctx->pc = 0x103c08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_103c0c:
    // 0x103c0c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x103c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_103c10:
    // 0x103c10: 0x24a512d8  addiu       $a1, $a1, 0x12D8
    ctx->pc = 0x103c10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4824));
label_103c14:
    // 0x103c14: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x103c14u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
label_103c18:
    // 0x103c18: 0x24c62160  addiu       $a2, $a2, 0x2160
    ctx->pc = 0x103c18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 8544));
label_103c1c:
    // 0x103c1c: 0x8c470048  lw          $a3, 0x48($v0)
    ctx->pc = 0x103c1cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_103c20:
    // 0x103c20: 0xc085f9c  jal         func_217E70
label_103c24:
    if (ctx->pc == 0x103C24u) {
        ctx->pc = 0x103C28u;
        goto label_103c28;
    }
    ctx->pc = 0x103C20u;
    SET_GPR_U32(ctx, 31, 0x103C28u);
    ctx->pc = 0x217E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217E70u, 0x103C20u, 0x103C28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103C28u;
label_103c28:
    // 0x103c28: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x103c28u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_103c2c:
    // 0x103c2c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x103c2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_103c30:
    // 0x103c30: 0x8c64003c  lw          $a0, 0x3C($v1)
    ctx->pc = 0x103c30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_103c34:
    // 0x103c34: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x103c34u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_103c38:
    // 0x103c38: 0x24a512e8  addiu       $a1, $a1, 0x12E8
    ctx->pc = 0x103c38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4840));
label_103c3c:
    // 0x103c3c: 0x3c060028  lui         $a2, 0x28
    ctx->pc = 0x103c3cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)40 << 16));
label_103c40:
    // 0x103c40: 0x24c6bfa0  addiu       $a2, $a2, -0x4060
    ctx->pc = 0x103c40u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294950816));
label_103c44:
    // 0x103c44: 0x8c470044  lw          $a3, 0x44($v0)
    ctx->pc = 0x103c44u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_103c48:
    // 0x103c48: 0xc085f9c  jal         func_217E70
label_103c4c:
    if (ctx->pc == 0x103C4Cu) {
        ctx->pc = 0x103C50u;
        goto label_103c50;
    }
    ctx->pc = 0x103C48u;
    SET_GPR_U32(ctx, 31, 0x103C50u);
    ctx->pc = 0x217E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217E70u, 0x103C48u, 0x103C50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103C50u;
label_103c50:
    // 0x103c50: 0x8fa30020  lw          $v1, 0x20($sp)
    ctx->pc = 0x103c50u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_103c54:
    // 0x103c54: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x103c54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_103c58:
    // 0x103c58: 0x8c64003c  lw          $a0, 0x3C($v1)
    ctx->pc = 0x103c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 60)));
label_103c5c:
    // 0x103c5c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x103c5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_103c60:
    // 0x103c60: 0x24a512f8  addiu       $a1, $a1, 0x12F8
    ctx->pc = 0x103c60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4856));
label_103c64:
    // 0x103c64: 0x3c06002b  lui         $a2, 0x2B
    ctx->pc = 0x103c64u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)43 << 16));
label_103c68:
    // 0x103c68: 0x24c6ffb0  addiu       $a2, $a2, -0x50
    ctx->pc = 0x103c68u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967216));
label_103c6c:
    // 0x103c6c: 0x8c47004c  lw          $a3, 0x4C($v0)
    ctx->pc = 0x103c6cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_103c70:
    // 0x103c70: 0xc085f9c  jal         func_217E70
label_103c74:
    if (ctx->pc == 0x103C74u) {
        ctx->pc = 0x103C78u;
        goto label_103c78;
    }
    ctx->pc = 0x103C70u;
    SET_GPR_U32(ctx, 31, 0x103C78u);
    ctx->pc = 0x217E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x217E70u, 0x103C70u, 0x103C78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103C78u;
label_103c78:
    // 0x103c78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x103c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_103c7c:
    // 0x103c7c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x103c7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_103c80:
    // 0x103c80: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x103c80u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_103c84:
    // 0x103c84: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x103c84u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_103c88:
    // 0x103c88: 0x3e00008  jr          $ra
label_103c8c:
    if (ctx->pc == 0x103C8Cu) {
        ctx->pc = 0x103C90u;
        goto label_103c90;
    }
    ctx->pc = 0x103C88u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103C88u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x103C90u;
label_103c90:
    // 0x103c90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x103c90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_103c94:
    // 0x103c94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x103c94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_103c98:
    // 0x103c98: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x103c98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_103c9c:
    // 0x103c9c: 0xafa50020  sw          $a1, 0x20($sp)
    ctx->pc = 0x103c9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 5));
label_103ca0:
    // 0x103ca0: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x103ca0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_103ca4:
    // 0x103ca4: 0x8fa50020  lw          $a1, 0x20($sp)
    ctx->pc = 0x103ca4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_103ca8:
    // 0x103ca8: 0xc0852b8  jal         func_214AE0
label_103cac:
    if (ctx->pc == 0x103CACu) {
        ctx->pc = 0x103CB0u;
        goto label_103cb0;
    }
    ctx->pc = 0x103CA8u;
    SET_GPR_U32(ctx, 31, 0x103CB0u);
    ctx->pc = 0x214AE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214AE0u, 0x103CA8u, 0x103CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103CB0u;
label_103cb0:
    // 0x103cb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x103cb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_103cb4:
    // 0x103cb4: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x103cb4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_103cb8:
    // 0x103cb8: 0x3e00008  jr          $ra
label_103cbc:
    if (ctx->pc == 0x103CBCu) {
        ctx->pc = 0x103CC0u;
        goto label_103cc0;
    }
    ctx->pc = 0x103CB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103CB8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x103CC0u;
label_103cc0:
    // 0x103cc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x103cc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_103cc4:
    // 0x103cc4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x103cc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_103cc8:
    // 0x103cc8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x103cc8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_103ccc:
    // 0x103ccc: 0xafa40020  sw          $a0, 0x20($sp)
    ctx->pc = 0x103cccu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 4));
label_103cd0:
    // 0x103cd0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x103cd0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_103cd4:
    // 0x103cd4: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x103cd4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_103cd8:
    // 0x103cd8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x103cd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_103cdc:
    // 0x103cdc: 0x8c440040  lw          $a0, 0x40($v0)
    ctx->pc = 0x103cdcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 64)));
label_103ce0:
    // 0x103ce0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x103ce0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_103ce4:
    // 0x103ce4: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x103ce4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_103ce8:
    // 0x103ce8: 0x320f809  jalr        $t9
label_103cec:
    if (ctx->pc == 0x103CECu) {
        ctx->pc = 0x103CF0u;
        goto label_103cf0;
    }
    ctx->pc = 0x103CE8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x103CF0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103CE8u, 0x103CF0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x103CF0u;
label_103cf0:
    // 0x103cf0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x103cf0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_103cf4:
    // 0x103cf4: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x103cf4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_103cf8:
    // 0x103cf8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x103cf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_103cfc:
    // 0x103cfc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x103cfcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_103d00:
    // 0x103d00: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x103d00u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_103d04:
    // 0x103d04: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x103d04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_103d08:
    // 0x103d08: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x103d08u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_103d0c:
    // 0x103d0c: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x103d0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_103d10:
    // 0x103d10: 0x8c440048  lw          $a0, 0x48($v0)
    ctx->pc = 0x103d10u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 72)));
label_103d14:
    // 0x103d14: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x103d14u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_103d18:
    // 0x103d18: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x103d18u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_103d1c:
    // 0x103d1c: 0x320f809  jalr        $t9
label_103d20:
    if (ctx->pc == 0x103D20u) {
        ctx->pc = 0x103D24u;
        goto label_103d24;
    }
    ctx->pc = 0x103D1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x103D24u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103D1Cu, 0x103D24u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x103D24u;
label_103d24:
    // 0x103d24: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x103d24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_103d28:
    // 0x103d28: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x103d28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_103d2c:
    // 0x103d2c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x103d2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_103d30:
    // 0x103d30: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x103d30u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_103d34:
    // 0x103d34: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x103d34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_103d38:
    // 0x103d38: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x103d38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_103d3c:
    // 0x103d3c: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x103d3cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_103d40:
    // 0x103d40: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x103d40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_103d44:
    // 0x103d44: 0x8c440044  lw          $a0, 0x44($v0)
    ctx->pc = 0x103d44u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 68)));
label_103d48:
    // 0x103d48: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x103d48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_103d4c:
    // 0x103d4c: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x103d4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_103d50:
    // 0x103d50: 0x320f809  jalr        $t9
label_103d54:
    if (ctx->pc == 0x103D54u) {
        ctx->pc = 0x103D58u;
        goto label_103d58;
    }
    ctx->pc = 0x103D50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x103D58u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103D50u, 0x103D58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x103D58u;
label_103d58:
    // 0x103d58: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x103d58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_103d5c:
    // 0x103d5c: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x103d5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_103d60:
    // 0x103d60: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x103d60u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_103d64:
    // 0x103d64: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x103d64u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_103d68:
    // 0x103d68: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x103d68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_103d6c:
    // 0x103d6c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x103d6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_103d70:
    // 0x103d70: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x103d70u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_103d74:
    // 0x103d74: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x103d74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_103d78:
    // 0x103d78: 0x8c44004c  lw          $a0, 0x4C($v0)
    ctx->pc = 0x103d78u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 76)));
label_103d7c:
    // 0x103d7c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x103d7cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_103d80:
    // 0x103d80: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x103d80u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_103d84:
    // 0x103d84: 0x320f809  jalr        $t9
label_103d88:
    if (ctx->pc == 0x103D88u) {
        ctx->pc = 0x103D8Cu;
        goto label_103d8c;
    }
    ctx->pc = 0x103D84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x103D8Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103D84u, 0x103D8Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x103D8Cu;
label_103d8c:
    // 0x103d8c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x103d8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_103d90:
    // 0x103d90: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x103d90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_103d94:
    // 0x103d94: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x103d94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_103d98:
    // 0x103d98: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x103d98u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_103d9c:
    // 0x103d9c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x103d9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_103da0:
    // 0x103da0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x103da0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_103da4:
    // 0x103da4: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x103da4u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_103da8:
    // 0x103da8: 0x8fa20020  lw          $v0, 0x20($sp)
    ctx->pc = 0x103da8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_103dac:
    // 0x103dac: 0x8c44003c  lw          $a0, 0x3C($v0)
    ctx->pc = 0x103dacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_103db0:
    // 0x103db0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x103db0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_103db4:
    // 0x103db4: 0x8f390018  lw          $t9, 0x18($t9)
    ctx->pc = 0x103db4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 24)));
label_103db8:
    // 0x103db8: 0x320f809  jalr        $t9
label_103dbc:
    if (ctx->pc == 0x103DBCu) {
        ctx->pc = 0x103DC0u;
        goto label_103dc0;
    }
    ctx->pc = 0x103DB8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x103DC0u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103DB8u, 0x103DC0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x103DC0u;
label_103dc0:
    // 0x103dc0: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x103dc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_103dc4:
    // 0x103dc4: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x103dc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_103dc8:
    // 0x103dc8: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x103dc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_103dcc:
    // 0x103dcc: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x103dccu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_103dd0:
    // 0x103dd0: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x103dd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_103dd4:
    // 0x103dd4: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x103dd4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_103dd8:
    // 0x103dd8: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x103dd8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_103ddc:
    // 0x103ddc: 0x8fa40020  lw          $a0, 0x20($sp)
    ctx->pc = 0x103ddcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
label_103de0:
    // 0x103de0: 0xc0852c4  jal         func_214B10
label_103de4:
    if (ctx->pc == 0x103DE4u) {
        ctx->pc = 0x103DE8u;
        goto label_103de8;
    }
    ctx->pc = 0x103DE0u;
    SET_GPR_U32(ctx, 31, 0x103DE8u);
    ctx->pc = 0x214B10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x214B10u, 0x103DE0u, 0x103DE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103DE8u;
label_103de8:
    // 0x103de8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x103de8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_103dec:
    // 0x103dec: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x103decu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_103df0:
    // 0x103df0: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x103df0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_103df4:
    // 0x103df4: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x103df4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_103df8:
    // 0x103df8: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x103df8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_103dfc:
    // 0x103dfc: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x103dfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_103e00:
    // 0x103e00: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x103e00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_103e04:
    // 0x103e04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x103e04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_103e08:
    // 0x103e08: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x103e08u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_103e0c:
    // 0x103e0c: 0x3e00008  jr          $ra
label_103e10:
    if (ctx->pc == 0x103E10u) {
        ctx->pc = 0x103E14u;
        goto label_103e14;
    }
    ctx->pc = 0x103E0Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103E0Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x103E14u;
label_103e14:
    // 0x103e14: 0x0  nop
    ctx->pc = 0x103e14u;
    // NOP
label_103e18:
    // 0x103e18: 0x0  nop
    ctx->pc = 0x103e18u;
    // NOP
label_103e1c:
    // 0x103e1c: 0x0  nop
    ctx->pc = 0x103e1cu;
    // NOP
label_103e20:
    // 0x103e20: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x103e20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_103e24:
    // 0x103e24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x103e24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_103e28:
    // 0x103e28: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x103e28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
label_103e2c:
    // 0x103e2c: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x103e2cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_103e30:
    // 0x103e30: 0x8c44003c  lw          $a0, 0x3C($v0)
    ctx->pc = 0x103e30u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_103e34:
    // 0x103e34: 0xc0860b0  jal         func_2182C0
label_103e38:
    if (ctx->pc == 0x103E38u) {
        ctx->pc = 0x103E3Cu;
        goto label_103e3c;
    }
    ctx->pc = 0x103E34u;
    SET_GPR_U32(ctx, 31, 0x103E3Cu);
    ctx->pc = 0x2182C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2182C0u, 0x103E34u, 0x103E3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x103E3Cu;
label_103e3c:
    // 0x103e3c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x103e3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_103e40:
    // 0x103e40: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x103e40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_103e44:
    // 0x103e44: 0x3e00008  jr          $ra
label_103e48:
    if (ctx->pc == 0x103E48u) {
        ctx->pc = 0x103E4Cu;
        goto label_103e4c;
    }
    ctx->pc = 0x103E44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x103E44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x103E4Cu;
label_103e4c:
    // 0x103e4c: 0x0  nop
    ctx->pc = 0x103e4cu;
    // NOP
    ctx->pc = 0x103e50u;
}
