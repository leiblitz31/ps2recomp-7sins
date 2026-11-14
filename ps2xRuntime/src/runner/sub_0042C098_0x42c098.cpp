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

// Function: sub_0042C098
// Address: 0x42c098 - 0x42c618
void sub_0042C098_0x42c098(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0042C098_0x42c098");
#endif

    switch (ctx->pc) {
        case 0x42c108u: goto label_42c108;
        case 0x42c12cu: goto label_42c12c;
        case 0x42c238u: goto label_42c238;
        case 0x42c278u: goto label_42c278;
        case 0x42c2b8u: goto label_42c2b8;
        case 0x42c2e8u: goto label_42c2e8;
        case 0x42c318u: goto label_42c318;
        case 0x42c358u: goto label_42c358;
        case 0x42c38cu: goto label_42c38c;
        case 0x42c3c8u: goto label_42c3c8;
        case 0x42c3e8u: goto label_42c3e8;
        case 0x42c418u: goto label_42c418;
        case 0x42c458u: goto label_42c458;
        case 0x42c4b8u: goto label_42c4b8;
        case 0x42c4f4u: goto label_42c4f4;
        case 0x42c51cu: goto label_42c51c;
        case 0x42c558u: goto label_42c558;
        case 0x42c584u: goto label_42c584;
        case 0x42c5d0u: goto label_42c5d0;
        case 0x42c5e0u: goto label_42c5e0;
        default: break;
    }

    ctx->pc = 0x42c098u;

    // 0x42c098: 0x27bdfec0  addiu       $sp, $sp, -0x140
    ctx->pc = 0x42c098u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966976));
    // 0x42c09c: 0x30c20007  andi        $v0, $a2, 0x7
    ctx->pc = 0x42c09cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)7);
    // 0x42c0a0: 0xffbf0130  sd          $ra, 0x130($sp)
    ctx->pc = 0x42c0a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 304), GPR_U64(ctx, 31));
    // 0x42c0a4: 0x30c300f8  andi        $v1, $a2, 0xF8
    ctx->pc = 0x42c0a4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)248);
    // 0x42c0a8: 0xa0a20020  sb          $v0, 0x20($a1)
    ctx->pc = 0x42c0a8u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 32), (uint8_t)GPR_U32(ctx, 2));
    // 0x42c0ac: 0x30c89000  andi        $t0, $a2, 0x9000
    ctx->pc = 0x42c0acu;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)36864);
    // 0x42c0b0: 0xa0a30021  sb          $v1, 0x21($a1)
    ctx->pc = 0x42c0b0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 33), (uint8_t)GPR_U32(ctx, 3));
    // 0x42c0b4: 0x30c70f00  andi        $a3, $a2, 0xF00
    ctx->pc = 0x42c0b4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)3840);
    // 0x42c0b8: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x42c0b8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x42c0bc: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x42c0bcu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x42c0c0: 0x10400147  beqz        $v0, . + 4 + (0x147 << 2)
    ctx->pc = 0x42C0C0u;
    {
        const bool branch_taken_0x42c0c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42C0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C0C0u;
        // 0x42c0c4: 0x30c66000  andi        $a2, $a2, 0x6000 (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)24576);
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c0c0) {
            ctx->pc = 0x42C5E0u;
            goto label_42c5e0;
        }
    }
    ctx->pc = 0x42C0C8u;
    // 0x42c0c8: 0x3c020060  lui         $v0, 0x60
    ctx->pc = 0x42c0c8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
    // 0x42c0cc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x42c0ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x42c0d0: 0x24420910  addiu       $v0, $v0, 0x910
    ctx->pc = 0x42c0d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2320));
    // 0x42c0d4: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x42c0d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x42c0d8: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x42c0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x42c0dc: 0x800008  jr          $a0
    ctx->pc = 0x42C0DCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x42C0E4u: goto label_42c0e4;
            case 0x42C114u: goto label_42c114;
            case 0x42C138u: goto label_42c138;
            case 0x42C3F4u: goto label_42c3f4;
            case 0x42C534u: goto label_42c534;
            case 0x42C5E0u: goto label_42c5e0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42C0DCu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x42C0E4u;
label_42c0e4:
    // 0x42c0e4: 0x14c00004  bnez        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x42C0E4u;
    {
        const bool branch_taken_0x42c0e4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x42C0E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C0E4u;
        // 0x42c0e8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c0e4) {
            ctx->pc = 0x42C0F8u;
            goto label_42c0f8;
        }
    }
    ctx->pc = 0x42C0ECu;
    // 0x42c0ec: 0x11000009  beqz        $t0, . + 4 + (0x9 << 2)
    ctx->pc = 0x42C0ECu;
    {
        const bool branch_taken_0x42c0ec = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x42c0ec) {
            ctx->pc = 0x42C114u;
            goto label_42c114;
        }
    }
    ctx->pc = 0x42C0F4u;
    // 0x42c0f4: 0x0  nop
    ctx->pc = 0x42c0f4u;
    // NOP
label_42c0f8:
    // 0x42c0f8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x42c0f8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x42c0fc: 0xafa20000  sw          $v0, 0x0($sp)
    ctx->pc = 0x42c0fcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    // 0x42c100: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x42C100u;
    SET_GPR_U32(ctx, 31, 0x42C108u);
    ctx->pc = 0x42C104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42C100u;
    // 0x42c104: 0x3484000d  ori         $a0, $a0, 0xD (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)13);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x42C100u, 0x42C108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42C108u;
label_42c108:
    // 0x42c108: 0x3a0202d  daddu       $a0, $sp, $zero
    ctx->pc = 0x42c108u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x42c10c: 0x10000132  b           . + 4 + (0x132 << 2)
    ctx->pc = 0x42C10Cu;
    {
        const bool branch_taken_0x42c10c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42C110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C10Cu;
        // 0x42c110: 0xafa20004  sw          $v0, 0x4($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c10c) {
            ctx->pc = 0x42C5D8u;
            goto label_42c5d8;
        }
    }
    ctx->pc = 0x42C114u;
label_42c114:
    // 0x42c114: 0x10c00008  beqz        $a2, . + 4 + (0x8 << 2)
    ctx->pc = 0x42C114u;
    {
        const bool branch_taken_0x42c114 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x42C118u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C114u;
        // 0x42c118: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c114) {
            ctx->pc = 0x42C138u;
            goto label_42c138;
        }
    }
    ctx->pc = 0x42C11Cu;
    // 0x42c11c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x42c11cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x42c120: 0xafa20010  sw          $v0, 0x10($sp)
    ctx->pc = 0x42c120u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 2));
    // 0x42c124: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x42C124u;
    SET_GPR_U32(ctx, 31, 0x42C12Cu);
    ctx->pc = 0x42C128u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42C124u;
    // 0x42c128: 0x3484000d  ori         $a0, $a0, 0xD (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)13);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x42C124u, 0x42C12Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42C12Cu;
label_42c12c:
    // 0x42c12c: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x42c12cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x42c130: 0x10000129  b           . + 4 + (0x129 << 2)
    ctx->pc = 0x42C130u;
    {
        const bool branch_taken_0x42c130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42C134u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C130u;
        // 0x42c134: 0x27a40010  addiu       $a0, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c130) {
            ctx->pc = 0x42C5D8u;
            goto label_42c5d8;
        }
    }
    ctx->pc = 0x42C138u;
label_42c138:
    // 0x42c138: 0x14e00018  bnez        $a3, . + 4 + (0x18 << 2)
    ctx->pc = 0x42C138u;
    {
        const bool branch_taken_0x42c138 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 0));
        ctx->pc = 0x42C13Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C138u;
        // 0x42c13c: 0xe81025  or          $v0, $a3, $t0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c138) {
            ctx->pc = 0x42C19Cu;
            goto label_42c19c;
        }
    }
    ctx->pc = 0x42C140u;
    // 0x42c140: 0x8ca20014  lw          $v0, 0x14($a1)
    ctx->pc = 0x42c140u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x42c144: 0x2444fffc  addiu       $a0, $v0, -0x4
    ctx->pc = 0x42c144u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967292));
    // 0x42c148: 0x2c83001d  sltiu       $v1, $a0, 0x1D
    ctx->pc = 0x42c148u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)(int64_t)(int32_t)29) ? 1 : 0);
    // 0x42c14c: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x42C14Cu;
    {
        const bool branch_taken_0x42c14c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x42C150u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C14Cu;
        // 0x42c150: 0x3c020060  lui         $v0, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)96 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c14c) {
            ctx->pc = 0x42C194u;
            goto label_42c194;
        }
    }
    ctx->pc = 0x42C154u;
    // 0x42c154: 0x41880  sll         $v1, $a0, 2
    ctx->pc = 0x42c154u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x42c158: 0x24420930  addiu       $v0, $v0, 0x930
    ctx->pc = 0x42c158u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 2352));
    // 0x42c15c: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x42c15cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x42c160: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x42c160u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x42c164: 0x800008  jr          $a0
    ctx->pc = 0x42C164u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x42C16Cu: goto label_42c16c;
            case 0x42C178u: goto label_42c178;
            case 0x42C184u: goto label_42c184;
            case 0x42C18Cu: goto label_42c18c;
            case 0x42C194u: goto label_42c194;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42C164u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x42C16Cu;
label_42c16c:
    // 0x42c16c: 0x24070100  addiu       $a3, $zero, 0x100
    ctx->pc = 0x42c16cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x42c170: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x42C170u;
    {
        const bool branch_taken_0x42c170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42C174u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C170u;
        // 0x42c174: 0x24064000  addiu       $a2, $zero, 0x4000 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c170) {
            ctx->pc = 0x42C198u;
            goto label_42c198;
        }
    }
    ctx->pc = 0x42C178u;
label_42c178:
    // 0x42c178: 0x24070100  addiu       $a3, $zero, 0x100
    ctx->pc = 0x42c178u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x42c17c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x42C17Cu;
    {
        const bool branch_taken_0x42c17c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42C180u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C17Cu;
        // 0x42c180: 0x24062000  addiu       $a2, $zero, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c17c) {
            ctx->pc = 0x42C198u;
            goto label_42c198;
        }
    }
    ctx->pc = 0x42C184u;
label_42c184:
    // 0x42c184: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x42C184u;
    {
        const bool branch_taken_0x42c184 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42C188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C184u;
        // 0x42c188: 0x24070600  addiu       $a3, $zero, 0x600 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c184) {
            ctx->pc = 0x42C198u;
            goto label_42c198;
        }
    }
    ctx->pc = 0x42C18Cu;
label_42c18c:
    // 0x42c18c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x42C18Cu;
    {
        const bool branch_taken_0x42c18c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42C190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C18Cu;
        // 0x42c190: 0x24070500  addiu       $a3, $zero, 0x500 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c18c) {
            ctx->pc = 0x42C198u;
            goto label_42c198;
        }
    }
    ctx->pc = 0x42C194u;
label_42c194:
    // 0x42c194: 0x24070100  addiu       $a3, $zero, 0x100
    ctx->pc = 0x42c194u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
label_42c198:
    // 0x42c198: 0xe81025  or          $v0, $a3, $t0
    ctx->pc = 0x42c198u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 7) | GPR_U64(ctx, 8));
label_42c19c:
    // 0x42c19c: 0x24032000  addiu       $v1, $zero, 0x2000
    ctx->pc = 0x42c19cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x42c1a0: 0x461025  or          $v0, $v0, $a2
    ctx->pc = 0x42c1a0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 6));
    // 0x42c1a4: 0x21203  sra         $v0, $v0, 8
    ctx->pc = 0x42c1a4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 8));
    // 0x42c1a8: 0x10c3006f  beq         $a2, $v1, . + 4 + (0x6F << 2)
    ctx->pc = 0x42C1A8u;
    {
        const bool branch_taken_0x42c1a8 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x42C1ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C1A8u;
        // 0x42c1ac: 0xa0a20023  sb          $v0, 0x23($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 35), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c1a8) {
            ctx->pc = 0x42C368u;
            goto label_42c368;
        }
    }
    ctx->pc = 0x42C1B0u;
    // 0x42c1b0: 0x28c22001  slti        $v0, $a2, 0x2001
    ctx->pc = 0x42c1b0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)8193) ? 1 : 0);
    // 0x42c1b4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x42C1B4u;
    {
        const bool branch_taken_0x42c1b4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x42c1b4) {
            ctx->pc = 0x42C1B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42C1B4u;
            // 0x42c1b8: 0x24024000  addiu       $v0, $zero, 0x4000 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16384));
            ctx->in_delay_slot = false;
            ctx->pc = 0x42C1CCu;
            goto label_42c1cc;
        }
    }
    ctx->pc = 0x42C1BCu;
    // 0x42c1bc: 0x10c00007  beqz        $a2, . + 4 + (0x7 << 2)
    ctx->pc = 0x42C1BCu;
    {
        const bool branch_taken_0x42c1bc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x42C1C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C1BCu;
        // 0x42c1c0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c1bc) {
            ctx->pc = 0x42C1DCu;
            goto label_42c1dc;
        }
    }
    ctx->pc = 0x42C1C4u;
    // 0x42c1c4: 0x10000084  b           . + 4 + (0x84 << 2)
    ctx->pc = 0x42C1C4u;
    {
        const bool branch_taken_0x42c1c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x42c1c4) {
            ctx->pc = 0x42C3D8u;
            goto label_42c3d8;
        }
    }
    ctx->pc = 0x42C1CCu;
label_42c1cc:
    // 0x42c1cc: 0x10c20049  beq         $a2, $v0, . + 4 + (0x49 << 2)
    ctx->pc = 0x42C1CCu;
    {
        const bool branch_taken_0x42c1cc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x42C1D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C1CCu;
        // 0x42c1d0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c1cc) {
            ctx->pc = 0x42C2F4u;
            goto label_42c2f4;
        }
    }
    ctx->pc = 0x42C1D4u;
    // 0x42c1d4: 0x10000080  b           . + 4 + (0x80 << 2)
    ctx->pc = 0x42C1D4u;
    {
        const bool branch_taken_0x42c1d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x42c1d4) {
            ctx->pc = 0x42C3D8u;
            goto label_42c3d8;
        }
    }
    ctx->pc = 0x42C1DCu;
label_42c1dc:
    // 0x42c1dc: 0x24020500  addiu       $v0, $zero, 0x500
    ctx->pc = 0x42c1dcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
    // 0x42c1e0: 0x10e2002c  beq         $a3, $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x42C1E0u;
    {
        const bool branch_taken_0x42c1e0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x42C1E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C1E0u;
        // 0x42c1e4: 0x28e20501  slti        $v0, $a3, 0x501 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 7) < (int64_t)(int32_t)1281) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c1e0) {
            ctx->pc = 0x42C294u;
            goto label_42c294;
        }
    }
    ctx->pc = 0x42C1E8u;
    // 0x42c1e8: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x42C1E8u;
    {
        const bool branch_taken_0x42c1e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42C1ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C1E8u;
        // 0x42c1ec: 0x24020100  addiu       $v0, $zero, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c1e8) {
            ctx->pc = 0x42C200u;
            goto label_42c200;
        }
    }
    ctx->pc = 0x42C1F0u;
    // 0x42c1f0: 0x10e20008  beq         $a3, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x42C1F0u;
    {
        const bool branch_taken_0x42c1f0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x42C1F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C1F0u;
        // 0x42c1f4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c1f0) {
            ctx->pc = 0x42C214u;
            goto label_42c214;
        }
    }
    ctx->pc = 0x42C1F8u;
    // 0x42c1f8: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x42C1F8u;
    {
        const bool branch_taken_0x42c1f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x42c1f8) {
            ctx->pc = 0x42C2D8u;
            goto label_42c2d8;
        }
    }
    ctx->pc = 0x42C200u;
label_42c200:
    // 0x42c200: 0x24020600  addiu       $v0, $zero, 0x600
    ctx->pc = 0x42c200u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
    // 0x42c204: 0x10e20013  beq         $a3, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x42C204u;
    {
        const bool branch_taken_0x42c204 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x42C208u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C204u;
        // 0x42c208: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c204) {
            ctx->pc = 0x42C254u;
            goto label_42c254;
        }
    }
    ctx->pc = 0x42C20Cu;
    // 0x42c20c: 0x10000032  b           . + 4 + (0x32 << 2)
    ctx->pc = 0x42C20Cu;
    {
        const bool branch_taken_0x42c20c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x42c20c) {
            ctx->pc = 0x42C2D8u;
            goto label_42c2d8;
        }
    }
    ctx->pc = 0x42C214u;
label_42c214:
    // 0x42c214: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x42c214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x42c218: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x42C218u;
    {
        const bool branch_taken_0x42c218 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x42C21Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C218u;
        // 0x42c21c: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c218) {
            ctx->pc = 0x42C248u;
            goto label_42c248;
        }
    }
    ctx->pc = 0x42C220u;
    // 0x42c220: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x42C220u;
    {
        const bool branch_taken_0x42c220 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x42C224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C220u;
        // 0x42c224: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c220) {
            ctx->pc = 0x42C248u;
            goto label_42c248;
        }
    }
    ctx->pc = 0x42C228u;
    // 0x42c228: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x42c228u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x42c22c: 0xafa20020  sw          $v0, 0x20($sp)
    ctx->pc = 0x42c22cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 32), GPR_U32(ctx, 2));
    // 0x42c230: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x42C230u;
    SET_GPR_U32(ctx, 31, 0x42C238u);
    ctx->pc = 0x42C234u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42C230u;
    // 0x42c234: 0x3484000c  ori         $a0, $a0, 0xC (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)12);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x42C230u, 0x42C238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42C238u;
label_42c238:
    // 0x42c238: 0xafa20024  sw          $v0, 0x24($sp)
    ctx->pc = 0x42c238u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 2));
    // 0x42c23c: 0x100000e6  b           . + 4 + (0xE6 << 2)
    ctx->pc = 0x42C23Cu;
    {
        const bool branch_taken_0x42c23c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42C240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C23Cu;
        // 0x42c240: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c23c) {
            ctx->pc = 0x42C5D8u;
            goto label_42c5d8;
        }
    }
    ctx->pc = 0x42C244u;
    // 0x42c244: 0x0  nop
    ctx->pc = 0x42c244u;
    // NOP
label_42c248:
    // 0x42c248: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x42c248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x42c24c: 0x100000ed  b           . + 4 + (0xED << 2)
    ctx->pc = 0x42C24Cu;
    {
        const bool branch_taken_0x42c24c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42C250u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C24Cu;
        // 0x42c250: 0xaca20014  sw          $v0, 0x14($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c24c) {
            ctx->pc = 0x42C604u;
            goto label_42c604;
        }
    }
    ctx->pc = 0x42C254u;
label_42c254:
    // 0x42c254: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x42c254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x42c258: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x42C258u;
    {
        const bool branch_taken_0x42c258 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x42C25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C258u;
        // 0x42c25c: 0x24020018  addiu       $v0, $zero, 0x18 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c258) {
            ctx->pc = 0x42C288u;
            goto label_42c288;
        }
    }
    ctx->pc = 0x42C260u;
    // 0x42c260: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x42C260u;
    {
        const bool branch_taken_0x42c260 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x42C264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C260u;
        // 0x42c264: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c260) {
            ctx->pc = 0x42C288u;
            goto label_42c288;
        }
    }
    ctx->pc = 0x42C268u;
    // 0x42c268: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x42c268u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x42c26c: 0xafa20030  sw          $v0, 0x30($sp)
    ctx->pc = 0x42c26cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 48), GPR_U32(ctx, 2));
    // 0x42c270: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x42C270u;
    SET_GPR_U32(ctx, 31, 0x42C278u);
    ctx->pc = 0x42C274u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42C270u;
    // 0x42c274: 0x3484000c  ori         $a0, $a0, 0xC (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)12);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x42C270u, 0x42C278u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42C278u;
label_42c278:
    // 0x42c278: 0xafa20034  sw          $v0, 0x34($sp)
    ctx->pc = 0x42c278u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 52), GPR_U32(ctx, 2));
    // 0x42c27c: 0x100000d6  b           . + 4 + (0xD6 << 2)
    ctx->pc = 0x42C27Cu;
    {
        const bool branch_taken_0x42c27c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42C280u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C27Cu;
        // 0x42c280: 0x27a40030  addiu       $a0, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c27c) {
            ctx->pc = 0x42C5D8u;
            goto label_42c5d8;
        }
    }
    ctx->pc = 0x42C284u;
    // 0x42c284: 0x0  nop
    ctx->pc = 0x42c284u;
    // NOP
label_42c288:
    // 0x42c288: 0x24020018  addiu       $v0, $zero, 0x18
    ctx->pc = 0x42c288u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x42c28c: 0x100000dd  b           . + 4 + (0xDD << 2)
    ctx->pc = 0x42C28Cu;
    {
        const bool branch_taken_0x42c28c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42C290u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C28Cu;
        // 0x42c290: 0xaca20014  sw          $v0, 0x14($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c28c) {
            ctx->pc = 0x42C604u;
            goto label_42c604;
        }
    }
    ctx->pc = 0x42C294u;
label_42c294:
    // 0x42c294: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x42c294u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x42c298: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x42C298u;
    {
        const bool branch_taken_0x42c298 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x42C29Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C298u;
        // 0x42c29c: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c298) {
            ctx->pc = 0x42C2C8u;
            goto label_42c2c8;
        }
    }
    ctx->pc = 0x42C2A0u;
    // 0x42c2a0: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x42C2A0u;
    {
        const bool branch_taken_0x42c2a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x42C2A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C2A0u;
        // 0x42c2a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c2a0) {
            ctx->pc = 0x42C2C8u;
            goto label_42c2c8;
        }
    }
    ctx->pc = 0x42C2A8u;
    // 0x42c2a8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x42c2a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x42c2ac: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x42c2acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x42c2b0: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x42C2B0u;
    SET_GPR_U32(ctx, 31, 0x42C2B8u);
    ctx->pc = 0x42C2B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42C2B0u;
    // 0x42c2b4: 0x3484000c  ori         $a0, $a0, 0xC (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)12);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x42C2B0u, 0x42C2B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42C2B8u;
label_42c2b8:
    // 0x42c2b8: 0xafa20044  sw          $v0, 0x44($sp)
    ctx->pc = 0x42c2b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 2));
    // 0x42c2bc: 0x100000c6  b           . + 4 + (0xC6 << 2)
    ctx->pc = 0x42C2BCu;
    {
        const bool branch_taken_0x42c2bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42C2C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C2BCu;
        // 0x42c2c0: 0x27a40040  addiu       $a0, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c2bc) {
            ctx->pc = 0x42C5D8u;
            goto label_42c5d8;
        }
    }
    ctx->pc = 0x42C2C4u;
    // 0x42c2c4: 0x0  nop
    ctx->pc = 0x42c2c4u;
    // NOP
label_42c2c8:
    // 0x42c2c8: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x42c2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x42c2cc: 0x100000cd  b           . + 4 + (0xCD << 2)
    ctx->pc = 0x42C2CCu;
    {
        const bool branch_taken_0x42c2cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42C2D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C2CCu;
        // 0x42c2d0: 0xaca20014  sw          $v0, 0x14($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c2cc) {
            ctx->pc = 0x42C604u;
            goto label_42c604;
        }
    }
    ctx->pc = 0x42C2D4u;
    // 0x42c2d4: 0x0  nop
    ctx->pc = 0x42c2d4u;
    // NOP
label_42c2d8:
    // 0x42c2d8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x42c2d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x42c2dc: 0xafa20050  sw          $v0, 0x50($sp)
    ctx->pc = 0x42c2dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 80), GPR_U32(ctx, 2));
    // 0x42c2e0: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x42C2E0u;
    SET_GPR_U32(ctx, 31, 0x42C2E8u);
    ctx->pc = 0x42C2E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42C2E0u;
    // 0x42c2e4: 0x3484000d  ori         $a0, $a0, 0xD (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)13);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x42C2E0u, 0x42C2E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42C2E8u;
label_42c2e8:
    // 0x42c2e8: 0xafa20054  sw          $v0, 0x54($sp)
    ctx->pc = 0x42c2e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 84), GPR_U32(ctx, 2));
    // 0x42c2ec: 0x100000ba  b           . + 4 + (0xBA << 2)
    ctx->pc = 0x42C2ECu;
    {
        const bool branch_taken_0x42c2ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42C2F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C2ECu;
        // 0x42c2f0: 0x27a40050  addiu       $a0, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c2ec) {
            ctx->pc = 0x42C5D8u;
            goto label_42c5d8;
        }
    }
    ctx->pc = 0x42C2F4u;
label_42c2f4:
    // 0x42c2f4: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x42c2f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x42c2f8: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x42C2F8u;
    {
        const bool branch_taken_0x42c2f8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x42C2FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C2F8u;
        // 0x42c2fc: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c2f8) {
            ctx->pc = 0x42C328u;
            goto label_42c328;
        }
    }
    ctx->pc = 0x42C300u;
    // 0x42c300: 0x10620009  beq         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x42C300u;
    {
        const bool branch_taken_0x42c300 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x42C304u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C300u;
        // 0x42c304: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c300) {
            ctx->pc = 0x42C328u;
            goto label_42c328;
        }
    }
    ctx->pc = 0x42C308u;
    // 0x42c308: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x42c308u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x42c30c: 0xafa20060  sw          $v0, 0x60($sp)
    ctx->pc = 0x42c30cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 96), GPR_U32(ctx, 2));
    // 0x42c310: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x42C310u;
    SET_GPR_U32(ctx, 31, 0x42C318u);
    ctx->pc = 0x42C314u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42C310u;
    // 0x42c314: 0x3484000c  ori         $a0, $a0, 0xC (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)12);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x42C310u, 0x42C318u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42C318u;
label_42c318:
    // 0x42c318: 0xafa20064  sw          $v0, 0x64($sp)
    ctx->pc = 0x42c318u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 100), GPR_U32(ctx, 2));
    // 0x42c31c: 0x100000ae  b           . + 4 + (0xAE << 2)
    ctx->pc = 0x42C31Cu;
    {
        const bool branch_taken_0x42c31c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42C320u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C31Cu;
        // 0x42c320: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c31c) {
            ctx->pc = 0x42C5D8u;
            goto label_42c5d8;
        }
    }
    ctx->pc = 0x42C324u;
    // 0x42c324: 0x0  nop
    ctx->pc = 0x42c324u;
    // NOP
label_42c328:
    // 0x42c328: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x42c328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x42c32c: 0x30e60f00  andi        $a2, $a3, 0xF00
    ctx->pc = 0x42c32cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)3840);
    // 0x42c330: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x42c330u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x42c334: 0x10c200b3  beq         $a2, $v0, . + 4 + (0xB3 << 2)
    ctx->pc = 0x42C334u;
    {
        const bool branch_taken_0x42c334 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x42C338u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C334u;
        // 0x42c338: 0xaca30014  sw          $v1, 0x14($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c334) {
            ctx->pc = 0x42C604u;
            goto label_42c604;
        }
    }
    ctx->pc = 0x42C33Cu;
    // 0x42c33c: 0x24020500  addiu       $v0, $zero, 0x500
    ctx->pc = 0x42c33cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
    // 0x42c340: 0x10c200b0  beq         $a2, $v0, . + 4 + (0xB0 << 2)
    ctx->pc = 0x42C340u;
    {
        const bool branch_taken_0x42c340 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x42C344u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C340u;
        // 0x42c344: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c340) {
            ctx->pc = 0x42C604u;
            goto label_42c604;
        }
    }
    ctx->pc = 0x42C348u;
    // 0x42c348: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x42c348u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x42c34c: 0xafa20070  sw          $v0, 0x70($sp)
    ctx->pc = 0x42c34cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 112), GPR_U32(ctx, 2));
    // 0x42c350: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x42C350u;
    SET_GPR_U32(ctx, 31, 0x42C358u);
    ctx->pc = 0x42C354u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42C350u;
    // 0x42c354: 0x3484000d  ori         $a0, $a0, 0xD (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)13);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x42C350u, 0x42C358u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42C358u;
label_42c358:
    // 0x42c358: 0xafa20074  sw          $v0, 0x74($sp)
    ctx->pc = 0x42c358u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 116), GPR_U32(ctx, 2));
    // 0x42c35c: 0x1000009e  b           . + 4 + (0x9E << 2)
    ctx->pc = 0x42C35Cu;
    {
        const bool branch_taken_0x42c35c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42C360u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C35Cu;
        // 0x42c360: 0x27a40070  addiu       $a0, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c35c) {
            ctx->pc = 0x42C5D8u;
            goto label_42c5d8;
        }
    }
    ctx->pc = 0x42C364u;
    // 0x42c364: 0x0  nop
    ctx->pc = 0x42c364u;
    // NOP
label_42c368:
    // 0x42c368: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x42c368u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
    // 0x42c36c: 0x1060000a  beqz        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x42C36Cu;
    {
        const bool branch_taken_0x42c36c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x42C370u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C36Cu;
        // 0x42c370: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c36c) {
            ctx->pc = 0x42C398u;
            goto label_42c398;
        }
    }
    ctx->pc = 0x42C374u;
    // 0x42c374: 0x10620008  beq         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x42C374u;
    {
        const bool branch_taken_0x42c374 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x42C378u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C374u;
        // 0x42c378: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c374) {
            ctx->pc = 0x42C398u;
            goto label_42c398;
        }
    }
    ctx->pc = 0x42C37Cu;
    // 0x42c37c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x42c37cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x42c380: 0xafa20080  sw          $v0, 0x80($sp)
    ctx->pc = 0x42c380u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 128), GPR_U32(ctx, 2));
    // 0x42c384: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x42C384u;
    SET_GPR_U32(ctx, 31, 0x42C38Cu);
    ctx->pc = 0x42C388u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42C384u;
    // 0x42c388: 0x3484000c  ori         $a0, $a0, 0xC (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)12);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x42C384u, 0x42C38Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42C38Cu;
label_42c38c:
    // 0x42c38c: 0xafa20084  sw          $v0, 0x84($sp)
    ctx->pc = 0x42c38cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 132), GPR_U32(ctx, 2));
    // 0x42c390: 0x10000091  b           . + 4 + (0x91 << 2)
    ctx->pc = 0x42C390u;
    {
        const bool branch_taken_0x42c390 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42C394u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C390u;
        // 0x42c394: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c390) {
            ctx->pc = 0x42C5D8u;
            goto label_42c5d8;
        }
    }
    ctx->pc = 0x42C398u;
label_42c398:
    // 0x42c398: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x42c398u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x42c39c: 0x30e60f00  andi        $a2, $a3, 0xF00
    ctx->pc = 0x42c39cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)3840);
    // 0x42c3a0: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x42c3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x42c3a4: 0x10c20097  beq         $a2, $v0, . + 4 + (0x97 << 2)
    ctx->pc = 0x42C3A4u;
    {
        const bool branch_taken_0x42c3a4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x42C3A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C3A4u;
        // 0x42c3a8: 0xaca30014  sw          $v1, 0x14($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c3a4) {
            ctx->pc = 0x42C604u;
            goto label_42c604;
        }
    }
    ctx->pc = 0x42C3ACu;
    // 0x42c3ac: 0x24020500  addiu       $v0, $zero, 0x500
    ctx->pc = 0x42c3acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
    // 0x42c3b0: 0x10c20094  beq         $a2, $v0, . + 4 + (0x94 << 2)
    ctx->pc = 0x42C3B0u;
    {
        const bool branch_taken_0x42c3b0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 2));
        ctx->pc = 0x42C3B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C3B0u;
        // 0x42c3b4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c3b0) {
            ctx->pc = 0x42C604u;
            goto label_42c604;
        }
    }
    ctx->pc = 0x42C3B8u;
    // 0x42c3b8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x42c3b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x42c3bc: 0xafa20090  sw          $v0, 0x90($sp)
    ctx->pc = 0x42c3bcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 144), GPR_U32(ctx, 2));
    // 0x42c3c0: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x42C3C0u;
    SET_GPR_U32(ctx, 31, 0x42C3C8u);
    ctx->pc = 0x42C3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42C3C0u;
    // 0x42c3c4: 0x3484000d  ori         $a0, $a0, 0xD (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)13);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x42C3C0u, 0x42C3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42C3C8u;
label_42c3c8:
    // 0x42c3c8: 0xafa20094  sw          $v0, 0x94($sp)
    ctx->pc = 0x42c3c8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 148), GPR_U32(ctx, 2));
    // 0x42c3cc: 0x10000082  b           . + 4 + (0x82 << 2)
    ctx->pc = 0x42C3CCu;
    {
        const bool branch_taken_0x42c3cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42C3D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C3CCu;
        // 0x42c3d0: 0x27a40090  addiu       $a0, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c3cc) {
            ctx->pc = 0x42C5D8u;
            goto label_42c5d8;
        }
    }
    ctx->pc = 0x42C3D4u;
    // 0x42c3d4: 0x0  nop
    ctx->pc = 0x42c3d4u;
    // NOP
label_42c3d8:
    // 0x42c3d8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x42c3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x42c3dc: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x42c3dcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x42c3e0: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x42C3E0u;
    SET_GPR_U32(ctx, 31, 0x42C3E8u);
    ctx->pc = 0x42C3E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42C3E0u;
    // 0x42c3e4: 0x3484000d  ori         $a0, $a0, 0xD (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)13);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x42C3E0u, 0x42C3E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42C3E8u;
label_42c3e8:
    // 0x42c3e8: 0xafa200a4  sw          $v0, 0xA4($sp)
    ctx->pc = 0x42c3e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 164), GPR_U32(ctx, 2));
    // 0x42c3ec: 0x1000007a  b           . + 4 + (0x7A << 2)
    ctx->pc = 0x42C3ECu;
    {
        const bool branch_taken_0x42c3ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42C3F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C3ECu;
        // 0x42c3f0: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c3ec) {
            ctx->pc = 0x42C5D8u;
            goto label_42c5d8;
        }
    }
    ctx->pc = 0x42C3F4u;
label_42c3f4:
    // 0x42c3f4: 0x15000004  bnez        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x42C3F4u;
    {
        const bool branch_taken_0x42c3f4 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x42C3F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C3F4u;
        // 0x42c3f8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c3f4) {
            ctx->pc = 0x42C408u;
            goto label_42c408;
        }
    }
    ctx->pc = 0x42C3FCu;
    // 0x42c3fc: 0x50c00009  beql        $a2, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x42C3FCu;
    {
        const bool branch_taken_0x42c3fc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x42c3fc) {
            ctx->pc = 0x42C400u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42C3FCu;
            // 0x42c400: 0x8ca40014  lw          $a0, 0x14($a1) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x42C424u;
            goto label_42c424;
        }
    }
    ctx->pc = 0x42C404u;
    // 0x42c404: 0x0  nop
    ctx->pc = 0x42c404u;
    // NOP
label_42c408:
    // 0x42c408: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x42c408u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x42c40c: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x42c40cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x42c410: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x42C410u;
    SET_GPR_U32(ctx, 31, 0x42C418u);
    ctx->pc = 0x42C414u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42C410u;
    // 0x42c414: 0x3484000d  ori         $a0, $a0, 0xD (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)13);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x42C410u, 0x42C418u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42C418u;
label_42c418:
    // 0x42c418: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x42c418u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
    // 0x42c41c: 0x1000006e  b           . + 4 + (0x6E << 2)
    ctx->pc = 0x42C41Cu;
    {
        const bool branch_taken_0x42c41c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42C420u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C41Cu;
        // 0x42c420: 0x27a400b0  addiu       $a0, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c41c) {
            ctx->pc = 0x42C5D8u;
            goto label_42c5d8;
        }
    }
    ctx->pc = 0x42C424u;
label_42c424:
    // 0x42c424: 0x10800012  beqz        $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x42C424u;
    {
        const bool branch_taken_0x42c424 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x42C428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C424u;
        // 0x42c428: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c424) {
            ctx->pc = 0x42C470u;
            goto label_42c470;
        }
    }
    ctx->pc = 0x42C42Cu;
    // 0x42c42c: 0x24423b90  addiu       $v0, $v0, 0x3B90
    ctx->pc = 0x42c42cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15248));
    // 0x42c430: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x42c430u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x42c434: 0x1083000c  beq         $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x42C434u;
    {
        const bool branch_taken_0x42c434 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x42c434) {
            ctx->pc = 0x42C468u;
            goto label_42c468;
        }
    }
    ctx->pc = 0x42C43Cu;
    // 0x42c43c: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x42c43cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
    // 0x42c440: 0x10820009  beq         $a0, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x42C440u;
    {
        const bool branch_taken_0x42c440 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        ctx->pc = 0x42C444u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C440u;
        // 0x42c444: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c440) {
            ctx->pc = 0x42C468u;
            goto label_42c468;
        }
    }
    ctx->pc = 0x42C448u;
    // 0x42c448: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x42c448u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x42c44c: 0xafa200c0  sw          $v0, 0xC0($sp)
    ctx->pc = 0x42c44cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 2));
    // 0x42c450: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x42C450u;
    SET_GPR_U32(ctx, 31, 0x42C458u);
    ctx->pc = 0x42C454u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42C450u;
    // 0x42c454: 0x3484000c  ori         $a0, $a0, 0xC (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)12);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x42C450u, 0x42C458u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42C458u;
label_42c458:
    // 0x42c458: 0xafa200c4  sw          $v0, 0xC4($sp)
    ctx->pc = 0x42c458u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 196), GPR_U32(ctx, 2));
    // 0x42c45c: 0x1000005e  b           . + 4 + (0x5E << 2)
    ctx->pc = 0x42C45Cu;
    {
        const bool branch_taken_0x42c45c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42C460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C45Cu;
        // 0x42c460: 0x27a400c0  addiu       $a0, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c45c) {
            ctx->pc = 0x42C5D8u;
            goto label_42c5d8;
        }
    }
    ctx->pc = 0x42C464u;
    // 0x42c464: 0x0  nop
    ctx->pc = 0x42c464u;
    // NOP
label_42c468:
    // 0x42c468: 0x14800004  bnez        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x42C468u;
    {
        const bool branch_taken_0x42c468 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x42c468) {
            ctx->pc = 0x42C47Cu;
            goto label_42c47c;
        }
    }
    ctx->pc = 0x42C470u;
label_42c470:
    // 0x42c470: 0x8f82ae10  lw          $v0, -0x51F0($gp)
    ctx->pc = 0x42c470u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946320)));
    // 0x42c474: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x42c474u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x42c478: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x42c478u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
label_42c47c:
    // 0x42c47c: 0x10e00012  beqz        $a3, . + 4 + (0x12 << 2)
    ctx->pc = 0x42C47Cu;
    {
        const bool branch_taken_0x42c47c = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x42C480u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C47Cu;
        // 0x42c480: 0x8f84bedc  lw          $a0, -0x4124($gp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950620)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c47c) {
            ctx->pc = 0x42C4C8u;
            goto label_42c4c8;
        }
    }
    ctx->pc = 0x42C484u;
    // 0x42c484: 0x10e40010  beq         $a3, $a0, . + 4 + (0x10 << 2)
    ctx->pc = 0x42C484u;
    {
        const bool branch_taken_0x42c484 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 4));
        ctx->pc = 0x42C488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C484u;
        // 0x42c488: 0x3c020062  lui         $v0, 0x62 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c484) {
            ctx->pc = 0x42C4C8u;
            goto label_42c4c8;
        }
    }
    ctx->pc = 0x42C48Cu;
    // 0x42c48c: 0x24423b90  addiu       $v0, $v0, 0x3B90
    ctx->pc = 0x42c48cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15248));
    // 0x42c490: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x42c490u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x42c494: 0x50e3000d  beql        $a3, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x42C494u;
    {
        const bool branch_taken_0x42c494 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 3));
        if (branch_taken_0x42c494) {
            ctx->pc = 0x42C498u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42C494u;
            // 0x42c498: 0x8ca30014  lw          $v1, 0x14($a1) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x42C4CCu;
            goto label_42c4cc;
        }
    }
    ctx->pc = 0x42C49Cu;
    // 0x42c49c: 0x8c42002c  lw          $v0, 0x2C($v0)
    ctx->pc = 0x42c49cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 44)));
    // 0x42c4a0: 0x10e20009  beq         $a3, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x42C4A0u;
    {
        const bool branch_taken_0x42c4a0 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x42C4A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C4A0u;
        // 0x42c4a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c4a0) {
            ctx->pc = 0x42C4C8u;
            goto label_42c4c8;
        }
    }
    ctx->pc = 0x42C4A8u;
    // 0x42c4a8: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x42c4a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x42c4ac: 0xafa200d0  sw          $v0, 0xD0($sp)
    ctx->pc = 0x42c4acu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 2));
    // 0x42c4b0: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x42C4B0u;
    SET_GPR_U32(ctx, 31, 0x42C4B8u);
    ctx->pc = 0x42C4B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42C4B0u;
    // 0x42c4b4: 0x3484000d  ori         $a0, $a0, 0xD (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)13);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x42C4B0u, 0x42C4B8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42C4B8u;
label_42c4b8:
    // 0x42c4b8: 0xafa200d4  sw          $v0, 0xD4($sp)
    ctx->pc = 0x42c4b8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 212), GPR_U32(ctx, 2));
    // 0x42c4bc: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x42C4BCu;
    {
        const bool branch_taken_0x42c4bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42C4C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C4BCu;
        // 0x42c4c0: 0x27a400d0  addiu       $a0, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c4bc) {
            ctx->pc = 0x42C5D8u;
            goto label_42c5d8;
        }
    }
    ctx->pc = 0x42C4C4u;
    // 0x42c4c4: 0x0  nop
    ctx->pc = 0x42c4c4u;
    // NOP
label_42c4c8:
    // 0x42c4c8: 0x8ca30014  lw          $v1, 0x14($a1)
    ctx->pc = 0x42c4c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
label_42c4cc:
    // 0x42c4cc: 0x24020020  addiu       $v0, $zero, 0x20
    ctx->pc = 0x42c4ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x42c4d0: 0x1462000b  bne         $v1, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x42C4D0u;
    {
        const bool branch_taken_0x42c4d0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x42C4D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C4D0u;
        // 0x42c4d4: 0x87380a  movz        $a3, $a0, $a3 (Delay Slot)
        if (GPR_U64(ctx, 7) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c4d0) {
            ctx->pc = 0x42C500u;
            goto label_42c500;
        }
    }
    ctx->pc = 0x42C4D8u;
    // 0x42c4d8: 0x24020500  addiu       $v0, $zero, 0x500
    ctx->pc = 0x42c4d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1280));
    // 0x42c4dc: 0x10e20012  beq         $a3, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x42C4DCu;
    {
        const bool branch_taken_0x42c4dc = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x42C4E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C4DCu;
        // 0x42c4e0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c4dc) {
            ctx->pc = 0x42C528u;
            goto label_42c528;
        }
    }
    ctx->pc = 0x42C4E4u;
    // 0x42c4e4: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x42c4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x42c4e8: 0xafa200e0  sw          $v0, 0xE0($sp)
    ctx->pc = 0x42c4e8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 224), GPR_U32(ctx, 2));
    // 0x42c4ec: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x42C4ECu;
    SET_GPR_U32(ctx, 31, 0x42C4F4u);
    ctx->pc = 0x42C4F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42C4ECu;
    // 0x42c4f0: 0x3484000d  ori         $a0, $a0, 0xD (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)13);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x42C4ECu, 0x42C4F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42C4F4u;
label_42c4f4:
    // 0x42c4f4: 0xafa200e4  sw          $v0, 0xE4($sp)
    ctx->pc = 0x42c4f4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 228), GPR_U32(ctx, 2));
    // 0x42c4f8: 0x10000037  b           . + 4 + (0x37 << 2)
    ctx->pc = 0x42C4F8u;
    {
        const bool branch_taken_0x42c4f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42C4FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C4F8u;
        // 0x42c4fc: 0x27a400e0  addiu       $a0, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c4f8) {
            ctx->pc = 0x42C5D8u;
            goto label_42c5d8;
        }
    }
    ctx->pc = 0x42C500u;
label_42c500:
    // 0x42c500: 0x24020100  addiu       $v0, $zero, 0x100
    ctx->pc = 0x42c500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x42c504: 0x10e20008  beq         $a3, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x42C504u;
    {
        const bool branch_taken_0x42c504 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x42C508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C504u;
        // 0x42c508: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c504) {
            ctx->pc = 0x42C528u;
            goto label_42c528;
        }
    }
    ctx->pc = 0x42C50Cu;
    // 0x42c50c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x42c50cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x42c510: 0xafa200f0  sw          $v0, 0xF0($sp)
    ctx->pc = 0x42c510u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 240), GPR_U32(ctx, 2));
    // 0x42c514: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x42C514u;
    SET_GPR_U32(ctx, 31, 0x42C51Cu);
    ctx->pc = 0x42C518u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42C514u;
    // 0x42c518: 0x3484000d  ori         $a0, $a0, 0xD (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)13);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x42C514u, 0x42C51Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42C51Cu;
label_42c51c:
    // 0x42c51c: 0xafa200f4  sw          $v0, 0xF4($sp)
    ctx->pc = 0x42c51cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 244), GPR_U32(ctx, 2));
    // 0x42c520: 0x1000002d  b           . + 4 + (0x2D << 2)
    ctx->pc = 0x42C520u;
    {
        const bool branch_taken_0x42c520 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42C524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C520u;
        // 0x42c524: 0x27a400f0  addiu       $a0, $sp, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c520) {
            ctx->pc = 0x42C5D8u;
            goto label_42c5d8;
        }
    }
    ctx->pc = 0x42C528u;
label_42c528:
    // 0x42c528: 0x71203  sra         $v0, $a3, 8
    ctx->pc = 0x42c528u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 7), 8));
    // 0x42c52c: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x42C52Cu;
    {
        const bool branch_taken_0x42c52c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42C530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C52Cu;
        // 0x42c530: 0xa0a20023  sb          $v0, 0x23($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 35), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c52c) {
            ctx->pc = 0x42C604u;
            goto label_42c604;
        }
    }
    ctx->pc = 0x42C534u;
label_42c534:
    // 0x42c534: 0x15000004  bnez        $t0, . + 4 + (0x4 << 2)
    ctx->pc = 0x42C534u;
    {
        const bool branch_taken_0x42c534 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        ctx->pc = 0x42C538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C534u;
        // 0x42c538: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c534) {
            ctx->pc = 0x42C548u;
            goto label_42c548;
        }
    }
    ctx->pc = 0x42C53Cu;
    // 0x42c53c: 0x50c00009  beql        $a2, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x42C53Cu;
    {
        const bool branch_taken_0x42c53c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x42c53c) {
            ctx->pc = 0x42C540u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x42C53Cu;
            // 0x42c540: 0x8ca20014  lw          $v0, 0x14($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 20)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x42C564u;
            goto label_42c564;
        }
    }
    ctx->pc = 0x42C544u;
    // 0x42c544: 0x0  nop
    ctx->pc = 0x42c544u;
    // NOP
label_42c548:
    // 0x42c548: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x42c548u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x42c54c: 0xafa20100  sw          $v0, 0x100($sp)
    ctx->pc = 0x42c54cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 256), GPR_U32(ctx, 2));
    // 0x42c550: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x42C550u;
    SET_GPR_U32(ctx, 31, 0x42C558u);
    ctx->pc = 0x42C554u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42C550u;
    // 0x42c554: 0x3484000d  ori         $a0, $a0, 0xD (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)13);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x42C550u, 0x42C558u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42C558u;
label_42c558:
    // 0x42c558: 0xafa20104  sw          $v0, 0x104($sp)
    ctx->pc = 0x42c558u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 260), GPR_U32(ctx, 2));
    // 0x42c55c: 0x1000001e  b           . + 4 + (0x1E << 2)
    ctx->pc = 0x42C55Cu;
    {
        const bool branch_taken_0x42c55c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42C560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C55Cu;
        // 0x42c560: 0x27a40100  addiu       $a0, $sp, 0x100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 256));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c55c) {
            ctx->pc = 0x42C5D8u;
            goto label_42c5d8;
        }
    }
    ctx->pc = 0x42C564u;
label_42c564:
    // 0x42c564: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x42C564u;
    {
        const bool branch_taken_0x42c564 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x42C568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C564u;
        // 0x42c568: 0x8f83aeac  lw          $v1, -0x5154($gp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c564) {
            ctx->pc = 0x42C590u;
            goto label_42c590;
        }
    }
    ctx->pc = 0x42C56Cu;
    // 0x42c56c: 0x10430008  beq         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x42C56Cu;
    {
        const bool branch_taken_0x42c56c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x42C570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C56Cu;
        // 0x42c570: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c56c) {
            ctx->pc = 0x42C590u;
            goto label_42c590;
        }
    }
    ctx->pc = 0x42C574u;
    // 0x42c574: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x42c574u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x42c578: 0xafa20110  sw          $v0, 0x110($sp)
    ctx->pc = 0x42c578u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 272), GPR_U32(ctx, 2));
    // 0x42c57c: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x42C57Cu;
    SET_GPR_U32(ctx, 31, 0x42C584u);
    ctx->pc = 0x42C580u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42C57Cu;
    // 0x42c580: 0x3484000c  ori         $a0, $a0, 0xC (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)12);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x42C57Cu, 0x42C584u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42C584u;
label_42c584:
    // 0x42c584: 0xafa20114  sw          $v0, 0x114($sp)
    ctx->pc = 0x42c584u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 276), GPR_U32(ctx, 2));
    // 0x42c588: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x42C588u;
    {
        const bool branch_taken_0x42c588 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42C58Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C588u;
        // 0x42c58c: 0x27a40110  addiu       $a0, $sp, 0x110 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 272));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c588) {
            ctx->pc = 0x42C5D8u;
            goto label_42c5d8;
        }
    }
    ctx->pc = 0x42C590u;
label_42c590:
    // 0x42c590: 0x10e00015  beqz        $a3, . + 4 + (0x15 << 2)
    ctx->pc = 0x42C590u;
    {
        const bool branch_taken_0x42c590 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x42C594u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C590u;
        // 0x42c594: 0xaca30014  sw          $v1, 0x14($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c590) {
            ctx->pc = 0x42C5E8u;
            goto label_42c5e8;
        }
    }
    ctx->pc = 0x42C598u;
    // 0x42c598: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x42c598u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x42c59c: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x42C59Cu;
    {
        const bool branch_taken_0x42c59c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x42C5A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C59Cu;
        // 0x42c5a0: 0x24020900  addiu       $v0, $zero, 0x900 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2304));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c59c) {
            ctx->pc = 0x42C5B8u;
            goto label_42c5b8;
        }
    }
    ctx->pc = 0x42C5A4u;
    // 0x42c5a4: 0x24020700  addiu       $v0, $zero, 0x700
    ctx->pc = 0x42c5a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1792));
    // 0x42c5a8: 0x14e20005  bne         $a3, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x42C5A8u;
    {
        const bool branch_taken_0x42c5a8 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x42C5ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C5A8u;
        // 0x42c5ac: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c5a8) {
            ctx->pc = 0x42C5C0u;
            goto label_42c5c0;
        }
    }
    ctx->pc = 0x42C5B0u;
    // 0x42c5b0: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x42C5B0u;
    {
        const bool branch_taken_0x42c5b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42C5B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C5B0u;
        // 0x42c5b4: 0x8f82aeac  lw          $v0, -0x5154($gp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946476)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c5b0) {
            ctx->pc = 0x42C5ECu;
            goto label_42c5ec;
        }
    }
    ctx->pc = 0x42C5B8u;
label_42c5b8:
    // 0x42c5b8: 0x10e2000b  beq         $a3, $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x42C5B8u;
    {
        const bool branch_taken_0x42c5b8 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 2));
        ctx->pc = 0x42C5BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C5B8u;
        // 0x42c5bc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c5b8) {
            ctx->pc = 0x42C5E8u;
            goto label_42c5e8;
        }
    }
    ctx->pc = 0x42C5C0u;
label_42c5c0:
    // 0x42c5c0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x42c5c0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x42c5c4: 0xafa20120  sw          $v0, 0x120($sp)
    ctx->pc = 0x42c5c4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 288), GPR_U32(ctx, 2));
    // 0x42c5c8: 0xc1035f6  jal         func_40D7D8
    ctx->pc = 0x42C5C8u;
    SET_GPR_U32(ctx, 31, 0x42C5D0u);
    ctx->pc = 0x42C5CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x42C5C8u;
    // 0x42c5cc: 0x3484000d  ori         $a0, $a0, 0xD (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)13);
    ctx->in_delay_slot = false;
    ctx->pc = 0x40D7D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D7D8u, 0x42C5C8u, 0x42C5D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42C5D0u;
label_42c5d0:
    // 0x42c5d0: 0xafa20124  sw          $v0, 0x124($sp)
    ctx->pc = 0x42c5d0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 292), GPR_U32(ctx, 2));
    // 0x42c5d4: 0x27a40120  addiu       $a0, $sp, 0x120
    ctx->pc = 0x42c5d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 288));
label_42c5d8:
    // 0x42c5d8: 0xc103628  jal         func_40D8A0
    ctx->pc = 0x42C5D8u;
    SET_GPR_U32(ctx, 31, 0x42C5E0u);
    ctx->pc = 0x40D8A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x40D8A0u, 0x42C5D8u, 0x42C5E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x42C5E0u;
label_42c5e0:
    // 0x42c5e0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x42C5E0u;
    {
        const bool branch_taken_0x42c5e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x42C5E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C5E0u;
        // 0x42c5e4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x42c5e0) {
            ctx->pc = 0x42C608u;
            goto label_42c608;
        }
    }
    ctx->pc = 0x42C5E8u;
label_42c5e8:
    // 0x42c5e8: 0x8f82aeac  lw          $v0, -0x5154($gp)
    ctx->pc = 0x42c5e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946476)));
label_42c5ec:
    // 0x42c5ec: 0x24070900  addiu       $a3, $zero, 0x900
    ctx->pc = 0x42c5ecu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 2304));
    // 0x42c5f0: 0x24040700  addiu       $a0, $zero, 0x700
    ctx->pc = 0x42c5f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1792));
    // 0x42c5f4: 0x38420010  xori        $v0, $v0, 0x10
    ctx->pc = 0x42c5f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)16);
    // 0x42c5f8: 0x82380a  movz        $a3, $a0, $v0
    ctx->pc = 0x42c5f8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 4));
    // 0x42c5fc: 0x71a03  sra         $v1, $a3, 8
    ctx->pc = 0x42c5fcu;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 7), 8));
    // 0x42c600: 0xa0a30023  sb          $v1, 0x23($a1)
    ctx->pc = 0x42c600u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 35), (uint8_t)GPR_U32(ctx, 3));
label_42c604:
    // 0x42c604: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x42c604u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_42c608:
    // 0x42c608: 0xdfbf0130  ld          $ra, 0x130($sp)
    ctx->pc = 0x42c608u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 304)));
    // 0x42c60c: 0x3e00008  jr          $ra
    ctx->pc = 0x42C60Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x42C610u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x42C60Cu;
        // 0x42c610: 0x27bd0140  addiu       $sp, $sp, 0x140 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 320));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x42C60Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x42C614u;
    // 0x42c614: 0x0  nop
    ctx->pc = 0x42c614u;
    // NOP
    ctx->pc = 0x42c618u;
}
