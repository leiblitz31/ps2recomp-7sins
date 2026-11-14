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

// Function: sub_00225C20
// Address: 0x225c20 - 0x225d90
void sub_00225C20_0x225c20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00225C20_0x225c20");
#endif

    switch (ctx->pc) {
        case 0x225c20u: goto label_225c20;
        case 0x225c24u: goto label_225c24;
        case 0x225c28u: goto label_225c28;
        case 0x225c2cu: goto label_225c2c;
        case 0x225c30u: goto label_225c30;
        case 0x225c34u: goto label_225c34;
        case 0x225c38u: goto label_225c38;
        case 0x225c3cu: goto label_225c3c;
        case 0x225c40u: goto label_225c40;
        case 0x225c44u: goto label_225c44;
        case 0x225c48u: goto label_225c48;
        case 0x225c4cu: goto label_225c4c;
        case 0x225c50u: goto label_225c50;
        case 0x225c54u: goto label_225c54;
        case 0x225c58u: goto label_225c58;
        case 0x225c5cu: goto label_225c5c;
        case 0x225c60u: goto label_225c60;
        case 0x225c64u: goto label_225c64;
        case 0x225c68u: goto label_225c68;
        case 0x225c6cu: goto label_225c6c;
        case 0x225c70u: goto label_225c70;
        case 0x225c74u: goto label_225c74;
        case 0x225c78u: goto label_225c78;
        case 0x225c7cu: goto label_225c7c;
        case 0x225c80u: goto label_225c80;
        case 0x225c84u: goto label_225c84;
        case 0x225c88u: goto label_225c88;
        case 0x225c8cu: goto label_225c8c;
        case 0x225c90u: goto label_225c90;
        case 0x225c94u: goto label_225c94;
        case 0x225c98u: goto label_225c98;
        case 0x225c9cu: goto label_225c9c;
        case 0x225ca0u: goto label_225ca0;
        case 0x225ca4u: goto label_225ca4;
        case 0x225ca8u: goto label_225ca8;
        case 0x225cacu: goto label_225cac;
        case 0x225cb0u: goto label_225cb0;
        case 0x225cb4u: goto label_225cb4;
        case 0x225cb8u: goto label_225cb8;
        case 0x225cbcu: goto label_225cbc;
        case 0x225cc0u: goto label_225cc0;
        case 0x225cc4u: goto label_225cc4;
        case 0x225cc8u: goto label_225cc8;
        case 0x225cccu: goto label_225ccc;
        case 0x225cd0u: goto label_225cd0;
        case 0x225cd4u: goto label_225cd4;
        case 0x225cd8u: goto label_225cd8;
        case 0x225cdcu: goto label_225cdc;
        case 0x225ce0u: goto label_225ce0;
        case 0x225ce4u: goto label_225ce4;
        case 0x225ce8u: goto label_225ce8;
        case 0x225cecu: goto label_225cec;
        case 0x225cf0u: goto label_225cf0;
        case 0x225cf4u: goto label_225cf4;
        case 0x225cf8u: goto label_225cf8;
        case 0x225cfcu: goto label_225cfc;
        case 0x225d00u: goto label_225d00;
        case 0x225d04u: goto label_225d04;
        case 0x225d08u: goto label_225d08;
        case 0x225d0cu: goto label_225d0c;
        case 0x225d10u: goto label_225d10;
        case 0x225d14u: goto label_225d14;
        case 0x225d18u: goto label_225d18;
        case 0x225d1cu: goto label_225d1c;
        case 0x225d20u: goto label_225d20;
        case 0x225d24u: goto label_225d24;
        case 0x225d28u: goto label_225d28;
        case 0x225d2cu: goto label_225d2c;
        case 0x225d30u: goto label_225d30;
        case 0x225d34u: goto label_225d34;
        case 0x225d38u: goto label_225d38;
        case 0x225d3cu: goto label_225d3c;
        case 0x225d40u: goto label_225d40;
        case 0x225d44u: goto label_225d44;
        case 0x225d48u: goto label_225d48;
        case 0x225d4cu: goto label_225d4c;
        case 0x225d50u: goto label_225d50;
        case 0x225d54u: goto label_225d54;
        case 0x225d58u: goto label_225d58;
        case 0x225d5cu: goto label_225d5c;
        case 0x225d60u: goto label_225d60;
        case 0x225d64u: goto label_225d64;
        case 0x225d68u: goto label_225d68;
        case 0x225d6cu: goto label_225d6c;
        case 0x225d70u: goto label_225d70;
        case 0x225d74u: goto label_225d74;
        case 0x225d78u: goto label_225d78;
        case 0x225d7cu: goto label_225d7c;
        case 0x225d80u: goto label_225d80;
        case 0x225d84u: goto label_225d84;
        case 0x225d88u: goto label_225d88;
        case 0x225d8cu: goto label_225d8c;
        default: break;
    }

    ctx->pc = 0x225c20u;

label_225c20:
    // 0x225c20: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x225c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
label_225c24:
    // 0x225c24: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x225c24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_225c28:
    // 0x225c28: 0xafa40040  sw          $a0, 0x40($sp)
    ctx->pc = 0x225c28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 4));
label_225c2c:
    // 0x225c2c: 0x3c030060  lui         $v1, 0x60
    ctx->pc = 0x225c2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)96 << 16));
label_225c30:
    // 0x225c30: 0x246352f0  addiu       $v1, $v1, 0x52F0
    ctx->pc = 0x225c30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21232));
label_225c34:
    // 0x225c34: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x225c34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_225c38:
    // 0x225c38: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x225c38u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
label_225c3c:
    // 0x225c3c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x225c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_225c40:
    // 0x225c40: 0xac400004  sw          $zero, 0x4($v0)
    ctx->pc = 0x225c40u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4), GPR_U32(ctx, 0));
label_225c44:
    // 0x225c44: 0x3c023fa0  lui         $v0, 0x3FA0
    ctx->pc = 0x225c44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16288 << 16));
label_225c48:
    // 0x225c48: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x225c48u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_225c4c:
    // 0x225c4c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x225c4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_225c50:
    // 0x225c50: 0xe4400040  swc1        $f0, 0x40($v0)
    ctx->pc = 0x225c50u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 64), bits); }
label_225c54:
    // 0x225c54: 0x3c0241f0  lui         $v0, 0x41F0
    ctx->pc = 0x225c54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16880 << 16));
label_225c58:
    // 0x225c58: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x225c58u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_225c5c:
    // 0x225c5c: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x225c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_225c60:
    // 0x225c60: 0xe4400044  swc1        $f0, 0x44($v0)
    ctx->pc = 0x225c60u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 68), bits); }
label_225c64:
    // 0x225c64: 0x24021770  addiu       $v0, $zero, 0x1770
    ctx->pc = 0x225c64u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 6000));
label_225c68:
    // 0x225c68: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x225c68u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_225c6c:
    // 0x225c6c: 0x0  nop
    ctx->pc = 0x225c6cu;
    // NOP
label_225c70:
    // 0x225c70: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x225c70u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
label_225c74:
    // 0x225c74: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x225c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_225c78:
    // 0x225c78: 0xe4400048  swc1        $f0, 0x48($v0)
    ctx->pc = 0x225c78u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 72), bits); }
label_225c7c:
    // 0x225c7c: 0x27a40030  addiu       $a0, $sp, 0x30
    ctx->pc = 0x225c7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_225c80:
    // 0x225c80: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x225c80u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
label_225c84:
    // 0x225c84: 0x10800009  beqz        $a0, . + 4 + (0x9 << 2)
label_225c88:
    if (ctx->pc == 0x225C88u) {
        ctx->pc = 0x225C8Cu;
        goto label_225c8c;
    }
    ctx->pc = 0x225C84u;
    {
        const bool branch_taken_0x225c84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x225c84) {
            ctx->pc = 0x225CACu;
            goto label_225cac;
        }
    }
    ctx->pc = 0x225C8Cu;
label_225c8c:
    // 0x225c8c: 0x801021  addu        $v0, $a0, $zero
    ctx->pc = 0x225c8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 0)));
label_225c90:
    // 0x225c90: 0xa0800000  sb          $zero, 0x0($a0)
    ctx->pc = 0x225c90u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 0));
label_225c94:
    // 0x225c94: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x225c94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_225c98:
    // 0x225c98: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x225c98u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
label_225c9c:
    // 0x225c9c: 0x0  nop
    ctx->pc = 0x225c9cu;
    // NOP
label_225ca0:
    // 0x225ca0: 0x0  nop
    ctx->pc = 0x225ca0u;
    // NOP
label_225ca4:
    // 0x225ca4: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
label_225ca8:
    if (ctx->pc == 0x225CA8u) {
        ctx->pc = 0x225CACu;
        goto label_225cac;
    }
    ctx->pc = 0x225CA4u;
    {
        const bool branch_taken_0x225ca4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x225ca4) {
            ctx->pc = 0x225C90u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_225c90;
        }
    }
    ctx->pc = 0x225CACu;
label_225cac:
    // 0x225cac: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x225cacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_225cb0:
    // 0x225cb0: 0x27a50030  addiu       $a1, $sp, 0x30
    ctx->pc = 0x225cb0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
label_225cb4:
    // 0x225cb4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x225cb4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_225cb8:
    // 0x225cb8: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x225cb8u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_225cbc:
    // 0x225cbc: 0x8f390014  lw          $t9, 0x14($t9)
    ctx->pc = 0x225cbcu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 20)));
label_225cc0:
    // 0x225cc0: 0x320f809  jalr        $t9
label_225cc4:
    if (ctx->pc == 0x225CC4u) {
        ctx->pc = 0x225CC8u;
        goto label_225cc8;
    }
    ctx->pc = 0x225CC0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x225CC8u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225CC0u, 0x225CC8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x225CC8u;
label_225cc8:
    // 0x225cc8: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x225cc8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
label_225ccc:
    // 0x225ccc: 0x2484b5a0  addiu       $a0, $a0, -0x4A60
    ctx->pc = 0x225cccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948256));
label_225cd0:
    // 0x225cd0: 0x27a30020  addiu       $v1, $sp, 0x20
    ctx->pc = 0x225cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_225cd4:
    // 0x225cd4: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x225cd4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_225cd8:
    // 0x225cd8: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x225cd8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_225cdc:
    // 0x225cdc: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x225cdcu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
label_225ce0:
    // 0x225ce0: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x225ce0u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_225ce4:
    // 0x225ce4: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x225ce4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_225ce8:
    // 0x225ce8: 0x27a50020  addiu       $a1, $sp, 0x20
    ctx->pc = 0x225ce8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
label_225cec:
    // 0x225cec: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x225cecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_225cf0:
    // 0x225cf0: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x225cf0u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_225cf4:
    // 0x225cf4: 0x8f39001c  lw          $t9, 0x1C($t9)
    ctx->pc = 0x225cf4u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 28)));
label_225cf8:
    // 0x225cf8: 0x320f809  jalr        $t9
label_225cfc:
    if (ctx->pc == 0x225CFCu) {
        ctx->pc = 0x225D00u;
        goto label_225d00;
    }
    ctx->pc = 0x225CF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x225D00u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225CF8u, 0x225D00u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x225D00u;
label_225d00:
    // 0x225d00: 0x3c04004f  lui         $a0, 0x4F
    ctx->pc = 0x225d00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)79 << 16));
label_225d04:
    // 0x225d04: 0x2484b5b0  addiu       $a0, $a0, -0x4A50
    ctx->pc = 0x225d04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948272));
label_225d08:
    // 0x225d08: 0x27a30010  addiu       $v1, $sp, 0x10
    ctx->pc = 0x225d08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_225d0c:
    // 0x225d0c: 0xdc820000  ld          $v0, 0x0($a0)
    ctx->pc = 0x225d0cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 4), 0)));
label_225d10:
    // 0x225d10: 0xc4800008  lwc1        $f0, 0x8($a0)
    ctx->pc = 0x225d10u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 4), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
label_225d14:
    // 0x225d14: 0xfc620000  sd          $v0, 0x0($v1)
    ctx->pc = 0x225d14u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 0), GPR_U64(ctx, 2));
label_225d18:
    // 0x225d18: 0xe4600008  swc1        $f0, 0x8($v1)
    ctx->pc = 0x225d18u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 3), 8), bits); }
label_225d1c:
    // 0x225d1c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x225d1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_225d20:
    // 0x225d20: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x225d20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_225d24:
    // 0x225d24: 0xc089a6c  jal         func_2269B0
label_225d28:
    if (ctx->pc == 0x225D28u) {
        ctx->pc = 0x225D2Cu;
        goto label_225d2c;
    }
    ctx->pc = 0x225D24u;
    SET_GPR_U32(ctx, 31, 0x225D2Cu);
    ctx->pc = 0x2269B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2269B0u, 0x225D24u, 0x225D2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225D2Cu;
label_225d2c:
    // 0x225d2c: 0xc78c8214  lwc1        $f12, -0x7DEC($gp)
    ctx->pc = 0x225d2cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294935060)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
label_225d30:
    // 0x225d30: 0xc0c3816  jal         func_30E058
label_225d34:
    if (ctx->pc == 0x225D34u) {
        ctx->pc = 0x225D38u;
        goto label_225d38;
    }
    ctx->pc = 0x225D30u;
    SET_GPR_U32(ctx, 31, 0x225D38u);
    ctx->pc = 0x30E058u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x30E058u, 0x225D30u, 0x225D38u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x225D38u;
label_225d38:
    // 0x225d38: 0xc7818184  lwc1        $f1, -0x7E7C($gp)
    ctx->pc = 0x225d38u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 28), 4294934916)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
label_225d3c:
    // 0x225d3c: 0x46000b02  mul.s       $f12, $f1, $f0
    ctx->pc = 0x225d3cu;
    ctx->f[12] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
label_225d40:
    // 0x225d40: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x225d40u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_225d44:
    // 0x225d44: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x225d44u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_225d48:
    // 0x225d48: 0x8c990000  lw          $t9, 0x0($a0)
    ctx->pc = 0x225d48u;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_225d4c:
    // 0x225d4c: 0x8f390024  lw          $t9, 0x24($t9)
    ctx->pc = 0x225d4cu;
    SET_GPR_S32(ctx, 25, (int32_t)READ32(ADD32(GPR_U32(ctx, 25), 36)));
label_225d50:
    // 0x225d50: 0x320f809  jalr        $t9
label_225d54:
    if (ctx->pc == 0x225D54u) {
        ctx->pc = 0x225D58u;
        goto label_225d58;
    }
    ctx->pc = 0x225D50u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 25);
        SET_GPR_U32(ctx, 31, 0x225D58u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225D50u, 0x225D58u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x225D58u;
label_225d58:
    // 0x225d58: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x225d58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_225d5c:
    // 0x225d5c: 0xac40005c  sw          $zero, 0x5C($v0)
    ctx->pc = 0x225d5cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 92), GPR_U32(ctx, 0));
label_225d60:
    // 0x225d60: 0x44800000  mtc1        $zero, $f0
    ctx->pc = 0x225d60u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
label_225d64:
    // 0x225d64: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x225d64u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_225d68:
    // 0x225d68: 0xe4400060  swc1        $f0, 0x60($v0)
    ctx->pc = 0x225d68u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 2), 96), bits); }
label_225d6c:
    // 0x225d6c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x225d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_225d70:
    // 0x225d70: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x225d70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_225d74:
    // 0x225d74: 0xac430058  sw          $v1, 0x58($v0)
    ctx->pc = 0x225d74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 88), GPR_U32(ctx, 3));
label_225d78:
    // 0x225d78: 0x8fa20040  lw          $v0, 0x40($sp)
    ctx->pc = 0x225d78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
label_225d7c:
    // 0x225d7c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x225d7cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_225d80:
    // 0x225d80: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x225d80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
label_225d84:
    // 0x225d84: 0x3e00008  jr          $ra
label_225d88:
    if (ctx->pc == 0x225D88u) {
        ctx->pc = 0x225D8Cu;
        goto label_225d8c;
    }
    ctx->pc = 0x225D84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x225D84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x225D8Cu;
label_225d8c:
    // 0x225d8c: 0x0  nop
    ctx->pc = 0x225d8cu;
    // NOP
    ctx->pc = 0x225d90u;
}
