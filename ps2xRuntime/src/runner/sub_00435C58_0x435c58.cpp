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

// Function: sub_00435C58
// Address: 0x435c58 - 0x435eb0
void sub_00435C58_0x435c58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00435C58_0x435c58");
#endif

    switch (ctx->pc) {
        case 0x435c98u: goto label_435c98;
        case 0x435e44u: goto label_435e44;
        default: break;
    }

    ctx->pc = 0x435c58u;

    // 0x435c58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x435c58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x435c5c: 0x8f82ae94  lw          $v0, -0x516C($gp)
    ctx->pc = 0x435c5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294946452)));
    // 0x435c60: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x435c60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x435c64: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x435c64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x435c68: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x435c68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x435c6c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x435C6Cu;
    {
        const bool branch_taken_0x435c6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x435C70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435C6Cu;
        // 0x435c70: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x435c6c) {
            ctx->pc = 0x435C80u;
            goto label_435c80;
        }
    }
    ctx->pc = 0x435C74u;
    // 0x435c74: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x435c74u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x435c78: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x435C78u;
    {
        const bool branch_taken_0x435c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x435C7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435C78u;
        // 0x435c7c: 0xdc4331d0  ld          $v1, 0x31D0($v0) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 12752)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x435c78) {
            ctx->pc = 0x435C88u;
            goto label_435c88;
        }
    }
    ctx->pc = 0x435C80u;
label_435c80:
    // 0x435c80: 0x3c020062  lui         $v0, 0x62
    ctx->pc = 0x435c80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)98 << 16));
    // 0x435c84: 0xdc433340  ld          $v1, 0x3340($v0)
    ctx->pc = 0x435c84u;
    SET_GPR_U64(ctx, 3, FAST_READ64(0x623340u));
label_435c88:
    // 0x435c88: 0xff83ae40  sd          $v1, -0x51C0($gp)
    ctx->pc = 0x435c88u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946368), GPR_U64(ctx, 3));
    // 0x435c8c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x435c8cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x435c90: 0xc10a322  jal         func_428C88
    ctx->pc = 0x435C90u;
    SET_GPR_U32(ctx, 31, 0x435C98u);
    ctx->pc = 0x435C94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x435C90u;
    // 0x435c94: 0x24050020  addiu       $a1, $zero, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x428C88u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x428C88u, 0x435C90u, 0x435C98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x435C98u;
label_435c98:
    // 0x435c98: 0x3c061000  lui         $a2, 0x1000
    ctx->pc = 0x435c98u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)4096 << 16));
    // 0x435c9c: 0x6303c  dsll32      $a2, $a2, 0
    ctx->pc = 0x435c9cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << (32 + 0));
    // 0x435ca0: 0x34c68006  ori         $a2, $a2, 0x8006
    ctx->pc = 0x435ca0u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)32774);
    // 0x435ca4: 0x2402000e  addiu       $v0, $zero, 0xE
    ctx->pc = 0x435ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x435ca8: 0x70461b89  pcpyld      $v1, $v0, $a2
    ctx->pc = 0x435ca8u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x435cac: 0x8f85be20  lw          $a1, -0x41E0($gp)
    ctx->pc = 0x435cacu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x435cb0: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x435cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x435cb4: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x435cb4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x435cb8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x435cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x435cbc: 0x16020022  bne         $s0, $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x435CBCu;
    {
        const bool branch_taken_0x435cbc = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x435CC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435CBCu;
        // 0x435cc0: 0xaf85be20  sw          $a1, -0x41E0($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x435cbc) {
            ctx->pc = 0x435D48u;
            goto label_435d48;
        }
    }
    ctx->pc = 0x435CC4u;
    // 0x435cc4: 0x9f86ae40  lwu         $a2, -0x51C0($gp)
    ctx->pc = 0x435cc4u;
    SET_GPR_ZE32(ctx, 6, READ32(ADD32(GPR_U32(ctx, 28), 4294946368)));
    // 0x435cc8: 0x2402004c  addiu       $v0, $zero, 0x4C
    ctx->pc = 0x435cc8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x435ccc: 0x70461b89  pcpyld      $v1, $v0, $a2
    ctx->pc = 0x435cccu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 2), GPR_VEC(ctx, 6)));
    // 0x435cd0: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x435cd0u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x435cd4: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x435cd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x435cd8: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x435cd8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x435cdc: 0xdf86ae38  ld          $a2, -0x51C8($gp)
    ctx->pc = 0x435cdcu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 28), 4294946360)));
    // 0x435ce0: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x435ce0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x435ce4: 0x21478  dsll        $v0, $v0, 17
    ctx->pc = 0x435ce4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 17);
    // 0x435ce8: 0x2403004e  addiu       $v1, $zero, 0x4E
    ctx->pc = 0x435ce8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x435cec: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x435cecu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x435cf0: 0x70661b89  pcpyld      $v1, $v1, $a2
    ctx->pc = 0x435cf0u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 6)));
    // 0x435cf4: 0x7ca30010  sq          $v1, 0x10($a1)
    ctx->pc = 0x435cf4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 3));
    // 0x435cf8: 0x24a20020  addiu       $v0, $a1, 0x20
    ctx->pc = 0x435cf8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x435cfc: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x435cfcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x435d00: 0xdf86ae48  ld          $a2, -0x51B8($gp)
    ctx->pc = 0x435d00u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 28), 4294946376)));
    // 0x435d04: 0x3c02fffa  lui         $v0, 0xFFFA
    ctx->pc = 0x435d04u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65530 << 16));
    // 0x435d08: 0x3442bffe  ori         $v0, $v0, 0xBFFE
    ctx->pc = 0x435d08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49150);
    // 0x435d0c: 0x3c040003  lui         $a0, 0x3
    ctx->pc = 0x435d0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)3 << 16));
    // 0x435d10: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x435d10u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x435d14: 0x24030047  addiu       $v1, $zero, 0x47
    ctx->pc = 0x435d14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x435d18: 0xc43025  or          $a2, $a2, $a0
    ctx->pc = 0x435d18u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x435d1c: 0x70661b89  pcpyld      $v1, $v1, $a2
    ctx->pc = 0x435d1cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 6)));
    // 0x435d20: 0x7ca30020  sq          $v1, 0x20($a1)
    ctx->pc = 0x435d20u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), GPR_VEC(ctx, 3));
    // 0x435d24: 0x24a20030  addiu       $v0, $a1, 0x30
    ctx->pc = 0x435d24u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x435d28: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x435d28u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x435d2c: 0x24040045  addiu       $a0, $zero, 0x45
    ctx->pc = 0x435d2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x435d30: 0x8f83bef0  lw          $v1, -0x4110($gp)
    ctx->pc = 0x435d30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950640)));
    // 0x435d34: 0x8c620014  lw          $v0, 0x14($v1)
    ctx->pc = 0x435d34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 20)));
    // 0x435d38: 0x2c420018  sltiu       $v0, $v0, 0x18
    ctx->pc = 0x435d38u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)24) ? 1 : 0);
    // 0x435d3c: 0x70821b89  pcpyld      $v1, $a0, $v0
    ctx->pc = 0x435d3cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 2)));
    // 0x435d40: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x435D40u;
    {
        const bool branch_taken_0x435d40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x435D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435D40u;
        // 0x435d44: 0x7ca30030  sq          $v1, 0x30($a1) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 5), 48), GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x435d40) {
            ctx->pc = 0x435DD8u;
            goto label_435dd8;
        }
    }
    ctx->pc = 0x435D48u;
label_435d48:
    // 0x435d48: 0xdf86ae38  ld          $a2, -0x51C8($gp)
    ctx->pc = 0x435d48u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 28), 4294946360)));
    // 0x435d4c: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x435d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x435d50: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x435d50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x435d54: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x435d54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x435d58: 0x21438  dsll        $v0, $v0, 16
    ctx->pc = 0x435d58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 16);
    // 0x435d5c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x435d5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x435d60: 0x2403004e  addiu       $v1, $zero, 0x4E
    ctx->pc = 0x435d60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x435d64: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x435d64u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x435d68: 0x70661b89  pcpyld      $v1, $v1, $a2
    ctx->pc = 0x435d68u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 6)));
    // 0x435d6c: 0x7ca30000  sq          $v1, 0x0($a1)
    ctx->pc = 0x435d6cu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 0), GPR_VEC(ctx, 3));
    // 0x435d70: 0x24a20010  addiu       $v0, $a1, 0x10
    ctx->pc = 0x435d70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
    // 0x435d74: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x435d74u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x435d78: 0xdf86ae40  ld          $a2, -0x51C0($gp)
    ctx->pc = 0x435d78u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 28), 4294946368)));
    // 0x435d7c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x435d7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x435d80: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x435d80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x435d84: 0x2403004c  addiu       $v1, $zero, 0x4C
    ctx->pc = 0x435d84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 76));
    // 0x435d88: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x435d88u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x435d8c: 0x70661b89  pcpyld      $v1, $v1, $a2
    ctx->pc = 0x435d8cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 6)));
    // 0x435d90: 0x7ca30010  sq          $v1, 0x10($a1)
    ctx->pc = 0x435d90u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 16), GPR_VEC(ctx, 3));
    // 0x435d94: 0x24a20020  addiu       $v0, $a1, 0x20
    ctx->pc = 0x435d94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 32));
    // 0x435d98: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x435d98u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x435d9c: 0xdf86ae48  ld          $a2, -0x51B8($gp)
    ctx->pc = 0x435d9cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 28), 4294946376)));
    // 0x435da0: 0x3c02fffb  lui         $v0, 0xFFFB
    ctx->pc = 0x435da0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65531 << 16));
    // 0x435da4: 0x3442bffe  ori         $v0, $v0, 0xBFFE
    ctx->pc = 0x435da4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)49150);
    // 0x435da8: 0x3c040003  lui         $a0, 0x3
    ctx->pc = 0x435da8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)3 << 16));
    // 0x435dac: 0xc23024  and         $a2, $a2, $v0
    ctx->pc = 0x435dacu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 2));
    // 0x435db0: 0x24030047  addiu       $v1, $zero, 0x47
    ctx->pc = 0x435db0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x435db4: 0xc43025  or          $a2, $a2, $a0
    ctx->pc = 0x435db4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x435db8: 0x70661b89  pcpyld      $v1, $v1, $a2
    ctx->pc = 0x435db8u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 6)));
    // 0x435dbc: 0x7ca30020  sq          $v1, 0x20($a1)
    ctx->pc = 0x435dbcu;
    WRITE128(ADD32(GPR_U32(ctx, 5), 32), GPR_VEC(ctx, 3));
    // 0x435dc0: 0x24a20030  addiu       $v0, $a1, 0x30
    ctx->pc = 0x435dc0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 48));
    // 0x435dc4: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x435dc4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x435dc8: 0x24030045  addiu       $v1, $zero, 0x45
    ctx->pc = 0x435dc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 69));
    // 0x435dcc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x435dccu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x435dd0: 0x70621b89  pcpyld      $v1, $v1, $v0
    ctx->pc = 0x435dd0u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 2)));
    // 0x435dd4: 0x7ca30030  sq          $v1, 0x30($a1)
    ctx->pc = 0x435dd4u;
    WRITE128(ADD32(GPR_U32(ctx, 5), 48), GPR_VEC(ctx, 3));
label_435dd8:
    // 0x435dd8: 0x24a20040  addiu       $v0, $a1, 0x40
    ctx->pc = 0x435dd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), 64));
    // 0x435ddc: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x435ddcu;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x435de0: 0x24040042  addiu       $a0, $zero, 0x42
    ctx->pc = 0x435de0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x435de4: 0x24030044  addiu       $v1, $zero, 0x44
    ctx->pc = 0x435de4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 68));
    // 0x435de8: 0x70831b89  pcpyld      $v1, $a0, $v1
    ctx->pc = 0x435de8u;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 3)));
    // 0x435dec: 0x8f82be20  lw          $v0, -0x41E0($gp)
    ctx->pc = 0x435decu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x435df0: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x435df0u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x435df4: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x435df4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x435df8: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x435df8u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x435dfc: 0xdf87ae68  ld          $a3, -0x5198($gp)
    ctx->pc = 0x435dfcu;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 28), 4294946408)));
    // 0x435e00: 0x8f86bef0  lw          $a2, -0x4110($gp)
    ctx->pc = 0x435e00u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950640)));
    // 0x435e04: 0x2404fe1f  addiu       $a0, $zero, -0x1E1
    ctx->pc = 0x435e04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966815));
    // 0x435e08: 0x24050060  addiu       $a1, $zero, 0x60
    ctx->pc = 0x435e08u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x435e0c: 0xe42024  and         $a0, $a3, $a0
    ctx->pc = 0x435e0cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 7) & GPR_U64(ctx, 4));
    // 0x435e10: 0x94c3001e  lhu         $v1, 0x1E($a2)
    ctx->pc = 0x435e10u;
    SET_GPR_ZE32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 30)));
    // 0x435e14: 0x852025  or          $a0, $a0, $a1
    ctx->pc = 0x435e14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 5));
    // 0x435e18: 0x94c2001c  lhu         $v0, 0x1C($a2)
    ctx->pc = 0x435e18u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 28)));
    // 0x435e1c: 0x30630fff  andi        $v1, $v1, 0xFFF
    ctx->pc = 0x435e1cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4095);
    // 0x435e20: 0x9385be2c  lbu         $a1, -0x41D4($gp)
    ctx->pc = 0x435e20u;
    SET_GPR_ZE32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294950444)));
    // 0x435e24: 0x30420fff  andi        $v0, $v0, 0xFFF
    ctx->pc = 0x435e24u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)4095);
    // 0x435e28: 0x3193c  dsll32      $v1, $v1, 4
    ctx->pc = 0x435e28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << (32 + 4));
    // 0x435e2c: 0x21138  dsll        $v0, $v0, 4
    ctx->pc = 0x435e2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 4);
    // 0x435e30: 0xff84ae68  sd          $a0, -0x5198($gp)
    ctx->pc = 0x435e30u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294946408), GPR_U64(ctx, 4));
    // 0x435e34: 0x433025  or          $a2, $v0, $v1
    ctx->pc = 0x435e34u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x435e38: 0x10a00013  beqz        $a1, . + 4 + (0x13 << 2)
    ctx->pc = 0x435E38u;
    {
        const bool branch_taken_0x435e38 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x435E3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435E38u;
        // 0x435e3c: 0xff87bf08  sd          $a3, -0x40F8($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294950664), GPR_U64(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x435e38) {
            ctx->pc = 0x435E88u;
            goto label_435e88;
        }
    }
    ctx->pc = 0x435E40u;
    // 0x435e40: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x435e40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
label_435e44:
    // 0x435e44: 0x42000039  di
    ctx->pc = 0x435e44u;
    ctx->cop0_status &= ~0x10000; // Disable interrupts
    // 0x435e48: 0x40f  sync.p
    ctx->pc = 0x435e48u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x435e4c: 0x40036000  mfc0        $v1, Status
    ctx->pc = 0x435e4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ctx->cop0_status);
    // 0x435e50: 0x621824  and         $v1, $v1, $v0
    ctx->pc = 0x435e50u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x435e54: 0x0  nop
    ctx->pc = 0x435e54u;
    // NOP
    // 0x435e58: 0x1460fffa  bnez        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x435E58u;
    {
        const bool branch_taken_0x435e58 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x435e58) {
            ctx->pc = 0x435E44u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_435e44;
        }
    }
    ctx->pc = 0x435E60u;
    // 0x435e60: 0x9383be2e  lbu         $v1, -0x41D2($gp)
    ctx->pc = 0x435e60u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294950446)));
    // 0x435e64: 0x9382be2d  lbu         $v0, -0x41D3($gp)
    ctx->pc = 0x435e64u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294950445)));
    // 0x435e68: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x435e68u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x435e6c: 0x9384be2f  lbu         $a0, -0x41D1($gp)
    ctx->pc = 0x435e6cu;
    SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294950447)));
    // 0x435e70: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x435e70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x435e74: 0x441026  xor         $v0, $v0, $a0
    ctx->pc = 0x435e74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 4));
    // 0x435e78: 0x42000038  ei
    ctx->pc = 0x435e78u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x435e7c: 0x210fc  dsll32      $v0, $v0, 3
    ctx->pc = 0x435e7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 3));
    // 0x435e80: 0xc23025  or          $a2, $a2, $v0
    ctx->pc = 0x435e80u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 2));
    // 0x435e84: 0x0  nop
    ctx->pc = 0x435e84u;
    // NOP
label_435e88:
    // 0x435e88: 0x24030018  addiu       $v1, $zero, 0x18
    ctx->pc = 0x435e88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x435e8c: 0x70661b89  pcpyld      $v1, $v1, $a2
    ctx->pc = 0x435e8cu;
    SET_GPR_VEC(ctx, 3, PS2_PCPYLD(GPR_VEC(ctx, 3), GPR_VEC(ctx, 6)));
    // 0x435e90: 0x8f82be20  lw          $v0, -0x41E0($gp)
    ctx->pc = 0x435e90u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950432)));
    // 0x435e94: 0x7c430000  sq          $v1, 0x0($v0)
    ctx->pc = 0x435e94u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 3));
    // 0x435e98: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x435e98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x435e9c: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x435e9cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x435ea0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x435ea0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x435ea4: 0xaf82be20  sw          $v0, -0x41E0($gp)
    ctx->pc = 0x435ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294950432), GPR_U32(ctx, 2));
    // 0x435ea8: 0x3e00008  jr          $ra
    ctx->pc = 0x435EA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x435EACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x435EA8u;
        // 0x435eac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x435EA8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x435EB0u;
}
