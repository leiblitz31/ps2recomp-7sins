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

// Function: sub_00100CB0
// Address: 0x100cb0 - 0x100fa0
void sub_00100CB0_0x100cb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00100CB0_0x100cb0");
#endif

    switch (ctx->pc) {
        case 0x100cb0u: goto label_100cb0;
        case 0x100cb4u: goto label_100cb4;
        case 0x100cb8u: goto label_100cb8;
        case 0x100cbcu: goto label_100cbc;
        case 0x100cc0u: goto label_100cc0;
        case 0x100cc4u: goto label_100cc4;
        case 0x100cc8u: goto label_100cc8;
        case 0x100cccu: goto label_100ccc;
        case 0x100cd0u: goto label_100cd0;
        case 0x100cd4u: goto label_100cd4;
        case 0x100cd8u: goto label_100cd8;
        case 0x100cdcu: goto label_100cdc;
        case 0x100ce0u: goto label_100ce0;
        case 0x100ce4u: goto label_100ce4;
        case 0x100ce8u: goto label_100ce8;
        case 0x100cecu: goto label_100cec;
        case 0x100cf0u: goto label_100cf0;
        case 0x100cf4u: goto label_100cf4;
        case 0x100cf8u: goto label_100cf8;
        case 0x100cfcu: goto label_100cfc;
        case 0x100d00u: goto label_100d00;
        case 0x100d04u: goto label_100d04;
        case 0x100d08u: goto label_100d08;
        case 0x100d0cu: goto label_100d0c;
        case 0x100d10u: goto label_100d10;
        case 0x100d14u: goto label_100d14;
        case 0x100d18u: goto label_100d18;
        case 0x100d1cu: goto label_100d1c;
        case 0x100d20u: goto label_100d20;
        case 0x100d24u: goto label_100d24;
        case 0x100d28u: goto label_100d28;
        case 0x100d2cu: goto label_100d2c;
        case 0x100d30u: goto label_100d30;
        case 0x100d34u: goto label_100d34;
        case 0x100d38u: goto label_100d38;
        case 0x100d3cu: goto label_100d3c;
        case 0x100d40u: goto label_100d40;
        case 0x100d44u: goto label_100d44;
        case 0x100d48u: goto label_100d48;
        case 0x100d4cu: goto label_100d4c;
        case 0x100d50u: goto label_100d50;
        case 0x100d54u: goto label_100d54;
        case 0x100d58u: goto label_100d58;
        case 0x100d5cu: goto label_100d5c;
        case 0x100d60u: goto label_100d60;
        case 0x100d64u: goto label_100d64;
        case 0x100d68u: goto label_100d68;
        case 0x100d6cu: goto label_100d6c;
        case 0x100d70u: goto label_100d70;
        case 0x100d74u: goto label_100d74;
        case 0x100d78u: goto label_100d78;
        case 0x100d7cu: goto label_100d7c;
        case 0x100d80u: goto label_100d80;
        case 0x100d84u: goto label_100d84;
        case 0x100d88u: goto label_100d88;
        case 0x100d8cu: goto label_100d8c;
        case 0x100d90u: goto label_100d90;
        case 0x100d94u: goto label_100d94;
        case 0x100d98u: goto label_100d98;
        case 0x100d9cu: goto label_100d9c;
        case 0x100da0u: goto label_100da0;
        case 0x100da4u: goto label_100da4;
        case 0x100da8u: goto label_100da8;
        case 0x100dacu: goto label_100dac;
        case 0x100db0u: goto label_100db0;
        case 0x100db4u: goto label_100db4;
        case 0x100db8u: goto label_100db8;
        case 0x100dbcu: goto label_100dbc;
        case 0x100dc0u: goto label_100dc0;
        case 0x100dc4u: goto label_100dc4;
        case 0x100dc8u: goto label_100dc8;
        case 0x100dccu: goto label_100dcc;
        case 0x100dd0u: goto label_100dd0;
        case 0x100dd4u: goto label_100dd4;
        case 0x100dd8u: goto label_100dd8;
        case 0x100ddcu: goto label_100ddc;
        case 0x100de0u: goto label_100de0;
        case 0x100de4u: goto label_100de4;
        case 0x100de8u: goto label_100de8;
        case 0x100decu: goto label_100dec;
        case 0x100df0u: goto label_100df0;
        case 0x100df4u: goto label_100df4;
        case 0x100df8u: goto label_100df8;
        case 0x100dfcu: goto label_100dfc;
        case 0x100e00u: goto label_100e00;
        case 0x100e04u: goto label_100e04;
        case 0x100e08u: goto label_100e08;
        case 0x100e0cu: goto label_100e0c;
        case 0x100e10u: goto label_100e10;
        case 0x100e14u: goto label_100e14;
        case 0x100e18u: goto label_100e18;
        case 0x100e1cu: goto label_100e1c;
        case 0x100e20u: goto label_100e20;
        case 0x100e24u: goto label_100e24;
        case 0x100e28u: goto label_100e28;
        case 0x100e2cu: goto label_100e2c;
        case 0x100e30u: goto label_100e30;
        case 0x100e34u: goto label_100e34;
        case 0x100e38u: goto label_100e38;
        case 0x100e3cu: goto label_100e3c;
        case 0x100e40u: goto label_100e40;
        case 0x100e44u: goto label_100e44;
        case 0x100e48u: goto label_100e48;
        case 0x100e4cu: goto label_100e4c;
        case 0x100e50u: goto label_100e50;
        case 0x100e54u: goto label_100e54;
        case 0x100e58u: goto label_100e58;
        case 0x100e5cu: goto label_100e5c;
        case 0x100e60u: goto label_100e60;
        case 0x100e64u: goto label_100e64;
        case 0x100e68u: goto label_100e68;
        case 0x100e6cu: goto label_100e6c;
        case 0x100e70u: goto label_100e70;
        case 0x100e74u: goto label_100e74;
        case 0x100e78u: goto label_100e78;
        case 0x100e7cu: goto label_100e7c;
        case 0x100e80u: goto label_100e80;
        case 0x100e84u: goto label_100e84;
        case 0x100e88u: goto label_100e88;
        case 0x100e8cu: goto label_100e8c;
        case 0x100e90u: goto label_100e90;
        case 0x100e94u: goto label_100e94;
        case 0x100e98u: goto label_100e98;
        case 0x100e9cu: goto label_100e9c;
        case 0x100ea0u: goto label_100ea0;
        case 0x100ea4u: goto label_100ea4;
        case 0x100ea8u: goto label_100ea8;
        case 0x100eacu: goto label_100eac;
        case 0x100eb0u: goto label_100eb0;
        case 0x100eb4u: goto label_100eb4;
        case 0x100eb8u: goto label_100eb8;
        case 0x100ebcu: goto label_100ebc;
        case 0x100ec0u: goto label_100ec0;
        case 0x100ec4u: goto label_100ec4;
        case 0x100ec8u: goto label_100ec8;
        case 0x100eccu: goto label_100ecc;
        case 0x100ed0u: goto label_100ed0;
        case 0x100ed4u: goto label_100ed4;
        case 0x100ed8u: goto label_100ed8;
        case 0x100edcu: goto label_100edc;
        case 0x100ee0u: goto label_100ee0;
        case 0x100ee4u: goto label_100ee4;
        case 0x100ee8u: goto label_100ee8;
        case 0x100eecu: goto label_100eec;
        case 0x100ef0u: goto label_100ef0;
        case 0x100ef4u: goto label_100ef4;
        case 0x100ef8u: goto label_100ef8;
        case 0x100efcu: goto label_100efc;
        case 0x100f00u: goto label_100f00;
        case 0x100f04u: goto label_100f04;
        case 0x100f08u: goto label_100f08;
        case 0x100f0cu: goto label_100f0c;
        case 0x100f10u: goto label_100f10;
        case 0x100f14u: goto label_100f14;
        case 0x100f18u: goto label_100f18;
        case 0x100f1cu: goto label_100f1c;
        case 0x100f20u: goto label_100f20;
        case 0x100f24u: goto label_100f24;
        case 0x100f28u: goto label_100f28;
        case 0x100f2cu: goto label_100f2c;
        case 0x100f30u: goto label_100f30;
        case 0x100f34u: goto label_100f34;
        case 0x100f38u: goto label_100f38;
        case 0x100f3cu: goto label_100f3c;
        case 0x100f40u: goto label_100f40;
        case 0x100f44u: goto label_100f44;
        case 0x100f48u: goto label_100f48;
        case 0x100f4cu: goto label_100f4c;
        case 0x100f50u: goto label_100f50;
        case 0x100f54u: goto label_100f54;
        case 0x100f58u: goto label_100f58;
        case 0x100f5cu: goto label_100f5c;
        case 0x100f60u: goto label_100f60;
        case 0x100f64u: goto label_100f64;
        case 0x100f68u: goto label_100f68;
        case 0x100f6cu: goto label_100f6c;
        case 0x100f70u: goto label_100f70;
        case 0x100f74u: goto label_100f74;
        case 0x100f78u: goto label_100f78;
        case 0x100f7cu: goto label_100f7c;
        case 0x100f80u: goto label_100f80;
        case 0x100f84u: goto label_100f84;
        case 0x100f88u: goto label_100f88;
        case 0x100f8cu: goto label_100f8c;
        case 0x100f90u: goto label_100f90;
        case 0x100f94u: goto label_100f94;
        case 0x100f98u: goto label_100f98;
        case 0x100f9cu: goto label_100f9c;
        default: break;
    }

    ctx->pc = 0x100cb0u;

label_100cb0:
    // 0x100cb0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x100cb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
label_100cb4:
    // 0x100cb4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x100cb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
label_100cb8:
    // 0x100cb8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x100cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_100cbc:
    // 0x100cbc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x100cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
label_100cc0:
    // 0x100cc0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x100cc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_100cc4:
    // 0x100cc4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x100cc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_100cc8:
    // 0x100cc8: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x100cc8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
label_100ccc:
    // 0x100ccc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x100cccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_100cd0:
    // 0x100cd0: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x100cd0u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_100cd4:
    // 0x100cd4: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x100cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
label_100cd8:
    // 0x100cd8: 0x8c53000c  lw          $s3, 0xC($v0)
    ctx->pc = 0x100cd8u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 12)));
label_100cdc:
    // 0x100cdc: 0x8f82bb80  lw          $v0, -0x4480($gp)
    ctx->pc = 0x100cdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949760)));
label_100ce0:
    // 0x100ce0: 0x8c520010  lw          $s2, 0x10($v0)
    ctx->pc = 0x100ce0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_100ce4:
    // 0x100ce4: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x100ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_100ce8:
    // 0x100ce8: 0xc119b68  jal         func_466DA0
label_100cec:
    if (ctx->pc == 0x100CECu) {
        ctx->pc = 0x100CF0u;
        goto label_100cf0;
    }
    ctx->pc = 0x100CE8u;
    SET_GPR_U32(ctx, 31, 0x100CF0u);
    ctx->pc = 0x466DA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x466DA0u, 0x100CE8u, 0x100CF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100CF0u;
label_100cf0:
    // 0x100cf0: 0x24040040  addiu       $a0, $zero, 0x40
    ctx->pc = 0x100cf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_100cf4:
    // 0x100cf4: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x100cf4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_100cf8:
    // 0x100cf8: 0xc0400e0  jal         func_100380
label_100cfc:
    if (ctx->pc == 0x100CFCu) {
        ctx->pc = 0x100D00u;
        goto label_100d00;
    }
    ctx->pc = 0x100CF8u;
    SET_GPR_U32(ctx, 31, 0x100D00u);
    ctx->pc = 0x100380u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100380u, 0x100CF8u, 0x100D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100D00u;
label_100d00:
    // 0x100d00: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x100d00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_100d04:
    // 0x100d04: 0x12200005  beqz        $s1, . + 4 + (0x5 << 2)
label_100d08:
    if (ctx->pc == 0x100D08u) {
        ctx->pc = 0x100D0Cu;
        goto label_100d0c;
    }
    ctx->pc = 0x100D04u;
    {
        const bool branch_taken_0x100d04 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x100d04) {
            ctx->pc = 0x100D1Cu;
            goto label_100d1c;
        }
    }
    ctx->pc = 0x100D0Cu;
label_100d0c:
    // 0x100d0c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x100d0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_100d10:
    // 0x100d10: 0xc040744  jal         func_101D10
label_100d14:
    if (ctx->pc == 0x100D14u) {
        ctx->pc = 0x100D18u;
        goto label_100d18;
    }
    ctx->pc = 0x100D10u;
    SET_GPR_U32(ctx, 31, 0x100D18u);
    ctx->pc = 0x101D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x101D10u, 0x100D10u, 0x100D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100D18u;
label_100d18:
    // 0x100d18: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x100d18u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_100d1c:
    // 0x100d1c: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x100d1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_100d20:
    // 0x100d20: 0xac510004  sw          $s1, 0x4($v0)
    ctx->pc = 0x100d20u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 17));
label_100d24:
    // 0x100d24: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x100d24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_100d28:
    // 0x100d28: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x100d28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_100d2c:
    // 0x100d2c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x100d2cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_100d30:
    // 0x100d30: 0x8f390008  lw          $t9, 0x8($t9)
    ctx->pc = 0x100d30u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 8)));
label_100d34:
    // 0x100d34: 0x320f809  jalr        $t9
label_100d38:
    if (ctx->pc == 0x100D38u) {
        ctx->pc = 0x100D3Cu;
        goto label_100d3c;
    }
    ctx->pc = 0x100D34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x100D3Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100D34u, 0x100D3Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x100D3Cu;
label_100d3c:
    // 0x100d3c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x100d3cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_100d40:
    // 0x100d40: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x100d40u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_100d44:
    // 0x100d44: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x100d44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_100d48:
    // 0x100d48: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x100d48u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_100d4c:
    // 0x100d4c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x100d4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_100d50:
    // 0x100d50: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x100d50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_100d54:
    // 0x100d54: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x100d54u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_100d58:
    // 0x100d58: 0xc08e7cc  jal         func_239F30
label_100d5c:
    if (ctx->pc == 0x100D5Cu) {
        ctx->pc = 0x100D60u;
        goto label_100d60;
    }
    ctx->pc = 0x100D58u;
    SET_GPR_U32(ctx, 31, 0x100D60u);
    ctx->pc = 0x239F30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x239F30u, 0x100D58u, 0x100D60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100D60u;
label_100d60:
    // 0x100d60: 0x27a2007c  addiu       $v0, $sp, 0x7C
    ctx->pc = 0x100d60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
label_100d64:
    // 0x100d64: 0xc78084a0  lwc1        $f0, -0x7B60($gp)
    ctx->pc = 0x100d64u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935712)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_100d68:
    // 0x100d68: 0xe4400000  swc1        $f0, 0x0($v0)
    ctx->pc = 0x100d68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 0), bits); }
label_100d6c:
    // 0x100d6c: 0xc12242c  jal         func_4890B0
label_100d70:
    if (ctx->pc == 0x100D70u) {
        ctx->pc = 0x100D74u;
        goto label_100d74;
    }
    ctx->pc = 0x100D6Cu;
    SET_GPR_U32(ctx, 31, 0x100D74u);
    ctx->pc = 0x4890B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4890B0u, 0x100D6Cu, 0x100D74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100D74u;
label_100d74:
    // 0x100d74: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x100d74u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_100d78:
    // 0x100d78: 0xc105f96  jal         func_417E58
label_100d7c:
    if (ctx->pc == 0x100D7Cu) {
        ctx->pc = 0x100D80u;
        goto label_100d80;
    }
    ctx->pc = 0x100D78u;
    SET_GPR_U32(ctx, 31, 0x100D80u);
    ctx->pc = 0x417E58u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417E58u, 0x100D78u, 0x100D80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100D80u;
label_100d80:
    // 0x100d80: 0xc12242c  jal         func_4890B0
label_100d84:
    if (ctx->pc == 0x100D84u) {
        ctx->pc = 0x100D88u;
        goto label_100d88;
    }
    ctx->pc = 0x100D80u;
    SET_GPR_U32(ctx, 31, 0x100D88u);
    ctx->pc = 0x4890B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4890B0u, 0x100D80u, 0x100D88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100D88u;
label_100d88:
    // 0x100d88: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x100d88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_100d8c:
    // 0x100d8c: 0x27a5007c  addiu       $a1, $sp, 0x7C
    ctx->pc = 0x100d8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
label_100d90:
    // 0x100d90: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x100d90u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_100d94:
    // 0x100d94: 0xc105fa6  jal         func_417E98
label_100d98:
    if (ctx->pc == 0x100D98u) {
        ctx->pc = 0x100D9Cu;
        goto label_100d9c;
    }
    ctx->pc = 0x100D94u;
    SET_GPR_U32(ctx, 31, 0x100D9Cu);
    ctx->pc = 0x417E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417E98u, 0x100D94u, 0x100D9Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100D9Cu;
label_100d9c:
    // 0x100d9c: 0xc12242c  jal         func_4890B0
label_100da0:
    if (ctx->pc == 0x100DA0u) {
        ctx->pc = 0x100DA4u;
        goto label_100da4;
    }
    ctx->pc = 0x100D9Cu;
    SET_GPR_U32(ctx, 31, 0x100DA4u);
    ctx->pc = 0x4890B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4890B0u, 0x100D9Cu, 0x100DA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100DA4u;
label_100da4:
    // 0x100da4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x100da4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_100da8:
    // 0x100da8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x100da8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_100dac:
    // 0x100dac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x100dacu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_100db0:
    // 0x100db0: 0xc105fb4  jal         func_417ED0
label_100db4:
    if (ctx->pc == 0x100DB4u) {
        ctx->pc = 0x100DB8u;
        goto label_100db8;
    }
    ctx->pc = 0x100DB0u;
    SET_GPR_U32(ctx, 31, 0x100DB8u);
    ctx->pc = 0x417ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417ED0u, 0x100DB0u, 0x100DB8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100DB8u;
label_100db8:
    // 0x100db8: 0xc12242c  jal         func_4890B0
label_100dbc:
    if (ctx->pc == 0x100DBCu) {
        ctx->pc = 0x100DC0u;
        goto label_100dc0;
    }
    ctx->pc = 0x100DB8u;
    SET_GPR_U32(ctx, 31, 0x100DC0u);
    ctx->pc = 0x4890B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4890B0u, 0x100DB8u, 0x100DC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100DC0u;
label_100dc0:
    // 0x100dc0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x100dc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_100dc4:
    // 0x100dc4: 0x27a5007c  addiu       $a1, $sp, 0x7C
    ctx->pc = 0x100dc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
label_100dc8:
    // 0x100dc8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x100dc8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_100dcc:
    // 0x100dcc: 0xc105fa6  jal         func_417E98
label_100dd0:
    if (ctx->pc == 0x100DD0u) {
        ctx->pc = 0x100DD4u;
        goto label_100dd4;
    }
    ctx->pc = 0x100DCCu;
    SET_GPR_U32(ctx, 31, 0x100DD4u);
    ctx->pc = 0x417E98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417E98u, 0x100DCCu, 0x100DD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100DD4u;
label_100dd4:
    // 0x100dd4: 0xc12242c  jal         func_4890B0
label_100dd8:
    if (ctx->pc == 0x100DD8u) {
        ctx->pc = 0x100DDCu;
        goto label_100ddc;
    }
    ctx->pc = 0x100DD4u;
    SET_GPR_U32(ctx, 31, 0x100DDCu);
    ctx->pc = 0x4890B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4890B0u, 0x100DD4u, 0x100DDCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100DDCu;
label_100ddc:
    // 0x100ddc: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x100ddcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_100de0:
    // 0x100de0: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x100de0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_100de4:
    // 0x100de4: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x100de4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_100de8:
    // 0x100de8: 0xc105fb4  jal         func_417ED0
label_100dec:
    if (ctx->pc == 0x100DECu) {
        ctx->pc = 0x100DF0u;
        goto label_100df0;
    }
    ctx->pc = 0x100DE8u;
    SET_GPR_U32(ctx, 31, 0x100DF0u);
    ctx->pc = 0x417ED0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417ED0u, 0x100DE8u, 0x100DF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100DF0u;
label_100df0:
    // 0x100df0: 0xc12242c  jal         func_4890B0
label_100df4:
    if (ctx->pc == 0x100DF4u) {
        ctx->pc = 0x100DF8u;
        goto label_100df8;
    }
    ctx->pc = 0x100DF0u;
    SET_GPR_U32(ctx, 31, 0x100DF8u);
    ctx->pc = 0x4890B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4890B0u, 0x100DF0u, 0x100DF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100DF8u;
label_100df8:
    // 0x100df8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x100df8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_100dfc:
    // 0x100dfc: 0xc105f9e  jal         func_417E78
label_100e00:
    if (ctx->pc == 0x100E00u) {
        ctx->pc = 0x100E04u;
        goto label_100e04;
    }
    ctx->pc = 0x100DFCu;
    SET_GPR_U32(ctx, 31, 0x100E04u);
    ctx->pc = 0x417E78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x417E78u, 0x100DFCu, 0x100E04u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100E04u;
label_100e04:
    // 0x100e04: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x100e04u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
label_100e08:
    // 0x100e08: 0x8c440004  lw          $a0, 0x4($v0)
    ctx->pc = 0x100e08u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_100e0c:
    // 0x100e0c: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x100e0cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_100e10:
    // 0x100e10: 0x8f390010  lw          $t9, 0x10($t9)
    ctx->pc = 0x100e10u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 16)));
label_100e14:
    // 0x100e14: 0x320f809  jalr        $t9
label_100e18:
    if (ctx->pc == 0x100E18u) {
        ctx->pc = 0x100E1Cu;
        goto label_100e1c;
    }
    ctx->pc = 0x100E14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x100E1Cu);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100E14u, 0x100E1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x100E1Cu;
label_100e1c:
    // 0x100e1c: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x100e1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_100e20:
    // 0x100e20: 0x320200ff  andi        $v0, $s0, 0xFF
    ctx->pc = 0x100e20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
label_100e24:
    // 0x100e24: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x100e24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_100e28:
    // 0x100e28: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x100e28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_100e2c:
    // 0x100e2c: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x100e2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_100e30:
    // 0x100e30: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x100e30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_100e34:
    // 0x100e34: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x100e34u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_100e38:
    // 0x100e38: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x100e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_100e3c:
    // 0x100e3c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x100e3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_100e40:
    // 0x100e40: 0x24a51118  addiu       $a1, $a1, 0x1118
    ctx->pc = 0x100e40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4376));
label_100e44:
    // 0x100e44: 0xc040304  jal         func_100C10
label_100e48:
    if (ctx->pc == 0x100E48u) {
        ctx->pc = 0x100E4Cu;
        goto label_100e4c;
    }
    ctx->pc = 0x100E44u;
    SET_GPR_U32(ctx, 31, 0x100E4Cu);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x100E44u, 0x100E4Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100E4Cu;
label_100e4c:
    // 0x100e4c: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x100e4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_100e50:
    // 0x100e50: 0xc115b78  jal         func_456DE0
label_100e54:
    if (ctx->pc == 0x100E54u) {
        ctx->pc = 0x100E58u;
        goto label_100e58;
    }
    ctx->pc = 0x100E50u;
    SET_GPR_U32(ctx, 31, 0x100E58u);
    ctx->pc = 0x456DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456DE0u, 0x100E50u, 0x100E58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100E58u;
label_100e58:
    // 0x100e58: 0x27a40070  addiu       $a0, $sp, 0x70
    ctx->pc = 0x100e58u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
label_100e5c:
    // 0x100e5c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x100e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_100e60:
    // 0x100e60: 0xc0402d4  jal         func_100B50
label_100e64:
    if (ctx->pc == 0x100E64u) {
        ctx->pc = 0x100E68u;
        goto label_100e68;
    }
    ctx->pc = 0x100E60u;
    SET_GPR_U32(ctx, 31, 0x100E68u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x100E60u, 0x100E68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100E68u;
label_100e68:
    // 0x100e68: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x100e68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_100e6c:
    // 0x100e6c: 0x3c05004e  lui         $a1, 0x4E
    ctx->pc = 0x100e6cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)78 << 16));
label_100e70:
    // 0x100e70: 0x24a51128  addiu       $a1, $a1, 0x1128
    ctx->pc = 0x100e70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4392));
label_100e74:
    // 0x100e74: 0xc040304  jal         func_100C10
label_100e78:
    if (ctx->pc == 0x100E78u) {
        ctx->pc = 0x100E7Cu;
        goto label_100e7c;
    }
    ctx->pc = 0x100E74u;
    SET_GPR_U32(ctx, 31, 0x100E7Cu);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x100E74u, 0x100E7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100E7Cu;
label_100e7c:
    // 0x100e7c: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x100e7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_100e80:
    // 0x100e80: 0xc115b78  jal         func_456DE0
label_100e84:
    if (ctx->pc == 0x100E84u) {
        ctx->pc = 0x100E88u;
        goto label_100e88;
    }
    ctx->pc = 0x100E80u;
    SET_GPR_U32(ctx, 31, 0x100E88u);
    ctx->pc = 0x456DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456DE0u, 0x100E80u, 0x100E88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100E88u;
label_100e88:
    // 0x100e88: 0x27a40060  addiu       $a0, $sp, 0x60
    ctx->pc = 0x100e88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
label_100e8c:
    // 0x100e8c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x100e8cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_100e90:
    // 0x100e90: 0xc0402d4  jal         func_100B50
label_100e94:
    if (ctx->pc == 0x100E94u) {
        ctx->pc = 0x100E98u;
        goto label_100e98;
    }
    ctx->pc = 0x100E90u;
    SET_GPR_U32(ctx, 31, 0x100E98u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x100E90u, 0x100E98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100E98u;
label_100e98:
    // 0x100e98: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x100e98u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_100e9c:
    // 0x100e9c: 0x278584a8  addiu       $a1, $gp, -0x7B58
    ctx->pc = 0x100e9cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294935720));
label_100ea0:
    // 0x100ea0: 0xc040304  jal         func_100C10
label_100ea4:
    if (ctx->pc == 0x100EA4u) {
        ctx->pc = 0x100EA8u;
        goto label_100ea8;
    }
    ctx->pc = 0x100EA0u;
    SET_GPR_U32(ctx, 31, 0x100EA8u);
    ctx->pc = 0x100C10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100C10u, 0x100EA0u, 0x100EA8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100EA8u;
label_100ea8:
    // 0x100ea8: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x100ea8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_100eac:
    // 0x100eac: 0xc115b78  jal         func_456DE0
label_100eb0:
    if (ctx->pc == 0x100EB0u) {
        ctx->pc = 0x100EB4u;
        goto label_100eb4;
    }
    ctx->pc = 0x100EACu;
    SET_GPR_U32(ctx, 31, 0x100EB4u);
    ctx->pc = 0x456DE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x456DE0u, 0x100EACu, 0x100EB4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100EB4u;
label_100eb4:
    // 0x100eb4: 0x27a40050  addiu       $a0, $sp, 0x50
    ctx->pc = 0x100eb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_100eb8:
    // 0x100eb8: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x100eb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_100ebc:
    // 0x100ebc: 0xc0402d4  jal         func_100B50
label_100ec0:
    if (ctx->pc == 0x100EC0u) {
        ctx->pc = 0x100EC4u;
        goto label_100ec4;
    }
    ctx->pc = 0x100EBCu;
    SET_GPR_U32(ctx, 31, 0x100EC4u);
    ctx->pc = 0x100B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x100B50u, 0x100EBCu, 0x100EC4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100EC4u;
label_100ec4:
    // 0x100ec4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x100ec4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_100ec8:
    // 0x100ec8: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x100ec8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_100ecc:
    // 0x100ecc: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x100eccu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_100ed0:
    // 0x100ed0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x100ed0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_100ed4:
    // 0x100ed4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x100ed4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_100ed8:
    // 0x100ed8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x100ed8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_100edc:
    // 0x100edc: 0x27bd0090  addiu       $sp, $sp, 0x90
    ctx->pc = 0x100edcu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
label_100ee0:
    // 0x100ee0: 0x3e00008  jr          $ra
label_100ee4:
    if (ctx->pc == 0x100EE4u) {
        ctx->pc = 0x100EE8u;
        goto label_100ee8;
    }
    ctx->pc = 0x100EE0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100EE0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x100EE8u;
label_100ee8:
    // 0x100ee8: 0x0  nop
    ctx->pc = 0x100ee8u;
    // NOP
label_100eec:
    // 0x100eec: 0x0  nop
    ctx->pc = 0x100eecu;
    // NOP
label_100ef0:
    // 0x100ef0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x100ef0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_100ef4:
    // 0x100ef4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x100ef4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_100ef8:
    // 0x100ef8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x100ef8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
label_100efc:
    // 0x100efc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x100efcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_100f00:
    // 0x100f00: 0xc12c146  jal         func_4B0518
label_100f04:
    if (ctx->pc == 0x100F04u) {
        ctx->pc = 0x100F08u;
        goto label_100f08;
    }
    ctx->pc = 0x100F00u;
    SET_GPR_U32(ctx, 31, 0x100F08u);
    ctx->pc = 0x4B0518u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4B0518u, 0x100F00u, 0x100F08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100F08u;
label_100f08:
    // 0x100f08: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
label_100f0c:
    if (ctx->pc == 0x100F0Cu) {
        ctx->pc = 0x100F10u;
        goto label_100f10;
    }
    ctx->pc = 0x100F08u;
    {
        const bool branch_taken_0x100f08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x100f08) {
            ctx->pc = 0x100F28u;
            goto label_100f28;
        }
    }
    ctx->pc = 0x100F10u;
label_100f10:
    // 0x100f10: 0xc12b0a8  jal         func_4AC2A0
label_100f14:
    if (ctx->pc == 0x100F14u) {
        ctx->pc = 0x100F18u;
        goto label_100f18;
    }
    ctx->pc = 0x100F10u;
    SET_GPR_U32(ctx, 31, 0x100F18u);
    ctx->pc = 0x4AC2A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4AC2A0u, 0x100F10u, 0x100F18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100F18u;
label_100f18:
    // 0x100f18: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_100f1c:
    if (ctx->pc == 0x100F1Cu) {
        ctx->pc = 0x100F20u;
        goto label_100f20;
    }
    ctx->pc = 0x100F18u;
    {
        const bool branch_taken_0x100f18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x100f18) {
            ctx->pc = 0x100F28u;
            goto label_100f28;
        }
    }
    ctx->pc = 0x100F20u;
label_100f20:
    // 0x100f20: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x100f20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_100f24:
    // 0x100f24: 0x305000ff  andi        $s0, $v0, 0xFF
    ctx->pc = 0x100f24u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
label_100f28:
    // 0x100f28: 0xc127e1e  jal         func_49F878
label_100f2c:
    if (ctx->pc == 0x100F2Cu) {
        ctx->pc = 0x100F30u;
        goto label_100f30;
    }
    ctx->pc = 0x100F28u;
    SET_GPR_U32(ctx, 31, 0x100F30u);
    ctx->pc = 0x49F878u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F878u, 0x100F28u, 0x100F30u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100F30u;
label_100f30:
    // 0x100f30: 0xc127dc6  jal         func_49F718
label_100f34:
    if (ctx->pc == 0x100F34u) {
        ctx->pc = 0x100F38u;
        goto label_100f38;
    }
    ctx->pc = 0x100F30u;
    SET_GPR_U32(ctx, 31, 0x100F38u);
    ctx->pc = 0x49F718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x49F718u, 0x100F30u, 0x100F38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100F38u;
label_100f38:
    // 0x100f38: 0xc11c1dc  jal         func_470770
label_100f3c:
    if (ctx->pc == 0x100F3Cu) {
        ctx->pc = 0x100F40u;
        goto label_100f40;
    }
    ctx->pc = 0x100F38u;
    SET_GPR_U32(ctx, 31, 0x100F40u);
    ctx->pc = 0x470770u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x470770u, 0x100F38u, 0x100F40u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100F40u;
label_100f40:
    // 0x100f40: 0xc11f198  jal         func_47C660
label_100f44:
    if (ctx->pc == 0x100F44u) {
        ctx->pc = 0x100F48u;
        goto label_100f48;
    }
    ctx->pc = 0x100F40u;
    SET_GPR_U32(ctx, 31, 0x100F48u);
    ctx->pc = 0x47C660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x47C660u, 0x100F40u, 0x100F48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100F48u;
label_100f48:
    // 0x100f48: 0xc12242c  jal         func_4890B0
label_100f4c:
    if (ctx->pc == 0x100F4Cu) {
        ctx->pc = 0x100F50u;
        goto label_100f50;
    }
    ctx->pc = 0x100F48u;
    SET_GPR_U32(ctx, 31, 0x100F50u);
    ctx->pc = 0x4890B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4890B0u, 0x100F48u, 0x100F50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100F50u;
label_100f50:
    // 0x100f50: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x100f50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_100f54:
    // 0x100f54: 0xc1225f0  jal         func_4897C0
label_100f58:
    if (ctx->pc == 0x100F58u) {
        ctx->pc = 0x100F5Cu;
        goto label_100f5c;
    }
    ctx->pc = 0x100F54u;
    SET_GPR_U32(ctx, 31, 0x100F5Cu);
    ctx->pc = 0x4897C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x4897C0u, 0x100F54u, 0x100F5Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100F5Cu;
label_100f5c:
    // 0x100f5c: 0xc124b58  jal         func_492D60
label_100f60:
    if (ctx->pc == 0x100F60u) {
        ctx->pc = 0x100F64u;
        goto label_100f64;
    }
    ctx->pc = 0x100F5Cu;
    SET_GPR_U32(ctx, 31, 0x100F64u);
    ctx->pc = 0x492D60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x492D60u, 0x100F5Cu, 0x100F64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100F64u;
label_100f64:
    // 0x100f64: 0xc124bac  jal         func_492EB0
label_100f68:
    if (ctx->pc == 0x100F68u) {
        ctx->pc = 0x100F6Cu;
        goto label_100f6c;
    }
    ctx->pc = 0x100F64u;
    SET_GPR_U32(ctx, 31, 0x100F6Cu);
    ctx->pc = 0x492EB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x492EB0u, 0x100F64u, 0x100F6Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100F6Cu;
label_100f6c:
    // 0x100f6c: 0xc1179c8  jal         func_45E720
label_100f70:
    if (ctx->pc == 0x100F70u) {
        ctx->pc = 0x100F74u;
        goto label_100f74;
    }
    ctx->pc = 0x100F6Cu;
    SET_GPR_U32(ctx, 31, 0x100F74u);
    ctx->pc = 0x45E720u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x45E720u, 0x100F6Cu, 0x100F74u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100F74u;
label_100f74:
    // 0x100f74: 0xc1222cc  jal         func_488B30
label_100f78:
    if (ctx->pc == 0x100F78u) {
        ctx->pc = 0x100F7Cu;
        goto label_100f7c;
    }
    ctx->pc = 0x100F74u;
    SET_GPR_U32(ctx, 31, 0x100F7Cu);
    ctx->pc = 0x488B30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x488B30u, 0x100F74u, 0x100F7Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100F7Cu;
label_100f7c:
    // 0x100f7c: 0xc1242fc  jal         func_490BF0
label_100f80:
    if (ctx->pc == 0x100F80u) {
        ctx->pc = 0x100F84u;
        goto label_100f84;
    }
    ctx->pc = 0x100F7Cu;
    SET_GPR_U32(ctx, 31, 0x100F84u);
    ctx->pc = 0x490BF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x490BF0u, 0x100F7Cu, 0x100F84u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x100F84u;
label_100f84:
    // 0x100f84: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x100f84u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_100f88:
    // 0x100f88: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x100f88u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
label_100f8c:
    // 0x100f8c: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x100f8cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_100f90:
    // 0x100f90: 0x3e00008  jr          $ra
label_100f94:
    if (ctx->pc == 0x100F94u) {
        ctx->pc = 0x100F98u;
        goto label_100f98;
    }
    ctx->pc = 0x100F90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x100F90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x100F98u;
label_100f98:
    // 0x100f98: 0x0  nop
    ctx->pc = 0x100f98u;
    // NOP
label_100f9c:
    // 0x100f9c: 0x0  nop
    ctx->pc = 0x100f9cu;
    // NOP
    ctx->pc = 0x100fa0u;
}
