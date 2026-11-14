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

// Function: sub_00470170
// Address: 0x470170 - 0x4702f0
void sub_00470170_0x470170(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00470170_0x470170");
#endif

    switch (ctx->pc) {
        case 0x470170u: goto label_470170;
        case 0x470174u: goto label_470174;
        case 0x470178u: goto label_470178;
        case 0x47017cu: goto label_47017c;
        case 0x470180u: goto label_470180;
        case 0x470184u: goto label_470184;
        case 0x470188u: goto label_470188;
        case 0x47018cu: goto label_47018c;
        case 0x470190u: goto label_470190;
        case 0x470194u: goto label_470194;
        case 0x470198u: goto label_470198;
        case 0x47019cu: goto label_47019c;
        case 0x4701a0u: goto label_4701a0;
        case 0x4701a4u: goto label_4701a4;
        case 0x4701a8u: goto label_4701a8;
        case 0x4701acu: goto label_4701ac;
        case 0x4701b0u: goto label_4701b0;
        case 0x4701b4u: goto label_4701b4;
        case 0x4701b8u: goto label_4701b8;
        case 0x4701bcu: goto label_4701bc;
        case 0x4701c0u: goto label_4701c0;
        case 0x4701c4u: goto label_4701c4;
        case 0x4701c8u: goto label_4701c8;
        case 0x4701ccu: goto label_4701cc;
        case 0x4701d0u: goto label_4701d0;
        case 0x4701d4u: goto label_4701d4;
        case 0x4701d8u: goto label_4701d8;
        case 0x4701dcu: goto label_4701dc;
        case 0x4701e0u: goto label_4701e0;
        case 0x4701e4u: goto label_4701e4;
        case 0x4701e8u: goto label_4701e8;
        case 0x4701ecu: goto label_4701ec;
        case 0x4701f0u: goto label_4701f0;
        case 0x4701f4u: goto label_4701f4;
        case 0x4701f8u: goto label_4701f8;
        case 0x4701fcu: goto label_4701fc;
        case 0x470200u: goto label_470200;
        case 0x470204u: goto label_470204;
        case 0x470208u: goto label_470208;
        case 0x47020cu: goto label_47020c;
        case 0x470210u: goto label_470210;
        case 0x470214u: goto label_470214;
        case 0x470218u: goto label_470218;
        case 0x47021cu: goto label_47021c;
        case 0x470220u: goto label_470220;
        case 0x470224u: goto label_470224;
        case 0x470228u: goto label_470228;
        case 0x47022cu: goto label_47022c;
        case 0x470230u: goto label_470230;
        case 0x470234u: goto label_470234;
        case 0x470238u: goto label_470238;
        case 0x47023cu: goto label_47023c;
        case 0x470240u: goto label_470240;
        case 0x470244u: goto label_470244;
        case 0x470248u: goto label_470248;
        case 0x47024cu: goto label_47024c;
        case 0x470250u: goto label_470250;
        case 0x470254u: goto label_470254;
        case 0x470258u: goto label_470258;
        case 0x47025cu: goto label_47025c;
        case 0x470260u: goto label_470260;
        case 0x470264u: goto label_470264;
        case 0x470268u: goto label_470268;
        case 0x47026cu: goto label_47026c;
        case 0x470270u: goto label_470270;
        case 0x470274u: goto label_470274;
        case 0x470278u: goto label_470278;
        case 0x47027cu: goto label_47027c;
        case 0x470280u: goto label_470280;
        case 0x470284u: goto label_470284;
        case 0x470288u: goto label_470288;
        case 0x47028cu: goto label_47028c;
        case 0x470290u: goto label_470290;
        case 0x470294u: goto label_470294;
        case 0x470298u: goto label_470298;
        case 0x47029cu: goto label_47029c;
        case 0x4702a0u: goto label_4702a0;
        case 0x4702a4u: goto label_4702a4;
        case 0x4702a8u: goto label_4702a8;
        case 0x4702acu: goto label_4702ac;
        case 0x4702b0u: goto label_4702b0;
        case 0x4702b4u: goto label_4702b4;
        case 0x4702b8u: goto label_4702b8;
        case 0x4702bcu: goto label_4702bc;
        case 0x4702c0u: goto label_4702c0;
        case 0x4702c4u: goto label_4702c4;
        case 0x4702c8u: goto label_4702c8;
        case 0x4702ccu: goto label_4702cc;
        case 0x4702d0u: goto label_4702d0;
        case 0x4702d4u: goto label_4702d4;
        case 0x4702d8u: goto label_4702d8;
        case 0x4702dcu: goto label_4702dc;
        case 0x4702e0u: goto label_4702e0;
        case 0x4702e4u: goto label_4702e4;
        case 0x4702e8u: goto label_4702e8;
        case 0x4702ecu: goto label_4702ec;
        default: break;
    }

    ctx->pc = 0x470170u;

label_470170:
    // 0x470170: 0x27bdfeb0  addiu       $sp, $sp, -0x150
    ctx->pc = 0x470170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294966960));
label_470174:
    // 0x470174: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x470174u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_470178:
    // 0x470178: 0xafa40140  sw          $a0, 0x140($sp)
    ctx->pc = 0x470178u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 320), GPR_U32(ctx, 4));
label_47017c:
    // 0x47017c: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x47017cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_470180:
    // 0x470180: 0x3182b  sltu        $v1, $zero, $v1
    ctx->pc = 0x470180u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
label_470184:
    // 0x470184: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x470184u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
label_470188:
    // 0x470188: 0x1460002b  bnez        $v1, . + 4 + (0x2B << 2)
label_47018c:
    if (ctx->pc == 0x47018Cu) {
        ctx->pc = 0x470190u;
        goto label_470190;
    }
    ctx->pc = 0x470188u;
    {
        const bool branch_taken_0x470188 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x470188) {
            ctx->pc = 0x470238u;
            goto label_470238;
        }
    }
    ctx->pc = 0x470190u;
label_470190:
    // 0x470190: 0x8f83b33c  lw          $v1, -0x4CC4($gp)
    ctx->pc = 0x470190u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294947644)));
label_470194:
    // 0x470194: 0x10600028  beqz        $v1, . + 4 + (0x28 << 2)
label_470198:
    if (ctx->pc == 0x470198u) {
        ctx->pc = 0x47019Cu;
        goto label_47019c;
    }
    ctx->pc = 0x470194u;
    {
        const bool branch_taken_0x470194 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x470194) {
            ctx->pc = 0x470238u;
            goto label_470238;
        }
    }
    ctx->pc = 0x47019Cu;
label_47019c:
    // 0x47019c: 0x8f84bf38  lw          $a0, -0x40C8($gp)
    ctx->pc = 0x47019cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294950712)));
label_4701a0:
    // 0x4701a0: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x4701a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_4701a4:
    // 0x4701a4: 0x27a60130  addiu       $a2, $sp, 0x130
    ctx->pc = 0x4701a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 304));
label_4701a8:
    // 0x4701a8: 0xc115ee8  jal         func_457BA0
label_4701ac:
    if (ctx->pc == 0x4701ACu) {
        ctx->pc = 0x4701B0u;
        goto label_4701b0;
    }
    ctx->pc = 0x4701A8u;
    SET_GPR_U32(ctx, 31, 0x4701B0u);
    ctx->pc = 0x457BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457BA0u, 0x4701A8u, 0x4701B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4701B0u;
label_4701b0:
    // 0x4701b0: 0x10400021  beqz        $v0, . + 4 + (0x21 << 2)
label_4701b4:
    if (ctx->pc == 0x4701B4u) {
        ctx->pc = 0x4701B8u;
        goto label_4701b8;
    }
    ctx->pc = 0x4701B0u;
    {
        const bool branch_taken_0x4701b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x4701b0) {
            ctx->pc = 0x470238u;
            goto label_470238;
        }
    }
    ctx->pc = 0x4701B8u;
label_4701b8:
    // 0x4701b8: 0x8fa30138  lw          $v1, 0x138($sp)
    ctx->pc = 0x4701b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_4701bc:
    // 0x4701bc: 0x1060001e  beqz        $v1, . + 4 + (0x1E << 2)
label_4701c0:
    if (ctx->pc == 0x4701C0u) {
        ctx->pc = 0x4701C4u;
        goto label_4701c4;
    }
    ctx->pc = 0x4701BCu;
    {
        const bool branch_taken_0x4701bc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x4701bc) {
            ctx->pc = 0x470238u;
            goto label_470238;
        }
    }
    ctx->pc = 0x4701C4u;
label_4701c4:
    // 0x4701c4: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x4701c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_4701c8:
    // 0x4701c8: 0x2405fffc  addiu       $a1, $zero, -0x4
    ctx->pc = 0x4701c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
label_4701cc:
    // 0x4701cc: 0x8fa60134  lw          $a2, 0x134($sp)
    ctx->pc = 0x4701ccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 308)));
label_4701d0:
    // 0x4701d0: 0x3c07005e  lui         $a3, 0x5E
    ctx->pc = 0x4701d0u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)94 << 16));
label_4701d4:
    // 0x4701d4: 0x24e7fe30  addiu       $a3, $a3, -0x1D0
    ctx->pc = 0x4701d4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294966832));
label_4701d8:
    // 0x4701d8: 0x24080039  addiu       $t0, $zero, 0x39
    ctx->pc = 0x4701d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 57));
label_4701dc:
    // 0x4701dc: 0x3c09005e  lui         $t1, 0x5E
    ctx->pc = 0x4701dcu;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)94 << 16));
label_4701e0:
    // 0x4701e0: 0x2529fe40  addiu       $t1, $t1, -0x1C0
    ctx->pc = 0x4701e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294966848));
label_4701e4:
    // 0x4701e4: 0xc113940  jal         func_44E500
label_4701e8:
    if (ctx->pc == 0x4701E8u) {
        ctx->pc = 0x4701ECu;
        goto label_4701ec;
    }
    ctx->pc = 0x4701E4u;
    SET_GPR_U32(ctx, 31, 0x4701ECu);
    ctx->pc = 0x44E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E500u, 0x4701E4u, 0x4701ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x4701ECu;
label_4701ec:
    // 0x4701ec: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x4701ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_4701f0:
    // 0x4701f0: 0x3c05005e  lui         $a1, 0x5E
    ctx->pc = 0x4701f0u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)94 << 16));
label_4701f4:
    // 0x4701f4: 0x24a5fe60  addiu       $a1, $a1, -0x1A0
    ctx->pc = 0x4701f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294966880));
label_4701f8:
    // 0x4701f8: 0xc115c24  jal         func_457090
label_4701fc:
    if (ctx->pc == 0x4701FCu) {
        ctx->pc = 0x470200u;
        goto label_470200;
    }
    ctx->pc = 0x4701F8u;
    SET_GPR_U32(ctx, 31, 0x470200u);
    ctx->pc = 0x457090u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x457090u, 0x4701F8u, 0x470200u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x470200u;
label_470200:
    // 0x470200: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x470200u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_470204:
    // 0x470204: 0x8fa20138  lw          $v0, 0x138($sp)
    ctx->pc = 0x470204u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 312)));
label_470208:
    // 0x470208: 0x40f809  jalr        $v0
label_47020c:
    if (ctx->pc == 0x47020Cu) {
        ctx->pc = 0x470210u;
        goto label_470210;
    }
    ctx->pc = 0x470208u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x470210u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x470208u, 0x470210u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x470210u;
label_470210:
    // 0x470210: 0xaf82b33c  sw          $v0, -0x4CC4($gp)
    ctx->pc = 0x470210u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294947644), GPR_U32(ctx, 2));
label_470214:
    // 0x470214: 0x8fa20010  lw          $v0, 0x10($sp)
    ctx->pc = 0x470214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
label_470218:
    // 0x470218: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_47021c:
    if (ctx->pc == 0x47021Cu) {
        ctx->pc = 0x470220u;
        goto label_470220;
    }
    ctx->pc = 0x470218u;
    {
        const bool branch_taken_0x470218 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x470218) {
            ctx->pc = 0x470228u;
            goto label_470228;
        }
    }
    ctx->pc = 0x470220u;
label_470220:
    // 0x470220: 0xd  break       0
    ctx->pc = 0x470220u;
    runtime->handleBreak(rdram, ctx);
label_470224:
    // 0x470224: 0x0  nop
    ctx->pc = 0x470224u;
    // NOP
label_470228:
    // 0x470228: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x470228u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
label_47022c:
    // 0x47022c: 0x2405ffff  addiu       $a1, $zero, -0x1
    ctx->pc = 0x47022cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_470230:
    // 0x470230: 0xc11392c  jal         func_44E4B0
label_470234:
    if (ctx->pc == 0x470234u) {
        ctx->pc = 0x470238u;
        goto label_470238;
    }
    ctx->pc = 0x470230u;
    SET_GPR_U32(ctx, 31, 0x470238u);
    ctx->pc = 0x44E4B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x44E4B0u, 0x470230u, 0x470238u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x470238u;
label_470238:
    // 0x470238: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x470238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_47023c:
    // 0x47023c: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x47023cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_470240:
    // 0x470240: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x470240u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
label_470244:
    // 0x470244: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x470244u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_470248:
    // 0x470248: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x470248u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_47024c:
    // 0x47024c: 0xac640004  sw          $a0, 0x4($v1)
    ctx->pc = 0x47024cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 4));
label_470250:
    // 0x470250: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x470250u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_470254:
    // 0x470254: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x470254u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_470258:
    // 0x470258: 0xac640008  sw          $a0, 0x8($v1)
    ctx->pc = 0x470258u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 4));
label_47025c:
    // 0x47025c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x47025cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_470260:
    // 0x470260: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x470260u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_470264:
    // 0x470264: 0xac64000c  sw          $a0, 0xC($v1)
    ctx->pc = 0x470264u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 4));
label_470268:
    // 0x470268: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x470268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_47026c:
    // 0x47026c: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x47026cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_470270:
    // 0x470270: 0xac640010  sw          $a0, 0x10($v1)
    ctx->pc = 0x470270u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 16), GPR_U32(ctx, 4));
label_470274:
    // 0x470274: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x470274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_470278:
    // 0x470278: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x470278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_47027c:
    // 0x47027c: 0xac640014  sw          $a0, 0x14($v1)
    ctx->pc = 0x47027cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 20), GPR_U32(ctx, 4));
label_470280:
    // 0x470280: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x470280u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_470284:
    // 0x470284: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x470284u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_470288:
    // 0x470288: 0xac640018  sw          $a0, 0x18($v1)
    ctx->pc = 0x470288u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 24), GPR_U32(ctx, 4));
label_47028c:
    // 0x47028c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x47028cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_470290:
    // 0x470290: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x470290u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_470294:
    // 0x470294: 0xac64001c  sw          $a0, 0x1C($v1)
    ctx->pc = 0x470294u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 28), GPR_U32(ctx, 4));
label_470298:
    // 0x470298: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x470298u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_47029c:
    // 0x47029c: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x47029cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_4702a0:
    // 0x4702a0: 0xac640020  sw          $a0, 0x20($v1)
    ctx->pc = 0x4702a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 32), GPR_U32(ctx, 4));
label_4702a4:
    // 0x4702a4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4702a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4702a8:
    // 0x4702a8: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x4702a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_4702ac:
    // 0x4702ac: 0xac640024  sw          $a0, 0x24($v1)
    ctx->pc = 0x4702acu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 36), GPR_U32(ctx, 4));
label_4702b0:
    // 0x4702b0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4702b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4702b4:
    // 0x4702b4: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x4702b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_4702b8:
    // 0x4702b8: 0xac640028  sw          $a0, 0x28($v1)
    ctx->pc = 0x4702b8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 40), GPR_U32(ctx, 4));
label_4702bc:
    // 0x4702bc: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4702bcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4702c0:
    // 0x4702c0: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x4702c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_4702c4:
    // 0x4702c4: 0xac64002c  sw          $a0, 0x2C($v1)
    ctx->pc = 0x4702c4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 44), GPR_U32(ctx, 4));
label_4702c8:
    // 0x4702c8: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x4702c8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_4702cc:
    // 0x4702cc: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x4702ccu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_4702d0:
    // 0x4702d0: 0xac640030  sw          $a0, 0x30($v1)
    ctx->pc = 0x4702d0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 48), GPR_U32(ctx, 4));
label_4702d4:
    // 0x4702d4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x4702d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_4702d8:
    // 0x4702d8: 0x8fa30140  lw          $v1, 0x140($sp)
    ctx->pc = 0x4702d8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 320)));
label_4702dc:
    // 0x4702dc: 0xac640034  sw          $a0, 0x34($v1)
    ctx->pc = 0x4702dcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 52), GPR_U32(ctx, 4));
label_4702e0:
    // 0x4702e0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x4702e0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_4702e4:
    // 0x4702e4: 0x27bd0150  addiu       $sp, $sp, 0x150
    ctx->pc = 0x4702e4u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 336));
label_4702e8:
    // 0x4702e8: 0x3e00008  jr          $ra
label_4702ec:
    if (ctx->pc == 0x4702ECu) {
        ctx->pc = 0x4702F0u;
        goto label_fallthrough_0x4702e8;
    }
    ctx->pc = 0x4702E8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x4702E8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x4702e8:
    ctx->pc = 0x4702F0u;
}
