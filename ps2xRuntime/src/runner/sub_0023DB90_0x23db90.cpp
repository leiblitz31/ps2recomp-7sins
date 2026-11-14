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

// Function: sub_0023DB90
// Address: 0x23db90 - 0x23dc70
void sub_0023DB90_0x23db90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0023DB90_0x23db90");
#endif

    switch (ctx->pc) {
        case 0x23dbc8u: goto label_23dbc8;
        case 0x23dc1cu: goto label_23dc1c;
        case 0x23dc54u: goto label_23dc54;
        default: break;
    }

    ctx->pc = 0x23db90u;

    // 0x23db90: 0x27bdff00  addiu       $sp, $sp, -0x100
    ctx->pc = 0x23db90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967040));
    // 0x23db94: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x23db94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x23db98: 0xafa40080  sw          $a0, 0x80($sp)
    ctx->pc = 0x23db98u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 4));
    // 0x23db9c: 0xafa50090  sw          $a1, 0x90($sp)
    ctx->pc = 0x23db9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 5));
    // 0x23dba0: 0xe7ac00a0  swc1        $f12, 0xA0($sp)
    ctx->pc = 0x23dba0u;
    { float f = ctx->f[12]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 160), bits); }
    // 0x23dba4: 0xafa600b0  sw          $a2, 0xB0($sp)
    ctx->pc = 0x23dba4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 6));
    // 0x23dba8: 0xe7ad00c0  swc1        $f13, 0xC0($sp)
    ctx->pc = 0x23dba8u;
    { float f = ctx->f[13]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 192), bits); }
    // 0x23dbac: 0xe7ae00d0  swc1        $f14, 0xD0($sp)
    ctx->pc = 0x23dbacu;
    { float f = ctx->f[14]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 208), bits); }
    // 0x23dbb0: 0xa3a700e0  sb          $a3, 0xE0($sp)
    ctx->pc = 0x23dbb0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 224), (uint8_t)GPR_U32(ctx, 7));
    // 0x23dbb4: 0xafa800f0  sw          $t0, 0xF0($sp)
    ctx->pc = 0x23dbb4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 8));
    // 0x23dbb8: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x23dbb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x23dbbc: 0x8fa50090  lw          $a1, 0x90($sp)
    ctx->pc = 0x23dbbcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x23dbc0: 0xc0bc5c6  jal         func_2F1718
    ctx->pc = 0x23DBC0u;
    SET_GPR_U32(ctx, 31, 0x23DBC8u);
    ctx->pc = 0x2F1718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1718u, 0x23DBC0u, 0x23DBC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DBC8u;
label_23dbc8:
    // 0x23dbc8: 0x8f84bbb4  lw          $a0, -0x444C($gp)
    ctx->pc = 0x23dbc8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294949812)));
    // 0x23dbcc: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x23dbccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x23dbd0: 0x21880  sll         $v1, $v0, 2
    ctx->pc = 0x23dbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x23dbd4: 0x8c820030  lw          $v0, 0x30($a0)
    ctx->pc = 0x23dbd4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 48)));
    // 0x23dbd8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x23dbd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x23dbdc: 0xc7a100a0  lwc1        $f1, 0xA0($sp)
    ctx->pc = 0x23dbdcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 160)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[1] = f; }
    // 0x23dbe0: 0xc4400000  lwc1        $f0, 0x0($v0)
    ctx->pc = 0x23dbe0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 0)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23dbe4: 0x46000802  mul.s       $f0, $f1, $f0
    ctx->pc = 0x23dbe4u;
    ctx->f[0] = FPU_MUL_S(ctx->f[1], ctx->f[0]);
    // 0x23dbe8: 0xe7a00054  swc1        $f0, 0x54($sp)
    ctx->pc = 0x23dbe8u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 84), bits); }
    // 0x23dbec: 0x93a200e0  lbu         $v0, 0xE0($sp)
    ctx->pc = 0x23dbecu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 224)));
    // 0x23dbf0: 0xa3a20050  sb          $v0, 0x50($sp)
    ctx->pc = 0x23dbf0u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 80), (uint8_t)GPR_U32(ctx, 2));
    // 0x23dbf4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23dbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23dbf8: 0xa3a20058  sb          $v0, 0x58($sp)
    ctx->pc = 0x23dbf8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 88), (uint8_t)GPR_U32(ctx, 2));
    // 0x23dbfc: 0xc7a000c0  lwc1        $f0, 0xC0($sp)
    ctx->pc = 0x23dbfcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 192)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23dc00: 0xe7a00068  swc1        $f0, 0x68($sp)
    ctx->pc = 0x23dc00u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 104), bits); }
    // 0x23dc04: 0xc7a000d0  lwc1        $f0, 0xD0($sp)
    ctx->pc = 0x23dc04u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 208)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x23dc08: 0xe7a0006c  swc1        $f0, 0x6C($sp)
    ctx->pc = 0x23dc08u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 108), bits); }
    // 0x23dc0c: 0x27a4005c  addiu       $a0, $sp, 0x5C
    ctx->pc = 0x23dc0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 92));
    // 0x23dc10: 0x8fa500b0  lw          $a1, 0xB0($sp)
    ctx->pc = 0x23dc10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x23dc14: 0xc041d58  jal         func_107560
    ctx->pc = 0x23DC14u;
    SET_GPR_U32(ctx, 31, 0x23DC1Cu);
    ctx->pc = 0x107560u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x107560u, 0x23DC14u, 0x23DC1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DC1Cu;
label_23dc1c:
    // 0x23dc1c: 0xa3a00074  sb          $zero, 0x74($sp)
    ctx->pc = 0x23dc1cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 116), (uint8_t)GPR_U32(ctx, 0));
    // 0x23dc20: 0x8fa200f0  lw          $v0, 0xF0($sp)
    ctx->pc = 0x23dc20u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 240)));
    // 0x23dc24: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x23dc24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
    // 0x23dc28: 0x8fa40080  lw          $a0, 0x80($sp)
    ctx->pc = 0x23dc28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x23dc2c: 0x8c830034  lw          $v1, 0x34($a0)
    ctx->pc = 0x23dc2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 52)));
    // 0x23dc30: 0x24620001  addiu       $v0, $v1, 0x1
    ctx->pc = 0x23dc30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x23dc34: 0xac820034  sw          $v0, 0x34($a0)
    ctx->pc = 0x23dc34u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 52), GPR_U32(ctx, 2));
    // 0x23dc38: 0xafa30078  sw          $v1, 0x78($sp)
    ctx->pc = 0x23dc38u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 120), GPR_U32(ctx, 3));
    // 0x23dc3c: 0xafa0007c  sw          $zero, 0x7C($sp)
    ctx->pc = 0x23dc3cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 124), GPR_U32(ctx, 0));
    // 0x23dc40: 0x8fa20080  lw          $v0, 0x80($sp)
    ctx->pc = 0x23dc40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x23dc44: 0x24440028  addiu       $a0, $v0, 0x28
    ctx->pc = 0x23dc44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 40));
    // 0x23dc48: 0x27a50010  addiu       $a1, $sp, 0x10
    ctx->pc = 0x23dc48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x23dc4c: 0xc08f584  jal         func_23D610
    ctx->pc = 0x23DC4Cu;
    SET_GPR_U32(ctx, 31, 0x23DC54u);
    ctx->pc = 0x23D610u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x23D610u, 0x23DC4Cu, 0x23DC54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x23DC54u;
label_23dc54:
    // 0x23dc54: 0x8fa20078  lw          $v0, 0x78($sp)
    ctx->pc = 0x23dc54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 120)));
    // 0x23dc58: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x23dc58u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x23dc5c: 0x27bd0100  addiu       $sp, $sp, 0x100
    ctx->pc = 0x23dc5cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
    // 0x23dc60: 0x3e00008  jr          $ra
    ctx->pc = 0x23DC60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23DC60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x23DC68u;
    // 0x23dc68: 0x0  nop
    ctx->pc = 0x23dc68u;
    // NOP
    // 0x23dc6c: 0x0  nop
    ctx->pc = 0x23dc6cu;
    // NOP
    ctx->pc = 0x23dc70u;
}
