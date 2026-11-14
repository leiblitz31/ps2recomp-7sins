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

// Function: sub_00226E50
// Address: 0x226e50 - 0x227310
void sub_00226E50_0x226e50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00226E50_0x226e50");
#endif

    switch (ctx->pc) {
        case 0x226ea0u: goto label_226ea0;
        case 0x226ec0u: goto label_226ec0;
        case 0x226ed4u: goto label_226ed4;
        case 0x227104u: goto label_227104;
        case 0x227114u: goto label_227114;
        case 0x227138u: goto label_227138;
        case 0x227148u: goto label_227148;
        case 0x22716cu: goto label_22716c;
        case 0x22717cu: goto label_22717c;
        case 0x2271a0u: goto label_2271a0;
        case 0x2271b0u: goto label_2271b0;
        default: break;
    }

    ctx->pc = 0x226e50u;

    // 0x226e50: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x226e50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x226e54: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x226e54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x226e58: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x226e58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x226e5c: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x226e5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x226e60: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x226e60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x226e64: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x226e64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x226e68: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x226e68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x226e6c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x226e6cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x226e70: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x226e70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x226e74: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x226e74u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x226e78: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x226e78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x226e7c: 0xafa400c0  sw          $a0, 0xC0($sp)
    ctx->pc = 0x226e7cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 192), GPR_U32(ctx, 4));
    // 0x226e80: 0xafa500d0  sw          $a1, 0xD0($sp)
    ctx->pc = 0x226e80u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 208), GPR_U32(ctx, 5));
    // 0x226e84: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x226e84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x226e88: 0x8c420004  lw          $v0, 0x4($v0)
    ctx->pc = 0x226e88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x226e8c: 0xafa200a0  sw          $v0, 0xA0($sp)
    ctx->pc = 0x226e8cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 160), GPR_U32(ctx, 2));
    // 0x226e90: 0x8fa400a0  lw          $a0, 0xA0($sp)
    ctx->pc = 0x226e90u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x226e94: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x226e94u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226e98: 0xc0e0c2e  jal         func_3830B8
    ctx->pc = 0x226E98u;
    SET_GPR_U32(ctx, 31, 0x226EA0u);
    ctx->pc = 0x3830B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3830B8u, 0x226E98u, 0x226EA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226EA0u;
label_226ea0:
    // 0x226ea0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x226ea0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226ea4: 0x8fb200d0  lw          $s2, 0xD0($sp)
    ctx->pc = 0x226ea4u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x226ea8: 0x122000cd  beqz        $s1, . + 4 + (0xCD << 2)
    ctx->pc = 0x226EA8u;
    {
        const bool branch_taken_0x226ea8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x226ea8) {
            ctx->pc = 0x2271E0u;
            goto label_2271e0;
        }
    }
    ctx->pc = 0x226EB0u;
    // 0x226eb0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x226eb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226eb4: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x226eb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226eb8: 0xc0e0dc6  jal         func_383718
    ctx->pc = 0x226EB8u;
    SET_GPR_U32(ctx, 31, 0x226EC0u);
    ctx->pc = 0x383718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x383718u, 0x226EB8u, 0x226EC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226EC0u;
label_226ec0:
    // 0x226ec0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x226ec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x226ec4: 0x3c05004f  lui         $a1, 0x4F
    ctx->pc = 0x226ec4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)79 << 16));
    // 0x226ec8: 0x24a5b5c0  addiu       $a1, $a1, -0x4A40
    ctx->pc = 0x226ec8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948288));
    // 0x226ecc: 0xc0bc48e  jal         func_2F1238
    ctx->pc = 0x226ECCu;
    SET_GPR_U32(ctx, 31, 0x226ED4u);
    ctx->pc = 0x2F1238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F1238u, 0x226ECCu, 0x226ED4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x226ED4u;
label_226ed4:
    // 0x226ed4: 0x14400048  bnez        $v0, . + 4 + (0x48 << 2)
    ctx->pc = 0x226ED4u;
    {
        const bool branch_taken_0x226ed4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x226ed4) {
            ctx->pc = 0x226FF8u;
            goto label_226ff8;
        }
    }
    ctx->pc = 0x226EDCu;
    // 0x226edc: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x226edcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x226ee0: 0x12420037  beq         $s2, $v0, . + 4 + (0x37 << 2)
    ctx->pc = 0x226EE0u;
    {
        const bool branch_taken_0x226ee0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x226ee0) {
            ctx->pc = 0x226FC0u;
            goto label_226fc0;
        }
    }
    ctx->pc = 0x226EE8u;
    // 0x226ee8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x226ee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x226eec: 0x12420025  beq         $s2, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x226EECu;
    {
        const bool branch_taken_0x226eec = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x226eec) {
            ctx->pc = 0x226F84u;
            goto label_226f84;
        }
    }
    ctx->pc = 0x226EF4u;
    // 0x226ef4: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x226EF4u;
    {
        const bool branch_taken_0x226ef4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x226ef4) {
            ctx->pc = 0x226F04u;
            goto label_226f04;
        }
    }
    ctx->pc = 0x226EFCu;
    // 0x226efc: 0x100000f6  b           . + 4 + (0xF6 << 2)
    ctx->pc = 0x226EFCu;
    {
        const bool branch_taken_0x226efc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x226efc) {
            ctx->pc = 0x2272D8u;
            goto label_2272d8;
        }
    }
    ctx->pc = 0x226F04u;
label_226f04:
    // 0x226f04: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x226f04u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x226f08: 0x8f82b6d8  lw          $v0, -0x4928($gp)
    ctx->pc = 0x226f08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948568)));
    // 0x226f0c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x226f0cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x226f10: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x226f10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x226f14: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x226f14u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x226f18: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x226F18u;
    {
        const bool branch_taken_0x226f18 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x226f18) {
            ctx->pc = 0x226F54u;
            goto label_226f54;
        }
    }
    ctx->pc = 0x226F20u;
    // 0x226f20: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x226f20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x226f24: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x226f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x226f28: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x226f28u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x226f2c: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x226f2cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x226f30: 0xafa200bc  sw          $v0, 0xBC($sp)
    ctx->pc = 0x226f30u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
    // 0x226f34: 0x8fa200bc  lw          $v0, 0xBC($sp)
    ctx->pc = 0x226f34u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x226f38: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x226f38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x226f3c: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x226f3cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x226f40: 0x8f82b6d8  lw          $v0, -0x4928($gp)
    ctx->pc = 0x226f40u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948568)));
    // 0x226f44: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x226f44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x226f48: 0xac440014  sw          $a0, 0x14($v0)
    ctx->pc = 0x226f48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 4));
    // 0x226f4c: 0x100000e2  b           . + 4 + (0xE2 << 2)
    ctx->pc = 0x226F4Cu;
    {
        const bool branch_taken_0x226f4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x226f4c) {
            ctx->pc = 0x2272D8u;
            goto label_2272d8;
        }
    }
    ctx->pc = 0x226F54u;
label_226f54:
    // 0x226f54: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x226f54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x226f58: 0x8f82b6d8  lw          $v0, -0x4928($gp)
    ctx->pc = 0x226f58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948568)));
    // 0x226f5c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x226f5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x226f60: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x226f60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x226f64: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x226f64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x226f68: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x226f68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x226f6c: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x226f6cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x226f70: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x226f70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x226f74: 0xafa200b8  sw          $v0, 0xB8($sp)
    ctx->pc = 0x226f74u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 184), GPR_U32(ctx, 2));
    // 0x226f78: 0x8fa200b8  lw          $v0, 0xB8($sp)
    ctx->pc = 0x226f78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x226f7c: 0x100000d6  b           . + 4 + (0xD6 << 2)
    ctx->pc = 0x226F7Cu;
    {
        const bool branch_taken_0x226f7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x226f7c) {
            ctx->pc = 0x2272D8u;
            goto label_2272d8;
        }
    }
    ctx->pc = 0x226F84u;
label_226f84:
    // 0x226f84: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x226f84u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x226f88: 0x90420002  lbu         $v0, 0x2($v0)
    ctx->pc = 0x226f88u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x226f8c: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x226f8cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x226f90: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x226f90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x226f94: 0x8f82b6d8  lw          $v0, -0x4928($gp)
    ctx->pc = 0x226f94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948568)));
    // 0x226f98: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x226f98u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x226f9c: 0xac440014  sw          $a0, 0x14($v0)
    ctx->pc = 0x226f9cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 4));
    // 0x226fa0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x226fa0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x226fa4: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x226fa4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x226fa8: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x226fa8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x226fac: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x226facu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x226fb0: 0xafa200b4  sw          $v0, 0xB4($sp)
    ctx->pc = 0x226fb0u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 180), GPR_U32(ctx, 2));
    // 0x226fb4: 0x8fa200b4  lw          $v0, 0xB4($sp)
    ctx->pc = 0x226fb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 180)));
    // 0x226fb8: 0x100000c7  b           . + 4 + (0xC7 << 2)
    ctx->pc = 0x226FB8u;
    {
        const bool branch_taken_0x226fb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x226fb8) {
            ctx->pc = 0x2272D8u;
            goto label_2272d8;
        }
    }
    ctx->pc = 0x226FC0u;
label_226fc0:
    // 0x226fc0: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x226fc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x226fc4: 0x90420002  lbu         $v0, 0x2($v0)
    ctx->pc = 0x226fc4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x226fc8: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x226fc8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x226fcc: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x226fccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x226fd0: 0x8f82b6d8  lw          $v0, -0x4928($gp)
    ctx->pc = 0x226fd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948568)));
    // 0x226fd4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x226fd4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x226fd8: 0xac440014  sw          $a0, 0x14($v0)
    ctx->pc = 0x226fd8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 4));
    // 0x226fdc: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x226fdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x226fe0: 0xa0400002  sb          $zero, 0x2($v0)
    ctx->pc = 0x226fe0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x226fe4: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x226fe4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x226fe8: 0xafa200b0  sw          $v0, 0xB0($sp)
    ctx->pc = 0x226fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 176), GPR_U32(ctx, 2));
    // 0x226fec: 0x8fa200b0  lw          $v0, 0xB0($sp)
    ctx->pc = 0x226fecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x226ff0: 0x100000b9  b           . + 4 + (0xB9 << 2)
    ctx->pc = 0x226FF0u;
    {
        const bool branch_taken_0x226ff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x226ff0) {
            ctx->pc = 0x2272D8u;
            goto label_2272d8;
        }
    }
    ctx->pc = 0x226FF8u;
label_226ff8:
    // 0x226ff8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x226ff8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x226ffc: 0x12420035  beq         $s2, $v0, . + 4 + (0x35 << 2)
    ctx->pc = 0x226FFCu;
    {
        const bool branch_taken_0x226ffc = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x226ffc) {
            ctx->pc = 0x2270D4u;
            goto label_2270d4;
        }
    }
    ctx->pc = 0x227004u;
    // 0x227004: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x227004u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x227008: 0x12420025  beq         $s2, $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x227008u;
    {
        const bool branch_taken_0x227008 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x227008) {
            ctx->pc = 0x2270A0u;
            goto label_2270a0;
        }
    }
    ctx->pc = 0x227010u;
    // 0x227010: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x227010u;
    {
        const bool branch_taken_0x227010 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x227010) {
            ctx->pc = 0x227020u;
            goto label_227020;
        }
    }
    ctx->pc = 0x227018u;
    // 0x227018: 0x100000af  b           . + 4 + (0xAF << 2)
    ctx->pc = 0x227018u;
    {
        const bool branch_taken_0x227018 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x227018) {
            ctx->pc = 0x2272D8u;
            goto label_2272d8;
        }
    }
    ctx->pc = 0x227020u;
label_227020:
    // 0x227020: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x227020u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x227024: 0x8f82b6d8  lw          $v0, -0x4928($gp)
    ctx->pc = 0x227024u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948568)));
    // 0x227028: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x227028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22702c: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x22702cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x227030: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x227030u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x227034: 0x1462000e  bne         $v1, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x227034u;
    {
        const bool branch_taken_0x227034 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x227034) {
            ctx->pc = 0x227070u;
            goto label_227070;
        }
    }
    ctx->pc = 0x22703Cu;
    // 0x22703c: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x22703cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x227040: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x227040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x227044: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x227044u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x227048: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x227048u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x22704c: 0xafa200ac  sw          $v0, 0xAC($sp)
    ctx->pc = 0x22704cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 172), GPR_U32(ctx, 2));
    // 0x227050: 0x8fa200ac  lw          $v0, 0xAC($sp)
    ctx->pc = 0x227050u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x227054: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x227054u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x227058: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x227058u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x22705c: 0x8f82b6d8  lw          $v0, -0x4928($gp)
    ctx->pc = 0x22705cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948568)));
    // 0x227060: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x227060u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x227064: 0xac440014  sw          $a0, 0x14($v0)
    ctx->pc = 0x227064u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 4));
    // 0x227068: 0x1000009b  b           . + 4 + (0x9B << 2)
    ctx->pc = 0x227068u;
    {
        const bool branch_taken_0x227068 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x227068) {
            ctx->pc = 0x2272D8u;
            goto label_2272d8;
        }
    }
    ctx->pc = 0x227070u;
label_227070:
    // 0x227070: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x227070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x227074: 0x8f82b6d8  lw          $v0, -0x4928($gp)
    ctx->pc = 0x227074u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948568)));
    // 0x227078: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x227078u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22707c: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x22707cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x227080: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x227080u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x227084: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x227084u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x227088: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x227088u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x22708c: 0x27a200c0  addiu       $v0, $sp, 0xC0
    ctx->pc = 0x22708cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x227090: 0xafa200a8  sw          $v0, 0xA8($sp)
    ctx->pc = 0x227090u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 168), GPR_U32(ctx, 2));
    // 0x227094: 0x8fa200a8  lw          $v0, 0xA8($sp)
    ctx->pc = 0x227094u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x227098: 0x1000008f  b           . + 4 + (0x8F << 2)
    ctx->pc = 0x227098u;
    {
        const bool branch_taken_0x227098 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x227098) {
            ctx->pc = 0x2272D8u;
            goto label_2272d8;
        }
    }
    ctx->pc = 0x2270A0u;
label_2270a0:
    // 0x2270a0: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2270a0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2270a4: 0x90420002  lbu         $v0, 0x2($v0)
    ctx->pc = 0x2270a4u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x2270a8: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x2270a8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2270ac: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x2270acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2270b0: 0x8f82b6d8  lw          $v0, -0x4928($gp)
    ctx->pc = 0x2270b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948568)));
    // 0x2270b4: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2270b4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2270b8: 0xac440014  sw          $a0, 0x14($v0)
    ctx->pc = 0x2270b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 4));
    // 0x2270bc: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2270bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2270c0: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2270c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2270c4: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x2270c4u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2270c8: 0x27be00c0  addiu       $fp, $sp, 0xC0
    ctx->pc = 0x2270c8u;
    SET_GPR_S32(ctx, 30, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2270cc: 0x10000082  b           . + 4 + (0x82 << 2)
    ctx->pc = 0x2270CCu;
    {
        const bool branch_taken_0x2270cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2270cc) {
            ctx->pc = 0x2272D8u;
            goto label_2272d8;
        }
    }
    ctx->pc = 0x2270D4u;
label_2270d4:
    // 0x2270d4: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2270d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2270d8: 0x90420002  lbu         $v0, 0x2($v0)
    ctx->pc = 0x2270d8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x2270dc: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x2270dcu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2270e0: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x2270e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2270e4: 0x8f82b6d8  lw          $v0, -0x4928($gp)
    ctx->pc = 0x2270e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948568)));
    // 0x2270e8: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2270e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2270ec: 0xac440014  sw          $a0, 0x14($v0)
    ctx->pc = 0x2270ecu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 4));
    // 0x2270f0: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2270f0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2270f4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2270f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2270f8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2270f8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2270fc: 0xc0e0dc6  jal         func_383718
    ctx->pc = 0x2270FCu;
    SET_GPR_U32(ctx, 31, 0x227104u);
    ctx->pc = 0x383718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x383718u, 0x2270FCu, 0x227104u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227104u;
label_227104:
    // 0x227104: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x227104u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227108: 0x27859c78  addiu       $a1, $gp, -0x6388
    ctx->pc = 0x227108u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941816));
    // 0x22710c: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x22710Cu;
    SET_GPR_U32(ctx, 31, 0x227114u);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x22710Cu, 0x227114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227114u;
label_227114:
    // 0x227114: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x227114u;
    {
        const bool branch_taken_0x227114 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x227114) {
            ctx->pc = 0x227128u;
            goto label_227128;
        }
    }
    ctx->pc = 0x22711Cu;
    // 0x22711c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x22711cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227120: 0x10000029  b           . + 4 + (0x29 << 2)
    ctx->pc = 0x227120u;
    {
        const bool branch_taken_0x227120 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x227120) {
            ctx->pc = 0x2271C8u;
            goto label_2271c8;
        }
    }
    ctx->pc = 0x227128u;
label_227128:
    // 0x227128: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x227128u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22712c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x22712cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227130: 0xc0e0dc6  jal         func_383718
    ctx->pc = 0x227130u;
    SET_GPR_U32(ctx, 31, 0x227138u);
    ctx->pc = 0x383718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x383718u, 0x227130u, 0x227138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227138u;
label_227138:
    // 0x227138: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x227138u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22713c: 0x27859c80  addiu       $a1, $gp, -0x6380
    ctx->pc = 0x22713cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941824));
    // 0x227140: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x227140u;
    SET_GPR_U32(ctx, 31, 0x227148u);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x227140u, 0x227148u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x227148u;
label_227148:
    // 0x227148: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x227148u;
    {
        const bool branch_taken_0x227148 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x227148) {
            ctx->pc = 0x22715Cu;
            goto label_22715c;
        }
    }
    ctx->pc = 0x227150u;
    // 0x227150: 0x24100005  addiu       $s0, $zero, 0x5
    ctx->pc = 0x227150u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x227154: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x227154u;
    {
        const bool branch_taken_0x227154 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x227154) {
            ctx->pc = 0x2271C8u;
            goto label_2271c8;
        }
    }
    ctx->pc = 0x22715Cu;
label_22715c:
    // 0x22715c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x22715cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227160: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x227160u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227164: 0xc0e0dc6  jal         func_383718
    ctx->pc = 0x227164u;
    SET_GPR_U32(ctx, 31, 0x22716Cu);
    ctx->pc = 0x383718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x383718u, 0x227164u, 0x22716Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22716Cu;
label_22716c:
    // 0x22716c: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x22716cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227170: 0x27859c88  addiu       $a1, $gp, -0x6378
    ctx->pc = 0x227170u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941832));
    // 0x227174: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x227174u;
    SET_GPR_U32(ctx, 31, 0x22717Cu);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x227174u, 0x22717Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22717Cu;
label_22717c:
    // 0x22717c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x22717Cu;
    {
        const bool branch_taken_0x22717c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x22717c) {
            ctx->pc = 0x227190u;
            goto label_227190;
        }
    }
    ctx->pc = 0x227184u;
    // 0x227184: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x227184u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227188: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x227188u;
    {
        const bool branch_taken_0x227188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x227188) {
            ctx->pc = 0x2271C8u;
            goto label_2271c8;
        }
    }
    ctx->pc = 0x227190u;
label_227190:
    // 0x227190: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x227190u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227194: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x227194u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x227198: 0xc0e0dc6  jal         func_383718
    ctx->pc = 0x227198u;
    SET_GPR_U32(ctx, 31, 0x2271A0u);
    ctx->pc = 0x383718u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x383718u, 0x227198u, 0x2271A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2271A0u;
label_2271a0:
    // 0x2271a0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2271a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2271a4: 0x27859c90  addiu       $a1, $gp, -0x6370
    ctx->pc = 0x2271a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 28), 4294941840));
    // 0x2271a8: 0xc0bc574  jal         func_2F15D0
    ctx->pc = 0x2271A8u;
    SET_GPR_U32(ctx, 31, 0x2271B0u);
    ctx->pc = 0x2F15D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F15D0u, 0x2271A8u, 0x2271B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2271B0u;
label_2271b0:
    // 0x2271b0: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2271B0u;
    {
        const bool branch_taken_0x2271b0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2271b0) {
            ctx->pc = 0x2271C4u;
            goto label_2271c4;
        }
    }
    ctx->pc = 0x2271B8u;
    // 0x2271b8: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x2271b8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2271bc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2271BCu;
    {
        const bool branch_taken_0x2271bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2271bc) {
            ctx->pc = 0x2271C8u;
            goto label_2271c8;
        }
    }
    ctx->pc = 0x2271C4u;
label_2271c4:
    // 0x2271c4: 0x24100005  addiu       $s0, $zero, 0x5
    ctx->pc = 0x2271c4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2271c8:
    // 0x2271c8: 0x320300ff  andi        $v1, $s0, 0xFF
    ctx->pc = 0x2271c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x2271cc: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2271ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2271d0: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x2271d0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2271d4: 0x27b700c0  addiu       $s7, $sp, 0xC0
    ctx->pc = 0x2271d4u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2271d8: 0x1000003f  b           . + 4 + (0x3F << 2)
    ctx->pc = 0x2271D8u;
    {
        const bool branch_taken_0x2271d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2271d8) {
            ctx->pc = 0x2272D8u;
            goto label_2272d8;
        }
    }
    ctx->pc = 0x2271E0u;
label_2271e0:
    // 0x2271e0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2271e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2271e4: 0x12420031  beq         $s2, $v0, . + 4 + (0x31 << 2)
    ctx->pc = 0x2271E4u;
    {
        const bool branch_taken_0x2271e4 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x2271e4) {
            ctx->pc = 0x2272ACu;
            goto label_2272ac;
        }
    }
    ctx->pc = 0x2271ECu;
    // 0x2271ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2271ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2271f0: 0x12420021  beq         $s2, $v0, . + 4 + (0x21 << 2)
    ctx->pc = 0x2271F0u;
    {
        const bool branch_taken_0x2271f0 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        if (branch_taken_0x2271f0) {
            ctx->pc = 0x227278u;
            goto label_227278;
        }
    }
    ctx->pc = 0x2271F8u;
    // 0x2271f8: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x2271F8u;
    {
        const bool branch_taken_0x2271f8 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x2271f8) {
            ctx->pc = 0x227208u;
            goto label_227208;
        }
    }
    ctx->pc = 0x227200u;
    // 0x227200: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x227200u;
    {
        const bool branch_taken_0x227200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x227200) {
            ctx->pc = 0x2272D8u;
            goto label_2272d8;
        }
    }
    ctx->pc = 0x227208u;
label_227208:
    // 0x227208: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x227208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x22720c: 0x8f82b6d8  lw          $v0, -0x4928($gp)
    ctx->pc = 0x22720cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948568)));
    // 0x227210: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x227210u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x227214: 0x8c430014  lw          $v1, 0x14($v0)
    ctx->pc = 0x227214u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x227218: 0x24020064  addiu       $v0, $zero, 0x64
    ctx->pc = 0x227218u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x22721c: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x22721Cu;
    {
        const bool branch_taken_0x22721c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x22721c) {
            ctx->pc = 0x227250u;
            goto label_227250;
        }
    }
    ctx->pc = 0x227224u;
    // 0x227224: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x227224u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x227228: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x227228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x22722c: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x22722cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x227230: 0x27b600c0  addiu       $s6, $sp, 0xC0
    ctx->pc = 0x227230u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x227234: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x227234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x227238: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x227238u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x22723c: 0x8f82b6d8  lw          $v0, -0x4928($gp)
    ctx->pc = 0x22723cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948568)));
    // 0x227240: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x227240u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x227244: 0xac440014  sw          $a0, 0x14($v0)
    ctx->pc = 0x227244u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 4));
    // 0x227248: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x227248u;
    {
        const bool branch_taken_0x227248 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x227248) {
            ctx->pc = 0x2272D8u;
            goto label_2272d8;
        }
    }
    ctx->pc = 0x227250u;
label_227250:
    // 0x227250: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x227250u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x227254: 0x8f82b6d8  lw          $v0, -0x4928($gp)
    ctx->pc = 0x227254u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948568)));
    // 0x227258: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x227258u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x22725c: 0x8c420014  lw          $v0, 0x14($v0)
    ctx->pc = 0x22725cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x227260: 0x304300ff  andi        $v1, $v0, 0xFF
    ctx->pc = 0x227260u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x227264: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x227264u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x227268: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x227268u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x22726c: 0x27b500c0  addiu       $s5, $sp, 0xC0
    ctx->pc = 0x22726cu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x227270: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x227270u;
    {
        const bool branch_taken_0x227270 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x227270) {
            ctx->pc = 0x2272D8u;
            goto label_2272d8;
        }
    }
    ctx->pc = 0x227278u;
label_227278:
    // 0x227278: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x227278u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x22727c: 0x90420002  lbu         $v0, 0x2($v0)
    ctx->pc = 0x22727cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x227280: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x227280u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x227284: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x227284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x227288: 0x8f82b6d8  lw          $v0, -0x4928($gp)
    ctx->pc = 0x227288u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948568)));
    // 0x22728c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x22728cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x227290: 0xac440014  sw          $a0, 0x14($v0)
    ctx->pc = 0x227290u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 4));
    // 0x227294: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x227294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x227298: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x227298u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x22729c: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x22729cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2272a0: 0x27b400c0  addiu       $s4, $sp, 0xC0
    ctx->pc = 0x2272a0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
    // 0x2272a4: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2272A4u;
    {
        const bool branch_taken_0x2272a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2272a4) {
            ctx->pc = 0x2272D8u;
            goto label_2272d8;
        }
    }
    ctx->pc = 0x2272ACu;
label_2272ac:
    // 0x2272ac: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2272acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2272b0: 0x90420002  lbu         $v0, 0x2($v0)
    ctx->pc = 0x2272b0u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x2272b4: 0x304400ff  andi        $a0, $v0, 0xFF
    ctx->pc = 0x2272b4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x2272b8: 0x8fa300c0  lw          $v1, 0xC0($sp)
    ctx->pc = 0x2272b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2272bc: 0x8f82b6d8  lw          $v0, -0x4928($gp)
    ctx->pc = 0x2272bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294948568)));
    // 0x2272c0: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x2272c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2272c4: 0xac440014  sw          $a0, 0x14($v0)
    ctx->pc = 0x2272c4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 20), GPR_U32(ctx, 4));
    // 0x2272c8: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x2272c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x2272cc: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2272ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2272d0: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x2272d0u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x2272d4: 0x27b300c0  addiu       $s3, $sp, 0xC0
    ctx->pc = 0x2272d4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
label_2272d8:
    // 0x2272d8: 0x8fa200c0  lw          $v0, 0xC0($sp)
    ctx->pc = 0x2272d8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x2272dc: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x2272dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x2272e0: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x2272e0u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2272e4: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x2272e4u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x2272e8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x2272e8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x2272ec: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x2272ecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x2272f0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x2272f0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x2272f4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x2272f4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2272f8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x2272f8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2272fc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2272fcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x227300: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x227300u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x227304: 0x27bd00e0  addiu       $sp, $sp, 0xE0
    ctx->pc = 0x227304u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
    // 0x227308: 0x3e00008  jr          $ra
    ctx->pc = 0x227308u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x227308u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x227310u;
}
