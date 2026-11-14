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

// Function: sub_00310C68
// Address: 0x310c68 - 0x310e98
void sub_00310C68_0x310c68(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00310C68_0x310c68");
#endif

    switch (ctx->pc) {
        case 0x310c80u: goto label_310c80;
        case 0x310c8cu: goto label_310c8c;
        case 0x310c98u: goto label_310c98;
        case 0x310ca4u: goto label_310ca4;
        case 0x310cb0u: goto label_310cb0;
        case 0x310cbcu: goto label_310cbc;
        case 0x310cd0u: goto label_310cd0;
        case 0x310ce8u: goto label_310ce8;
        case 0x310cf4u: goto label_310cf4;
        case 0x310d00u: goto label_310d00;
        case 0x310d0cu: goto label_310d0c;
        case 0x310d18u: goto label_310d18;
        case 0x310d24u: goto label_310d24;
        case 0x310d38u: goto label_310d38;
        case 0x310df0u: goto label_310df0;
        default: break;
    }

    ctx->pc = 0x310c68u;

    // 0x310c68: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x310c68u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x310c6c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x310c6cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x310c70: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x310c70u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x310c74: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x310c74u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310c78: 0xc0c4312  jal         func_310C48
    ctx->pc = 0x310C78u;
    SET_GPR_U32(ctx, 31, 0x310C80u);
    ctx->pc = 0x310C7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310C78u;
    // 0x310c7c: 0x92040007  lbu         $a0, 0x7($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x310C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x310C48u, 0x310C78u, 0x310C80u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310C80u;
label_310c80:
    // 0x310c80: 0x92040006  lbu         $a0, 0x6($s0)
    ctx->pc = 0x310c80u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x310c84: 0xc0c4312  jal         func_310C48
    ctx->pc = 0x310C84u;
    SET_GPR_U32(ctx, 31, 0x310C8Cu);
    ctx->pc = 0x310C88u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310C84u;
    // 0x310c88: 0xa2020007  sb          $v0, 0x7($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 7), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x310C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x310C48u, 0x310C84u, 0x310C8Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310C8Cu;
label_310c8c:
    // 0x310c8c: 0x92040005  lbu         $a0, 0x5($s0)
    ctx->pc = 0x310c8cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x310c90: 0xc0c4312  jal         func_310C48
    ctx->pc = 0x310C90u;
    SET_GPR_U32(ctx, 31, 0x310C98u);
    ctx->pc = 0x310C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310C90u;
    // 0x310c94: 0xa2020006  sb          $v0, 0x6($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x310C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x310C48u, 0x310C90u, 0x310C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310C98u;
label_310c98:
    // 0x310c98: 0x92040003  lbu         $a0, 0x3($s0)
    ctx->pc = 0x310c98u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x310c9c: 0xc0c4312  jal         func_310C48
    ctx->pc = 0x310C9Cu;
    SET_GPR_U32(ctx, 31, 0x310CA4u);
    ctx->pc = 0x310CA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310C9Cu;
    // 0x310ca0: 0xa2020005  sb          $v0, 0x5($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x310C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x310C48u, 0x310C9Cu, 0x310CA4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310CA4u;
label_310ca4:
    // 0x310ca4: 0x92040002  lbu         $a0, 0x2($s0)
    ctx->pc = 0x310ca4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x310ca8: 0xc0c4312  jal         func_310C48
    ctx->pc = 0x310CA8u;
    SET_GPR_U32(ctx, 31, 0x310CB0u);
    ctx->pc = 0x310CACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310CA8u;
    // 0x310cac: 0xa2020003  sb          $v0, 0x3($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x310C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x310C48u, 0x310CA8u, 0x310CB0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310CB0u;
label_310cb0:
    // 0x310cb0: 0x92040001  lbu         $a0, 0x1($s0)
    ctx->pc = 0x310cb0u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x310cb4: 0xc0c4312  jal         func_310C48
    ctx->pc = 0x310CB4u;
    SET_GPR_U32(ctx, 31, 0x310CBCu);
    ctx->pc = 0x310CB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310CB4u;
    // 0x310cb8: 0xa2020002  sb          $v0, 0x2($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x310C48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x310C48u, 0x310CB4u, 0x310CBCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310CBCu;
label_310cbc:
    // 0x310cbc: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x310cbcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x310cc0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x310cc0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x310cc4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x310cc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x310cc8: 0x3e00008  jr          $ra
    ctx->pc = 0x310CC8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x310CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310CC8u;
        // 0x310ccc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x310CC8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x310CD0u;
label_310cd0:
    // 0x310cd0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x310cd0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x310cd4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x310cd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x310cd8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x310cd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x310cdc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x310cdcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310ce0: 0xc0c4306  jal         func_310C18
    ctx->pc = 0x310CE0u;
    SET_GPR_U32(ctx, 31, 0x310CE8u);
    ctx->pc = 0x310CE4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310CE0u;
    // 0x310ce4: 0x92040007  lbu         $a0, 0x7($s0) (Delay Slot)
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x310C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x310C18u, 0x310CE0u, 0x310CE8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310CE8u;
label_310ce8:
    // 0x310ce8: 0x92040006  lbu         $a0, 0x6($s0)
    ctx->pc = 0x310ce8u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x310cec: 0xc0c4306  jal         func_310C18
    ctx->pc = 0x310CECu;
    SET_GPR_U32(ctx, 31, 0x310CF4u);
    ctx->pc = 0x310CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310CECu;
    // 0x310cf0: 0xa2020007  sb          $v0, 0x7($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 7), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x310C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x310C18u, 0x310CECu, 0x310CF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310CF4u;
label_310cf4:
    // 0x310cf4: 0x92040005  lbu         $a0, 0x5($s0)
    ctx->pc = 0x310cf4u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x310cf8: 0xc0c4306  jal         func_310C18
    ctx->pc = 0x310CF8u;
    SET_GPR_U32(ctx, 31, 0x310D00u);
    ctx->pc = 0x310CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310CF8u;
    // 0x310cfc: 0xa2020006  sb          $v0, 0x6($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x310C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x310C18u, 0x310CF8u, 0x310D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310D00u;
label_310d00:
    // 0x310d00: 0x92040003  lbu         $a0, 0x3($s0)
    ctx->pc = 0x310d00u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x310d04: 0xc0c4306  jal         func_310C18
    ctx->pc = 0x310D04u;
    SET_GPR_U32(ctx, 31, 0x310D0Cu);
    ctx->pc = 0x310D08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310D04u;
    // 0x310d08: 0xa2020005  sb          $v0, 0x5($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x310C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x310C18u, 0x310D04u, 0x310D0Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310D0Cu;
label_310d0c:
    // 0x310d0c: 0x92040002  lbu         $a0, 0x2($s0)
    ctx->pc = 0x310d0cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x310d10: 0xc0c4306  jal         func_310C18
    ctx->pc = 0x310D10u;
    SET_GPR_U32(ctx, 31, 0x310D18u);
    ctx->pc = 0x310D14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310D10u;
    // 0x310d14: 0xa2020003  sb          $v0, 0x3($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x310C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x310C18u, 0x310D10u, 0x310D18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310D18u;
label_310d18:
    // 0x310d18: 0x92040001  lbu         $a0, 0x1($s0)
    ctx->pc = 0x310d18u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x310d1c: 0xc0c4306  jal         func_310C18
    ctx->pc = 0x310D1Cu;
    SET_GPR_U32(ctx, 31, 0x310D24u);
    ctx->pc = 0x310D20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x310D1Cu;
    // 0x310d20: 0xa2020002  sb          $v0, 0x2($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x310C18u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x310C18u, 0x310D1Cu, 0x310D24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x310D24u;
label_310d24:
    // 0x310d24: 0xa2020001  sb          $v0, 0x1($s0)
    ctx->pc = 0x310d24u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x310d28: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x310d28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x310d2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x310d2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x310d30: 0x3e00008  jr          $ra
    ctx->pc = 0x310D30u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x310D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310D30u;
        // 0x310d34: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x310D30u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x310D38u;
label_310d38:
    // 0x310d38: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x310d38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310d3c: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x310d3cu;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x310d40: 0x90a30005  lbu         $v1, 0x5($a1)
    ctx->pc = 0x310d40u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 5)));
    // 0x310d44: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x310d44u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x310d48: 0x90a40007  lbu         $a0, 0x7($a1)
    ctx->pc = 0x310d48u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 7)));
    // 0x310d4c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x310d4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x310d50: 0x2449b698  addiu       $t1, $v0, -0x4968
    ctx->pc = 0x310d50u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948504));
    // 0x310d54: 0x69260007  ldl         $a2, 0x7($t1)
    ctx->pc = 0x310d54u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x310d58: 0x6d260000  ldr         $a2, 0x0($t1)
    ctx->pc = 0x310d58u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x310d5c: 0x8927000b  lwl         $a3, 0xB($t1)
    ctx->pc = 0x310d5cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 7) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 7, (int32_t)merged); }
    // 0x310d60: 0x99270008  lwr         $a3, 0x8($t1)
    ctx->pc = 0x310d60u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 7) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 7) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 7, merged64); }
    // 0x310d64: 0xb3a60007  sdl         $a2, 0x7($sp)
    ctx->pc = 0x310d64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x310d68: 0xb7a60000  sdr         $a2, 0x0($sp)
    ctx->pc = 0x310d68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x310d6c: 0xaba7000b  swl         $a3, 0xB($sp)
    ctx->pc = 0x310d6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x310d70: 0xbba70008  swr         $a3, 0x8($sp)
    ctx->pc = 0x310d70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x310d74: 0x30840003  andi        $a0, $a0, 0x3
    ctx->pc = 0x310d74u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x310d78: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x310D78u;
    {
        const bool branch_taken_0x310d78 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x310D7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310D78u;
        // 0x310d7c: 0xa0a30005  sb          $v1, 0x5($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 5), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310d78) {
            ctx->pc = 0x310D88u;
            goto label_310d88;
        }
    }
    ctx->pc = 0x310D80u;
    // 0x310d80: 0x2402001d  addiu       $v0, $zero, 0x1D
    ctx->pc = 0x310d80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x310d84: 0xa3a20001  sb          $v0, 0x1($sp)
    ctx->pc = 0x310d84u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 2));
label_310d88:
    // 0x310d88: 0x90a20006  lbu         $v0, 0x6($a1)
    ctx->pc = 0x310d88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x310d8c: 0x90a40005  lbu         $a0, 0x5($a1)
    ctx->pc = 0x310d8cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 5)));
    // 0x310d90: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x310d90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x310d94: 0x8043ffff  lb          $v1, -0x1($v0)
    ctx->pc = 0x310d94u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294967295)));
    // 0x310d98: 0x64182a  slt         $v1, $v1, $a0
    ctx->pc = 0x310d98u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x310d9c: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x310D9Cu;
    {
        const bool branch_taken_0x310d9c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x310DA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310D9Cu;
        // 0x310da0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310d9c) {
            ctx->pc = 0x310DE4u;
            goto label_310de4;
        }
    }
    ctx->pc = 0x310DA4u;
    // 0x310da4: 0x90a30006  lbu         $v1, 0x6($a1)
    ctx->pc = 0x310da4u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x310da8: 0xa0a20005  sb          $v0, 0x5($a1)
    ctx->pc = 0x310da8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 5), (uint8_t)GPR_U32(ctx, 2));
    // 0x310dac: 0x2404000d  addiu       $a0, $zero, 0xD
    ctx->pc = 0x310dacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x310db0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x310db0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x310db4: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x310db4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x310db8: 0x1444000a  bne         $v0, $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x310DB8u;
    {
        const bool branch_taken_0x310db8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x310DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310DB8u;
        // 0x310dbc: 0xa0a30006  sb          $v1, 0x6($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 6), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310db8) {
            ctx->pc = 0x310DE4u;
            goto label_310de4;
        }
    }
    ctx->pc = 0x310DC0u;
    // 0x310dc0: 0x90a30007  lbu         $v1, 0x7($a1)
    ctx->pc = 0x310dc0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 7)));
    // 0x310dc4: 0x24020063  addiu       $v0, $zero, 0x63
    ctx->pc = 0x310dc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
    // 0x310dc8: 0x14620003  bne         $v1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x310DC8u;
    {
        const bool branch_taken_0x310dc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x310DCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310DC8u;
        // 0x310dcc: 0x24620001  addiu       $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310dc8) {
            ctx->pc = 0x310DD8u;
            goto label_310dd8;
        }
    }
    ctx->pc = 0x310DD0u;
    // 0x310dd0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x310DD0u;
    {
        const bool branch_taken_0x310dd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x310DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310DD0u;
        // 0x310dd4: 0xa0a00007  sb          $zero, 0x7($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 7), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310dd0) {
            ctx->pc = 0x310DDCu;
            goto label_310ddc;
        }
    }
    ctx->pc = 0x310DD8u;
label_310dd8:
    // 0x310dd8: 0xa0a20007  sb          $v0, 0x7($a1)
    ctx->pc = 0x310dd8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 7), (uint8_t)GPR_U32(ctx, 2));
label_310ddc:
    // 0x310ddc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x310ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x310de0: 0xa0a20006  sb          $v0, 0x6($a1)
    ctx->pc = 0x310de0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 6), (uint8_t)GPR_U32(ctx, 2));
label_310de4:
    // 0x310de4: 0x3e00008  jr          $ra
    ctx->pc = 0x310DE4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x310DE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310DE4u;
        // 0x310de8: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x310DE4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x310DECu;
    // 0x310dec: 0x0  nop
    ctx->pc = 0x310decu;
    // NOP
label_310df0:
    // 0x310df0: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x310df0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x310df4: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x310df4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x310df8: 0x90a30005  lbu         $v1, 0x5($a1)
    ctx->pc = 0x310df8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 5)));
    // 0x310dfc: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x310dfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x310e00: 0x90a40007  lbu         $a0, 0x7($a1)
    ctx->pc = 0x310e00u;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 7)));
    // 0x310e04: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x310e04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x310e08: 0x2449b698  addiu       $t1, $v0, -0x4968
    ctx->pc = 0x310e08u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294948504));
    // 0x310e0c: 0x69260007  ldl         $a2, 0x7($t1)
    ctx->pc = 0x310e0cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem << shift)); }
    // 0x310e10: 0x6d260000  ldr         $a2, 0x0($t1)
    ctx->pc = 0x310e10u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 6, (GPR_U64(ctx, 6) & keepMask) | (mem >> shift)); }
    // 0x310e14: 0x8927000b  lwl         $a3, 0xB($t1)
    ctx->pc = 0x310e14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 7) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 7, (int32_t)merged); }
    // 0x310e18: 0x99270008  lwr         $a3, 0x8($t1)
    ctx->pc = 0x310e18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 7) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 7) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 7, merged64); }
    // 0x310e1c: 0xb3a60007  sdl         $a2, 0x7($sp)
    ctx->pc = 0x310e1cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x310e20: 0xb7a60000  sdr         $a2, 0x0($sp)
    ctx->pc = 0x310e20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x310e24: 0xaba7000b  swl         $a3, 0xB($sp)
    ctx->pc = 0x310e24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 11); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x310e28: 0xbba70008  swr         $a3, 0x8($sp)
    ctx->pc = 0x310e28u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 29), 8); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 7); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x310e2c: 0x30840003  andi        $a0, $a0, 0x3
    ctx->pc = 0x310e2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)3);
    // 0x310e30: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x310E30u;
    {
        const bool branch_taken_0x310e30 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x310E34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310E30u;
        // 0x310e34: 0xa0a30005  sb          $v1, 0x5($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 5), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310e30) {
            ctx->pc = 0x310E40u;
            goto label_310e40;
        }
    }
    ctx->pc = 0x310E38u;
    // 0x310e38: 0x2402001d  addiu       $v0, $zero, 0x1D
    ctx->pc = 0x310e38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 29));
    // 0x310e3c: 0xa3a20001  sb          $v0, 0x1($sp)
    ctx->pc = 0x310e3cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 1), (uint8_t)GPR_U32(ctx, 2));
label_310e40:
    // 0x310e40: 0x90a20005  lbu         $v0, 0x5($a1)
    ctx->pc = 0x310e40u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 5)));
    // 0x310e44: 0x14400011  bnez        $v0, . + 4 + (0x11 << 2)
    ctx->pc = 0x310E44u;
    {
        const bool branch_taken_0x310e44 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x310e44) {
            ctx->pc = 0x310E8Cu;
            goto label_310e8c;
        }
    }
    ctx->pc = 0x310E4Cu;
    // 0x310e4c: 0x90a20006  lbu         $v0, 0x6($a1)
    ctx->pc = 0x310e4cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x310e50: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x310e50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x310e54: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x310e54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x310e58: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x310E58u;
    {
        const bool branch_taken_0x310e58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x310E5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310E58u;
        // 0x310e5c: 0xa0a20006  sb          $v0, 0x6($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 6), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310e58) {
            ctx->pc = 0x310E7Cu;
            goto label_310e7c;
        }
    }
    ctx->pc = 0x310E60u;
    // 0x310e60: 0x90a20007  lbu         $v0, 0x7($a1)
    ctx->pc = 0x310e60u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 7)));
    // 0x310e64: 0x14400002  bnez        $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x310E64u;
    {
        const bool branch_taken_0x310e64 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x310E68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310E64u;
        // 0x310e68: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x310e64) {
            ctx->pc = 0x310E70u;
            goto label_310e70;
        }
    }
    ctx->pc = 0x310E6Cu;
    // 0x310e6c: 0x24020063  addiu       $v0, $zero, 0x63
    ctx->pc = 0x310e6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 99));
label_310e70:
    // 0x310e70: 0xa0a20007  sb          $v0, 0x7($a1)
    ctx->pc = 0x310e70u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 7), (uint8_t)GPR_U32(ctx, 2));
    // 0x310e74: 0x2402000c  addiu       $v0, $zero, 0xC
    ctx->pc = 0x310e74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x310e78: 0xa0a20006  sb          $v0, 0x6($a1)
    ctx->pc = 0x310e78u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 6), (uint8_t)GPR_U32(ctx, 2));
label_310e7c:
    // 0x310e7c: 0x90a20006  lbu         $v0, 0x6($a1)
    ctx->pc = 0x310e7cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 6)));
    // 0x310e80: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x310e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x310e84: 0x9043ffff  lbu         $v1, -0x1($v0)
    ctx->pc = 0x310e84u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294967295)));
    // 0x310e88: 0xa0a30005  sb          $v1, 0x5($a1)
    ctx->pc = 0x310e88u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 5), (uint8_t)GPR_U32(ctx, 3));
label_310e8c:
    // 0x310e8c: 0x3e00008  jr          $ra
    ctx->pc = 0x310E8Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x310E90u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x310E8Cu;
        // 0x310e90: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x310E8Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x310E94u;
    // 0x310e94: 0x0  nop
    ctx->pc = 0x310e94u;
    // NOP
    ctx->pc = 0x310e98u;
}
